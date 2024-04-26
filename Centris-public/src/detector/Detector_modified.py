"""
Detector.
Author:		Seunghoon Woo (seunghoonwoo@korea.ac.kr)
Modified: 	December 16, 2020.
"""

import os
import sys
# sys.path.insert(0, "../osscollector")
# import OSS_Collector
import subprocess
import re
import shutil
import json
import time

import tlsh

"""GLOBALS"""
currentPath = os.getcwd()
theta = 0.1
resultPath = currentPath + "/res/"
repoFuncPath = "../osscollector/repo_functions/"
verIDXpath = "../preprocessor/verIDX/"
initialDBPath = "../preprocessor/initialSigs/"
finalDBPath = "../preprocessor/componentDB/"
metaPath = "../preprocessor/metaInfos/"
aveFuncPath = metaPath + "aveFuncs"
weightPath = metaPath + "weights/"
funcDatePath = currentPath + "../preprocessor/funcDate/"
ctagsPath = "/usr/local/bin/ctags"

shouldMake = [resultPath]
for eachRepo in shouldMake:
    if not os.path.isdir(eachRepo):
        os.mkdir(eachRepo)


# Generate TLSH
def computeTlsh(string):
    string = str.encode(string)
    hs = tlsh.forcehash(string)
    return hs


def removeComment(string):
    # Code for removing C/C++ style comments. (Imported from VUDDY and ReDeBug.)
    # ref: https://github.com/squizz617/vuddy
    c_regex = re.compile(
        r'(?P<comment>//.*?$|[{}]+)|(?P<multilinecomment>/\*.*?\*/)|(?P<noncomment>\'(\\.|[^\\\'])*\'|"(\\.|[^\\"])*"|.[^/\'"]*)',
        re.DOTALL | re.MULTILINE)
    return ''.join([c.group('noncomment') for c in c_regex.finditer(string) if c.group('noncomment')])


def normalize(string):
    # Code for normalizing the input string.
    # LF and TAB literals, curly braces, and spaces are removed,
    # and all characters are lowercased.
    # ref: https://github.com/squizz617/vuddy
    return ''.join(string.replace('\n', '').replace('\r', '').replace('\t', '').replace('{', '').replace('}', '').split(
        ' ')).lower()


def hashing(repoPath):
    # This function is for hashing C/C++ functions
    # Only consider ".c", ".cc", and ".cpp" files
    possible = (".c", ".cc", ".cpp", ".c++", ".cxx")

    fileCnt = 0
    funcCnt = 0
    lineCnt = 0

    resDict = {}

    for path, dir, files in os.walk(repoPath):
        for file in files:
            filePath = os.path.join(path, file)

            if file.endswith(possible):
                try:
                    # Execute Ctgas command
                    functionList = subprocess.check_output(
                        ctagsPath + ' -f - --kinds-C=* --fields=neKSt "' + filePath + '"', stderr=subprocess.STDOUT,
                        shell=True).decode()

                    f = open(filePath, 'r', encoding="UTF-8")

                    # For parsing functions
                    lines = f.readlines()
                    allFuncs = str(functionList).split('\n')
                    func = re.compile(r'(function)')
                    number = re.compile(r'(\d+)')
                    funcSearch = re.compile(r'{([\S\s]*)}')
                    tmpString = ""
                    funcBody = ""

                    fileCnt += 1

                    for i in allFuncs:
                        elemList = re.sub(r'[\t\s ]{2,}', '', i)
                        elemList = elemList.split('\t')
                        funcBody = ""

                        if i != '' and len(elemList) >= 8 and func.fullmatch(elemList[3]):
                            funcStartLine = int(number.search(elemList[4]).group(0))
                            funcEndLine = int(number.search(elemList[7]).group(0))

                            tmpString = ""
                            tmpString = tmpString.join(lines[funcStartLine - 1: funcEndLine])

                            if funcSearch.search(tmpString):
                                funcBody = funcBody + funcSearch.search(tmpString).group(1)
                            else:
                                funcBody = " "

                            funcBody = removeComment(funcBody)
                            funcBody = normalize(funcBody)
                            funcHash = computeTlsh(funcBody)

                            if len(funcHash) == 72 and funcHash.startswith("T1"):
                                funcHash = funcHash[2:]
                            elif funcHash == "TNULL" or funcHash == "" or funcHash == "NULL":
                                continue

                            storedPath = filePath.replace(repoPath, "")
                            if funcHash not in resDict:
                                resDict[funcHash] = []
                            resDict[funcHash].append(storedPath)

                            lineCnt += len(lines)
                            funcCnt += 1

                except subprocess.CalledProcessError as e:
                    print("Parser Error:", e)
                    continue
                except Exception as e:
                    print("Subprocess failed", e)
                    continue

    return resDict, fileCnt, funcCnt, lineCnt


def getAveFuncs():
    aveFuncs = {}
    with open(aveFuncPath, 'r', encoding="UTF-8") as fp:
        aveFuncs = json.load(fp)
    return aveFuncs


def readComponentDB():
    componentDB = {}
    jsonLst = []

    for OSS in os.listdir(finalDBPath):
        componentDB[OSS] = []
        with open(finalDBPath + OSS, 'r', encoding="UTF-8") as fp:
            jsonLst = json.load(fp)

            for eachHash in jsonLst:
                hashval = eachHash["hash"]
                componentDB[OSS].append(hashval)

    return componentDB


def readAllVers(repoName):
    allVerList = []
    idx2Ver = {}

    with open(verIDXpath + repoName + "_idx", 'r', encoding="UTF-8") as fp:
        tempVerList = json.load(fp)

        for eachVer in tempVerList:
            allVerList.append(eachVer["ver"])
            idx2Ver[eachVer["idx"]] = eachVer["ver"]

    return allVerList, idx2Ver


def readWeigts(repoName):
    weightDict = {}

    with open(weightPath + repoName + "_weights", 'r', encoding="UTF-8") as fp:
        weightDict = json.load(fp)

    return weightDict

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
def detector(inputDict, inputRepo):
    #inputRepo is the name of the target repo
    componentDB = {}

    componentDB = readComponentDB()

    fres = open(resultPath + "result_" + inputRepo, 'w')
    fres_func = open(resultPath + "result_" + inputRepo + "_func", 'w')
    aveFuncs = getAveFuncs()
    count = 0
    verDateDict = {}
    funJsonMap = {}
    for OSS in componentDB:
        count += 1
        commonFunc = []
        repoName = OSS.split('_sig')[0]
        # modified for test 3.3.2024
        # if not repoName == "abbrev@@fatfs" and not repoName == "keirf@@flashfloppy":
        #     continue
        # ------------------------------
        totOSSFuncs = float(aveFuncs[repoName])
        totalDB = len(componentDB[OSS])
        print(count, " / ", len(componentDB), " : ", repoName, " : ", totOSSFuncs, " : ", totalDB)
        # avoid to compare with itself
        if repoName.split("@@")[0] == inputRepo:
            continue
        if repoName not in verDateDict:
            verDateDict = readVerDate(verDateDict, repoName)

        if totOSSFuncs == 0.0:
            continue
        comOSSFuncs = 0.0
        for hashval in componentDB[OSS]:
            if hashval in inputDict:
                commonFunc.append(hashval)
                comOSSFuncs += 1.0
        # if the number of common functions is greater than the threshold, predict the version
        if (comOSSFuncs / totOSSFuncs) >= theta:
            verPredictDict = {}
            allVerList, idx2Ver = readAllVers(repoName)

            for eachVersion in allVerList:
                verPredictDict[eachVersion] = 0.0

            weightDict = readWeigts(repoName)

            with open(initialDBPath + OSS, 'r', encoding="UTF-8") as fi:
                jsonLst = json.load(fi)
                for eachHash in jsonLst:
                    hashval = eachHash["hash"]
                    verlist = eachHash["vers"]

                    if hashval in commonFunc:
                        for addedVer in verlist:
                            verPredictDict[idx2Ver[addedVer]] += weightDict[hashval]

            sortedByWeight = sorted(verPredictDict.items(), key=lambda x: x[1], reverse=True)
            predictedVer = sortedByWeight[0][0]
            # successfully predicted
            predictOSSDict = {}
            with open(repoFuncPath + repoName + '/fuzzy_' + predictedVer + '.hidx', 'r', encoding="UTF-8") as fo:
                body = ''.join(fo.readlines()).strip()
                for eachLine in body.split('\n')[1:]:
                    ohash = eachLine.split('\t')[0]
                    opath = eachLine.split('\t')[1]

                    predictOSSDict[ohash] = opath.split('\t')
            # try to find out how many functions are used, unused, and modified
            used = 0
            unused = 0
            modified = 0
            strChange = False
            similar_functions = {}
            # "ohash" means "OSSHash" and "thash" means "TargetHash“
            for ohash in predictOSSDict:
                flag = 0

                if ohash in inputDict:
                    used += 1
                    similar_functions[ohash] = ohash
                    nflag = 0
                    for opath in predictOSSDict[ohash]:
                        for tpath in inputDict[ohash]:
                            if opath in tpath:
                                nflag = 1
                    if nflag == 0:
                        strChange = True

                    flag = 1

                else:
                    for thash in inputDict:
                        score = tlsh.diffxlen(ohash, thash)
                        if int(score) <= 30:
                            modified += 1
                            print("Modified: ", ohash, thash, score)
                            similar_functions[thash] = ohash
                            nflag = 0
                            for opath in predictOSSDict[ohash]:
                                for tpath in inputDict[thash]:
                                    if opath in tpath:
                                        nflag = 1
                            if nflag == 0:
                                strChange = True

                            flag = 1

                            break  # TODO: Suppose just only one function meet.
                if flag == 0:
                    unused += 1

            fres.write('\t'.join(
                [inputRepo, repoName, predictedVer, str(used), str(unused), str(modified), str(strChange)]) + '\n')
            reuse_file_set = set()
            map_file_to_function = {}
            for hashFunction in similar_functions:
                print(hashFunction)
                print(inputDict[hashFunction])
                for path in inputDict[hashFunction]:
                    reuse_file_set.add(path)
                    if path not in map_file_to_function:
                        map_file_to_function[path] = []
                    map_file_to_function[path].append(similar_functions[hashFunction])

            for path in reuse_file_set:
                fres.write('\t' + path + '\n')
            fres_func_item = [repoName, predictedVer, map_file_to_function]
            if inputRepo not in funJsonMap:
                funJsonMap[inputRepo] = []
            funJsonMap[inputRepo].append(fres_func_item)
            # for path in map_file_to_function:
            #     fres_func.write('\t' + path + '\n')
            #     for hashFunction in map_file_to_function[path]:
            #         fres_func.write('\t\t' + hashFunction + '\n')

    fres_func.write(json.dumps(funJsonMap))
    #print(json.dumps(funJsonMap))
    fres.close()
    fres_func.close()


def main(inputPath, inputRepo):
    resDict, fileCnt, funcCnt, lineCnt = hashing(inputPath)
    #print(resDict)
    print("Hashing Done....")
    detector(resDict, inputRepo)


""" EXECUTE """
if __name__ == "__main__":

    testmode = 0
    timeStart = time.time()

    if testmode:
        inputPath = currentPath + "/crown"
    else:
        inputPath = sys.argv[1]
    print(inputPath)
    inputRepo = inputPath.split('/')[-1]
    print(inputRepo)
    main(inputPath, inputRepo)

    timeEnd = time.time()
    with open("time.txt", "w") as f:
        f.write(inputRepo + " " + str(timeEnd - timeStart))
