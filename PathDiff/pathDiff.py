import os
import re
import sys
import json
import subprocess
import clang.cindex
from clang.cindex import Index, CursorKind

import ItemSplit
from ItemSplit import *

ctagsPath = "/usr/local/bin/ctags"

punclist = ['+', '-', '*', '/', '%', '&', '|', '^', '&&', '||', '==', '!=', '>', '<', '>=', '<=', '+=', '-=', '*=',
            '/=']


# Extract the code elements from the file
# we want to extract the location of each code element (line number), like function, variable, etc.
def extract_code_elements(filePath):

    itemlistJson = subprocess.check_output(
        ctagsPath + ' --kinds-C=-v --output-format=json --fields=+ne ' + filePath, stderr=subprocess.STDOUT,
        shell=True).decode().strip()
    itemlistJson = itemlistJson.replace('}\n{', '},\n{')
    itemlistJson = "[" + itemlistJson.strip() + "]"
    #print(itemlistJson)
    itemlist = json.loads(itemlistJson.strip())
    # print(json.dump(itemlist, indent=4, fp=sys.stdout))
    return itemlist


# Extract the modified variables and other items from the patch file
# e.g. +    MpegEncContext *s = avctx->priv_data;
# we will extract "s, avctx->priv_data"
def extract_modified_from_pre_patch(patchLines, itemlist):
    modifiedItems = []
    lines = patchLines.split('\n')
    startLocation = 0
    endLocation = 0
    lineOffset = 0
    for line in lines:
        # extract the modified item location
        if line.startswith('+'):
            continue
        if line.startswith('@@'):
            # extract the start and end location of the modified code
            startLocation = int(re.findall(r'\@\@ -(\d+),\d+ \+\d+,\d+ \@\@', line)[0])
            endLocation = startLocation + int(re.findall(r'\@\@ -\d+,(\d+) \+\d+,\d+ \@\@', line)[0])
            lineOffset = 0
            continue

        # extract the modified code items
        if line.startswith('-'):
            currentLocation = startLocation + lineOffset
            #print(currentLocation)
            for item in itemlist:

                if 'line' not in item or 'end' not in item:
                    continue

                if item['line'] <= currentLocation and item['end'] >= currentLocation:
                    if item not in modifiedItems:
                        modifiedItems.append(item)

        lineOffset += 1

    #print(modifiedItems)

    return modifiedItems


# Extract the modified variables and other items from the patch file
# e.g. +    MpegEncContext *s = avctx->priv_data;
# we will extract "s, avctx->priv_data"
def extract_modified_from_post_patch(patchLines, itemlist):
    lines = patchLines.split('\n')
    modifiedItems = []
    startLocation = 0
    endLocation = 0
    lineOffset = 0
    for line in lines:
        # extract the modified item location
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
            # print(currentLocation)
            for item in itemlist:

                if 'line' not in item or 'end' not in item:
                    continue

                if item['line'] <= currentLocation and item['end'] >= currentLocation:
                    if item not in modifiedItems:
                        modifiedItems.append(item)
        lineOffset += 1

    return modifiedItems


# Extract the modified variables and other items from the patch file
# e.g. +    MpegEncContext *s = avctx->priv_data;
# we will extract "s, avctx->priv_data"
def extractModifiedItems(modifiedLine):
    modifiedItemsMap = {}
    tempIdentifierList, tempKeywordList, tempMemberList = parse_code(modifiedLine)
    tempIdentifierList.extend(tempMemberList)
    tempIdentifierMap = {}
    for item in tempIdentifierList:
        tempIdentifierMap[item] = list()
    tempIdentifierMap = extractModifiedItemsKind(modifiedLine, tempIdentifierMap)
    for keys, values in tempIdentifierMap.items():
        if keys not in modifiedItemsMap:
            modifiedItemsMap[keys] = values
        else:
            modifiedItemsMap[keys].extend(values)
    #modifiedItems = list(set(modifiedItems))
    tempItemsMap = {}
    for keys, values in modifiedItemsMap.items():
        if not len(values) == 0:
            tempItemsMap[keys] = values
    # print("ModifiedLine: ", modifiedLine)
    # print("ModifiedItems: ", tempItemsMap)
    # print("=====================================")
    return tempItemsMap

# remove the brackets around the line, use brackets matching algorithm
# E.G. (s) -> s; (avctx->priv_data -> avctx->priv_data
def lineStrip(line):

    line = (line.strip(';').strip(',').strip("\t").strip('\n').strip(' ').strip('*').strip('&').strip())
    if line.startswith("(") and line.endswith(")"):
        line = line[1:-1]
    left_parenthesis = line.count('(')
    right_parenthesis = line.count(')')
    if left_parenthesis < right_parenthesis:
        while left_parenthesis < right_parenthesis:
            # get the location of the last right parenthesis
            location = line.rfind(')')
            if location != -1:
                line = line[:location] + line[location + 1:]
            right_parenthesis -= 1
    if left_parenthesis > right_parenthesis:
        while left_parenthesis > right_parenthesis:
            # get the location of the first left parenthesis
            location = line.find('(')
            if location != -1:
                line = line[:location] + line[location + 1:]
            left_parenthesis -= 1

    if line.startswith('(') or line.endswith(')'):
        left_parenthesis = line.count('(')
        right_parenthesis = line.count(')')
        while left_parenthesis < right_parenthesis:
            line = line[:-1]
            right_parenthesis -= 1
        while left_parenthesis > right_parenthesis:
            line = line[1:]
            left_parenthesis -= 1

    return line


# The input is the modified lines in the patch file
# The output is the kind of the modified items
# We use recursive algorithm to extract the subitems in the line
# e.g. +    MpegEncContext *s = avctx->priv_data; we will extract "s, avctx->priv_data"
# and the kind of the items:
#       s: CursorKind.ASSIGNMENT_OPERATOR left: avctx->priv_data
#       avctx.priv_data: CursorKind.ASSIGNMENT_OPERATOR right: s
def extractModifiedItemsKind(line, itemMap):
    itemList = list(itemMap.keys())
    modifiedItemsKind = []
    f = open('result.txt', 'a')

    line = lineStrip(line.strip())

    # get the kind of current line, and extract the items in the line
    # recursively extract the items in the sublines
    kind = identify_cursor_kind(line)
    f.write(line + ':\t' + kind + "\n")
    if kind == "CursorKind.CALL_EXPR":
        bullShitList = ["printf", "log", "debug", "stderr", "puts", "cout", "alert", "warn", "gdb", 'assert']
        #bullShitList = []
        # extract the function name and args
        funcName = line.split('(')[0]
        args = line.split('(')[1].split(')')[0].split(',')
        f.write("Function: " + funcName + "\n")
        if funcName.strip() in itemList:
            itemMap.pop(funcName.strip())
            itemList.remove(funcName.strip())
        for bullShit in bullShitList:
            if bullShit in funcName.strip().lower():
                return itemMap
        for argID, arg in enumerate(args):
            argKind = extractModifiedItemsKind(arg, itemMap)
            if arg.strip() in itemList:
                itemMap[arg.strip()].append('CALL_EXPR: ' + funcName + ' ' + str(argID))

    elif kind == "CursorKind.DECL_STMT":
        # extract the variable name and type
        varType = line.split(' ')[0]
        if varType.strip() in itemList:
            itemMap.pop(varType.strip())
            itemList.remove(varType.strip())
        varName = line.split(' ')[1]
        if varName.strip() in itemList:
            itemMap[varName.strip()].append('DECL_STMT: ' + varType)
        f.write(varType + " " + varName + "\n")
    elif kind == "CursorKind.ASSIGNMENT_OPERATOR":
        # extract the variable name and value
        varName = line.split('=')[0].strip()
        if ' ' in varName:
            varType = varName.split(' ')[0]
            if varType.strip() in itemList:
                itemMap.pop(varType.strip())
                itemList.remove(varType.strip())
            varName = varName.split(' ')[1]
            f.write(varType + " " + varName + "\n")
        varValue = line.split('=')[1]
        kind = extractModifiedItemsKind(varValue, itemMap)
        if varName.strip() in itemList:
            itemMap[varName.strip()].append('ASSIGNMENT_OPERATOR: left ' + varValue)
        if varValue.strip() in itemList:
            itemMap[varValue.strip()].append('ASSIGNMENT_OPERATOR: right' + varName)
    elif (kind == "CursorKind.IF_STMT" or kind == "CursorKind.ELSE_STMT"
           or kind == "CursorKind.WHILE_STMT" or kind == "CursorKind.SWITCH_STMT"
          or kind == "CursorKind.CASE_STMT"):
        # extract the condition, which is between the first "(" and the last ")"
        start_pos = line.find('(')
        end_pos = line.rfind(')')
        condition = line[start_pos + 1:end_pos]
        f.write(condition + "\n")
        if condition.strip() in itemList:
            itemMap[condition.strip()].append(kind)
        kind = extractModifiedItemsKind(condition, itemMap)
    elif kind == "CursorKind.FOR_STMT":
        # extract the condition, which is between the first "(" and the first ";"
        start_pos = line.find('(')
        end_pos = line.rfind(')')
        conditions = line[start_pos + 1:end_pos]
        for conditionId,condition in enumerate(conditions.split(';')):
            f.write(condition + "\n")
            if condition.strip() in itemList:
                itemMap[condition.strip()].append(kind + ' ' + str(conditionId))
            extractModifiedItemsKind(condition, itemMap)
    elif kind == "CursorKind.RETURN_STMT":
        # extract the return value
        srart_pos = line.find('return')
        returnValue = line[srart_pos + 6:]
        f.write(returnValue + "\n")
        kind = extractModifiedItemsKind(returnValue, itemMap)
        if returnValue.strip().strip("(").strip(")").strip() in itemList:
            itemMap[returnValue.strip().strip("(").strip(")").strip()].append('RETURN_STMT')
    elif kind == "CursorKind.VAR_DECL":
        # extract the variable name and type
        varType = line.split(' ')[0]
        varName = line.split(' ')[1]
        f.write(varType + " " + varName + "\n")

        if varType.strip() in itemList:
            itemMap.pop(varType.strip())
            itemList.remove(varType.strip())

        if varName.strip() in itemList:
            itemMap[varName.strip()].append('VAR_DECL: ' + varType)
    elif kind == "CursorKind.COMPARE_OPERATOR":
        # extract the two variables to compare
        if line.startswith('!'):
            kind = extractModifiedItemsKind(line[1:], itemMap)
            if line[1:].strip() in itemList:
                itemMap[line[1:].strip()].append('COMPARE_OPERATOR !')
        else:
            compare_punc = ['==', '!=', '<=', '>=', '<', '>']
            for punc in compare_punc:
                if punc in line:
                    var1 = line.split(punc)[0]
                    start_pos = line.find(punc)
                    end_pos = start_pos + len(punc)
                    var2 = line[end_pos + 1:]
                    f.write(var1 + " " + var2 + "\n")
                    kind = extractModifiedItemsKind(var1, itemMap)
                    kind = extractModifiedItemsKind(var2, itemMap)
                    if var1.strip() in itemList:
                        itemMap[var1.strip()].append('COMPARE_OPERATOR left: ' + var2)
                    if var2.strip() in itemList:
                        itemMap[var2.strip()].append('COMPARE_OPERATOR right: ' + var1)
                    break
    elif kind == "CursorKind.BINARY_OPERATOR":
        binary_punc = ['+', '-', '*', '/', '%', '&', '|', '^']
        for punc in binary_punc:
            if punc in line:
                var1 = line.split(punc)[0]
                # var2 merges the rest of the line
                start_pos = line.find(punc)
                var2 = line[start_pos + 1:]
                f.write(var1 + " " + var2 + "\n")
                kind = extractModifiedItemsKind(var1, itemMap)
                kind = extractModifiedItemsKind(var2, itemMap)
                if var1.strip() in itemList:
                    itemMap[var1.strip()].append('BINARY_OPERATOR left: ' + var2)
                if var2.strip() in itemList:
                    itemMap[var2.strip()].append('BINARY_OPERATOR right: ' + var1)
    elif kind == "CursorKind.LOGICAL_OPERATOR":
        logical_punc = ['&&', '||']
        for punc in logical_punc:
            if punc in line:
                var1 = line.split(punc)[0]
                start_pos = line.find(punc)
                end_pos = start_pos + len(punc)
                var2 = line[end_pos + 1:]
                f.write(var1 + " " + var2 + "\n")
                kind = extractModifiedItemsKind(var1, itemMap)
                kind = extractModifiedItemsKind(var2, itemMap)
                if var1.strip() in itemList:
                    itemMap[var1.strip()].append('LOGICAL_OPERATOR left: ' + var2)
                if var2 in itemList:
                    itemMap[var2.strip()].append('LOGICAL_OPERATOR right: ' + var1)
                break
    elif kind == "CursorKind.FUNCTION_DECL":
        # extract the function name and args
        funcName = line.split('(')[0].split(' ')[-1]
        args = line.split('(')[1].split(')')[0].split(',')
        f.write("Function:" + " " + funcName + "\n")
        if funcName in itemList:
            itemMap.pop(funcName)
            itemList.remove(funcName)
        for argID, arg in enumerate(args):
            argKind = extractModifiedItemsKind(arg, itemMap)
            if arg.strip() in itemList:
                itemMap[arg.strip()].append('CALL_EXPR: ' + funcName + ' ' + str(argID))
    elif kind == "CursorKind.ARRAY_TYPE":
        # extract the array type
        start_pos = line.find('[')
        end_pos = line.rfind(']')
        arrayName = line[:start_pos]
        arrayIndex = line[start_pos + 1:end_pos]
        kind = extractModifiedItemsKind(arrayName, itemMap)
        kind = extractModifiedItemsKind(arrayIndex, itemMap)
        if arrayName.strip() in itemList:
            itemMap[arrayName.strip()].append('arrayName')
        if arrayIndex.strip() in itemList:
            itemMap[arrayIndex.strip()].append('arrayIndex')
    elif kind == "CursorKind.COMPOUND_ASSIGNMENT_OPERATOR":
        # extract the two variables to compare
        compound_punc = ['+=', '-=', '*=', '/=', '%=', '&=', '|=', '^=']
        for punc in compound_punc:
            if punc in line:
                var1 = line.split(punc)[0]
                start_pos = line.find(punc)
                end_pos = start_pos + len(punc)
                var2 = line[end_pos + 1:]
                f.write(var1 + " " + var2 + "\n")
                kind = extractModifiedItemsKind(var1, itemMap)
                kind = extractModifiedItemsKind(var2, itemMap)
                if var1.strip() in itemList:
                    itemMap[var1.strip()].append('COMPOUND_ASSIGNMENT_OPERATOR left: ' + var2)
                if var2.strip() in itemList:
                    itemMap[var2.strip()].append('COMPOUND_ASSIGNMENT_OPERATOR right: ' + var1)
                break

    return itemMap


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

def getModifiedLines(Diff):
    lines = Diff.split('\n')
    modifiedLines = []
    for line in lines:
        if line.startswith('@@'):
            continue
        if line.startswith('+++') or line.startswith('---'):
            continue
        if line.startswith('-') or line.startswith('+'):
            modifiedLines.append(line)

    return modifiedLines

def getModifiedFunctions(FilePath, diff, type):
    ModifiedFunctions = []
    Elements = extract_code_elements(FilePath)
    if type == "+":
        ModifiedLines = extract_modified_from_post_patch(diff, Elements)
    elif type == "-":
        ModifiedLines = extract_modified_from_pre_patch(diff, Elements)
    else:
        print("Invalid type at getModifiedFunctions()")

    for item in ModifiedLines:
        if item["kind"] == "function":
            ModifiedFunctions.append(item["name"])
    return ModifiedFunctions

def runOnDiff(Diff):
    modifiedLinesAdd, modifiedLinesDel = getModifiedLinesWithNumbers(Diff)

    modifiedItemsAdd = {}
    modifiedItemsDelete = {}
    modifiedAddMapping = {}
    modifiedDelMapping = {}

    for lineNumber in modifiedLinesAdd.keys():
        line = modifiedLinesAdd[lineNumber]
        line = line[1:].strip()
        modifiedItemsAdd[str(lineNumber)] = extractModifiedItems(line)
        modifiedAddMapping[str(lineNumber)] = line

    for lineNumber in modifiedLinesDel.keys():
        line = modifiedLinesDel[lineNumber]
        line = line[1:].strip()
        modifiedItemsDelete[str(lineNumber)] = extractModifiedItems(line)
        modifiedDelMapping[str(lineNumber)] = line

    # for key, value in modifiedItems.items():
    #     print(key, value)
    # print("----------------")
    return modifiedItemsAdd, modifiedItemsDelete, modifiedAddMapping, modifiedDelMapping


# if __name__ == "__main__":
#     # read each parse_commit.json file use os.walk
#     filePrePath = "product_CVE_patches/product_CVE_patches/FFmpeg_FFmpeg/CVE-2018-13304/0_patch_before/h263dec.c"
#     filePostPath = "product_CVE_patches/product_CVE_patches/FFmpeg_FFmpeg/CVE-2018-13304/0_patch_after/h263dec.c"
#     patchPath = "product_CVE_patches/product_CVE_patches/FFmpeg_FFmpeg/"
#     # visit each .diff file in the directory
#     diffPath = "../CWEs/CWE-125/FormattedVulPatchDiff/OLD##CVE-2018-9988##0##ARMmbed@@mbedtls##ssl_cli.c_diff.txt"
#     runOnDiff(diffPath)