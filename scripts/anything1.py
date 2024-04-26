import os
import re
import sys
import json
import subprocess
import time

import clang.cindex
from clang.cindex import Index, CursorKind

Patched_file_path = "NEW##CVE-2019-1010239##0##DaveGamble@@cJSON##cJSON.c"
Vulnerable_file_path = "OLD##CVE-2019-1010239##0##DaveGamble@@cJSON##cJSON.c"
clangFormatPath = "/usr/bin/clang-format"
ctagsPath = "/usr/local/bin/ctags"

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
        if "goto " in line:
            labels.append(line.strip().split(' ')[1].strip(";"))

    for label in labels:
        function_code = re.sub(rf'{label}\s*:', '', function_code)

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
    function_code = subprocess.check_output(formatFileCmd,
                                            stderr=subprocess.STDOUT, shell=True).decode().strip()
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
            endLocation = startLocation + int(re.findall(r'\@\@ -\d+,(\d+) \+\d+,\d+ \@\@', line)[0])
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
            endLocation = startLocation + int(re.findall(r'\@\@ -\d+,\d+ \+\d+,(\d+) \@\@', line)[0])
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
    print("modifiedLinesAdd: " + str(modifiedLinesAdd))
    print("modifiedLinesDel: " + str(modifiedLinesDel))
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
                    if lineNumber == item['line']:
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
                    if lineNumber == item['line']:
                        modifiedItemsDelete[item['name']] = "other"
                        modifiedDelMapping[lineNumber] = item
                        break


    return modifiedItemsAdd, modifiedItemsDelete, modifiedAddMapping, modifiedDelMapping


if __name__ == "__main__":

    vul_file_items = extract_code_elements(Vulnerable_file_path)
    patch_file_items = extract_code_elements(Patched_file_path)


    patch_vul_diff = get_diff(Vulnerable_file_path, Patched_file_path)
    with open("diff.txt", "w") as f:
        f.write(patch_vul_diff)

    # get the items from the diff
    (patch_vul_diff_items_add, patch_vul_diff_items_del,
     patch_vul_diff_line_mapping_add, patch_vul_diff_line_mapping_del) = runOnDiff(patch_vul_diff, vul_file_items, patch_file_items)
    print("patch_vul_diff_items_add: " + str(patch_vul_diff_items_add))
    print("patch_vul_diff_items_del: " + str(patch_vul_diff_items_del))
    New_Vulnerable_file_path = "FORMATED/" + Vulnerable_file_path
    New_Patched_file_path = "FORMATED/" + Patched_file_path
    format_file_code(Vulnerable_file_path, New_Vulnerable_file_path)
    format_file_code(Patched_file_path, New_Patched_file_path)