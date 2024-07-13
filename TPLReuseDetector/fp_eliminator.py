"""
Preprocessor.
Author:		Seunghoon Woo (seunghoonwoo@korea.ac.kr)
Modified: 	December 16, 2020.
"""
import copy
import os
import sys
import re
import shutil
import json
import math
import tlsh
import argparse
import os
import subprocess
import re
import shutil
from multiprocessing import Pool
from multiprocessing import current_process
from sklearn.metrics import jaccard_score
import numpy as np

"""GLOBALS"""
currentPath = os.getcwd()
separator = "#@#"
sep_len = len(separator)
# So far, do not change

theta = 0.1  # Default value (0.1)
target_file = ""
need_process = []
tagDatePath = "../TPLFilter/src/osscollector/repo_date/"  # Default path
resultPath = "../TPLFilter/src/osscollector/repo_functions/"  # Default path
verIDXpath = currentPath + "../TPLFilter/src/preprocessor/verIDX/"  # Default path
initialDBPath = currentPath + "../TPLFilter/src/preprocessor/initialSigs/"  # Default path
finalDBPath = currentPath + "../TPLFilter/src/preprocessor/componentDB_fpelm/"  # Default path of the final Component DB
metaPath = currentPath + "../TPLFilter/src/preprocessor/metaInfos/"  # Default path, for saving pieces of meta-information of collected repositories
weightPath = metaPath + "/weights/"  # Default path, for version prediction
funcDatePath = currentPath + "../TPLFilter/src/preprocessor/funcDate/"  # Default path

funcDateDict = {}


def extractVerDate(repoName):
    # For extracting version (tag) date

    verDateDict = {}
    if os.path.isfile(os.path.join(tagDatePath, repoName)):
        with open(os.path.join(tagDatePath, repoName), 'r', encoding="UTF-8") as fp:
            body = ''.join(fp.readlines()).strip()
            for eachLine in body.split('\n'):
                versionList = []
                if "tag:" in eachLine:
                    date = eachLine[0:10]

                    if "," in eachLine:
                        verList = [x for x in eachLine.split("tag: ")]
                        for val in verList[1:]:
                            if ',' in val:
                                versionList.append(val.split(',')[0])
                            elif ')' in val:
                                versionList.append(val.split(')')[0])
                    else:
                        versionList = [(eachLine.split('tag: ')[1][:-1])]

                    for eachVersion in versionList:
                        verDateDict[eachVersion] = date

    return verDateDict


def readVerDate(verDateDict, repoName):
    verDateDict[repoName] = {}

    if os.path.isfile(funcDatePath + repoName + "_funcdate"):
        with open(funcDatePath + repoName + "_funcdate", 'r', encoding="UTF-8") as fp:
            body = ''.join(fp.readlines()).strip()
            for eachLine in body.split('\n'):
                if eachLine.split('\t').__len__() < 2:
                    continue
                try:
                    hashval = eachLine.split('\t')[0]
                    date = eachLine.split('\t')[1]
                    verDateDict[repoName][hashval] = date
                except:
                    print("Error: ", repoName, eachLine)
                    continue
    return verDateDict


def getAveFuncs():
    aveFuncs = {}
    with open(metaPath + "aveFuncs", 'r', encoding="UTF-8") as fp:
        aveFuncs = json.load(fp)
    return aveFuncs


def compare_hash_sets(set1, set2, candidate_name_1, candidate_name_2, verDateDict):
    function_number_1 = len(set1)
    function_number_2 = len(set2)
    function_belong_to_1 = 0
    function_belong_to_2 = 0
    if candidate_name_1 not in verDateDict:
        verDateDict = readVerDate(verDateDict, candidate_name_1)
    if candidate_name_2 not in verDateDict:
        verDateDict = readVerDate(verDateDict, candidate_name_2)
    if function_number_1 == 0 or function_number_2 == 0:
        # print(f"{candidate_name_1} or {candidate_name_2} has no function")
        return [True, [function_belong_to_1, function_belong_to_2]]
    similarity = 0
    for hash1 in set1:
        for hash2 in set2:
            # Ensure both hashes are valid TLSH hashes before comparing
            distance = tlsh.diff(hash1, hash2)
            if distance < 30:
                similarity += 1
                if hash1 not in verDateDict[candidate_name_1] or hash2 not in verDateDict[candidate_name_2]:
                    continue
                if verDateDict[candidate_name_1][hash1] == "NODATE" or verDateDict[candidate_name_2][hash2] == "NODATE":
                    continue
                elif verDateDict[candidate_name_1][hash1] <= verDateDict[candidate_name_2][hash2]:
                    function_belong_to_1 += 1
                elif verDateDict[candidate_name_1][hash1] > verDateDict[candidate_name_2][hash2]:
                    function_belong_to_2 += 1
    if similarity > 0 and function_number_1 > 0 and function_number_2 > 0:
        if ((float(similarity) / float(function_number_1)) >= 0.5
                or (float(similarity) / float(function_number_2)) >= 0.5):
            return [True, [function_belong_to_1, function_belong_to_2]]
    else:
        # print(f"Similarity not found between {candidate_name_1} and {candidate_name_2}, the similarity is {similarity} and function_number_1 is {function_number_1} and function_number_2 is {function_number_2}")
        return [False, [function_belong_to_1, function_belong_to_2]]


def string_to_vector(s, character_set):
    """Convert a string to a binary vector based on the presence of characters in a given set."""
    return np.array([int(char in s) for char in character_set])


def calculate_jaccard_similarity(path, keywords):
    # Splitting the path by "/"
    path_parts = path.split("/")

    # Removing numbers and special characters from the path parts
    path_parts = [re.sub(r'[^a-zA-Z]', '', part) for part in path_parts]

    # Creating a set of all unique characters in the keywords and path parts
    all_chars = set(''.join(keywords + path_parts))

    # Converting keywords and path parts to binary vectors
    keywords_vectors = {keyword: string_to_vector(keyword, all_chars) for keyword in keywords}
    path_parts_vectors = [string_to_vector(part, all_chars) for part in path_parts]

    # Calculating Jaccard similarity for each part against each keyword using scikit-learn
    jaccard_scores = {
        keyword: [jaccard_score(keywords_vectors[keyword], part_vector, average='binary') for part_vector in
                  path_parts_vectors]
        for keyword in keywords
    }

    return jaccard_scores


def compare_file_name(path, candidate_name_1, candidate_name_2):
    keywords = [candidate_name_1.split('@@')[-1], candidate_name_2.split('@@')[-1]]
    keywords = [re.sub(r'[^a-zA-Z]', '', keyword) for keyword in keywords]
    # if the name is already in the path, return the candidate directly
    if candidate_name_1 in path:
        return 0
    if candidate_name_2 in path:
        return 1
    jaccard_scores = calculate_jaccard_similarity(path, keywords)
    candidate_1_position = 0
    candidate_2_position = 0
    # visit reverse order
    for index in range(len(jaccard_scores[keywords[0]]) - 1, -1, -1):
        if jaccard_scores[keywords[0]][index] > 0.5:
            candidate_1_position = index
    for index in range(len(jaccard_scores[keywords[1]]) - 1, -1, -1):
        if jaccard_scores[keywords[1]][index] > 0.5:
            candidate_2_position = index
    if candidate_1_position > candidate_2_position:
        return 0
    elif candidate_1_position < candidate_2_position:
        return 1
    else:
        return 2


def compareFuncMap(result, target):
    verDateDict = {}
    fp_elimination_res = {}
    # deep copy
    modified_result = copy.deepcopy(result)

    for i in range(len(result)):
        candidate_name_1 = result[i][0]
        candidate_version_1 = result[i][1]
        candidate_file_and_func_1 = result[i][2]
        if candidate_name_1 not in verDateDict:
            verDateDict = readVerDate(verDateDict, candidate_name_1)

        for j in range(i + 1, len(result)):
            candidate_name_2 = result[j][0]
            candidate_version_2 = result[j][1]
            candidate_file_and_func_2 = result[j][2]
            if candidate_name_2 not in verDateDict:
                verDateDict = readVerDate(verDateDict, candidate_name_2)

            for candidate_file_1 in candidate_file_and_func_1.keys():
                for candidate_file_2 in candidate_file_and_func_2.keys():
                    if candidate_file_1 == candidate_file_2:
                        # firstly, compare the file path name
                        belongs_to = compare_file_name(candidate_file_1, candidate_name_1, candidate_name_2)
                        if belongs_to == 0:
                            key = result[i][0] + " " + result[j][0]
                            if key not in fp_elimination_res:
                                fp_elimination_res[key] = set()
                            fp_elimination_res[key].add(candidate_file_1 + " 0")
                            if candidate_file_2 in modified_result[j][2]:
                                modified_result[j][2].pop(candidate_file_2)
                            continue
                        elif belongs_to == 1:
                            key = result[i][0] + " " + result[j][0]
                            if key not in fp_elimination_res:
                                fp_elimination_res[key] = set()
                            fp_elimination_res[key].add(candidate_file_1 + " 1")
                            if candidate_file_1 in modified_result[i][2]:
                                modified_result[i][2].pop(candidate_file_1)
                            continue
                        candidate_func_set_1 = candidate_file_and_func_1[candidate_file_1]
                        candidate_func_set_2 = candidate_file_and_func_2[candidate_file_2]
                        compare_res = compare_hash_sets(candidate_func_set_1, candidate_func_set_2, candidate_name_1,
                                                        candidate_name_2, verDateDict)
                        if compare_res and compare_res[0]:
                            belongs_to = 0
                            if compare_res[1][0] > compare_res[1][1]:
                                belongs_to = 0
                                if candidate_file_2 in modified_result[j][2]:
                                    modified_result[j][2].pop(candidate_file_2)
                            elif compare_res[1][0] < compare_res[1][1]:
                                belongs_to = 1
                                if candidate_file_1 in modified_result[i][2]:
                                    modified_result[i][2].pop(candidate_file_1)
                            else:
                                belongs_to = 2
                            key = result[i][0] + " " + result[j][0]
                            if key not in fp_elimination_res:
                                fp_elimination_res[key] = set()
                            fp_elimination_res[key].add(candidate_file_1 + " " + str(compare_res[1][0]) + " " + str(
                                compare_res[1][1]) + " " + str(belongs_to))
                            # print(f"Similarity found between {candidate_file_1} in {key} and {belongs_to}")

    with open(f"fp_elimination{target}", "w") as f:
        for key in fp_elimination_res.keys():
            f.write(f"{key} : \n")
            for item in fp_elimination_res[key]:
                f.write(f"\t{item}\n")

    with open(f"modified_result{target}", "w") as f:
        # write as json
        json.dump(modified_result, f, indent=4)
    with open(f"modified_result_without_func{target}", "w") as f:
        for item in modified_result:
            f.write(f"{item[0]} {item[1]} : \n")
            for file in item[2]:
                if "test" in file or "example" in file or "demo" in file:
                    continue
                f.write(f"\t{file}\n")
    pure_result = []
    for item in modified_result:
        if len(item[2]) > 0:
            pure_result.append(item)


def getCandidateFuncMap(inputPath, inputRepo):
    result_map = json.loads(open(inputPath).read())
    # print(result_map)
    result = result_map[inputRepo]
    return result


def main():
    inputPath = sys.argv[1]
    inputRepo = inputPath.split('/')[-1].split('_')[1]
    print(inputPath)
    print(inputRepo)
    candidateFuncMap = getCandidateFuncMap(inputPath, inputRepo)
    compareFuncMap(candidateFuncMap, inputRepo)


""" EXECUTE """
if __name__ == "__main__":
    main()

