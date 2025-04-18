"""
Dataset Collection Tool.
Author:		Seunghoon Woo (seunghoonwoo@korea.ac.kr)
Modified: 	December 16, 2020.
"""
import argparse
import os
import sys
import subprocess
import re
import random
import time
import tlsh  # Please intall python-tlsh

"""GLOBALS"""

currentPath = os.getcwd()
gitCloneURLS = currentPath + "/targetTPLs"  # Please change to the correct file (the "sample" file contains only 10 git-clone urls)
clonePath = currentPath + "/repo_src/"  # Default path
tagDatePath = currentPath + "/repo_date/"  # Default path
resultPath = currentPath + "/repo_functions/"  # Default path
ctagsPath = "/usr/bin/ctags"  # Ctags binary path (please specify your own ctags path)

# Generate directories
shouldMake = [clonePath, tagDatePath, resultPath]
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
                    # in the output of ctags
                    # the 4th column is the type of the tag (function, parameter, etc.)
                    # and the 5th and 8th columns are the line numbers of the function
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
                            funcName = elemList[0]
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


def indexing(resDict, title, filePath):
    # For indexing each OSS

    fres = open(filePath, 'w')
    fres.write(title + '\n')

    for hashval in resDict:
        if hashval == '' or hashval == ' ':
            continue

        fres.write(hashval)

        for funcPath in resDict[hashval]:
            fres.write('\t' + funcPath)
        fres.write('\n')

    fres.close()


def list_first_layer_subdirs(directory):
    """List the first layer of subdirectories in the given directory."""
    subdirs = [d for d in os.listdir(directory)
               if os.path.isdir(os.path.join(directory, d))]
    # print(subdirs)
    return subdirs


def main():
    # record the subdir name in resultPath
    if not os.path.isdir(resultPath):
        os.mkdir(resultPath)
    subdirs = list_first_layer_subdirs(resultPath)
    visited_repos = []
    if not os.path.exists("./visited_repos"):
        # create one
        with open("./visited_repos", "w") as f:
            pass
    with open("./visited_repos", "r") as f:
        visited_repos = f.readlines()

    with open(gitCloneURLS, 'r', encoding="UTF-8") as fp:
        funcDateDict = {}
        lines = [l.strip('\n\r') for l in fp.readlines()]

        for eachUrl in lines:
            random.seed(time.time())
            random_number = random.randint(0, 7)
            if random_number < 0:
                eachUrl = eachUrl.replace('https://github.com/', 'https://mirror.ghproxy.com/https://github.com/')
            print(eachUrl)
            os.chdir(currentPath)
            if "github.com" not in eachUrl:
                print("Invalid URL:", eachUrl)
                continue
            repoName = eachUrl.split("github.com/")[1].replace(".git", "").replace("/",
                                                                                   "@@")  # Replace '/' -> '@@' for convenience
            print("[+] Processing", repoName)
            if repoName in subdirs:
                print(f"{repoName} has been processed")
                continue
            if repoName in visited_repos:
                print(f"{repoName} has been visited")
                continue

            try:
                cloneCommand = eachUrl + ' ' + clonePath + repoName
                cloneResult = subprocess.check_output(cloneCommand, stderr=subprocess.STDOUT, shell=True).decode()
                print(cloneResult)
                os.chdir(clonePath + repoName)

                dateCommand = 'git log --tags --simplify-by-decoration --pretty="format:%ai %d"'  # For storing tag dates
                dateResult = subprocess.check_output(dateCommand, stderr=subprocess.STDOUT, shell=True).decode()
                tagDateFile = open(tagDatePath + repoName, 'w')
                tagDateFile.write(str(dateResult))
                tagDateFile.close()

                tagCommand = "git tag"
                tagResult = subprocess.check_output(tagCommand, stderr=subprocess.STDOUT, shell=True).decode()

                resDict = {}
                fileCnt = 0
                funcCnt = 0
                lineCnt = 0

                if tagResult == "":
                    # No tags, only master repo
                    # print("No tags")
                    resDict, fileCnt, funcCnt, lineCnt = hashing(clonePath + repoName)
                    if len(resDict) > 0:
                        if not os.path.isdir(resultPath + repoName):
                            os.mkdir(resultPath + repoName)
                        title = '\t'.join([repoName, str(fileCnt), str(funcCnt), str(lineCnt)])
                        resultFilePath = resultPath + repoName + '/fuzzy_' + repoName + '.hidx'  # Default file name: "fuzzy_OSSname.hidx"

                        indexing(resDict, title, resultFilePath)


                else:
                    # print("Tags exist")
                    for tag in str(tagResult).split('\n'):
                        # Generate function hashes for each tag (version)

                        checkoutCommand = subprocess.check_output("git checkout -f " + tag, stderr=subprocess.STDOUT,
                                                                  shell=True)
                        resDict, fileCnt, funcCnt, lineCnt = hashing(clonePath + repoName)

                        if len(resDict) > 0:
                            if not os.path.isdir(resultPath + repoName):
                                os.mkdir(resultPath + repoName)
                            title = '\t'.join([repoName, str(fileCnt), str(funcCnt), str(lineCnt)])
                            resultFilePath = resultPath + repoName + '/fuzzy_' + tag + '.hidx'

                            indexing(resDict, title, resultFilePath)
                # write back to visited_repos
                with open("./visited_repos", "a") as f:
                    f.write(repoName + "\n")


            except subprocess.CalledProcessError as e:
                print("Parser Error:", e)
                continue
            except Exception as e:
                print("Subprocess failed", e)
                continue


""" EXECUTE """
if __name__ == "__main__":
    main()
