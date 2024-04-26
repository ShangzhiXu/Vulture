import time
import subprocess
import random
import os
import sys
import tlsh
import ast
import json
import re

#### Configuration ####
delimeter               = "@#@"

ctagsPath       = "ctags"
git2CPE_OSS     = "./dataset/Git2CPE_OSS/git2cpe.txt"
git2CPEPath             = "./dataset/Git2CPE_ver/"
git2CPEMap              = os.listdir(git2CPEPath)
CPE2CVEPath             = "./dataset/CPE2CVE/"
ossAllFuncs     = "./dataset/OSSallFuncs/"
ossVerLists     = "./dataset/OSSverList/"
vulHashPath     = "./dataset/vulHashes/vulhash.txt"
patHashPath     = "./dataset/vulHashes/patchhash.txt"
vulFilePath             = "./dataset/vulFiles/"
savePath                = "./target/"
allVulPath              = "./dataset/vulHashes/vulTypes.txt"
targetPath              = "./target/"

vulStructHashPath = "./dataset/vulHashes/vulhash_struct.txt"
patStructHashPath = "./dataset/vulHashes/pathash_struct.txt"


CtagsCommand    = '"' + str(ctagsPath) + '" -f - --kinds-C=* --fields=neKSt "'
LangLines               = [4,-1]

vulDict                 = {}
vulInfoDict             = {}
rVulDict                = {}

patDict                 = {}
patInfoDict             = {}
rPatDict                = {}

vulStructInfoDict = {}
vulStructDict   = {}
patStructInfoDict = {}
patStructDict   = {}
manual                  = {}
targetHashes    = {}
tarName                 = ""

vulBody                 = ""
patBody                 = ""
vulStructBody   = ""
patStructBody   = ""
allVulBody              = ""





# manually checked
nocpe  = ["acl-dev@@acl", "kuba--@@zip", "xiph@@ogg", "bkaradzic@@bx", "concurrencykit@@ck", "eggert@@tz", "boostorg@@boost", "xiph@@opus", "assimp@@assimp", "libeigen@@eigen", "wjwwood@@serial", "lsalzman@@enet", "facebook@@rocksdb", "google@@googletest", "boostorg@@spirit", "boostorg@@safe_numerics", "boostorg@@python", "boostorg@@mp11", "boostorg@@math", "boostorg@@hof", "boostorg@@hana", "boostorg@@graph", "boostorg@@geometry", "boostorg@@fiber", "boostorg@@context", "boostorg@@compute", "boostorg@@asio", "nmoinvaz@@minizip", "d3@@d3", "chaijs@@chai", "maharmstone@@btrfs", "rxi@@vec", "boostorg@@thread", "apache@@apr", "boostorg@@coroutine", "Cyan4973@@xxHash", "qingqibing@@linenoise"]
########################

def atoi(text):
        return int(text) if text.isdigit() else text

def natural_keys(text):
        '''
        alist.sort(key=natural_keys) sorts in human order
        http://nedbatchelder.com/blog/200712/human_sorting.html
        (See Toothy's implementation in the comments)
        '''
        return [ atoi(c) for c in re.split(r'(\d+)', text) ]

def normalize(string):
        # Code for normalizing the input string.
        # LF and TAB literals, curly braces, and spaces are removed,
        # and all characters are lowercased.
        return ''.join(string.replace('\r', '').replace('\t', '').split(' ')).lower()

def lineNormalize(string):
        # Code for normalizing the input string.
        # LF and TAB literals, curly braces, and spaces are removed,
        # and all characters are lowercased.
        # ref: https://github.com/squizz617/vuddy
        return ''.join(string.replace('\r', '').replace('\t', '').replace('{', '').replace('}', '').split(' ')).lower()

def normalize_forhashing(string):
        # Code for normalizing the input string.
        # LF and TAB literals, curly braces, and spaces are removed,
        # and all characters are lowercased.
        # ref: https://github.com/squizz617/vuddy
        return ''.join(string.replace('\n', '').replace('\r', '').replace('\t', '').replace('{', '').replace('}', '').split(' ')).lower()

def removeComment(string):
    # Code for removing C/C++ style comments. (Imported from ReDeBug.)
    c_regex = re.compile(
        r'(?P<comment>//.*?$|[{}]+)|(?P<multilinecomment>/\*.*?\*/)|(?P<noncomment>\'(\\.|[^\\\'])*\'|"(\\.|[^\\"])*"|.[^/\'"]*)',
        re.DOTALL | re.MULTILINE)
    return ''.join([c.group('noncomment') for c in c_regex.finditer(string) if c.group('noncomment')])

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

def computeTlsh(string):
        string  = str.encode(string)
        hs              = tlsh.forcehash(string)
        return hs

def read_confFiles():
        global vulHashPath
        global vulDict
        global vulInfoDict
        global rVulDict

        global patHashPath
        global patDict
        global patInfoDict
        global rPatDict

        global manual


        global vulBody
        global patBody
        global vulStructInfoDict
        global vulStructBody
        global patStructInfoDict
        global patStructBody
        global allVulBody





        vulBody                 = readFile(vulHashPath)
        patBody                 = readFile(patHashPath)
        vulStructBody   = readFile(vulStructHashPath)
        patStructBody   = readFile(patStructHashPath)
        allVulBody              = readFile(allVulPath)

        vulInfoDict, vulDict = parsing_vulfiles(vulBody)
        patInfoDict, patDict = parsing_vulfiles(patBody)
        vulStructInfoDict, vulStructDict = parsing_vulfiles(vulStructBody)
        patStructInfoDict, patStructDict = parsing_vulfiles(patStructBody)

        for each in vulInfoDict:
                CVEID = each.split('OLD##')[1].split('##')[0]
                if CVEID not in rVulDict:
                        rVulDict[CVEID] = []
                rVulDict[CVEID].append(vulInfoDict[each])

        for each in patInfoDict:
                CVEID = each.split('NEW##')[1].split('##')[0]
                if CVEID not in rPatDict:
                        rPatDict[CVEID] = []
                rPatDict[CVEID].append(patInfoDict[each])

        with open(git2CPE_OSS, 'r', encoding = 'UTF-8') as fp:
                body = ''.join(fp.readlines())
                manual = ast.literal_eval(body)

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

def targetHashing(repoPath, repoName):
        # This function is for hashing C/C++ functions
        # Only consider ".c", ".cc", and ".cpp" files
        possible = (".c", ".cc", ".cpp")

        fileCnt  = 0
        funcCnt  = 0
        lineCnt  = 0

        resDict  = {}
        strDict  = {}
        allVars  = {}
        allMacs  = {}

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

                        if file.endswith(possible):
                                try:
                                        # Execute Ctgas command
                                        functionList    = subprocess.check_output(ctagsPath + ' -f - --kinds-C=* --fields=neKSt "' + filePath + '"', stderr=subprocess.STDOUT, shell=True).decode()

                                        f = open(filePath, 'r', encoding = "UTF-8")

                                        # For parsing functions
                                        lines           = f.readlines()
                                        allFuncs        = str(functionList).split('\n')
                                        func            = re.compile(r'(function)')
                                        struct      = re.compile(r'(struct)')
                                        macro       = re.compile(r'(macro)')
                                        variable    = re.compile(r'(variable)')
                                        member      = re.compile(r'(member)')
                                        number          = re.compile(r'(\d+)')
                                        funcSearch      = re.compile(r'{([\S\s]*)}')
                                        tmpString       = ""
                                        funcBody        = ""
                                        lineCnt         += len(lines)
                                        fileCnt         += 1
                                        macros      = ""
                                        variables   = ""

                                        for i in allFuncs:
                                                elemList        = re.sub(r'[\t\s ]{2,}', '', i)
                                                elemList        = elemList.split('\t')
                                                funcBody        = ""
                                                strBody     = ""

                                                if i != '' and len(elemList) >= 6 and struct.fullmatch(elemList[3]):
                                                        strStartLine     = int(number.search(elemList[4]).group(0))
                                                        strEndLine               = int(number.search(elemList[5]).group(0))

                                                        tmpString       = ""
                                                        tmpString       = tmpString.join(lines[strStartLine - 1 : strEndLine])
                                                        rawBody     = tmpString

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


                                                        f = open(savePath + repoName + '/structs/' + strHash, 'w', encoding = "UTF-8")
                                                        f.write(rawBody)
                                                        f.close()


                                                elif i != '' and len(elemList) >= 8 and func.fullmatch(elemList[3]): #parsing functions
                                                        funcStartLine    = int(number.search(elemList[4]).group(0))
                                                        funcEndLine      = int(number.search(elemList[7]).group(0))
                                                        tmpString       = ""
                                                        tmpString       = tmpString.join(lines[funcStartLine - 1 : funcEndLine])
                                                        rawBody     = tmpString

                                                        if funcSearch.search(tmpString):
                                                                funcBody = funcBody + funcSearch.search(tmpString).group(1)
                                                        else:
                                                                funcBody = " "

                                                        funcBody = removeComment(funcBody)
                                                        funcBody = normalize_forhashing(funcBody)
                                                        funcHash = computeTlsh(funcBody)

                                                        if len(funcHash) == 72 and funcHash.startswith("T1"):
                                                                funcHash = funcHash[2:]
                                                        elif funcHash == "TNULL" or funcHash == "" or funcHash == "NULL":
                                                                continue
                                                        storedPath = filePath.replace(repoPath, "")

                                                        if funcHash not in resDict:
                                                                resDict[funcHash] = []
                                                        resDict[funcHash].append(storedPath)

                                                        f = open(savePath + repoName + '/functions/' + funcHash, 'w', encoding = "UTF-8")
                                                        f.write(rawBody)
                                                        f.close()

                                                        funcCnt += 1

                                                elif i != '' and len(elemList) >= 6 and macro.fullmatch(elemList[3]):
                                                        strStartLine     = int(number.search(elemList[4]).group(0))
                                                        if len(elemList) == 6:
                                                                strEndLine               = int(number.search(elemList[5]).group(0))
                                                        elif len(elemList) == 7:
                                                                strEndLine               = int(number.search(elemList[6]).group(0))
                                                        tmpString       = ""
                                                        tmpString       = tmpString.join(lines[strStartLine - 1 : strEndLine])
                                                        rawBody     = tmpString
                                                        macros          += rawBody

                                                        if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allMacs:
                                                                allMacs[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                                                        allMacs[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

                                                        #print (allMacs)

                                                elif i != '' and len(elemList) >= 6 and variable.fullmatch(elemList[3]):
                                                        strStartLine     = int(number.search(elemList[4]).group(0))
                                                        strEndLine               = int(number.search(elemList[6]).group(0))
                                                        tmpString                = ""
                                                        tmpString                = tmpString.join(lines[strStartLine - 1 : strEndLine])
                                                        rawBody          = tmpString
                                                        variables                += rawBody
                                                        if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allVars:
                                                                allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                                                        allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

                                                elif i != '' and len(elemList) >= 6 and member.fullmatch(elemList[3]):
                                                        strStartLine     = int(number.search(elemList[4]).group(0))
                                                        strEndLine               = int(number.search(elemList[6]).group(0))
                                                        tmpString                = ""
                                                        tmpString                = tmpString.join(lines[strStartLine - 1 : strEndLine])
                                                        rawBody          = tmpString
                                                        variables                += rawBody
                                                        if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allVars:
                                                                allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
                                                        allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

                                except subprocess.CalledProcessError as e:
                                        print("Parser Error:", e)
                                        continue
                                except Exception as e:
                                        print ("Subprocess failed", e)
                                        continue

                                if macros != "":
                                        macroPath = filePath.split(repoPath)[1][1:].replace('/', '@@')
                                        f = open(savePath + repoName + '/macros/' + macroPath, 'w', encoding = "UTF-8")
                                        f.write(macros)
                                        f.close()

                                if variables != "":
                                        varPath = filePath.split(repoPath)[1][1:].replace('/', '@@')
                                        f = open(savePath + repoName + '/variables/' + varPath, 'w', encoding = "UTF-8")
                                        f.write(variables)
                                        f.close()


        f = open(savePath + repoName + '/macro_' + repoName + '.txt', 'w', encoding = "UTF-8")
        for fp in allMacs:
                f.write(fp + '\n')
                for eachVal in allMacs[fp]:
                        f.write('\t' + eachVal.lstrip())
        f.close()

        f = open(savePath + repoName + '/variable_' + repoName + '.txt', 'w', encoding = "UTF-8")
        for fp in allVars:
                f.write(fp + '\n')
                for eachVal in allVars[fp]:
                        f.write('\t' + eachVal.lstrip())
        f.close()

        return strDict, resDict, fileCnt, funcCnt, lineCnt

def representingOSS(targetHashes, oss):
        repDict = {}
        repDict["e"]  = []
        repDict["m"]  = []
        repDict["u"]  = []

        #

        ossDedupleBody = readFile(ossAllFuncs + oss + '.txt')
        ossVersionBody = readFile(ossVerLists + oss + '_ver.txt')
        ossDedupleDict = {}

        verKey = {}
        verKey[oss] = {}


        if ossDedupleBody == "":
                return [], [], []


        for eachLine in ossVersionBody.split('\n'):
                key = eachLine.split(delimeter)[0]
                ver = eachLine.split(delimeter)[1]
                verKey[oss][key] = ver


        for eachLine in ossDedupleBody.split('\n'):
                hashval = eachLine.split('\t')[0]
                verinfo = ast.literal_eval(eachLine.split('\t')[1])
                ossDedupleDict[hashval] = verinfo

        # use score to predict the version it's using
        score = {}

        #print (ossDedupleDict)

        for hashval in ossDedupleDict:
                if hashval in targetHashes:
                        for ver in ossDedupleDict[hashval]:
                                if ver not in score:
                                        score[ver] = 0
                                        #repDict[verKey[oss][str(ver)]] = []
                                score[ver] += 1

        sortedScore = sorted(score.items(), key=lambda x: x[1], reverse=True)

        if len(sortedScore) == 0:
                return [], [], []

        maxVal = sortedScore[0][1]
        verCandidate = []
        for eachScore in sortedScore:
                if eachScore[1] == maxVal:
                        verCandidate.append(eachScore[0])

        if len(verCandidate) == 1:
                prevailingVer = sortedScore[0][0]
        else:
                verCandidate.sort()
                prevailingVer = verCandidate[-1]

        # reuse centris, predict the version
        prevalentVer = verKey[oss][str(prevailingVer)]

        print ("\t[*] Prevalent version: " + prevalentVer)
        print ("\t[*] Now loading OSS functions..")

        verMap  = {}
        if oss in manual:
                cpe_oss = manual[oss] + '.txt'
        else:
                cpe_oss = oss + '.txt'
        mapping = 0

        if cpe_oss in git2CPEMap:
                gitCPEBody = readFile(git2CPEPath + cpe_oss)
                for eachLine in gitCPEBody.split('\n'):
                        orig = eachLine.split(delimeter)[0]
                        conv = eachLine.split(delimeter)[1]
                        verMap[orig] = conv
                        mapping = 1

        #print (verMap)
        #print (prevalentVer)

        if prevalentVer not in verMap:
                return [], [], []

        CVEtarBody      = readFile(CPE2CVEPath + cpe_oss)

        cves    = []

        #print (verMap[prevalentVer])

        # print (prevalentVer)
        # print (verMap)
        try:
                for eachCPEs in CVEtarBody.split('##CVE:')[1:]:
                        #print (eachCPEs)
                        for eachLineCPEs in eachCPEs.split('\n'):
                                if not eachLineCPEs.startswith('\t'):
                                        cveID = eachLineCPEs
                                else:
                                        if mapping == 1:
                                                if '@@' + verMap[prevalentVer] + '@@' in eachLineCPEs:
                                                        cves.append(cveID)
                                                        break
                                        else:
                                                if '@@' + prevalentVer + '@@' in eachLineCPEs:
                                                        cves.append(cveID)
                                                        break
        except:
                return [], [], []

        #       print (cves)

        #print ('yaho')
        allCnt = 0
        cveCnt = 0
        withPatchCnt = 0
        #print (rVulDict)
        if len(cves) > 0:
                allCnt += len(cves)
                for cveVal in cves:
                        if cveVal in rVulDict:
                                withPatchCnt += 1

        if len(cves) == 0:
                print ("\t\t* NO CVEs were detected by version-based approach")
                return [], [], []

        else:
                if (withPatchCnt) == 0:
                        return [], [], []

                vuls = []
                vuls.extend(cves)

                ossHashes = []
                # ossDedupleDict look like this : hashval : [version1, version2, ...]
                for hashval in ossDedupleDict:
                        if prevailingVer in ossDedupleDict[hashval]:
                                ossHashes.append(hashval)

                if len(ossHashes) == 0:
                        return [], [], []

                rRepDict = {}

                for hash in ossHashes:
                        flag = 0

                        if hash in targetHashes:
                                repDict["e"].append(hash)
                                rRepDict[hash] = "e"

                                flag = 1
                        else:
                                for tarHash in targetHashes:
                                        score = tlsh.diffxlen(hash, tarHash)

                                        if int(score) <= 30 and hash not in ossDedupleDict:
                                                repDict["m"].append(hash)
                                                rRepDict[hash] = "m"
                                                flag = 1
                                                break

                        if flag == 0:
                                rRepDict[hash] = "u"
                                repDict["u"].append(hash)

                for hash in ossDedupleDict:
                        if hash not in ossHashes:
                                if hash in targetHashes:
                                        for ver in ossDedupleDict[hash]:
                                                #repDict[verKey[oss][str(ver)]].append(hash)
                                                repDict['e'].append(hash)
                                                rRepDict[hash] = []
                                                rRepDict[hash].append(verKey[oss][str(ver)])

                print("\t\t* " + str(allCnt) + " CVEs were detected (" + str(withPatchCnt) + " have(has) patches)")
                answer_CVEs, new_vuls, totalCVEs = ver_detectVuls(targetHashes, oss, prevalentVer, repDict, rRepDict, vuls, withPatchCnt, CVEtarBody, verMap, mapping)

                return answer_CVEs, new_vuls, totalCVEs


def ver_detectVuls(targetHashes, oss, preVer, repDict, rRepDict, vuls, withPatchCnt, CVEtarBody, verMap, mapping):
        global vulDict
        global rVulDict

        containedCVEs = []
        realVulCnt = 0
        modiVulCnt = 0
        unusedVulCnt = 0
        cveLevelDetect = {}

        answer = []
        answer_CVEs = []

        for vul in vuls:
                #print (vul)
                cveLevelDetect[vul] = {}
                cveLevelDetect[vul]["e"] = 0
                cveLevelDetect[vul]["m"] = 0
                cveLevelDetect[vul]["u"] = 0

                if vul in rVulDict:
                        for vulHash in rVulDict[vul]:

                                vflag = 0
                                if vulHash in rRepDict:
                                        if rRepDict[vulHash] == "e":
                                                realVulCnt += 1
                                                cveLevelDetect[vul]["e"] += 1
                                                vflag = 1
                                                answer.append("EX_" + vul)
                                                answer_CVEs.append(vul)

                                        elif rRepDict[vulHash] == "u":
                                                unusedVulCnt += 1
                                                cveLevelDetect[vul]["u"] += 1

                                else:
                                        for hashVal in rRepDict:
                                                scoreVal = tlsh.diffxlen(hashVal, vulHash)
                                                #if vulHash == "D7C113F8A718721BFEC45BF8626F695287A8735099D98BF37378E31084198D77C9046C":
                                                        #print (scoreVal)
                                                if int(scoreVal) <= 30:
                                                        for eachVer in rRepDict[hashVal]:
                                                                if eachVer not in verMap:
                                                                        continue

                                                                for eachCPEs in CVEtarBody.split('##CVE:')[1:]:
                                                                        if vul not in eachCPEs:
                                                                                continue

                                                                        for eachLineCPEs in eachCPEs.split('\n'):
                                                                                if eachLineCPEs.startswith('\t'):
                                                                                        if mapping == 1:
                                                                                                if '@@' + verMap[eachVer] + '@@' in eachLineCPEs:
                                                                                                        modiVulCnt += 1
                                                                                                        cveLevelDetect[vul]["m"] += 1
                                                                                                        vflag = 1
                                                                                                        answer.append("MD_"+vul)
                                                                                                        answer_CVEs.append(vul)
                                                                                                        break
                                                                                        else:
                                                                                                if '@@' + eachVer + '@@' in eachLineCPEs:
                                                                                                        modiVulCnt += 1
                                                                                                        cveLevelDetect[vul]["m"] += 1
                                                                                                        vflag = 1
                                                                                                        answer.append("MD_"+vul)
                                                                                                        answer_CVEs.append(vul)
                                                                                                        break

                                if vflag == 0:
                                        unusedVulCnt += 1
                                        cveLevelDetect[vul]["u"] += 1


        answer = list(set(answer))

        for vul in cveLevelDetect:
                if cveLevelDetect[vul]['e'] > 0 or cveLevelDetect[vul]['m'] > 0:
                        containedCVEs.append(vul)

        #print (containedCVEs)

        # print ('\t\t* ' + str(len(containedCVEs)) + '/' + str(withPatchCnt) + ' are actually contained in the codebase.')
        # print ('\t\t\t- ' + str(answer))
        # print ('\t\t\t- ' + str(realVulCnt) + ' are exact, ' + str(modiVulCnt) + ' are modi, ' + str(unusedVulCnt) + ' are unused (in function-level).')

        answer_CVEs = list(set(answer_CVEs))
        new_vuls, totalCVEs = codeVerification(targetHashes, oss, preVer, repDict, rRepDict, answer_CVEs, len(containedCVEs))
        return answer_CVEs, new_vuls, totalCVEs


def codeVerification(targetHashes, oss, preVer, repDict, rRepDict, answer_CVEs, CVEcnt):
        global vulDict
        global rVulDict

        print ('\t[+] Detecting CVEs using version-based approach..')

        #print ('\t\t* Filtering..')

        newCVEs = []

        log = ""
        new_vuls = []

        for hash in vulDict:
                for eachPath in vulDict[hash]:
                        CVEID =  eachPath.split('##')[1]

                        if oss.lower() in eachPath.lower():
                                hflag = 0

                                if hash in rRepDict:
                                        if rRepDict[hash] == "e":
                                                new_vuls.append("\t\t\t\t# " + CVEID + '(' + hash + ') exists ("EXACT").')

                                                if CVEID not in answer_CVEs:
                                                        newCVEs.append(CVEID)
                                                hflag = 1

                                if hflag == 0:
                                        tflag = 0
                                        for tarHash in targetHashes:
                                                score = tlsh.diffxlen(hash, tarHash)
                                                if int(score) <= 30:
                                                        #print (tarHash, hash, CVEID)
                                                        #print (patInfoDict)

                                                        #print ('##'.join(eachPath.replace('OLD##', 'NEW##').split('##')[0:5]) in patInfoDict)
                                                        if '##'.join(eachPath.replace('OLD##', 'NEW##').split('##')[0:5]) in patInfoDict:
                                                                #print ('hi')
                                                                hflag = 1
                                                                patScore = tlsh.diffxlen(patInfoDict['##'.join(eachPath.replace('OLD##', 'NEW##').split('##')[0:5])], tarHash)
                                                                #print (patScore)
                                                                #print (int(score))
                                                                if int(patScore) <= 30 and int(patScore) < int(score):
                                                                        new_vuls.append("\t\t\t\t# " + CVEID + '(' + hash + ") is backported!")
                                                                        #log += ("\t\t\t\t# " + CVEID + '(' + hash + ") is backported!\n")
                                                                        break
                                                                else:
                                                                        new_vuls.append("\t\t\t\t# " + CVEID + '(' + hash + ') exists ("MODI").')
                                                                        #log += ("\t\t\t\t# " + CVEID + '(' + hash + ") exists (with modi).\n")
                                                                        if CVEID not in answer_CVEs:
                                                                                newCVEs.append(CVEID)
                                                                                break

                                if hflag == 0:
                                        new_vuls.append("\t\t\t\t# " + CVEID + '(' + hash + ") is not used.")
                                        #log += ("\t\t\t\t# " + CVEID + '(' + hash + ") is not used.\n")

        #print (newCVEs)
        print ('\t\t\t- Filtering logs:')
        #print (log)
        for val in new_vuls:
                print (val)

        totalCVEs = []
        totalCVEs.extend(answer_CVEs)
        totalCVEs.extend(newCVEs)
        totalCVEs = list(set(totalCVEs))
        #print (totalCVEs)
        return new_vuls, totalCVEs



def parsing_vulfiles(body):
        info = {}
        dict = {}

        for each in body.split('\n'):
                #print (each)
                vulHash = each.split('\t')[0]
                vulInfo = each.split('\t')[1]
                vulFile = '##'.join(vulInfo.split('##')[0:5])
                info[vulFile] = vulHash
                #CVEID  = vulInfo.split('##')[1]
                if vulHash not in dict:
                        dict[vulHash] = []
                dict[vulHash].append(vulInfo)

        return info, dict

def code_detectVuls(oss, new_vuls):
        global vulBody
        global patBody
        global vulStructBody
        global patStructBody
        global allVulBody

        global vulInfoDict, vulDict
        global patInfoDict, patDict
        global vulStructInfoDict, vulStructDict
        global patStructInfoDict, patStructDict


        print ("\t[+] Detecting CVEs using code-based approach..")

        ###########################################################
        # The below codes are very long and required refactoring.
        # We will edit the code to be more clear.
        ###########################################################

        vulMacroDict            = {}
        vulInfoMacroDict        = {}
        patMacroDict            = {}
        patInfoMacroDict        = {}

        vulVarDict              = {}
        vulInfoVarDict          = {}
        patVarDict              = {}
        patInfoVarDict          = {}

        allVulInfo                      = {}
        CVEList                         = {}

        discoveredCVEs          = []
        # allVulBody is allVulPath = "./dataset/vulHashes/vulTypes.txt"
        # inside contain the cveid, file name and type(function, macro, variable etc.)
        for each in allVulBody.split('\n'):
                CVE = each.split('##')[1]
                if CVE not in allVulInfo:
                        allVulInfo[CVE] = []
                allVulInfo[CVE].append(each)


                if "##macro##" in each:
                        if "OLD##" in each:
                                vulMacroDict[each] = CVE
                                vulFile = '##'.join(each.split('##')[0:5])
                                vulInfoMacroDict[vulFile] = each
                        elif "NEW##" in each:
                                patMacroDict[each] = CVE
                                vulFile = '##'.join(each.split('##')[0:5])
                                patInfoMacroDict[vulFile] = each

                if "##variable##" in each or "##member##" in each:
                        if "OLD##" in each:
                                vulVarDict[each] = CVE
                                vulFile = '##'.join(each.split('##')[0:5])
                                vulInfoVarDict[vulFile] = each
                        elif "NEW##" in each:
                                patVarDict[each] = CVE
                                vulFile = '##'.join(each.split('##')[0:5])
                                patInfoVarDict[vulFile] = each


        # vulInfoDict, vulDict = parsing_vulfiles(vulBody)
        # patInfoDict, patDict = parsing_vulfiles(patBody)
        # vulStructInfoDict, vulStructDict = parsing_vulfiles(vulStructBody)
        # patStructInfoDict, patStructDict = parsing_vulfiles(patStructBody)

        tarDict = {}
        tarStructDict = {}
        tarMacroDict  = {}
        tarVarDict    = {}
        allTarVar     = []
        allTarMacro   = []

        # tarName = inputRepo
        # tarBody stores the function hashes of the target repository
        tarBody = readFile("./target/" + tarName + "/function_" + tarName + ".txt")
        for each in tarBody.split('\n')[1:]:
                tarHash = each.split('\t')[0]
                tarDict[tarHash] = each.split('\t')[1]

        tarStructBody = readFile("./target/" + tarName + "/struct_" + tarName + ".txt")
        for each in tarStructBody.split('\n')[1:]:
                tarHash = each.split('\t')[0]
                tarStructDict[tarHash] = each.split('\t')[1]

        tarMacroBody = readFile("./target/" + tarName + "/macro_" + tarName + ".txt")
        macrofile = ""
        for each in tarMacroBody.split('\n'):
                flag = 0
                if not each.startswith('\t'):
                        macrofile = each
                        tarMacroDict[macrofile] = []
                        #flag = 1
                if each.startswith('\t'): #and flag == 1:
                        tarMacroDict[macrofile].append(each)
        for val in tarMacroDict:
                for eachmacro in tarMacroDict[val]:
                        allTarMacro.append(normalize(eachmacro))

        tarVarBody = readFile("./target/" + tarName + "/variable_" + tarName + ".txt")
        varfile = ""
        for each in tarVarBody.split('\n'):
                flag = 0
                if not each.startswith('\t'):
                        varfile = each
                        tarVarDict[varfile] = []
                        #flag = 1
                if each.startswith('\t'): #and flag == 1:
                        tarVarDict[varfile].append(each)
        for val in tarVarDict:
                for eachvar in tarVarDict[val]:
                        allTarVar.append(normalize(eachvar))

        #print (oss)
        for VM in patVarDict:
                pack = VM.split('##')[3]
                if pack.split('@@')[1] != oss.split('@@')[1]:
                        continue
                #print (pack)
                vulFile = '##'.join(VM.split('##')[0:5])
                oldFile = vulFile.replace("NEW##", "OLD##")
                CVEID = patVarDict[VM]

                mflag = 0
                pflag = 0
                need2parse = []
                need2parse_plus = []
                # if the only diff is the variable
                # only do a exact match at the line which the variable is modified
                if "variable##" in VM:
                        for eachHunk in VM.split("##variable##")[1:]:
                                multiFlag = 0
                                varLine = eachHunk.split('##')[0]
                                if "@@" in varLine:
                                        # start and end line
                                        varST = varLine.split('@@')[0]
                                        varED = varLine.split('@@')[1]
                                        multiFlag = 1

                                if "PLINE" in VM:
                                        mLinepair = VM.split('##PLINE##')[1]

                                        if "@@" in mLinepair:
                                                mSET = mLinepair.split('@@')
                                                for eachMinusLine in mSET:
                                                        if multiFlag == 0:
                                                                if int(eachMinusLine) == int(varLine):
                                                                        mflag = 1
                                                                        need2parse.append(eachMinusLine)
                                                        else:
                                                                if int(eachMinusLine) >= int(varST) and int(eachMinusLine) <= int(varED):
                                                                        mflag = 1
                                                                        need2parse.append(eachMinusLine)
                                        else:
                                                if multiFlag == 0:
                                                        if int(mLinepair) == int(varLine):
                                                                mflag = 1
                                                                need2parse.append(mLinepair)
                                                else:
                                                        if int(mLinepair) >= int(varST) and int(mLinepair) <= int(varED):
                                                                mflag = 1
                                                                need2parse.append(mLinepair)

                        if oldFile in vulInfoVarDict:
                                for eachHunk in vulInfoVarDict[oldFile].split('##variable##')[1:]:
                                        multiFlag = 0

                                        macroLine = eachHunk.split('##')[0]
                                        if "@@" in macroLine:
                                                macroST = macroLine.split('@@')[0]
                                                macroED = macroLine.split('@@')[1]
                                                multiFlag = 1

                                        if "PLINE" in vulInfoVarDict[oldFile]:
                                                pLinepair = vulInfoVarDict[oldFile].split('##MLINE##')[1]
                                                if "@@" in pLinepair:
                                                        mSET = pLinepair.split('@@')
                                                        for eachPlusLine in mSET:
                                                                if multiFlag == 0:
                                                                        if int(eachPlusLine) == int(macroLine):
                                                                                pflag = 1
                                                                                need2parse_plus.append(eachPlusLine)
                                                                else:
                                                                        if int(eachPlusLine) >= int(macroST) and int(eachPlusLine) <= int(macroED):
                                                                                pflag = 1
                                                                                need2parse_plus.append(eachPlusLine)
                                                else:
                                                        if multiFlag == 0:
                                                                if int(pLinepair) == int(macroLine):
                                                                        pflag = 1
                                                                        need2parse_plus.append(pLinepair)
                                                        else:
                                                                if int(pLinepair) >= int(macroST) and int(pLinepair) <= int(macroED):
                                                                        pflag = 1
                                                                        need2parse_plus.append(pLinepair)

                        if mflag == 0 and pflag == 1:
                                vulFileBody = readFile(vulFilePath + oldFile)
                                for delLine in need2parse_plus:
                                        if len(vulFileBody.split('\n')) > int(delLine):
                                                normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                                if normDel in allTarVar:
                                                        CVEList[CVEID] = ""
                                                        new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("VARIABLE").')
                                                        discoveredCVEs.append(CVEID)
                                                        #new_vuls.append('\t\t###' + CVEID + ' exists ("VARIABLE")')

                        elif mflag == 1 and pflag == 1:
                                vulFileBody = readFile(vulFilePath + oldFile)
                                for delLine in need2parse_plus:
                                        if len(vulFileBody.split('\n')) > int(delLine):
                                                normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                                if normDel in allTarVar:
                                                        newFileBody = readFile(vulFilePath + vulFile)
                                                        for addLine in need2parse:
                                                                if len(newFileBody.split('\n')) > int(addLine):
                                                                        normAdd = normalize(newFileBody.split('\n')[int(addLine)-1])
                                                                        if normAdd not in allTarVar:
                                                                                CVEList[CVEID] = ""
                                                                                new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("VARIABLE").')
                                                                                discoveredCVEs.append(CVEID)
                                                                                #print ('\t\t###' + CVEID + ' exists ("VARIABLE")')
                elif "##member##" in VM:
                        for eachHunk in VM.split("##member##")[1:]:
                                multiFlag = 0
                                varLine = eachHunk.split('##')[0]
                                if "@@" in varLine:
                                        varST = varLine.split('@@')[0]
                                        varED = varLine.split('@@')[1]
                                        multiFlag = 1

                                if "MLINE" in VM:
                                        mLinepair = VM.split('##MLINE##')[1]
                                        if "@@" in mLinepair:
                                                mSET = mLinepair.split('@@')
                                                for eachMinusLine in mSET:
                                                        if multiFlag == 0:
                                                                if int(eachMinusLine) == int(varLine):
                                                                        mflag = 1
                                                                        need2parse.append(eachMinusLine)
                                                        else:
                                                                if int(eachMinusLine) >= int(varST) and int(eachMinusLine) <= int(varED):
                                                                        mflag = 1
                                                                        need2parse.append(eachMinusLine)
                                        else:
                                                if multiFlag == 0:
                                                        if int(mLinepair) == int(varLine):
                                                                mflag = 1
                                                                need2parse.append(mLinepair)
                                                else:
                                                        if int(mLinepair) >= int(varST) and int(mLinepair) <= int(varED):
                                                                mflag = 1
                                                                need2parse.append(mLinepair)

                        if oldFile in vulInfoVarDict:
                                for eachHunk in vulInfoVarDict[oldFile].split('##member##')[1:]:
                                        multiFlag = 0

                                        macroLine = eachHunk.split('##')[0]
                                        if "@@" in macroLine:
                                                macroST = macroLine.split('@@')[0]
                                                macroED = macroLine.split('@@')[1]
                                                multiFlag = 1

                                        if "MLINE" in vulInfoVarDict[oldFile]:
                                                pLinepair = vulInfoVarDict[oldFile].split('##MLINE##')[1]
                                                if "@@" in pLinepair:
                                                        mSET = pLinepair.split('@@')
                                                        for eachPlusLine in mSET:
                                                                if multiFlag == 0:
                                                                        if int(eachPlusLine) == int(macroLine):
                                                                                pflag = 1
                                                                                need2parse_plus.append(eachPlusLine)
                                                                else:
                                                                        if int(eachPlusLine) >= int(macroST) and int(eachPlusLine) <= int(macroED):
                                                                                pflag = 1
                                                                                need2parse_plus.append(eachPlusLine)
                                                else:
                                                        if multiFlag == 0:
                                                                if int(pLinepair) == int(macroLine):
                                                                        pflag = 1
                                                                        need2parse_plus.append(pLinepair)
                                                        else:
                                                                if int(pLinepair) >= int(macroST) and int(pLinepair) <= int(macroED):
                                                                        pflag = 1
                                                                        need2parse_plus.append(pLinepair)

                        if mflag == 0 and pflag == 1:
                                vulFileBody = readFile(vulFilePath + oldFile)
                                for delLine in need2parse_plus:
                                        if len(vulFileBody.split('\n')) > int(delLine):
                                                normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                                if normDel in allTarVar:
                                                        CVEList[CVEID] = ""
                                                        new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("VARIABLE").')
                                                        discoveredCVEs.append(CVEID)
                                                        #print ('\t\t###' + CVEID + ' exists ("VARIABLE")')

                        elif mflag == 1 and pflag == 1:
                                vulFileBody = readFile(vulFilePath + oldFile)
                                for delLine in need2parse_plus:
                                        if len(vulFileBody.split('\n')) > int(delLine):
                                                normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                                if normDel in allTarVar:
                                                        newFileBody = readFile(vulFilePath + vulFile)
                                                        for addLine in need2parse:
                                                                if len(newFileBody.split('\n')) > int(addLine):
                                                                        normAdd = normalize(newFileBody.split('\n')[int(addLine)-1])
                                                                        if normAdd not in allTarVar:
                                                                                CVEList[CVEID] = ""
                                                                                new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("VARIABLE").')
                                                                                discoveredCVEs.append(CVEID)
                                                                                #print ('\t\t###' + CVEID + ' exists ("VARIABLE")')




        for VM in vulVarDict:
                pack = VM.split('##')[3]
                if pack.split('@@')[1] != oss.split('@@')[1]:
                        continue
                vulFile = '##'.join(VM.split('##')[0:5])
                newFile = vulFile.replace("OLD##", "NEW##")
                CVEID = vulVarDict[VM]

                mflag = 0
                pflag = 0
                need2parse = []
                need2parse_plus = []

                if "variable##" in VM:
                        for eachHunk in VM.split("##variable##")[1:]:
                                multiFlag = 0
                                varLine = eachHunk.split('##')[0]
                                if "@@" in varLine:
                                        varST = varLine.split('@@')[0]
                                        varED = varLine.split('@@')[1]
                                        multiFlag = 1

                                if "MLINE" in VM:
                                        mLinepair = VM.split('##MLINE##')[1]
                                        if "@@" in mLinepair:
                                                mSET = mLinepair.split('@@')
                                                for eachMinusLine in mSET:
                                                        if multiFlag == 0:
                                                                if int(eachMinusLine) == int(varLine):
                                                                        mflag = 1
                                                                        need2parse.append(eachMinusLine)
                                                        else:
                                                                if int(eachMinusLine) >= int(varST) and int(eachMinusLine) <= int(varED):
                                                                        mflag = 1
                                                                        need2parse.append(eachMinusLine)
                                        else:
                                                if multiFlag == 0:
                                                        if int(mLinepair) == int(varLine):
                                                                mflag = 1
                                                                need2parse.append(mLinepair)
                                                else:
                                                        if int(mLinepair) >= int(varST) and int(mLinepair) <= int(varED):
                                                                mflag = 1
                                                                need2parse.append(mLinepair)

                        if newFile in patInfoVarDict:
                                for eachHunk in patInfoVarDict[newFile].split('##variable##')[1:]:
                                        multiFlag = 0

                                        macroLine = eachHunk.split('##')[0]
                                        if "@@" in macroLine:
                                                macroST = macroLine.split('@@')[0]
                                                macroED = macroLine.split('@@')[1]
                                                multiFlag = 1

                                        if "PLINE" in patInfoVarDict[newFile]:
                                                pLinepair = patInfoVarDict[newFile].split('##PLINE##')[1]
                                                if "@@" in pLinepair:
                                                        mSET = pLinepair.split('@@')
                                                        for eachPlusLine in mSET:
                                                                if multiFlag == 0:
                                                                        if int(eachPlusLine) == int(macroLine):
                                                                                pflag = 1
                                                                                need2parse_plus.append(eachPlusLine)
                                                                else:
                                                                        if int(eachPlusLine) >= int(macroST) and int(eachPlusLine) <= int(macroED):
                                                                                pflag = 1
                                                                                need2parse_plus.append(eachPlusLine)
                                                else:
                                                        if multiFlag == 0:
                                                                if int(pLinepair) == int(macroLine):
                                                                        pflag = 1
                                                                        need2parse_plus.append(pLinepair)
                                                        else:
                                                                if int(pLinepair) >= int(macroST) and int(pLinepair) <= int(macroED):
                                                                        pflag = 1
                                                                        need2parse_plus.append(pLinepair)

                        if mflag == 1 and pflag == 0:
                                vulFileBody = readFile(vulFilePath + vulFile)
                                for delLine in need2parse:
                                        if len(vulFileBody.split('\n')) > int(delLine):
                                                normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                                if normDel in allTarVar:
                                                        CVEList[CVEID] = ""
                                                        new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("VARIABLE").')
                                                        discoveredCVEs.append(CVEID)
                                                        #print ('\t\t###' + CVEID + ' exists ("VARIABLE")')

                        elif mflag == 1 and pflag == 1:
                                vulFileBody = readFile(vulFilePath + vulFile)
                                for delLine in need2parse:
                                        if len(vulFileBody.split('\n')) > int(delLine):
                                                normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                                if normDel in allTarVar:
                                                        newFileBody = readFile(vulFilePath + newFile)
                                                        for addLine in need2parse_plus:
                                                                if len(newFileBody.split('\n')) > int(addLine):
                                                                        normAdd = normalize(newFileBody.split('\n')[int(addLine)-1])
                                                                        if normAdd not in allTarVar:
                                                                                CVEList[CVEID] = ""
                                                                                new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("VARIABLE").')
                                                                                discoveredCVEs.append(CVEID)
                                                                                #print ('\t\t###' + CVEID + ' exists ("VARIABLE")')

                elif "##member##" in VM:
                        for eachHunk in VM.split("##member##")[1:]:
                                multiFlag = 0
                                varLine = eachHunk.split('##')[0]
                                if "@@" in varLine:
                                        varST = varLine.split('@@')[0]
                                        varED = varLine.split('@@')[1]
                                        multiFlag = 1

                                if "MLINE" in VM:
                                        mLinepair = VM.split('##MLINE##')[1]
                                        if "@@" in mLinepair:
                                                mSET = mLinepair.split('@@')
                                                for eachMinusLine in mSET:
                                                        if multiFlag == 0:
                                                                if int(eachMinusLine) == int(varLine):
                                                                        mflag = 1
                                                                        need2parse.append(eachMinusLine)
                                                        else:
                                                                if int(eachMinusLine) >= int(varST) and int(eachMinusLine) <= int(varED):
                                                                        mflag = 1
                                                                        need2parse.append(eachMinusLine)
                                        else:
                                                if multiFlag == 0:
                                                        if int(mLinepair) == int(varLine):
                                                                mflag = 1
                                                                need2parse.append(mLinepair)
                                                else:
                                                        if int(mLinepair) >= int(varST) and int(mLinepair) <= int(varED):
                                                                mflag = 1
                                                                need2parse.append(mLinepair)

                        if newFile in patInfoVarDict:
                                for eachHunk in patInfoVarDict[newFile].split('##member##')[1:]:
                                        multiFlag = 0

                                        macroLine = eachHunk.split('##')[0]
                                        if "@@" in macroLine:
                                                macroST = macroLine.split('@@')[0]
                                                macroED = macroLine.split('@@')[1]
                                                multiFlag = 1

                                        if "PLINE" in patInfoVarDict[newFile]:
                                                pLinepair = patInfoVarDict[newFile].split('##PLINE##')[1]
                                                if "@@" in pLinepair:
                                                        mSET = pLinepair.split('@@')
                                                        for eachPlusLine in mSET:
                                                                if multiFlag == 0:
                                                                        if int(eachPlusLine) == int(macroLine):
                                                                                pflag = 1
                                                                                need2parse_plus.append(eachPlusLine)
                                                                else:
                                                                        if int(eachPlusLine) >= int(macroST) and int(eachPlusLine) <= int(macroED):
                                                                                pflag = 1
                                                                                need2parse_plus.append(eachPlusLine)
                                                else:
                                                        if multiFlag == 0:
                                                                if int(pLinepair) == int(macroLine):
                                                                        pflag = 1
                                                                        need2parse_plus.append(pLinepair)
                                                        else:
                                                                if int(pLinepair) >= int(macroST) and int(pLinepair) <= int(macroED):
                                                                        pflag = 1
                                                                        need2parse_plus.append(pLinepair)

                        if mflag == 1 and pflag == 0:
                                vulFileBody = readFile(vulFilePath + vulFile)
                                for delLine in need2parse:
                                        if len(vulFileBody.split('\n')) > int(delLine):
                                                normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                                if normDel in allTarVar:
                                                        CVEList[CVEID] = ""
                                                        new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("VARIABLE").')
                                                        discoveredCVEs.append(CVEID)
                                                        #print ('\t\t###' + CVEID + ' exists ("VARIABLE")')

                        elif mflag == 1 and pflag == 1:
                                vulFileBody = readFile(vulFilePath + vulFile)
                                for delLine in need2parse:
                                        if len(vulFileBody.split('\n')) > int(delLine):
                                                normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                                if normDel in allTarVar:
                                                        newFileBody = readFile(vulFilePath + newFile)
                                                        for addLine in need2parse_plus:
                                                                if len(newFileBody.split('\n')) > int(addLine):
                                                                        normAdd = normalize(newFileBody.split('\n')[int(addLine)-1])
                                                                        if normAdd not in allTarVar:
                                                                                CVEList[CVEID] = ""
                                                                                new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("VARIABLE").')
                                                                                discoveredCVEs.append(CVEID)
                                                                                #print ('\t\t###' + CVEID + ' exists ("VARIABLE")')

        for VM in patMacroDict:
                pack = VM.split('##')[3]
                if pack.split('@@')[1] != oss.split('@@')[1]:
                        continue
                vulFile = '##'.join(VM.split('##')[0:5])
                oldFile = vulFile.replace("NEW##", "OLD##")
                CVEID = patMacroDict[VM]

                mflag = 0
                pflag = 0
                need2parse = []
                need2parse_plus = []

                for eachHunk in VM.split("##macro##")[1:]:
                        multiFlag = 0

                        macroLine = eachHunk.split('##')[0]
                        if "@@" in macroLine:
                                macroST = macroLine.split('@@')[0]
                                macroED = macroLine.split('@@')[1]
                                multiFlag = 1

                        if "PLINE" in VM:
                                mLinepair = VM.split('##PLINE##')[1]
                                if "@@" in mLinepair:
                                        mSET = mLinepair.split('@@')
                                        for eachMinusLine in mSET:
                                                if multiFlag == 0:
                                                        if int(eachMinusLine) == int(macroLine):
                                                                mflag = 1
                                                                need2parse.append(eachMinusLine)
                                                else:
                                                        if int(eachMinusLine) >= int(macroST) and int(eachMinusLine) <= int(macroED):
                                                                mflag = 1
                                                                need2parse.append(eachMinusLine)
                                else:
                                        if multiFlag == 0:
                                                if int(mLinepair) == int(macroLine):
                                                        mflag = 1
                                                        need2parse.append(mLinepair)
                                        else:
                                                if int(mLinepair) >= int(macroST) and int(mLinepair) <= int(macroED):
                                                        mflag = 1
                                                        need2parse.append(mLinepair)

                if oldFile in vulInfoMacroDict:
                        for eachHunk in vulInfoMacroDict[oldFile].split('##macro##')[1:]:
                                multiFlag = 0

                                macroLine = eachHunk.split('##')[0]
                                if "@@" in macroLine:
                                        macroST = macroLine.split('@@')[0]
                                        macroED = macroLine.split('@@')[1]
                                        multiFlag = 1

                                if "MLINE" in vulInfoMacroDict[oldFile]:
                                        pLinepair = vulInfoMacroDict[oldFile].split('##MLINE##')[1]
                                        if "@@" in pLinepair:
                                                mSET = pLinepair.split('@@')
                                                for eachPlusLine in mSET:
                                                        if multiFlag == 0:
                                                                if int(eachPlusLine) == int(macroLine):
                                                                        pflag = 1
                                                                        need2parse_plus.append(eachPlusLine)
                                                        else:
                                                                if int(eachPlusLine) >= int(macroST) and int(eachPlusLine) <= int(macroED):
                                                                        pflag = 1
                                                                        need2parse_plus.append(eachPlusLine)
                                        else:
                                                if multiFlag == 0:
                                                        if int(pLinepair) == int(macroLine):
                                                                pflag = 1
                                                                need2parse_plus.append(pLinepair)
                                                else:
                                                        if int(pLinepair) >= int(macroST) and int(pLinepair) <= int(macroED):
                                                                pflag = 1
                                                                need2parse_plus.append(pLinepair)

                if mflag == 0 and pflag == 1:
                        vulFileBody = readFile(vulFilePath + oldFile)
                        for delLine in need2parse_plus:
                                if len(vulFileBody.split('\n')) > int(delLine):
                                        normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                        if normDel in allTarMacro:
                                                CVEList[CVEID] = ""
                                                new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("MACRO").')
                                                discoveredCVEs.append(CVEID)
                                                #print ('\t\t###' + CVEID + ' exists ("MACRO")')

                elif mflag == 1 and pflag == 1:
                        vulFileBody = readFile(vulFilePath + oldFile)
                        for delLine in need2parse_plus:
                                if len(vulFileBody.split('\n')) > int(delLine):
                                        normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                        if normDel in allTarMacro:
                                                newFileBody = readFile(vulFilePath + vulFile)
                                                for addLine in need2parse:
                                                        if len(newFileBody.split('\n')) > int(addLine):
                                                                normAdd = normalize(newFileBody.split('\n')[int(addLine)-1])
                                                                if normAdd not in allTarMacro:
                                                                        CVEList[CVEID] = ""
                                                                        new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("MACRO").')
                                                                        discoveredCVEs.append(CVEID)
                                                                        #print ('\t\t###' + CVEID + ' exists ("MACRO")')

        for VM in vulMacroDict:
                pack = VM.split('##')[3]
                if pack.split('@@')[1] != oss.split('@@')[1]:
                        continue
                vulFile = '##'.join(VM.split('##')[0:5])
                newFile = vulFile.replace("OLD##", "NEW##")
                CVEID = vulMacroDict[VM]

                mflag = 0
                pflag = 0
                need2parse = []
                need2parse_plus = []

                for eachHunk in VM.split("##macro##")[1:]:
                        multiFlag = 0

                        macroLine = eachHunk.split('##')[0]
                        if "@@" in macroLine:
                                macroST = macroLine.split('@@')[0]
                                macroED = macroLine.split('@@')[1]
                                multiFlag = 1

                        if "MLINE" in VM:
                                mLinepair = VM.split('##MLINE##')[1]
                                if "@@" in mLinepair:
                                        mSET = mLinepair.split('@@')
                                        for eachMinusLine in mSET:
                                                if multiFlag == 0:
                                                        if int(eachMinusLine) == int(macroLine):
                                                                mflag = 1
                                                                need2parse.append(eachMinusLine)
                                                else:
                                                        if int(eachMinusLine) >= int(macroST) and int(eachMinusLine) <= int(macroED):
                                                                mflag = 1
                                                                need2parse.append(eachMinusLine)
                                else:
                                        if multiFlag == 0:
                                                if int(mLinepair) == int(macroLine):
                                                        mflag = 1
                                                        need2parse.append(mLinepair)
                                        else:
                                                if int(mLinepair) >= int(macroST) and int(mLinepair) <= int(macroED):
                                                        mflag = 1
                                                        need2parse.append(mLinepair)

                if newFile in patInfoMacroDict:
                        for eachHunk in patInfoMacroDict[newFile].split('##macro##')[1:]:
                                multiFlag = 0

                                macroLine = eachHunk.split('##')[0]
                                if "@@" in macroLine:
                                        macroST = macroLine.split('@@')[0]
                                        macroED = macroLine.split('@@')[1]
                                        multiFlag = 1

                                if "PLINE" in patInfoMacroDict[newFile]:
                                        pLinepair = patInfoMacroDict[newFile].split('##PLINE##')[1]
                                        if "@@" in pLinepair:
                                                mSET = pLinepair.split('@@')
                                                for eachPlusLine in mSET:
                                                        if multiFlag == 0:
                                                                if int(eachPlusLine) == int(macroLine):
                                                                        pflag = 1
                                                                        need2parse_plus.append(eachPlusLine)
                                                        else:
                                                                if int(eachPlusLine) >= int(macroST) and int(eachPlusLine) <= int(macroED):
                                                                        pflag = 1
                                                                        need2parse_plus.append(eachPlusLine)
                                        else:
                                                if multiFlag == 0:
                                                        if int(pLinepair) == int(macroLine):
                                                                pflag = 1
                                                                need2parse_plus.append(pLinepair)
                                                else:
                                                        if int(pLinepair) >= int(macroST) and int(pLinepair) <= int(macroED):
                                                                pflag = 1
                                                                need2parse_plus.append(pLinepair)

                if mflag == 1 and pflag == 0:
                        vulFileBody = readFile(vulFilePath + vulFile)
                        for delLine in need2parse:
                                if len(vulFileBody.split('\n')) > int(delLine):
                                        normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                        if normDel in allTarMacro:
                                                CVEList[CVEID] = ""
                                                new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("MACRO").')
                                                discoveredCVEs.append(CVEID)
                                                #print ('\t\t###' + CVEID + ' exists ("MACRO")')

                elif mflag == 1 and pflag == 1:
                        vulFileBody = readFile(vulFilePath + vulFile)
                        for delLine in need2parse:
                                if len(vulFileBody.split('\n')) > int(delLine):
                                        normDel = normalize(vulFileBody.split('\n')[int(delLine)-1])
                                        if normDel in allTarMacro:
                                                newFileBody = readFile(vulFilePath + newFile)
                                                for addLine in need2parse_plus:
                                                        if len(newFileBody.split('\n')) > int(addLine):
                                                                normAdd = normalize(newFileBody.split('\n')[int(addLine)-1])
                                                                if normAdd not in allTarMacro:
                                                                        CVEList[CVEID] = ""
                                                                        new_vuls.append("\t\t\t\t# " + CVEID + ' exists ("MACRO").')
                                                                        discoveredCVEs.append(CVEID)
                                                                        #print ('\t\t###' + CVEID + ' exists ("MACRO")')

        #print ('ya')
        #print (vulDict)

        # the above is the exact match for the variable and macro and member
        # the below is the line match for the function
        for hashVal in vulDict:
                try:
                        for vulInfo in vulDict[hashVal]:
                                pack = vulInfo.split('##')[3]
                                #print (pack, oss)
                                if pack.split('@@')[1] != oss.split('@@')[1]:
                                        continue

                                #print (pack)
                                vulFile = '##'.join(vulInfo.split('##')[0:5])
                                CVEID =  vulInfo.split('##')[1]
                                #print (CVEID)


                                # not modified, the function is inside of the target file
                                if hashVal in tarDict:
                                        CVEList[CVEID] = ""
                                        new_vuls.append("\t\t\t\t# " + CVEID + '(' + hashVal + ') exists ("EXACT").')
                                        discoveredCVEs.append(CVEID)
                                        #print ('\t\t#' + CVEID + '(' + hashVal + ') exists ("EXACT")')
                                        continue
                                else:
                                        sc_lst = []

                                        for tarHash in tarDict:
                                                score = tlsh.diffxlen(hashVal, tarHash)
                                                # if CVEID == "CVE-2017-12998":
                                                #       sc_lst.append(score)
                                                if int(score) <= 30:
                                                        if CVEID in allVulInfo:
                                                                DONE = 0
                                                                for eachVal in allVulInfo[CVEID]:
                                                                        yFlag = 0
                                                                        if eachVal.startswith(vulFile):
                                                                                if "function" in eachVal:
                                                                                        for eachHunk in eachVal.split("function##")[1:]:
                                                                                                funcLinepair = eachHunk.split('##')[0]
                                                                                                if '@@' not in funcLinepair:
                                                                                                        continue

                                                                                                funcST = funcLinepair.split('@@')[0]
                                                                                                funcED = funcLinepair.split('@@')[1]
                                                                                                if "MLINE##" in eachVal and not eachVal.endswith("MLINE##"):
                                                                                                        flag = 0
                                                                                                        yFlag = 1
                                                                                                        mLinepair = eachVal.split("##MLINE##")[1]

                                                                                                        need2parse = []
                                                                                                        if "@@" in mLinepair:
                                                                                                                mSET = mLinepair.split('@@')

                                                                                                                for eachMinusLine in mSET:
                                                                                                                        # here "eachMinusLine" is only the line number of the function
                                                                                                                        if int(eachMinusLine) >= int(funcST) and int(eachMinusLine) <= int(funcED):
                                                                                                                                flag = 1
                                                                                                                                need2parse.append(eachMinusLine)
                                                                                                        else:
                                                                                                                if int(mLinepair) >= int(funcST) and int(mLinepair) <= int(funcED):
                                                                                                                        flag = 1
                                                                                                                        need2parse.append(mLinepair)

                                                                                                        if flag == 1:

                                                                                                                vulFileBody = readFile(vulFilePath + vulFile)
                                                                                                                vulFuncBodyOrigin = '\n'.join(vulFileBody.split('\n')[int(funcST)-1:int(funcED)])
                                                                                                                for delLine in need2parse:
                                                                                                                        normDel = lineNormalize(vulFileBody.split('\n')[int(delLine)-1])
                                                                                                                        if normDel == "":
                                                                                                                                continue

                                                                                                                        tarTemp = removeComment(readFile(tarFilePath + tarHash))
                                                                                                                        tarFuncBody = []
                                                                                                                        for eachTarLine in tarTemp.split('\n'):
                                                                                                                                tarFuncBody.append(lineNormalize(eachTarLine))

                                                                                                                        vulFuncBody = []
                                                                                                                        vulTemp = removeComment(vulFuncBodyOrigin)
                                                                                                                        for eachVulLine in vulTemp.split('\n'):
                                                                                                                                vulFuncBody.append(lineNormalize(eachVulLine))
                                                                                                                        print(vulFuncBody)
                                                                                                                        if vulFuncBody.count(normDel) != tarFuncBody.count(normDel):
                                                                                                                                flag = 2
                                                                                                        DONE = 1
                                                                                                        if flag == 1:
                                                                                                                CVEList[CVEID] = ""
                                                                                                                new_vuls.append("\t\t\t\t# " + CVEID + '(' + hashVal + ') exists ("MODI").')
                                                                                                                discoveredCVEs.append(CVEID)
                                                                                                                #print ('\t\t#' + CVEID + '(' + hashVal + ') exists ("MODI")')

                                                                if yFlag == 0 and DONE == 0:

                                                                        for eachVal in allVulInfo[CVEID]:
                                                                                newFile = vulFile.replace('OLD##', "NEW##")
                                                                                if eachVal.startswith(newFile):
                                                                                        if "function" in eachVal:
                                                                                                for eachHunk in eachVal.split("function##")[1:]:
                                                                                                        funcLinepair = eachHunk.split('##')[0]
                                                                                                        if '@@' not in funcLinepair:
                                                                                                                continue
                                                                                                        funcST = funcLinepair.split('@@')[0]
                                                                                                        funcED = funcLinepair.split('@@')[1]
                                                                                                        if "PLINE" in eachVal and not eachVal.endswith("PLINE##"):
                                                                                                                flag = 0

                                                                                                                mLinepair = eachVal.split("##PLINE##")[1]
                                                                                                                need2parse = []
                                                                                                                if "@@" in mLinepair:
                                                                                                                        mSET = mLinepair.split('@@')
                                                                                                                        for eachMinusLine in mSET:
                                                                                                                                if int(eachMinusLine) >= int(funcST) and int(eachMinusLine) <= int(funcED):
                                                                                                                                        flag = 1
                                                                                                                                        need2parse.append(eachMinusLine)
                                                                                                                else:
                                                                                                                        if int(mLinepair) >= int(funcST) and int(mLinepair) <= int(funcED):
                                                                                                                                flag = 1
                                                                                                                                need2parse.append(mLinepair)

                                                                                                                if flag == 1:
                                                                                                                        vulFileBody = readFile(vulFilePath + newFile)
                                                                                                                        vulFuncBodyOrigin = '\n'.join(vulFileBody.split('\n')[int(funcST)-1:int(funcED)])
                                                                                                                        for delLine in need2parse:
                                                                                                                                normDel = lineNormalize(vulFileBody.split('\n')[int(delLine)-1])
                                                                                                                                if normDel == "":
                                                                                                                                        continue
                                                                                                                                tarTemp = removeComment(readFile(tarFilePath + tarHash))
                                                                                                                                tarFuncBody = []
                                                                                                                                for eachTarLine in tarTemp.split('\n'):
                                                                                                                                        tarFuncBody.append(lineNormalize(eachTarLine))

                                                                                                                                vulFuncBody = []
                                                                                                                                vulTemp = removeComment(vulFuncBodyOrigin)
                                                                                                                                for eachVulLine in vulTemp.split('\n'):
                                                                                                                                        vulFuncBody.append(lineNormalize(eachVulLine))
                                                                                                                                print(vulFuncBody)
                                                                                                                                if vulFuncBody.count(normDel) == tarFuncBody.count(normDel):
                                                                                                                                        flag = 2

                                                                                                                if flag == 1:
                                                                                                                        CVEList[CVEID] = ""
                                                                                                                        new_vuls.append("\t\t\t\t# " + CVEID + '(' + hashVal + ') exists ("MODI").')
                                                                                                                        discoveredCVEs.append(CVEID)
                                                                                                                        #print ('\t\t#' + CVEID + '(' + hashVal + ') exists ("MODI")')
                                        # if CVEID == "CVE-2017-12998":
                                        #       sc_lst.sort()
                                        #       print (sc_lst)
                except:
                        pass


        for hashVal in vulStructDict:
                try:
                        for vulInfo in vulStructDict[hashVal]:
                                pack = vulInfo.split('##')[3]
                                if pack.split('@@')[1] != oss.split('@@')[1]:
                                        continue

                                vulFile = '##'.join(vulInfo.split('##')[0:5])
                                CVEID =  vulInfo.split('##')[1]

                                if hashVal in tarStructDict:
                                        CVEList[CVEID] = ""
                                        new_vuls.append("\t\t\t\t# " + CVEID + '(' + hashVal + ') exists ("EXACT STRUCT").')
                                        discoveredCVEs.append(CVEID)
                                        #print ('\t\t##' + CVEID + '(' + hashVal + ') exists ("EXACT")')
                                        continue
                                else:
                                        for tarHash in tarStructDict:
                                                score = tlsh.diffxlen(hashVal, tarHash)
                                                if int(score) <= 30:
                                                        if CVEID in allVulInfo:
                                                                DONE = 0
                                                                for eachVal in allVulInfo[CVEID]:
                                                                        yFlag = 0
                                                                        if eachVal.startswith(vulFile):
                                                                                if "struct" in eachVal:
                                                                                        for eachHunk in eachVal.split("struct##")[1:]:
                                                                                                funcLinepair = eachHunk.split('##')[0]
                                                                                                if '@@' not in funcLinepair:
                                                                                                        continue
                                                                                                funcST = funcLinepair.split('@@')[0]
                                                                                                funcED = funcLinepair.split('@@')[1]

                                                                                                if "MLINE" in eachVal and not eachVal.endswith("MLINE##"):
                                                                                                        flag = 0
                                                                                                        yFlag = 1
                                                                                                        mLinepair = eachVal.split("##MLINE##")[1]
                                                                                                        need2parse = []
                                                                                                        if "@@" in mLinepair:
                                                                                                                mSET = mLinepair.split('@@')
                                                                                                                for eachMinusLine in mSET:
                                                                                                                        if int(eachMinusLine) >= int(funcST) and int(eachMinusLine) <= int(funcED):
                                                                                                                                flag = 1
                                                                                                                                need2parse.append(eachMinusLine)
                                                                                                        else:
                                                                                                                if int(mLinepair) >= int(funcST) and int(mLinepair) <= int(funcED):
                                                                                                                        flag = 1
                                                                                                                        need2parse.append(mLinepair)

                                                                                                        if flag == 1:
                                                                                                                vulFileBody = readFile(vulFilePath + vulFile)
                                                                                                                vulFuncBodyOrigin = '\n'.join(vulFileBody.split('\n')[int(funcST)-1:int(funcED)])
                                                                                                                for delLine in need2parse:
                                                                                                                        normDel = lineNormalize(vulFileBody.split('\n')[int(delLine)-1])
                                                                                                                        if normDel == "":
                                                                                                                                continue
                                                                                                                        tarTemp = removeComment(readFile(tarStructFilePath + tarHash))
                                                                                                                        tarFuncBody = []
                                                                                                                        for eachTarLine in tarTemp.split('\n'):
                                                                                                                                tarFuncBody.append(lineNormalize(eachTarLine))

                                                                                                                        vulFuncBody = []
                                                                                                                        vulTemp = removeComment(vulFuncBodyOrigin)
                                                                                                                        for eachVulLine in vulTemp.split('\n'):
                                                                                                                                vulFuncBody.append(lineNormalize(eachVulLine))
                                                                                                                        print(vulFuncBody)
                                                                                                                        if vulFuncBody.count(normDel) != tarFuncBody.count(normDel):
                                                                                                                                flag = 2
                                                                                                        DONE = 1
                                                                                                        if flag == 1:
                                                                                                                CVEList[CVEID] = ""
                                                                                                                new_vuls.append("\t\t\t\t# " + CVEID + '(' + hashVal + ') exists ("MODI STRUCT").')
                                                                                                                discoveredCVEs.append(CVEID)
                                                                                                                #print ('\t\t##' + CVEID + '(' + hashVal + ') exists ("MODI STRU") STRUCT')

                                                                if yFlag == 0 and DONE == 0:
                                                                        for eachVal in allVulInfo[CVEID]:
                                                                                newFile = vulFile.replace('OLD##', "NEW##")
                                                                                if eachVal.startswith(newFile):
                                                                                        if "struct" in eachVal:
                                                                                                for eachHunk in eachVal.split("struct##")[1:]:
                                                                                                        funcLinepair = eachHunk.split('##')[0]
                                                                                                        if '@@' not in funcLinepair:
                                                                                                                continue
                                                                                                        funcST = funcLinepair.split('@@')[0]
                                                                                                        funcED = funcLinepair.split('@@')[1]
                                                                                                        if "PLINE" in eachVal and not eachVal.endswith("PLINE##"):
                                                                                                                flag = 0
                                                                                                                mLinepair = eachVal.split("##PLINE##")[1]
                                                                                                                need2parse = []
                                                                                                                if "@@" in mLinepair:
                                                                                                                        mSET = mLinepair.split('@@')
                                                                                                                        for eachMinusLine in mSET:
                                                                                                                                if int(eachMinusLine) >= int(funcST) and int(eachMinusLine) <= int(funcED):
                                                                                                                                        flag = 1
                                                                                                                                        need2parse.append(eachMinusLine)
                                                                                                                else:
                                                                                                                        if int(mLinepair) >= int(funcST) and int(mLinepair) <= int(funcED):
                                                                                                                                flag = 1
                                                                                                                                need2parse.append(mLinepair)

                                                                                                                if flag == 1:
                                                                                                                        vulFileBody = readFile(vulFilePath + newFile)
                                                                                                                        for delLine in need2parse:
                                                                                                                                normDel = lineNormalize(vulFileBody.split('\n')[int(delLine)-1])
                                                                                                                                if normDel == "":
                                                                                                                                        continue
                                                                                                                                tarTemp = removeComment(readFile(tarStructFilePath + tarHash))
                                                                                                                                tarFuncBody = []
                                                                                                                                for eachTarLine in tarTemp.split('\n'):
                                                                                                                                        tarFuncBody.append(lineNormalize(eachTarLine))

                                                                                                                                vulFuncBody = []
                                                                                                                                vulTemp = removeComment(vulFileBody)
                                                                                                                                for eachVulLine in vulTemp.split('\n'):
                                                                                                                                        vulFuncBody.append(lineNormalize(eachVulLine))
                                                                                                                                print(vulFuncBody)
                                                                                                                                if vulFuncBody.count(normDel) == tarFuncBody.count(normDel):
                                                                                                                                        flag = 2
                                                                                                                #print (flag)

                                                                                                                if flag == 1:
                                                                                                                        if vulFuncBody.count(normDel) == tarFuncBody.count(normDel):
                                                                                                                                new_vuls.append("\t\t\t\t# " + CVEID + '(' + hashVal + ') exists ("MODI STRUCT").')
                                                                                                                                discoveredCVEs.append(CVEID)
                                                                                                                                #print ('\t\t##' + CVEID + '(' + hashVal + ') exists ("MODI" WARNING) STRUCT')
                                                                                                                        CVEList[CVEID] = ""
                                                                                                                        new_vuls.append("\t\t\t\t# " + CVEID + '(' + hashVal + ') exists ("MODI STRUCT").')
                                                                                                                        discoveredCVEs.append(CVEID)
                                                                                                                        #print ('\t\t##' + CVEID + '(' + hashVal + ') exists ("MODI") STRUCT')
                except:
                        pass

        return new_vuls, discoveredCVEs

def main(inputPath, inputRepo, ossListFile):
        global targetHashes
        global tarName

        tarName = inputRepo


        tarFilePath       = "./target/" + inputRepo + "/functions/"
        tarStructFilePath = "./target/" + inputRepo + "/structs/"


        read_confFiles()

        repoName = inputRepo

        print ('[+] Now extracting functions from the target program.')
        print ('[+] This requires several minutes or hours depending on your environment and target software size (this task may print minor warnings).')

        strDict, resDict, fileCnt, funcCnt, lineCnt = targetHashing(inputPath, repoName)
        if len(resDict) > 0:
                title = '\t'.join([repoName, str(fileCnt), str(funcCnt), str(lineCnt)])
                resultFilePath  = savePath + repoName + '/function_' + repoName + '.txt' # Default file name: "fuzzy_OSSname.hidx"
                indexing(resDict, title, resultFilePath)

        if len(strDict) > 0:
                title = repoName
                resultFilePath  = savePath + repoName + '/struct_' + repoName + '.txt' # Default file name: "fuzzy_OSSname.hidx"
                indexing(strDict, title, resultFilePath)

        targetHashes = resDict

        total_vul_cnt = 0


        #
        # targetHashes = {}
        # with open('./target/Filament/function_Filament.txt', 'r', encoding = "UTF-8") as fp:
        #       body = ''.join(fp.readlines())
        #       for each in body.split('\n')[1:]:
        #               if each != '' and each != ' ':
        #                       hashval = each.split('\t')[0]
        #                       hashpat = each.split('\t')[1]
        #                       targetHashes[hashval] = hashpat

        ossBody = readFile(ossListFile)
        for oss in ossBody.split('\n'):
                flag = 0

                #print (targetHashes)

                oss = oss.split(delimeter)[0]
                print ("[+] Target OSS: " + oss)
                #prevalentVer, repDict, rRepDict =
                # if 'curl' not in oss:
                #       continue

                # if 'tcpdump' not in oss:
                #       continue

                if oss in manual:
                # if in manual file, then can do a version based detection
                        print ('(contained in our manual file)')
                        # version based detection
                        answer_CVEs, new_vuls, total_CVEs = representingOSS(targetHashes, oss)
                        # code based detection
                        final_new_vuls, discoveredCVEs = code_detectVuls(oss, new_vuls)


                        final_new_vuls = list(set(final_new_vuls))
                        unique_new_cve = []
                        for eachLog in final_new_vuls:
                                #unique_new_cve.append(eachLog.split('# ')[1].split('(')[0])
                                print (eachLog)
                        if len(final_new_vuls) == 0:
                                print ("\t\t * NO CVEs were detected by code-based approach")
                        unique_new_cve = list(set(discoveredCVEs))
                        unique_new_cve.extend(total_CVEs)
                        total_cve = list(set(unique_new_cve))
                        total_vul_cnt += len(total_cve)
                        #print(total_cve)

                        print ('\n[+] V1SCAN detects ' + str(len(total_cve)) + " unique CVEs in " + oss)
                        print ('===')

                elif oss in nocpe:
                # if not in cpe, then can do a code based detection
                        print ("\t\t* Not contained in CPE (NO CVES)")
                        new_vuls = []
                        final_new_vuls, discoveredCVEs = code_detectVuls(oss, new_vuls)
                        final_new_vuls = list(set(final_new_vuls))

                        unique_new_cve = []
                        for eachLog in final_new_vuls:
                                #unique_new_cve.append(eachLog.split('# ')[1].split('(')[0])
                                print (eachLog)
                        if len(final_new_vuls) == 0:
                                print ("\t\t * NO CVEs were detected by code-based approach")

                        total_cve = list(set(discoveredCVEs))

                        total_vul_cnt += len(total_cve)
                        print ('\n[+] V1SCAN detects ' + str(len(total_cve)) + " unique CVEs in " + oss)
                        print ('===')

                else:
                # do both version based and code based detection
                        for cpes in os.listdir(CPE2CVEPath):
                                if cpes.endswith(oss + ".txt"):
                                        print ('(contained in our cpe database)')
                                        flag = 1
                                        cpe_oss = cpes
                                        answer_CVEs, new_vuls, total_CVEs = representingOSS(targetHashes, oss)
                                        final_new_vuls, discoveredCVEs= code_detectVuls(oss, new_vuls)
                                        final_new_vuls = list(set(final_new_vuls))

                                        unique_new_cve = []
                                        for eachLog in final_new_vuls:
                                                #unique_new_cve.append(eachLog.split('# ')[1].split('(')[0])
                                                print (eachLog)
                                        if len(final_new_vuls) == 0:
                                                print("\t\t * NO CVEs were detected by code-based approach")

                                        unique_new_cve = list(set(discoveredCVEs))
                                        unique_new_cve.extend(total_CVEs)
                                        total_cve = list(set(unique_new_cve))
                                        total_vul_cnt += len(total_cve)
                                        print ('\n[+] V1SCAN detects ' + str(len(total_cve)) + " unique CVEs in " + oss)
                                        print ('===')
                                        break

                        if flag == 0:
                                matflag = 0
                                if "@@" not in oss:
                                        continue
                                onlyName = oss.split('@@')[1]
                                for cpes in os.listdir(CPE2CVEPath):
                                        if onlyName in cpes:
                                                print ('Please add the correct OSS name to "./dataset/Git2CPE_OSS/git2cpe.txt"')
                                                print ("SIMILAR OSS: ", cpes)
                                                matflag = 1
                                                continue

                                if matflag == 0:
                                        print ('\t\t* Not contained in CPE (NO CVES)')
                                        new_vuls = []
                                        final_new_vuls, discoveredCVEs = code_detectVuls(oss, new_vuls)
                                        final_new_vuls = list(set(final_new_vuls))

                                        unique_new_cve = []

                                        for eachLog in final_new_vuls:
                                                #unique_new_cve.append(eachLog.split('# ')[1].split('(')[0])
                                                print (eachLog)
                                        if len(final_new_vuls) == 0:
                                                print("\t\t * NO CVEs were detected by code-based approach")

                                        total_cve = list(set(discoveredCVEs))
                                        total_vul_cnt += len(total_cve)
                                        print ('\n[+] V1SCAN detects ' + str(len(total_cve)) + " unique CVEs in " + oss)
                                        print ('===')

        print ('\n\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+')
        print ('V1SCAN detects a total of ' + str(total_vul_cnt) + ' CVEs (may duplicate) from ' + tarName + '.')
        print ('=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+')



""" EXECUTE """
if __name__ == "__main__":


        # testmode = 1
        # if testmode == 1:
        #       #inputPath   = "./freebsd-src-release-12.2.0/"
        #       #inputRepo      = "FreeBSD"
        #       #ossListFile = "./FreeBSD_OSSList.txt"
        #       # inputPath   = "./arangodb-3.6.12/"
        #       # inputRepo   = "ArangoDB"
        #       # ossListFile = "./ArangoDB_OSSList.txt"
        #       inputPath = "./filament"
        #       inputRepo = "Filament"
        #       ossListFile = "./Filament_OSSList.txt"
        # else:
        inputPath   = sys.argv[1]
        inputRepo   = inputPath.split('/')[-1]
        ossListFile = sys.argv[2]

        print ("V1SCAN tries to detect 1-day vulnerabilities in " + inputRepo)
        main(inputPath, inputRepo, ossListFile)



