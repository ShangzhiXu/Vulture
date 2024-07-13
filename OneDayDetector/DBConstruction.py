import os
import re
import sys
import json
import subprocess
import time

import clang.cindex
from clang.cindex import Index, CursorKind

Patched_file_path = ""
Vulnerable_file_path = ""
clangFormatPath = "/usr/bin/clang-format"
ctagsPath = "/usr/local/bin/ctags"
CPE_FILE_PATH = "aligned_cpe"
PATCHED_FILE_PATH  = "aligned_patch"

# content between " and " will be removed, they are the string literals
# and will influence the result of the code element extraction
def remove_text_between_quotes(input_string):
    recording = False
    result_string = ""
    temp_string = ""

    for char in input_string:
        if char == '"' and not recording:
            recording = True
            temp_string += char  # Add the first quotation mark to temp_string
        elif char == '"' and recording:
            recording = False
            temp_string = ""  # Clear temp_string, effectively deleting text between quotes
        elif recording:
            temp_string += char  # Record characters between quotes
        else:
            result_string += char  # Add characters outside of quotes to result_string

    # Append any remaining characters if the last quotation mark is not found
    result_string += temp_string

    return result_string


def normalize_version(version_string):
    # if the version string has no numbers, return it as is
    if not re.search(r'[0-9]', version_string):
        return version_string

    # Replace any non-digit and non-dot characters (like underscores, dashes) with a dot
    normalized_version = re.sub(r'[^0-9\.]', '.', version_string)
    # Remove repeated dots and trim leading/trailing dots
    normalized_version = re.sub(r'\.+', '.', normalized_version).strip('.')
    return normalized_version
def remove_type_cast(input_string):
    type_cast_pattern = r'\(\s*[a-zA-Z_][a-zA-Z0-9_]*\s*(\s*\*\s*)?\)'
    result_string = re.sub(type_cast_pattern, '', input_string)
    return result_string


def format_file_code(file_path, temp_file_path):
    """
    Format the source code of the function.
    - put condition, function args & params in the same line.
    - add brace at each control statement.
    - add remove the comments.
    - remove the empty lines.
    - remove
    """
    with open(file_path, 'r') as f:
        function_code = f.read()
    # print(function_code)
    # Remove the comments from the function code
    # change every else to else if(1)
    function_code = re.sub(r'//.*', '', function_code)
    function_code = re.sub(r'/\*.*?\*/', '', function_code, flags=re.DOTALL)
    function_code = re.sub(r'->', '.', function_code)

    # remove all the labels but case labels
    labels = []
    for line in function_code.split('\n'):
        # visit goto stmt to get the labels
        if "goto " in line and line.strip("\t").strip(" ").startswith("goto"):
            labels.append(line.strip().split(' ')[1].strip(";"))

    for label in labels:
        while label.startswith("("):
            label = label[1:]
        while label.endswith(")"):
            label = label[:-1]
        try:
            function_code = re.sub(rf'{label}\s*:', '', function_code)
        except:
            print("Error: " + label)
            pass

    # Remove the empty lines
    function_code = os.linesep.join([s for s in function_code.splitlines() if s])

    with open(temp_file_path, "w") as f:
        f.write(function_code)

    # Format the code using clang-format
    formatFileCmd = f"{clangFormatPath} -style=file {temp_file_path}"
    function_code = subprocess.check_output(formatFileCmd,
                                            stderr=subprocess.STDOUT, shell=True).decode().strip()

    # print(function_code)
    # remove the #if, #endif, #else statements
    function_code = re.sub(r'#if.*', '', function_code)
    function_code = re.sub(r'#endif.*', '', function_code)
    function_code = re.sub(r'#else.*', '', function_code)

    function_code = os.linesep.join([s for s in function_code.splitlines() if s])

    with open(temp_file_path, "w") as f:
        f.write(function_code)

    formatFileCmd = f"{clangFormatPath} -style=file {temp_file_path}"
    try:
        function_code = subprocess.check_output(formatFileCmd,
                                                stderr=subprocess.STDOUT, shell=True).decode().strip()
    except subprocess.CalledProcessError as e:
        print(e.output.decode())
        print("Error: " + file_path)
    # remove the tabs and spaces at the start of each line
    function_lines = []
    for i, line in enumerate(function_code.split('\n')):
        first_non_space = 0
        for first_non_space in range(len(line)):
            if line[first_non_space] != ' ' and line[first_non_space] != '\t':
                break
        line = line[first_non_space:]
        line = remove_text_between_quotes(line)
        line = remove_type_cast(line)
        function_lines.append(line)

    function_code = '\n'.join(function_lines)
    with open(temp_file_path, "w") as f:
        f.write(function_code)

    return function_code

def get_diff(file1, file2):
    """
    Get the diff between two files.
    """
    diffCmd = f"diff -u {file1} {file2}"

    # get diff with subprocess, and if error, out put the error
    try:
        diff = subprocess.check_output(diffCmd, stderr=subprocess.STDOUT, shell=True).decode().strip()
    except subprocess.CalledProcessError as e:
        diff = e.output.decode()

    return diff

def extract_code_elements(filePath):

    itemlistJson = subprocess.check_output(
        ctagsPath + ' --kinds-C=-v --output-format=json --fields=+ne ' + filePath, stderr=subprocess.STDOUT,
        shell=True).decode().strip()
    itemlistJson = itemlistJson.replace('}\n{', '},\n{')
    itemlistJson = "[" + itemlistJson.strip() + "]"
    itemlist = json.loads(itemlistJson.strip())
    # print(json.dump(itemlist, indent=4, fp=sys.stdout))
    return itemlist

def getModifiedLinesWithNumbers(Diff):
    lines = Diff.split('\n')
    modifiedLinesAdd = {}
    modifiedLinesDel = {}

    startLocation = 0
    endLocation = 0
    lineOffset = 0
    for line in lines:
        if line.startswith('+++') or line.startswith('---'):
            continue
        # extract the modified item location
        if line.startswith('+'):
            continue
        if line.startswith('@@'):
            startLocation = int(re.findall(r'\@\@ -(\d+),\d+ \+\d+,\d+ \@\@', line)[0])
            #endLocation = startLocation + int(re.findall(r'\@\@ -\d+,(\d+) \+\d+,\d+ \@\@', line)[0])
            lineOffset = 0
            continue

        # extract the modified code items
        if line.startswith('-'):
            currentLocation = startLocation + lineOffset
            # print(currentLocation)
            modifiedLinesDel[currentLocation] = line

        lineOffset += 1

    startLocation = 0
    endLocation = 0
    lineOffset = 0
    for line in lines:
        # extract the modified item location
        if line.startswith('+++') or line.startswith('---'):
            continue
        if line.startswith('-'):
            continue
        if line.startswith('@@'):
            startLocation = int(re.findall(r'\@\@ -\d+,\d+ \+(\d+),\d+ \@\@', line)[0])
            #endLocation = startLocation + int(re.findall(r'\@\@ -\d+,\d+ \+\d+,(\d+) \@\@', line)[0])
            lineOffset = 0
            continue

        # extract the modified code items
        if line.startswith('+'):
            currentLocation = startLocation + lineOffset
            # print(currentLocation, line)
            modifiedLinesAdd[currentLocation] = line

        lineOffset += 1

    return modifiedLinesAdd, modifiedLinesDel
def runOnDiff(Diff, vul_file_items, patch_file_items):
    modifiedLinesAdd, modifiedLinesDel = getModifiedLinesWithNumbers(Diff)
    #print("modifiedLinesAdd: " + str(modifiedLinesAdd))
    #print("modifiedLinesDel: " + str(modifiedLinesDel))
    modifiedItemsAdd = {}
    modifiedItemsDelete = {}
    modifiedAddMapping = {}
    modifiedDelMapping = {}

    # added lines are the one been added in the patched file
    # so we should map the patch file items to identify the added items
    for lineNumber in modifiedLinesAdd.keys():
        for item in patch_file_items:
            if item['kind'] == 'function' and "line" in item and "end" in item:
                if lineNumber >= item['line'] and lineNumber <= item['end']:
                    modifiedItemsAdd[item['name']] = "function"
                    modifiedAddMapping[lineNumber] = item
                    break
            else:
                if "line" in item:
                    if lineNumber == item['line'] and "scopeKind" in item and item['scopeKind'] == "struct":
                        modifiedItemsAdd[item['scope']] = "other"
                        modifiedAddMapping[lineNumber] = item
                        break
                    elif lineNumber == item['line']:
                        modifiedItemsAdd[item['name']] = "other"
                        modifiedAddMapping[lineNumber] = item
                        break

    # deleted lines are the one been deleted in the patched file
    for lineNumber in modifiedLinesDel.keys():
        for item in vul_file_items:
            if item['kind'] == 'function' and "line" in item and "end" in item:
                if lineNumber >= item['line'] and lineNumber <= item['end']:
                    modifiedItemsDelete[item['name']] = "function"
                    modifiedDelMapping[lineNumber] = item
                    break
            else:
                if "line" in item:
                    if lineNumber == item['line'] and "scopeKind" in item and item['scopeKind'] == "struct":
                        modifiedItemsDelete[item['scope']] = "other"
                        modifiedDelMapping[lineNumber] = item
                        break
                    elif lineNumber == item['line']:
                        modifiedItemsAdd[item['name']] = "other"
                        modifiedAddMapping[lineNumber] = item
                        break


    return modifiedItemsAdd, modifiedItemsDelete, modifiedAddMapping, modifiedDelMapping


def visit_CVE(patch_before_dir, patch_after_dir,cpe_data):
    CVE_info = {}
    file_map = {}
    CVE_info["CVE_id"] = CVE_id
    #print(cpe_data)
    for item in cpe_data:
        if item["cve_id"] == CVE_id:
            CVE_info["CPE"] = item["cpe"]
    for root, dirs, files in os.walk(patch_before_dir):
        for file_before in files:
            for root, dirs, files in os.walk(patch_after_dir):
                for file_after in files:

                    if file_before == file_after and "._" not in file_before and "._" not in file_before:
                        print("file_name: " + file_before)
                        Vulnerable_file_path = os.path.join(patch_before_dir, file_before)
                        Patched_file_path = os.path.join(patch_after_dir, file_after)
                        vul_file_items = extract_code_elements(Vulnerable_file_path)
                        patch_file_items = extract_code_elements(Patched_file_path)

                        patch_vul_diff = get_diff(Vulnerable_file_path, Patched_file_path)
                        with open("diff.txt", "w") as f:
                            f.write(patch_vul_diff)

                        # get the items from the diff
                        (patch_vul_diff_items_add, patch_vul_diff_items_del,
                         patch_vul_diff_line_mapping_add, patch_vul_diff_line_mapping_del) = runOnDiff(
                            patch_vul_diff, vul_file_items, patch_file_items)
                        print("patch_vul_diff_items_add: " + str(patch_vul_diff_items_add))
                        print("patch_vul_diff_items_del: " + str(patch_vul_diff_items_del))
                        merge_result = {}
                        for item in patch_vul_diff_items_add:
                            merge_result[item] = patch_vul_diff_items_add[item]
                        for item in patch_vul_diff_items_del:
                            merge_result[item] = patch_vul_diff_items_del[item]


                        if file_before not in file_map:
                            file_map[file_before] = {}
                        file_map[file_before] = merge_result

                        New_Vulnerable_file_path = "FORMATED/" + Vulnerable_file_path.split("/")[-1]
                        New_Patched_file_path = "FORMATED/" + Patched_file_path.split("/")[-1]
    CVE_info["modified_items"] = file_map
    return CVE_info


if __name__ == "__main__":
    success_num = 0
    for root, dirs, files in os.walk(PATCHED_FILE_PATH):
        for dir in dirs:
            if "CVE-" in dir.split("/")[-1] and "patch_" not in dir.split("/")[-1] and "._" not in dir:
                try:
                    vendor_and_product = root.split("/")[-1].lower()
                    cpe_file_path = os.path.join(CPE_FILE_PATH, vendor_and_product + ".json")
                    cpe_data = {}
                    with open(cpe_file_path, "r") as f:
                        cpe_data = json.load(f)
                    print("vendor_and_product: " + vendor_and_product)
                    Patched_dir_path = os.path.join(root, dir)
                    print("Patched_dir_path: " + Patched_dir_path)
                    CVE_id = dir.split("/")[-1]
                    print("CVE_id: " + CVE_id)
                    patch_before_dir = Patched_dir_path + "/patch_before"
                    patch_after_dir = Patched_dir_path + "/patch_after"
                    # if there is no file end with ".c" or .cpp" etc.
                    # then skip the directory

                    CVE_info = visit_CVE(patch_before_dir, patch_after_dir, cpe_data)
                    success_num += 1
                    with open(Patched_dir_path + "/patch_info.json", "w") as f:
                        json.dump(CVE_info, f, indent=4)
                except Exception as e:
                    print(e)
                    print("Error: " + Patched_dir_path)
                    continue
    print("success_num: " + str(success_num))
