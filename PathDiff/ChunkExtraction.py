import os
import re
import sys
import json
import subprocess
import time

import clang.cindex
from clang.cindex import Index, CursorKind

import ItemSplit
from ItemSplit import *
from pathDiff import *

clangFormatPath = "/usr/bin/clang-format"

"""
This script is used to extract the code chunks from the source code files.

>>>> input: source code of functions, modified lines
>>>> output: code chunks of the modified lines
"""


class DiffInfo:
    # chunks in the diff
    patch_vul_diff_chunks_add = []
    patch_vul_diff_chunks_del = []
    vul_reused_diff_chunks_add = []
    vul_reused_diff_chunks_del = []
    patch_reused_diff_chunks_add = []
    patch_reused_diff_chunks_del = []
    # mapping from line number to the content in the line
    patch_vul_diff_line_mapping_add = []
    patch_vul_diff_line_mapping_del = []
    vul_reused_diff_line_mapping_add = []
    vul_reused_diff_line_mapping_del = []
    patch_reused_diff_line_mapping_add = []
    patch_reused_diff_line_mapping_del = []
    # mapping from line number to the items in the line
    patch_vul_diff_items_add = []
    patch_vul_diff_items_del = []
    vul_reused_diff_items_add = []
    vul_reused_diff_items_del = []
    patch_reused_diff_items_add = []
    patch_reused_diff_items_del = []

    def __init__(self, patch_vul_diff_chunks_add, patch_vul_diff_chunks_del,
                 vul_reused_diff_chunks_add, vul_reused_diff_chunks_del,
                 patch_reused_diff_chunks_add, patch_reused_diff_chunks_del,
                 patch_vul_diff_line_mapping_add, patch_vul_diff_line_mapping_del,
                 vul_reused_diff_line_mapping_add, vul_reused_diff_line_mapping_del,
                 patch_reused_diff_line_mapping_add, patch_reused_diff_line_mapping_del,
                 patch_vul_diff_items_add, patch_vul_diff_items_del,
                 vul_reused_diff_items_add, vul_reused_diff_items_del,
                 patch_reused_diff_items_add, patch_reused_diff_items_del):
        self.patch_vul_diff_chunks_add = patch_vul_diff_chunks_add
        self.patch_vul_diff_chunks_del = patch_vul_diff_chunks_del
        self.vul_reused_diff_chunks_add = vul_reused_diff_chunks_add
        self.vul_reused_diff_chunks_del = vul_reused_diff_chunks_del
        self.patch_reused_diff_chunks_add = patch_reused_diff_chunks_add
        self.patch_reused_diff_chunks_del = patch_reused_diff_chunks_del
        self.patch_vul_diff_line_mapping_add = patch_vul_diff_line_mapping_add
        self.patch_vul_diff_line_mapping_del = patch_vul_diff_line_mapping_del
        self.vul_reused_diff_line_mapping_add = vul_reused_diff_line_mapping_add
        self.vul_reused_diff_line_mapping_del = vul_reused_diff_line_mapping_del
        self.patch_reused_diff_line_mapping_add = patch_reused_diff_line_mapping_add
        self.patch_reused_diff_line_mapping_del = patch_reused_diff_line_mapping_del
        self.patch_vul_diff_items_add = patch_vul_diff_items_add
        self.patch_vul_diff_items_del = patch_vul_diff_items_del
        self.vul_reused_diff_items_add = vul_reused_diff_items_add
        self.vul_reused_diff_items_del = vul_reused_diff_items_del
        self.patch_reused_diff_items_add = patch_reused_diff_items_add
        self.patch_reused_diff_items_del = patch_reused_diff_items_del


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
            labels.append(line.strip().split('goto')[1].strip(";"))

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


"""
This script is used to get the smallest range that contains the number.
e.g. ranges = [(1, 100), (20, 30), (40, 50)], number = 25
    smallest range = (20, 30)
"""


def find_smallest_range(ranges, number):
    ranges = [(r[0], int(r[1]), int(r[2])) for r in ranges]
    number = int(number)
    # Find ranges containing the number
    containing_ranges = [r for r in ranges if int(r[1]) <= number <= int(r[2])]

    # Sort the ranges by their size (end - start) and take the smallest one if any exist
    if containing_ranges:
        smallest_range = min(containing_ranges, key=lambda x: x[2] - x[1])
        return smallest_range
    else:
        return None


def identify_control_stmts(function_code):
    """
    Identify the control statements in the function code.
    Like if, else, for, while, do, switch, case statements.
    :param function_code: str
        The source code of the function.
    :return: list
        The list of control statements in the function code and their start and end lines.
    """

    patterns = {
        'CursorKind.ELSE_IF_STMT': r'\belse\s+if\s*\(.*\)',
        'CursorKind.IF_STMT': r'\bif\s*\(.*\)',
        'CursorKind.ELSE_STMT': r'\belse\b',
        'CursorKind.FOR_STMT': r'\bfor\s*\(.*\)',
        'CursorKind.WHILE_STMT': r'\bwhile\s*\(.*\)',
        'CursorKind.DO_STMT': r'\bdo\s*\{',
        'CursorKind.SWITCH_STMT': r'\bswitch\s*\(.*\)',
        'CursorKind.CASE_STMT': r'\bcase\s+.*:'
    }
    control_structures = []
    start_stack = []

    lines = function_code.split('\n')
    for i, line in enumerate(lines):
        line = line.strip()
        match = False
        for keyword, pattern in patterns.items():
            if re.search(pattern, line):
                match = re.search(pattern, line)
                break

        if match:
            start_line = i + 1
            start_stack.append((keyword, start_line))

        if line.startswith("}"):
            if start_stack:
                keyword, start_line = start_stack.pop()
                end_line = i + 1
                control_structures.append((keyword, start_line, end_line))

    return control_structures


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


def chunk_extraction(diff, file_structure):
    """
    Extract the code chunks from the diff.
    """
    # get the code chunks from the items
    # TODO need more testing
    diffIndexs = [item for item in diff]
    # print("Diff: ", diff)
    chunkList = []

    # check control structures, put all the lines in the control structure in one chunk
    chunk = []
    index = 0
    while index < len(diff):
        diffIndex = diffIndexs[index]
        key = diffIndex
        value = diff[diffIndex]
        smallestRange = find_smallest_range(file_structure, key)
        # print("Smallest Range: ", smallestRange, "Key: ", key)
        if not smallestRange:
            lineNumberList = [key]
            itemset = set()
            for item in diff[key]:
                itemset.add(item)
            chunk.append(lineNumberList)
            chunk.append(itemset)
            chunkList.append(chunk)
            chunk = []
            index += 1
        else:
            start = smallestRange[1]
            end = smallestRange[2]
            lineNumberList = []
            itemset = set()
            while index < len(diff) and int(diffIndexs[index]) >= start and int(diffIndexs[index]) <= end:
                # print(diffIndexs[index], diff[diffIndexs[index]])
                lineNumberList.append(diffIndexs[index])
                for item in diff[diffIndexs[index]]:
                    itemset.add(item)
                index += 1

            chunk.append(lineNumberList)
            chunk.append(itemset)
            chunkList.append(chunk)
            chunk = []

    # now we have the chunks, we need to merge the chunks that have common items
    tempChunkList = chunkList.copy()

    has_common_items = True
    while has_common_items:
        has_common_items = False
        chunk_id = 0
        chunkListLen = len(chunkList)
        while chunk_id < chunkListLen:
            chunk = chunkList[chunk_id]
            chunk_id += 1
            chunk_next_id = chunk_id
            while chunk_next_id < len(chunkList):
                # print(chunk_id, chunk_next_id, chunkListLen)
                has_common_items = False
                chunk_next = chunkList[chunk_next_id]
                chunk_next_id += 1
                # print(chunk, chunk_next)
                chunk_line_items = chunk[1]
                chunk_next_line_items = chunk_next[1]
                for item in chunk_line_items:
                    if item in chunk_next_line_items:
                        has_common_items = True
                        break
                if has_common_items:
                    tempChunk = chunk
                    tempChunk[0].extend(chunk_next[0])
                    for item in chunk_next_line_items:
                        tempChunk[1].add(item)
                    tempChunkList.remove(chunk_next)
                    tempChunkList.remove(chunk)
                    tempChunkList.append(tempChunk)
                    chunkList = tempChunkList.copy()
                    # print("Common items found")
                    break
            if has_common_items:
                break

    # print("--------------------------------")

    # print(chunkList)
    # print("=========================================\n\n")
    for chunk in chunkList:
        if len(chunk[1]) == 0:
            chunkList.remove(chunk)

    # amplify the code chunks with the line content
    for chunk in chunkList:
        chunkLines = chunk[0]
        chunkItems = chunk[1]
        chunkItemsContent = {}
        for line in chunkLines:
            if line in file_structure:
                for item in chunkItems:
                    if item in file_structure[line]:
                        if item in chunkItemsContent:
                            chunkItemsContent[item].append(file_structure[line][item])
                        else:
                            chunkItemsContent[item] = [file_structure[line][item]]
        chunk.append(chunkItemsContent)
    return chunkList


# only keep the modified functions in the files
# remove the other functions
def simplify_file(file_path, target_path, modified_functions):
    modified_functions_list = set()
    for function in modified_functions:
        modified_functions_list.add(function)
    Elements = extract_code_elements(file_path)
    RemainingElements = []
    for element in Elements:
        if element["kind"] == "function":
            if element["name"] in modified_functions_list:
                RemainingElements.append(element)
        # else:
        #     RemainingElements.append(element)

    with open(target_path, "w") as f:
        with open(file_path, "r") as f_org:
            lines = f_org.readlines()
            for line_number, line in enumerate(lines):
                for element in RemainingElements:
                    if 'line' not in element or 'end' not in element:
                        continue
                    if line_number > int(element["line"]) and line_number <= int(element["end"]):
                        f.write(line)

# only keep the modified functions in the files
# remove the other functions
def simplify_file_single_function(file_path, target_path, modified_function):

    Elements = extract_code_elements(file_path)
    RemainingElements = []
    for element in Elements:
        if element["kind"] == "function":
            if element["name"] == modified_function:
                RemainingElements.append(element)
        # else:
        #     RemainingElements.append(element)

    with open(target_path, "w") as f:
        with open(file_path, "r") as f_org:
            lines = f_org.readlines()
            for line_number, line in enumerate(lines):
                for element in RemainingElements:
                    if 'line' not in element or 'end' not in element:
                        continue
                    if line_number > int(element["line"]) and line_number <= int(element["end"]):
                        f.write(line)


def amplify_code_chunks(chunkList, diffItems):
    """
    Amplify the code chunks.
    when generating the code chunks, we only get the line numbers and the items that are modified.
    Here, we will add the operations that are performed on the modified items.
    e.g. input chunk: [[1, 2, 3], {item1, item2}]
        output chunk: [[1, 2, 3], {item1: [op1, op1, op2, op2], item2: [op1, op2]}]
    """
    amplifiedChunkList = []
    for chunk in chunkList:
        chunkLines = chunk[0]
        chunkItems = chunk[1]
        amplifiedChunk = []
        amplifiedChunk.append(chunkLines)
        amplifiedChunkItems = {}
        for line in chunkLines:
            if line in diffItems:
                targetDiffItems = diffItems[line]
                for chunkitem in chunkItems:
                    # print("chunkItem: ", chunkitem)
                    # print("diffItems: ", targetDiffItems)
                    if chunkitem in targetDiffItems:
                        # print("In diffItems, chunkItem: ", chunkitem, "is used for", targetDiffItems[chunkitem])
                        if chunkitem in amplifiedChunkItems:
                            amplifiedChunkItems[chunkitem] += targetDiffItems[chunkitem]
                        else:
                            amplifiedChunkItems[chunkitem] = targetDiffItems[chunkitem]
        amplifiedChunk.append(amplifiedChunkItems)
        amplifiedChunkList.append(amplifiedChunk)
    return amplifiedChunkList


def getScore(operation):
    """
    Get the score of the operation.
    """
    controlList = ["RETURN_STMT", "GOTO_STMT", "DO_STMT", "BREAK_STMT", "CONTINUE_STMT"]

    conditionList = ["LOGICAL_OPERATOR", "COMPARE_OPERATOR", "FOR_STMT", "IF_STMT", " ELSE_STMT",
                     "WHILE_STMT", "SWITCH_STMT", "CASE_STMT", "DEFAULT_STMT"]

    valueChangeList = ["BINARY_OPERATOR", "VAR_DECL", "ASSIGNMENT_OPERATOR", "DECL_STMT",
                       "COMPOUND_ASSIGNMENT_OPERATOR"]

    for control in controlList:
        if operation == control:
            return 6
    for condition in conditionList:
        if operation == condition:
            return 5
    for valueChange in valueChangeList:
        if operation == valueChange:
            return 4
    if "CALL_EXPR" in operation:
        return 3
    return 2


def checkExistance(chunkList1, chunkList2, type):
    """
    Check if the chunklists met with the 1-day check condition or not.
    type == 0: check if the chunkList1 exists in chunkList2
    type == 1: check if the chunkList1 not exists in chunkList2
    """

    condition = True
    positive_score = 0
    negative_score = 0
    for chunk in chunkList1:
        chunkitems = chunk[1]
        for patch_vul_chunk in chunkList2:
            patch_vul_chunkitems = patch_vul_chunk[1]
            for patch_vul_chunk_item in patch_vul_chunkitems:
                if patch_vul_chunk_item in chunkitems:
                    print("ChunkItem: ", patch_vul_chunk_item)
                    for operation in patch_vul_chunkitems[patch_vul_chunk_item]:
                        # print ("Operation: ", operation)
                        if type == 0:
                            if operation in chunkitems[patch_vul_chunk_item]:
                                operation_count = patch_vul_chunkitems[patch_vul_chunk_item].count(operation)
                                target_count = chunkitems[patch_vul_chunk_item].count(operation)
                                if operation_count >= target_count:
                                    print("Operation: ", operation, "in chunkitems: ", chunkitems[patch_vul_chunk_item],
                                          " Score: ", getScore(operation))
                                    positive_score += getScore(operation) * target_count
                                else:
                                    print("Operation: ", operation, "in chunkitems with different number: ",
                                          chunkitems[patch_vul_chunk_item], " Score: ", getScore(operation))
                                    negative_score += getScore(operation) * (target_count - operation_count)
                                    # break

                            else:
                                print("Operation: ", operation, "not in chunkitems: ", chunkitems[patch_vul_chunk_item],
                                      " Score: ", getScore(operation))
                                negative_score += getScore(operation)
                                # break
                        elif type == 1:
                            if operation not in chunkitems[patch_vul_chunk_item]:
                                print("Operation: ", operation, "not in chunkitems: ", chunkitems[patch_vul_chunk_item],
                                      " Score: ", getScore(operation))
                                positive_score += getScore(operation)
                            else:
                                print("Operation: ", operation, "in chunkitems: ", chunkitems[patch_vul_chunk_item],
                                      " Score: ", getScore(operation))
                                negative_score += getScore(operation)
                                # break
        #         if not condition:
        #             break
        #     if not condition:
        #         break
        # if not condition:
        #     break
    print("Positive Score: ", positive_score)
    print("Negative Score: ", negative_score)
    if positive_score == 0 and negative_score == 0:
        return -1
    else:
        return positive_score, negative_score


# def checkOneDay(patch_vul_diff_chunks_add, patch_vul_diff_chunks_del, vul_reused_diff_chunks_add,
#                 vul_reused_diff_chunks_del, patch_reused_diff_chunks_add, patch_reused_diff_chunks_del):
#     """
#     Check if the modified reuse has been patched or not.
#     if the chunk in patch_vul_diff does not exist in vul_reused_diff, then it is not patched.
#     OR
#     if the chunk in patch_vul_diff does exist in patched_reused_diff, then it is not patched.
#     """
#     conditions = [0, 0, 0, 0]
#     patch_vul_diff_chunks_all = []
#     patch_vul_diff_chunks_all.extend(patch_vul_diff_chunks_add)
#     patch_vul_diff_chunks_all.extend(patch_vul_diff_chunks_del)
#
#     # print("add:",vul_reused_diff_chunks_add)
#     # print("del:",patch_vul_diff_chunks_del)
#     conditions[0] = checkExistance(vul_reused_diff_chunks_del, patch_vul_diff_chunks_add, 0)
#     conditions[1] = checkExistance(vul_reused_diff_chunks_add, patch_vul_diff_chunks_del, 0)
#     conditions[2] = checkExistance(patch_reused_diff_chunks_del, patch_vul_diff_chunks_add, 1)
#     conditions[3] = checkExistance(patch_reused_diff_chunks_add, patch_vul_diff_chunks_del, 1)
#
#     print("Condition: ", conditions)
#
#     total_positive_score = 0
#     total_negative_score = 0
#     num = 0
#     for condition in conditions:
#         if condition != -1:
#             total_positive_score += condition[0]
#             total_negative_score += condition[1]
#             num += 1
#     if num == 0:
#         print("The modified reuse has been patched.")
#         return
#     total_score = total_positive_score / (total_positive_score + total_negative_score)
#     print("Total Score: ", total_score)
#     if total_score <= 0.9:
#         print("The modified reuse has not been patched.")
#     else:
#         print("The modified reuse has been patched.")


def chunkMatch(chunk1, chunk2):
    """
    Check if the two chunks are the same or not.
    if every var in chunk1 also exists in chunk2, then return True.
    else return False.
    """
    chunk1_items = chunk1[1]
    chunk2_items = chunk2[1]
    for item in chunk1_items:
        if item not in chunk2_items:
            return False
    return True


def lineMatch(chunk_target, chunk_patch, chunk_target_mapping, chunk_patch_mapping, type):
    # firstly we need to do a chunk match
    # if the chunk match, then we need to check the line match
    matched_lines = []
    unmatched_lines = []
    chunk_pair = []


    for chunk_patch_item in chunk_patch:
        for chunk_target_item in chunk_target:
            if chunkMatch(chunk_patch_item, chunk_target_item):
                #print("Chunk Matched: ", chunk_patch_item, chunk_target_item)
                chunk_pair.append([chunk_patch_item, chunk_target_item])
                target_lines = chunk_target_item[0]
                patch_lines = chunk_patch_item[0]
                target_lines_mapping = [[line, chunk_target_mapping[line]] for line in target_lines if
                                        line in chunk_target_mapping]
                patch_lines_mapping = [[line, chunk_patch_mapping[line]] for line in patch_lines if
                                       line in chunk_patch_mapping]
                for patch_line in patch_lines_mapping:
                    patch_line_number = patch_line[0]
                    patch_line_content = patch_line[1]
                    if patch_line_content == "{":
                        continue
                    if patch_line_content == "}":
                        continue
                    # print("Patch Line: ", patch_line)
                    if patch_line_content in [target_line[1] for target_line in target_lines_mapping]:
                        #print("Line Matched: ", patch_line)
                        matched_lines.append(patch_line)
                    else:
                        unmatched_lines.append(patch_line)
            else:
                #print("Chunk not Matched: ", chunk_patch_item, chunk_target_item)
                pass
    print("Matched Lines: ", matched_lines)
    print("Unmatched Lines: ", unmatched_lines)
    return matched_lines, unmatched_lines, chunk_pair


def operationMatch(lineMatch, type, target_items, patch_items):
    """
    Check if the operations in the line match are the same or not.
    if the operations in the line match are the same, then return True.
    else return False.
    """
    print("Line Match: ", lineMatch[1], "\n")

    chunk_pair = lineMatch[2]
    target_chunk_operations = {}

    for chunk_patch, chunk_target in chunk_pair:
        chunk_target_lineNumbers = chunk_target[0]
        chunk_target_items = chunk_target[1]
        for lineNumber in chunk_target_lineNumbers:
            if lineNumber in target_items:
                for item in target_items[lineNumber].keys():
                    target_chunk_operations[item] = target_items[lineNumber][item]
    print("Target Chunk Operations: ", target_chunk_operations, "\n")
    print("Patch Items: ", patch_items, "\n")

    matched_operations = []
    unmatched_operations = []
    condition = 0

    if type == 0:
        patch_lines = lineMatch[1]
        # then we need to check the operations in the target lines
        # if the operations in the target lines Exist in the matched chunk, then return True
        # else return False
        condition = 1
        for patch_line in patch_lines:
            patch_line_number = patch_line[0]
            patch_line_content = patch_line[1]
            patch_line_items_and_operations = patch_items[patch_line_number]

            for item in patch_line_items_and_operations.keys():
                if item in target_chunk_operations.keys():
                    for operation in patch_line_items_and_operations[item]:
                        # print("Operation: ", operation, "\n")
                        if operation in target_chunk_operations[item]:
                            matched_operations.append(operation)
                        else:
                            if operation.split(":")[0] == "VAR_DECL" or operation.split(":")[0] == "DECL_STMT":
                                continue
                            unmatched_operations.append(operation)
                            condition = 0

    print("Matched Operations: ", matched_operations, "\n")
    print("Unmatched Operations: ", unmatched_operations, "\n")
    return condition


def checkOneDay(diffInfo):
    VRD_PVA_linematch = lineMatch(diffInfo.vul_reused_diff_chunks_del, diffInfo.patch_vul_diff_chunks_add,
                                  diffInfo.vul_reused_diff_line_mapping_del, diffInfo.patch_vul_diff_line_mapping_add,
                                  0)
    print("1 ---------------------------------")
    VRA_PVD_linematch = lineMatch(diffInfo.vul_reused_diff_chunks_add, diffInfo.patch_vul_diff_chunks_del,
                                  diffInfo.vul_reused_diff_line_mapping_add, diffInfo.patch_vul_diff_line_mapping_del,
                                  0)
    print("2 ---------------------------------")
    PRD_PVA_linematch = lineMatch(diffInfo.patch_reused_diff_chunks_del, diffInfo.patch_vul_diff_chunks_add,
                                  diffInfo.patch_reused_diff_line_mapping_del, diffInfo.patch_vul_diff_line_mapping_add,
                                  1)
    print("3 ---------------------------------")
    PRA_PVD_linematch = lineMatch(diffInfo.patch_reused_diff_chunks_add, diffInfo.patch_vul_diff_chunks_del,
                                  diffInfo.patch_reused_diff_line_mapping_add, diffInfo.patch_vul_diff_line_mapping_del,
                                  1)
    print("4 ---------------------------------")
    conditions = [0, 0, 0, 0]

    if len(VRD_PVA_linematch[1]) == 0:
        conditions[0] = 1
    else:
        conditions[0] = operationMatch(VRD_PVA_linematch, 0, diffInfo.vul_reused_diff_items_del,
                                       diffInfo.patch_vul_diff_items_add)

    print("1 ================================")

    if len(VRA_PVD_linematch[1]) == 0:
        conditions[1] = 1
    else:
        conditions[1] = operationMatch(VRA_PVD_linematch, 0, diffInfo.vul_reused_diff_items_add,
                                       diffInfo.patch_vul_diff_items_del)

    print("2 ================================")

    if len(PRD_PVA_linematch[0]) == 0:
        conditions[2] = 1
    # else:
    #     conditions[2] = operationMatch(PRD_PVA_linematch,1, diffInfo.patch_reused_diff_items_del, diffInfo.patch_vul_diff_items_add)
    print("3 ================================")

    if len(PRA_PVD_linematch[0]) == 0:
        conditions[3] = 1
    # else:
    #     conditions[3] = operationMatch(PRA_PVD_linematch,1, diffInfo.patch_reused_diff_items_add, diffInfo.patch_vul_diff_items_del)

    print("4 ================================")

    print("Condition: ", conditions)

    if conditions[0] == 1 and conditions[1] == 1 and conditions[2] == 1 and conditions[3] == 1:
        return 1
    return 0


if __name__ == '__main__':
    # Read the input arguments
    # if len(sys.argv) < 2:
    #     print("Usage: python3 ChunkExtraction.py <Patched_file_path> <Vulnerable_file_path> <Reused_file_path>")
    #     sys.exit(1)
    # Patched_file_path = sys.argv[1]
    # Vulnerable_file_path = sys.argv[2]
    # Reused_file_path = sys.argv[3]
    Patched_file_path = "./V1SCAN++_Test/testcases/zlib-ng/CVE-2022-37434/postpatched_inflate.c"
    Vulnerable_file_path = "./V1SCAN++_Test/testcases/zlib-ng/CVE-2022-37434/prepatched_inflate.c"
    Reused_file_path = "./V1SCAN++_Test/testcases/zlib-ng/CVE-2022-37434/kallisto_inflate.c"
    patch_vul_diff = get_diff(Patched_file_path, Vulnerable_file_path)
    print("Patch Vulnerable Diff: ", patch_vul_diff)
    modified_functions = getModifiedFunctions(Vulnerable_file_path, patch_vul_diff, "-")
    modified_functions.extend(getModifiedFunctions(Patched_file_path, patch_vul_diff, "+"))
    modified_functions = list(set(modified_functions))
    print("Modified Functions: ", modified_functions)
    hasPatched = 1


    # here, we should use a loop to visit each function, not each file.
    for modified_function in modified_functions:
        # only keep the modified functions in the files
        simplify_file_single_function(Patched_file_path, "tempPatched.c", modified_function)
        simplify_file_single_function(Vulnerable_file_path, "tempVul.c", modified_function)
        simplify_file_single_function(Reused_file_path, "tempReused.c", modified_function)

        start_time = time.time()
        # Format the source code of the three files
        formated_patched_file_code = format_file_code("tempPatched.c", "tempPatched.c")
        formated_vulnerable_file_code = format_file_code("tempVul.c", "tempVul.c")
        formated_reused_file_code = format_file_code("tempReused.c", "tempReused.c")

        end_time = time.time()
        print("Time taken to format the files: ", end_time - start_time)

        # get the control statements from the three files
        formated_patched_control_structures = identify_control_stmts(formated_patched_file_code)
        formated_vulnerable_control_structures = identify_control_stmts(formated_vulnerable_file_code)
        formated_reused_control_structures = identify_control_stmts(formated_reused_file_code)

        # get the diff between the three files
        patch_vul_diff = get_diff("tempVul.c", "tempPatched.c")
        with open("diff.txt", "w") as f:
            f.write(patch_vul_diff)
        vul_reused_diff = get_diff("tempReused.c", "tempVul.c")
        with open("diff2.txt", "w") as f:
            f.write(vul_reused_diff)
        patch_reused_diff = get_diff("tempPatched.c", "tempReused.c")
        with open("diff3.txt", "w") as f:
            f.write(patch_reused_diff)

        # get the items from the diff
        (patch_vul_diff_items_add, patch_vul_diff_items_del,
         patch_vul_diff_line_mapping_add, patch_vul_diff_line_mapping_del) = runOnDiff(patch_vul_diff)
        # print("----------------------")
        (vul_reused_diff_items_add, vul_reused_diff_items_del,
         vul_reused_diff_line_mapping_add, vul_reused_diff_line_mapping_del) = runOnDiff(vul_reused_diff)
        # print("----------------------")
        (patch_reused_diff_items_add, patch_reused_diff_items_del,
         patch_reused_diff_line_mapping_add, patch_reused_diff_line_mapping_del) = runOnDiff(patch_reused_diff)
        # print("----------------------")

        # get the code chunks from the items
        patch_vul_diff_chunks_add = chunk_extraction(patch_vul_diff_items_add,
                                                     formated_patched_control_structures)
        patch_vul_diff_chunks_del = chunk_extraction(patch_vul_diff_items_del,
                                                     formated_vulnerable_control_structures)
        vul_reused_diff_chunks_add = chunk_extraction(vul_reused_diff_items_add,
                                                      formated_vulnerable_control_structures)
        vul_reused_diff_chunks_del = chunk_extraction(vul_reused_diff_items_del,
                                                      formated_reused_control_structures)
        patch_reused_diff_chunks_add = chunk_extraction(patch_reused_diff_items_add,
                                                        formated_reused_control_structures)
        patch_reused_diff_chunks_del = chunk_extraction(patch_reused_diff_items_del,
                                                        formated_patched_control_structures)

        diffinfo = DiffInfo(patch_vul_diff_chunks_add, patch_vul_diff_chunks_del,
                            vul_reused_diff_chunks_add, vul_reused_diff_chunks_del,
                            patch_reused_diff_chunks_add, patch_reused_diff_chunks_del,
                            patch_vul_diff_line_mapping_add, patch_vul_diff_line_mapping_del,
                            vul_reused_diff_line_mapping_add, vul_reused_diff_line_mapping_del,
                            patch_reused_diff_line_mapping_add, patch_reused_diff_line_mapping_del,
                            patch_vul_diff_items_add, patch_vul_diff_items_del,
                            vul_reused_diff_items_add, vul_reused_diff_items_del,
                            patch_reused_diff_items_add, patch_reused_diff_items_del)

        # print("DiffInfo: ", diffinfo.patch_reused_diff_items_add)

        hasPatched = checkOneDay(diffinfo)
        print("Modified Function: ", modified_function, "Patched: ", hasPatched)
        if hasPatched == 0:
            break
    print( "Patched: ", hasPatched)
