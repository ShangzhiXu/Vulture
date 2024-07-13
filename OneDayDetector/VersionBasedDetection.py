
import time
import subprocess
import random
import os
import sys
import tlsh
import argparse
import ast
import json
import re
from ChunkExtraction import *

savePath = "./target/"
ctagsPath = "/usr/local/bin/ctags"
databasePath = "./aligned_patch/"
versionDatabasePath = "./aligned_cpe/"


def readFile(path):
    body = ''
    try:
        fp = open(path, 'r', encoding = "UTF-8")
        body = ''.join(fp.readlines()).strip()
    except:
        try:
            fp = open(path, 'r', encoding = "CP949")
            body = ''.join(fp.readlines()).strip()
        except:
            try:
                fp = open(path, 'r', encoding = "euc-kr")
                body = ''.join(fp.readlines()).strip()
            except:
                pass
    return body

def normalize_forhashing(string):
    # Code for normalizing the input string.
    # LF and TAB literals, curly braces, and spaces are removed,
    # and all characters are lowercased.
    # ref: https://github.com/squizz617/vuddy
    return ''.join(
        string.replace('\n', '').replace('\r', '').replace('\t', '').replace('{', '').replace('}', '').split(
            ' ')).lower()


def removeComment(string):
    # Code for removing C/C++ style comments. (Imported from ReDeBug.)
    c_regex = re.compile(
        r'(?P<comment>//.*?$|[{}]+)|(?P<multilinecomment>/\*.*?\*/)|(?P<noncomment>\'(\\.|[^\\\'])*\'|"(\\.|[^\\"])*"|.[^/\'"]*)',
        re.DOTALL | re.MULTILINE)
    return ''.join([c.group('noncomment') for c in c_regex.finditer(string) if c.group('noncomment')])
def computeTlsh(string):
    string = str.encode(string)
    hs = tlsh.forcehash(string)
    return hs


def fileHashingFull(filePath,repoPath, repoName):
    # print(filePath)

    # This function is for hashing C/C++ functions
    # Only consider ".c", ".cc", and ".cpp" files
    possible = (".c", ".cc", ".cpp")

    fileCnt = 0
    funcCnt = 0
    lineCnt = 0

    resDict = {}
    strDict = {}
    allVars = {}
    allMacs = {}
    resFuncNameMap = {}

    # try:
    # Execute Ctgas command
    try:
        ItemsList = subprocess.check_output(
            ctagsPath + ' -f - --kinds-C=-vl --fields=neKSt "' + filePath + '"', stderr=subprocess.STDOUT,
            shell=True).decode()
    except Exception as e:
        print("Ctags Error:", e)
        return strDict, resDict, fileCnt, funcCnt, lineCnt, resFuncNameMap

    try:
        f = open(filePath, 'r', encoding="UTF-8")
    except:
        tempFilePath = ""
        index = 0
        for subpath in filePath.split("/"):
            if index == 0:
                tempFilePath = subpath
            elif index == 2:
                tempFilePath = tempFilePath + "/" + subpath.lower()
            else:
                tempFilePath = tempFilePath + "/" + subpath
            index += 1
        filePath = tempFilePath
        f = open(filePath, 'r', encoding="UTF-8")

    # For parsing functions
    try:
        lines = f.readlines()
    except UnicodeDecodeError as e:
        lines = []
    allItems = str(ItemsList).split('\n')
    func = re.compile(r'(function)')
    struct = re.compile(r'(struct)')
    macro = re.compile(r'(macro)')
    variable = re.compile(r'(variable)')
    member = re.compile(r'(member)')
    number = re.compile(r'(\d+)')
    funcSearch = re.compile(r'{([\S\s]*)}')
    tmpString = ""
    funcBody = ""
    lineCnt += len(lines)
    fileCnt += 1
    macros = ""
    variables = ""

    for i in allItems:
        elemList = re.sub(r'[\t\s ]{2,}', '', i)
        elemList = elemList.split('\t')

        funcBody = ""
        strBody = ""
        try:
            if i != '' and len(elemList) >= 6 and struct.fullmatch(elemList[3]):  # parsing structures
                strStartLine = int(number.search(elemList[4]).group(0))
                strEndLine = int(number.search(elemList[5]).group(0))

                tmpString = ""
                tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
                rawBody = tmpString

                if funcSearch.search(tmpString):
                    strBody = strBody + funcSearch.search(tmpString).group(1)
                else:
                    strBody = " "

                strBody = removeComment(strBody)
                strBody = normalize_forhashing(strBody)
                strHash = computeTlsh(strBody)

                if len(strHash) == 72 and strHash.startswith("T1"):
                    strHash = strHash[2:]
                elif strHash == "TNULL" or strHash == "" or strHash == "NULL":
                    continue

                storedPath = filePath.replace(repoPath, "")

                if strHash not in strDict:
                    strDict[strHash] = []
                strDict[strHash].append(storedPath)

                f = open(savePath + repoName + '/structs/' + strHash, 'w', encoding="UTF-8")
                f.write(rawBody)
                f.close()


            elif i != '' and len(elemList) >= 8 and func.fullmatch(elemList[3]):  # parsing functions
                funcStartLine = int(number.search(elemList[4]).group(0))
                funcEndLine = int(number.search(elemList[7]).group(0))
                funcName = elemList[0]
                tmpString = ""
                # print(lines[funcStartLine - 1])
                tmpString = tmpString.join(lines[funcStartLine - 1: funcEndLine])
                rawBody = tmpString

                if funcSearch.search(tmpString):
                    funcBody = funcBody + funcSearch.search(tmpString).group(1)
                else:
                    funcBody = " "

                funcBody = removeComment(funcBody)
                funcBody = normalize_forhashing(funcBody)
                # print(funcBody)

                funcHash = computeTlsh(funcBody)

                if len(funcHash) == 72 and funcHash.startswith("T1"):
                    funcHash = funcHash[2:]
                elif funcHash == "TNULL" or funcHash == "" or funcHash == "NULL":
                    continue
                storedPath = filePath.replace(repoPath, "")

                if funcHash not in resDict:
                    resDict[funcHash] = []
                resDict[funcHash].append(storedPath)
                resFuncNameMap[funcHash] = funcName
                # print(funcHash)
                # print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>")
                f = open(savePath + repoName + '/functions/' + funcHash, 'w', encoding="UTF-8")
                f.write(rawBody)
                f.close()

                funcCnt += 1

            elif i != '' and len(elemList) > 6 and macro.fullmatch(elemList[3]):  # parsing macros
                strStartLine = int(number.search(elemList[4]).group(0))
                if len(elemList) == 6:
                    strEndLine = int(number.search(elemList[5]).group(0))
                elif len(elemList) == 7:
                    strEndLine = int(number.search(elemList[6]).group(0))
                tmpString = ""
                tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
                rawBody = tmpString
                macros += rawBody

                if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allMacs:
                    allMacs[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                allMacs[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

                # print (allMacs)

            elif i != '' and len(elemList) > 6 and variable.fullmatch(elemList[3]):  # parsing variables
                strStartLine = int(number.search(elemList[4]).group(0))
                strEndLine = int(number.search(elemList[6]).group(0))
                tmpString = ""
                tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
                rawBody = tmpString
                variables += rawBody
                if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allVars:
                    allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

            elif i != '' and len(elemList) > 6 and member.fullmatch(elemList[3]):  # parsing members
                strStartLine = int(number.search(elemList[4]).group(0))
                strEndLine = int(number.search(elemList[6]).group(0))
                tmpString = ""
                tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
                rawBody = tmpString
                variables += rawBody
                if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allVars:
                    allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)
        except Exception as e:
            print("Error:", e)
            continue


    # except subprocess.CalledProcessError as e:
    #     print("Parser Error:", e)
    #     return strDict, resDict, fileCnt, funcCnt, lineCnt
    # except Exception as e:
    #     print("Subprocess failed", e)
    #     return strDict, resDict, fileCnt, funcCnt, lineCnt

    if macros != "":
        macroPath = filePath.split(repoPath)[1][1:].replace('/', '@@')
        f = open(savePath + repoName + '/macros/' + macroPath, 'w', encoding="UTF-8")
        f.write(macros)
        f.close()

    if variables != "":
        varPath = filePath.split(repoPath)[1][1:].replace('/', '@@')
        f = open(savePath + repoName + '/variables/' + varPath, 'w', encoding="UTF-8")
        f.write(variables)
        f.close()

    return strDict, resDict, fileCnt, funcCnt, lineCnt, resFuncNameMap


def fileHashing(filePath,repoPath, repoName, function_affeted):
    #print(filePath)

    # This function is for hashing C/C++ functions
    # Only consider ".c", ".cc", and ".cpp" files
    possible = (".c", ".cc", ".cpp")

    fileCnt = 0
    funcCnt = 0
    lineCnt = 0

    resDict = {}
    strDict = {}
    allVars = {}
    allMacs = {}
    resFuncNameMap = {}
    affectedItems = []
    affectedItems.extend(function_affeted)


    #try:
    # Execute Ctgas command
    ItemsList = subprocess.check_output(
        ctagsPath + ' -f - --kinds-C=-vl --fields=neKSt "' + filePath + '"', stderr=subprocess.STDOUT,
        shell=True).decode()

    try:
        f = open(filePath, 'r', encoding="UTF-8")
    except FileNotFoundError as e:
        print("FileNotFoundError:", e)
        tempFilePath = ""
        index = 0
        for subpath in filePath.split("/"):
            if index == 0:
                tempFilePath = subpath
            elif index == 2:
                tempFilePath = tempFilePath + "/" + subpath.lower()
            else:
                tempFilePath = tempFilePath + "/" + subpath
            index += 1
        filePath = tempFilePath
        f = open(filePath, 'r', encoding="UTF-8")


    # For parsing functions
    try:
        lines = f.readlines()
    except UnicodeDecodeError as e:
        lines = []
        print("UnicodeDecodeError:", e)
    allItems = str(ItemsList).split('\n')
    func = re.compile(r'(function)')
    struct = re.compile(r'(struct)')
    macro = re.compile(r'(macro)')
    variable = re.compile(r'(variable)')
    member = re.compile(r'(member)')
    number = re.compile(r'(\d+)')
    funcSearch = re.compile(r'{([\S\s]*)}')
    tmpString = ""
    funcBody = ""
    lineCnt += len(lines)
    fileCnt += 1
    macros = ""
    variables = ""

    for i in allItems:
        elemList = re.sub(r'[\t\s ]{2,}', '', i)
        elemList = elemList.split('\t')
        funcBody = ""
        strBody = ""
        # if affetedItems is not None, only consider the affected items
        if i != '' and elemList[0] in affectedItems:
            #print("Affected Item Found:", elemList)
            if i != '' and len(elemList) >= 6 and struct.fullmatch(elemList[3]):  # parsing structures
                strStartLine = int(number.search(elemList[4]).group(0))
                strEndLine = int(number.search(elemList[5]).group(0))

                tmpString = ""
                tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
                rawBody = tmpString

                if funcSearch.search(tmpString):
                    strBody = strBody + funcSearch.search(tmpString).group(1)
                else:
                    strBody = " "

                strBody = removeComment(strBody)
                strBody = normalize_forhashing(strBody)
                strHash = computeTlsh(strBody)

                if len(strHash) == 72 and strHash.startswith("T1"):
                    strHash = strHash[2:]
                elif strHash == "TNULL" or strHash == "" or strHash == "NULL":
                    continue

                storedPath = filePath.replace(repoPath, "")

                if strHash not in strDict:
                    strDict[strHash] = []
                strDict[strHash].append(storedPath)

                f = open(savePath + repoName + '/structs/' + strHash, 'w', encoding="UTF-8")
                f.write(rawBody)
                f.close()


            elif i != '' and len(elemList) >= 7 and func.fullmatch(elemList[3]):  # parsing functions
                funcStartLine = int(number.search(elemList[4]).group(0))
                funcEndLine = int(number.search(elemList[-1]).group(0))
                funcName = elemList[0]
                tmpString = ""
                #print(lines[funcStartLine - 1])
                tmpString = tmpString.join(lines[funcStartLine - 1: funcEndLine])
                rawBody = tmpString

                if funcSearch.search(tmpString):
                    funcBody = funcBody + funcSearch.search(tmpString).group(1)
                else:
                    funcBody = " "

                funcBody = removeComment(funcBody)
                funcBody = normalize_forhashing(funcBody)
                # print(funcBody)

                funcHash = computeTlsh(funcBody)

                if len(funcHash) == 72 and funcHash.startswith("T1"):
                    funcHash = funcHash[2:]
                elif funcHash == "TNULL" or funcHash == "" or funcHash == "NULL":
                    continue
                storedPath = filePath.replace(repoPath, "")

                if funcHash not in resDict:
                    resDict[funcHash] = []
                resDict[funcHash].append(storedPath)
                resFuncNameMap[funcHash] = funcName
                # print(funcHash)
                # print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>")
                f = open(savePath + repoName + '/functions/' + funcHash, 'w', encoding="UTF-8")
                f.write(rawBody)
                f.close()

                funcCnt += 1

            elif i != '' and len(elemList) > 6 and macro.fullmatch(elemList[3]):  # parsing macros
                strStartLine = int(number.search(elemList[4]).group(0))
                if len(elemList) == 6:
                    strEndLine = int(number.search(elemList[5]).group(0))
                elif len(elemList) == 7:
                    strEndLine = int(number.search(elemList[6]).group(0))
                tmpString = ""
                tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
                rawBody = tmpString
                macros += rawBody

                if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allMacs:
                    allMacs[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                allMacs[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

                # print (allMacs)

            elif i != '' and len(elemList) > 6 and variable.fullmatch(elemList[3]):  # parsing variables
                strStartLine = int(number.search(elemList[4]).group(0))
                strEndLine = int(number.search(elemList[6]).group(0))
                tmpString = ""
                tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
                rawBody = tmpString
                variables += rawBody
                if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allVars:
                    allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

            elif i != '' and len(elemList) > 6 and member.fullmatch(elemList[3]):  # parsing members
                strStartLine = int(number.search(elemList[4]).group(0))
                strEndLine = int(number.search(elemList[6]).group(0))
                tmpString = ""
                tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
                rawBody = tmpString
                variables += rawBody
                if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allVars:
                    allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

    # except subprocess.CalledProcessError as e:
    #     print("Parser Error:", e)
    #     return strDict, resDict, fileCnt, funcCnt, lineCnt
    # except Exception as e:
    #     print("Subprocess failed", e)
    #     return strDict, resDict, fileCnt, funcCnt, lineCnt

    if macros != "":
        macroPath = filePath.split(repoPath)[1][1:].replace('/', '@@')
        f = open(savePath + repoName + '/macros/' + macroPath, 'w', encoding="UTF-8")
        f.write(macros)
        f.close()

    if variables != "":
        varPath = filePath.split(repoPath)[1][1:].replace('/', '@@')
        f = open(savePath + repoName + '/variables/' + varPath, 'w', encoding="UTF-8")
        f.write(variables)
        f.close()

    return strDict, resDict, fileCnt, funcCnt, lineCnt, resFuncNameMap
def targetHashing(repoPath, repoName):
    # This function is for hashing C/C++ functions
    # Only consider ".c", ".cc", and ".cpp" files
    possible = (".c", ".cc", ".cpp")

    fileCnt = 0
    funcCnt = 0
    lineCnt = 0

    resDict = {}
    strDict = {}
    allVars = {}
    allMacs = {}
    funcMap = {}

    if not os.path.isdir(savePath + repoName):
        os.mkdir(savePath + repoName)
    if not os.path.isdir(savePath + repoName + '/functions'):
        os.mkdir(savePath + repoName + '/functions')
    if not os.path.isdir(savePath + repoName + '/macros'):
        os.mkdir(savePath + repoName + '/macros')
    if not os.path.isdir(savePath + repoName + '/structs'):
        os.mkdir(savePath + repoName + '/structs')
    if not os.path.isdir(savePath + repoName + '/variables'):
        os.mkdir(savePath + repoName + '/variables')

    for path, dir, files in os.walk(repoPath):
        for file in files:
            filePath = os.path.join(path, file)
            tempStrDict, tempResDict, tempFileCnt, tempFuncCnt, tempLineCnt, tempFuncMap = fileHashingFull(filePath, repoPath,
                                                                                          repoName)

            strDict.update(tempStrDict)
            resDict.update(tempResDict)
            funcMap.update(tempFuncMap)
            fileCnt += tempFileCnt
            funcCnt += tempFuncCnt
            lineCnt += tempLineCnt



    f = open(savePath + repoName + '/macro_' + repoName + '.txt', 'w', encoding="UTF-8")
    for fp in allMacs:
        f.write(fp + '\n')
        for eachVal in allMacs[fp]:
            f.write('\t' + eachVal.lstrip())
    f.close()

    f = open(savePath + repoName + '/variable_' + repoName + '.txt', 'w', encoding="UTF-8")
    for fp in allVars:
        f.write(fp + '\n')
        for eachVal in allVars[fp]:
            f.write('\t' + eachVal.lstrip())
    f.close()

    return strDict, resDict, fileCnt, funcCnt, lineCnt, funcMap

def CPEjsonParser(jsonFile):
    parsed_data = []
    with open(jsonFile, 'r') as f:
        data = json.load(f)

    parsed_entry = {}
    if "CVE_id" in data:
        parsed_entry["CVE_id"] = data["CVE_id"]
    else:
        parsed_entry["CVE_id"] = ""
    if "CPE" in data:
        parsed_entry["CPE"] = data["CPE"]
    else:
        parsed_entry["CPE"] = ""
    if "modified_items" in data:
        parsed_entry["modified_items"] = data["modified_items"]
    else:
        parsed_entry["modified_items"] = ""
    parsed_data.append(parsed_entry)
    # for entry in data:
    #     print(entry)
    #     parsed_entry = {
    #         "CVE_ID": entry['CVE_id'],
    #         "Affected_Versions": entry['CPE'],
    #         "Modified_Items": entry['modified_items']
    #     }
    #     parsed_data.append(parsed_entry)

    return parsed_data

def getReuseInfo(repoName):
    reused_OSSes = []
    with open('../TPLReuseDetector/modified_result_without_func' + repoName, 'r') as f:
        for line in f.readlines():
           if line.startswith("\t"):
                continue
           else:
                reused_OSSes.append(line)


    reuse_info = {}
    for oss in reused_OSSes:
        print(oss)
        oss = oss.strip("\n").strip()
        version = oss.split(' ')[1]
        oss = oss.split(' ')[0]
        oss_name = oss.split('@@')[1]
        oss_developer = oss.split('@@')[0]

        reuse_info[oss_name] = {
            "developer": oss_developer,
            "version": version
        }

    #print("Reuse Info:", reuse_info)

    return reuse_info

def getFunctionHash(function_code):
    funcBody = removeComment(function_code)
    funcBody = normalize_forhashing(funcBody)
    #print("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<")
    #print(funcBody)

    funcHash = computeTlsh(funcBody)

    if len(funcHash) == 72 and funcHash.startswith("T1"):
        funcHash = funcHash[2:]
    elif funcHash == "TNULL" or funcHash == "" or funcHash == "NULL":
        return None
    #print("Function Hash:", funcHash)

    return funcHash


def normalize_version(version_string):

    # if the version string has no numbers, return it as is
    if not re.search(r'[0-9]', version_string):
        return version_string

    # Replace any non-digit and non-dot characters (like underscores, dashes) with a dot
    normalized_version = re.sub(r'[^0-9\.]', '.', version_string)
    # Remove repeated dots and trim leading/trailing dots
    normalized_version = re.sub(r'\.+', '.', normalized_version).strip('.')
    return normalized_version

def normalize_version_list(version_list):

    normalized_version_list = []
    for version_string in version_list:
        # if the version string has no numbers, return it as is
        if not re.search(r'[0-9]', version_string):
            return version_string

        # Replace any non-digit and non-dot characters (like underscores, dashes) with a dot
        normalized_version = re.sub(r'[^0-9\.]', '.', version_string)
        # Remove repeated dots and trim leading/trailing dots
        normalized_version = re.sub(r'\.+', '.', normalized_version).strip('.')
        normalized_version_list.append(normalized_version)

    return normalized_version_list
def getAffectedCVEs(reuse_info, resDict, repoName):

    affectedCVEs = {}
    affectedCVEs_version = set()
    for reuse_name in reuse_info.keys():
        # walk through all the subdirs of the reused OSS
        normalized_prevelant_versions = normalize_version(reuse_info[reuse_name]["version"])
        prevelant_versions = reuse_info[reuse_name]["version"]
        #print("Prevelant Versions for:",reuse_name," is ", reuse_info[reuse_name]["version"], " -> ", prevelant_versions)
        OSS_path = databasePath + reuse_info[reuse_name]["developer"] + "_" + reuse_name
        OSS_path = OSS_path.lower()
        OSS_CPE_path = versionDatabasePath + reuse_info[reuse_name]["developer"] + "_" + reuse_name + ".json"
        OSS_CPE_path = OSS_CPE_path.lower()
        #print("OSS_CPE_path:", OSS_CPE_path)
        try:
            for CVE in os.listdir(OSS_path):
                # visit all the json file under the CVE directory
                for jsonFile in os.listdir(OSS_path + "/" + CVE):
                    if jsonFile.endswith("patch_info.json"):
                        parsed_data = CPEjsonParser(OSS_path + "/" + CVE + "/" + jsonFile)
                        for entry in parsed_data:
                            normalize_cpe = normalize_version_list(entry["CPE"])
                            if prevelant_versions in entry["CPE"] or prevelant_versions in normalize_cpe\
                                    or normalized_prevelant_versions in entry["CPE"] or normalized_prevelant_versions in normalize_cpe:

                                candidateCVE = reuse_info[reuse_name]["developer"].lower() + "_" + reuse_name + "/" + CVE
                                if candidateCVE not in affectedCVEs:
                                    affectedCVEs[candidateCVE] = []
                                affectedCVEs[candidateCVE].append(entry)
            with open(OSS_CPE_path, 'r') as f:
                data = json.load(f)
                #print("Data:", data)
            for entry in data:
                normalize_cpe = normalize_version_list(entry["cpe"])
                if prevelant_versions in entry["cpe"] or prevelant_versions in normalize_cpe\
                        or normalized_prevelant_versions in entry["cpe"] or normalized_prevelant_versions in normalize_cpe:

                    candidateCVE = reuse_info[reuse_name]["developer"].lower() + "_" + reuse_name + "/" + entry["cve_id"]
                    affectedCVEs_version.add(candidateCVE)
        except FileNotFoundError as e:
            print("No such file or directory:",  e)
            continue
    return affectedCVEs, affectedCVEs_version
def versionBasedDetection(reuse_info, resDict, inputPath, repoName, funcMap):


    patchedCVEs_exact = set()
    patchedCVEs_modified = set()
    vulnerableCVEs_exact = set()
    vulnerableCVEs_modified = set()


    affectedCVEs, affectedCVEs_version = getAffectedCVEs(reuse_info, resDict, repoName)
    # print("Affected CVEs:")
    # for CVE in affectedCVEs.keys():
    #     print(CVE, affectedCVEs[CVE][0]["CVE_id"])
    # print("Affected CVEs Version:")
    # for CVE in affectedCVEs_version:
    #     print(CVE)
    for CVE in affectedCVEs.keys():
        try:


            if "modified_items" not in affectedCVEs[CVE][0]:
                continue
            targetFileTypes = (".c", ".cc", ".cpp")
            for modified_file in affectedCVEs[CVE][0]["modified_items"]:
                if not modified_file.endswith(targetFileTypes):
                    continue
                # pre_patch_code = readFile(databasePath + CVE + "/patch_before/" + modified_file)
                # post_patch_code = readFile(databasePath + CVE + "/patch_after/" + modified_file)
                print("=====================================")

                affeted_items = affectedCVEs[CVE][0]["modified_items"][modified_file]
                # print("For CVE: ",CVE, "Affected Items:", affeted_items)
                function_affeted = []
                other_affeted = []
                for item in affeted_items.keys():
                    type = affeted_items[item]
                    if type == 'function':
                        function_affeted.append(item)
                    else:
                        other_affeted.append(item)
                # print("Function Affected:", function_affeted)
                # See if there are any function similar as the target function in the pre/post-patch code
                tempCVE = ""
                index = 0
                for subpath in CVE.split("/"):
                    if index == 0:
                        tempCVE = subpath.lower()
                    else:
                        tempCVE = tempCVE + "/" + subpath
                    index += 1
                CVE = tempCVE
                print("CVE:", CVE)
                print("PATH1:", databasePath + CVE + "/patch_before/" + modified_file)
                if "md4" in modified_file:
                    print("MD4 Found")
                    continue
                print("PATH2:", repoName)
                (Prepatched_strDict, Prepatched_resDict, Prepatched_fileCnt,
                 Prepatched_funcCnt, Prepatched_lineCnt, Prepatched_funcMap) = fileHashing(
                    databasePath + CVE + "/patch_before/" + modified_file,
                    databasePath + CVE + "/patch_before", repoName,
                    function_affeted)
                print("PATH1:", databasePath + CVE + "/patch_after/" + modified_file)
                print("PATH2:", repoName)
                (Postpatched_strDict, Postpatched_resDict, Postpatched_fileCnt,
                 Postpatched_funcCnt, Postpatched_lineCnt, Postpatched_funcMap) = fileHashing(
                    databasePath + CVE + "/patch_after/" + modified_file,
                    databasePath + CVE + "/patch_after", repoName,
                    function_affeted)

                print("Pre-patch Code:", Prepatched_resDict)
                print("Post-patch Code:", Postpatched_resDict)
                # here we need THREE types of compare
                # 1. line match for structure, define, macro etc.
                # 2. exact hash match for functions
                # 3. hash similarity match for functions

                ## step 1

                ## step 2

                for hash in resDict:
                    if hash in Prepatched_resDict:
                        print("Same Function Found in Pre-patch Code:", resDict[hash])
                        vulnerableCVEs_exact.add(CVE)
                    if hash in Postpatched_resDict:
                        print("Same Function Found in Post-patch Code:", Postpatched_resDict[hash])
                        patchedCVEs_exact.add(CVE)

                ## step 3
                vulerable = False
                visited_files = set()
                for hash in resDict:
                    needCheck = False

                    for post_hash in Postpatched_resDict:
                        score = tlsh.diff(hash, post_hash)
                        if score <= 140 and score != 0 or (Postpatched_funcMap[post_hash] == funcMap[hash]):
                            needCheck = True
                            break

                    for pre_hash in Prepatched_resDict:
                        score = tlsh.diff(hash, pre_hash)
                        if score <= 140 and score != 0 or (Prepatched_funcMap[pre_hash] == funcMap[hash]):
                            needCheck = True
                            break
                    if needCheck and resDict[hash][0] not in visited_files:
                        # Do code-based analysis here

                        print(databasePath + CVE + "/patch_after/" + modified_file)
                        print(databasePath + CVE + "/patch_before/" + modified_file)
                        print(inputPath + resDict[hash][0])
                        if "example" in resDict[hash][0] or "test" in resDict[hash][0] or "demo" in resDict[hash][0] or "sample" in resDict[hash][0] or "main" in resDict[hash][0] or "test" in resDict[hash][0] or "demo" in resDict[hash][0] or "sample" in resDict[hash][0]:
                            continue
                        hasPatch = CodeBasedDetection(databasePath + CVE + "/patch_after/" + modified_file,
                                                      databasePath + CVE + "/patch_before/" + modified_file,
                                                      inputPath + resDict[hash][0])
                        visited_files.add(resDict[hash][0])

                        print("Has Patch:", hasPatch)
                        if hasPatch == 0:
                            vulerable = True
                            break
                        # patchedCVEs_modified.add(CVE)
                    if vulerable:
                        break

                if not vulerable:
                    patchedCVEs_modified.add(CVE)
                else:
                    vulnerableCVEs_modified.add(CVE)
                    break
        except FileNotFoundError as e:
            print("No such file or directory:", e)
            continue


    version_detection = set()
    for CVE in affectedCVEs_version:
        # if CVE not in patchedCVEs_modified or CVE in patchedCVEs_exact
        # add it to the version detection set
        if (CVE not in patchedCVEs_modified and CVE not in patchedCVEs_exact and
                CVE not in vulnerableCVEs_modified and CVE not in vulnerableCVEs_exact):
            version_detection.add(CVE)
    tempCVEList = []
    for CVE in vulnerableCVEs_modified:
        if CVE not in vulnerableCVEs_exact:
            tempCVEList.append(CVE)
    vulnerableCVEs_modified = set(tempCVEList)

    tempCVEList = []
    for CVE in patchedCVEs_modified:
        if CVE not in patchedCVEs_exact:
            tempCVEList.append(CVE)
    patchedCVEs_modified = set(tempCVEList)



    return vulnerableCVEs_exact, patchedCVEs_exact, vulnerableCVEs_modified, patchedCVEs_modified, version_detection


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Description of your program')
    parser.add_argument('input_path', type=str, help='Path to the input directory')
    args = parser.parse_args()
    inputPath = args.input_path
    repoName = ""
    if inputPath.endswith("/"):
        repoName = inputPath.split("/")[-2]
    else:
        repoName = inputPath.split("/")[-1]


    strDict, resDict, fileCnt, funcCnt, lineCnt, funcMap = targetHashing(inputPath, repoName)

    reuse_info = getReuseInfo(repoName)
    (vulnerableCVEs_exact, patchedCVEs_exact,
     vulnerableCVEs_modified, patchedCVEs_modified,version_detection) = versionBasedDetection(reuse_info, resDict,inputPath, repoName, funcMap)
    print("=====================================")
    print("Vulnerable CVEs Exact:", vulnerableCVEs_exact)
    print("Vulnerable CVEs Modified:", vulnerableCVEs_modified)
    print("Patched CVEs Exact:", patchedCVEs_exact)
    print("Patched CVEs Modified:", patchedCVEs_modified)
    print("Version Detection:", version_detection)

    # for hash in resDict:
    #     score = tlsh.diff(funcHash, hash)
    #     print("Score:", score)
    #     if score <= 100:
    #         print("Similar Function Found:", resDict[hash])
    #         print("Similarity Score:", score)