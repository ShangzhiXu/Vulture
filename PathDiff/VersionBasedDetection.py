import time
import subprocess
import random
import os
import sys
import tlsh
import ast
import json
import re

savePath = "./target/"
ctagsPath = "/usr/local/bin/ctags"
databasePath = "./product_CVE_patches/"

function_code = """
{
  /* When sending a SMTP payload we must detect CRLF. sequences making sure
     they are sent as CRLF.. instead, as a . on the beginning of a line will
     be deleted by the server when not part of an EOB terminator and a
     genuine CRLF.CRLF which isn't escaped will wrongly be detected as end of
     data by the server
  */
  ssize_t i;
  ssize_t si;
  struct Curl_easy *data = conn->data;
  struct SMTP *smtp = data->req.protop;
  char *scratch = data->state.scratch;
  char *newscratch = NULL;
  char *oldscratch = NULL;
  size_t eob_sent;

  /* Do we need to allocate a scratch buffer? */
  if(!scratch || data->set.crlf) {
    oldscratch = scratch;

    scratch = newscratch = malloc(2 * data->set.buffer_size);
    if(!newscratch) {
      failf(data, "Failed to alloc scratch buffer!");

      return CURLE_OUT_OF_MEMORY;
    }
  }

  /* Have we already sent part of the EOB? */
  eob_sent = smtp->eob;

  /* This loop can be improved by some kind of Boyer-Moore style of
     approach but that is saved for later... */
  for(i = 0, si = 0; i < nread; i++) {
    if(SMTP_EOB[smtp->eob] == data->req.upload_fromhere[i]) {
      smtp->eob++;

      /* Is the EOB potentially the terminating CRLF? */
      if(2 == smtp->eob || SMTP_EOB_LEN == smtp->eob)
        smtp->trailing_crlf = TRUE;
      else
        smtp->trailing_crlf = FALSE;
    }
    else if(smtp->eob) {
      /* A previous substring matched so output that first */
      memcpy(&scratch[si], &SMTP_EOB[eob_sent], smtp->eob - eob_sent);
      si += smtp->eob - eob_sent;

      /* Then compare the first byte */
      if(SMTP_EOB[0] == data->req.upload_fromhere[i])
        smtp->eob = 1;
      else
        smtp->eob = 0;

      eob_sent = 0;

      /* Reset the trailing CRLF flag as there was more data */
      smtp->trailing_crlf = FALSE;
    }

    /* Do we have a match for CRLF. as per RFC-5321, sect. 4.5.2 */
    if(SMTP_EOB_FIND_LEN == smtp->eob) {
      /* Copy the replacement data to the target buffer */
      memcpy(&scratch[si], &SMTP_EOB_REPL[eob_sent],
             SMTP_EOB_REPL_LEN - eob_sent);
      si += SMTP_EOB_REPL_LEN - eob_sent;
      smtp->eob = 0;
      eob_sent = 0;
    }
    else if(!smtp->eob)
      scratch[si++] = data->req.upload_fromhere[i];
  }

  if(smtp->eob - eob_sent) {
    /* A substring matched before processing ended so output that now */
    memcpy(&scratch[si], &SMTP_EOB[eob_sent], smtp->eob - eob_sent);
    si += smtp->eob - eob_sent;
  }

  /* Only use the new buffer if we replaced something */
  if(si != nread) {
    /* Upload from the new (replaced) buffer instead */
    data->req.upload_fromhere = scratch;

    /* Save the buffer so it can be freed later */
    data->state.scratch = scratch;

    /* Free the old scratch buffer */
    free(oldscratch);

    /* Set the new amount too */
    data->req.upload_present = si;
  }
  else
    free(newscratch);

  return CURLE_OK;
}
    """



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

def fileHashing(filePath,repoPath, repoName):
    print(filePath)

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


    #try:
    # Execute Ctgas command
    functionList = subprocess.check_output(
        ctagsPath + ' -f - --kinds-C=* --fields=neKSt "' + filePath + '"', stderr=subprocess.STDOUT,
        shell=True).decode()

    f = open(filePath, 'r', encoding="UTF-8")

    # For parsing functions
    lines = f.readlines()
    allFuncs = str(functionList).split('\n')
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

    for i in allFuncs:
        elemList = re.sub(r'[\t\s ]{2,}', '', i)
        elemList = elemList.split('\t')
        funcBody = ""
        strBody = ""

        if i != '' and len(elemList) >= 6 and struct.fullmatch(elemList[3]):
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
            print(funcBody)

            funcHash = computeTlsh(funcBody)


            if len(funcHash) == 72 and funcHash.startswith("T1"):
                funcHash = funcHash[2:]
            elif funcHash == "TNULL" or funcHash == "" or funcHash == "NULL":
                continue
            storedPath = filePath.replace(repoPath, "")

            if funcHash not in resDict:
                resDict[funcHash] = []
            resDict[funcHash].append(storedPath)
            print(funcHash)
            print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>")
            f = open(savePath + repoName + '/functions/' + funcHash, 'w', encoding="UTF-8")
            f.write(rawBody)
            f.close()

            funcCnt += 1

        elif i != '' and len(elemList) >= 6 and macro.fullmatch(elemList[3]):
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

        elif i != '' and len(elemList) >= 6 and variable.fullmatch(elemList[3]):
            strStartLine = int(number.search(elemList[4]).group(0))
            strEndLine = int(number.search(elemList[6]).group(0))
            tmpString = ""
            tmpString = tmpString.join(lines[strStartLine - 1: strEndLine])
            rawBody = tmpString
            variables += rawBody
            if filePath.split(repoPath)[1][1:].replace('/', '@@') not in allVars:
                allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')] = []
            allVars[filePath.split(repoPath)[1][1:].replace('/', '@@')].append(rawBody)

        elif i != '' and len(elemList) >= 6 and member.fullmatch(elemList[3]):
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

    return strDict, resDict, fileCnt, funcCnt, lineCnt
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

            if file == "smtp.c":
                tempStrDict, tempResDict, tempFileCnt, tempFuncCnt, tempLineCnt = fileHashing(filePath,repoPath, repoName)
                strDict.update(tempStrDict)
                resDict.update(tempResDict)
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

    return strDict, resDict, fileCnt, funcCnt, lineCnt

def CPEjsonParser(jsonFile):
    parsed_data = []
    with open(jsonFile, 'r') as f:
        data = json.load(f)

    for entry in data:
        print(entry)
        parsed_entry = {
            "CVE_ID": entry['CVE_id'],
            "Affected_Versions": entry['CPE'],
            "Current_Hash": entry['current_hash'],
            "Parent_Hash": entry['parent_hash'],
            "Modified_Items": entry['modified_items']
        }
        parsed_data.append(parsed_entry)

    return parsed_data

def getReuseInfo(repoName):
    with open('modified_result_without_funcTizenRT', 'r') as f:
        reused_OSSes = f.readlines()
    #print(reused_OSSes)



    reuse_info = {}
    for oss in reused_OSSes:
        #print(oss)
        oss = oss.strip("\n").strip()
        version = oss.split(' ')[1]
        oss = oss.split(' ')[0]
        oss_name = oss.split('@@')[0]
        oss_developer = oss.split('@@')[1]

        reuse_info[oss_name] = {
            "developer": oss_developer,
            "version": version
        }

    #print("Reuse Info:", reuse_info)

    return reuse_info

def getFunctionHash(function_code):
    funcBody = removeComment(function_code)
    funcBody = normalize_forhashing(funcBody)
    print("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<")
    print(funcBody)

    funcHash = computeTlsh(funcBody)

    if len(funcHash) == 72 and funcHash.startswith("T1"):
        funcHash = funcHash[2:]
    elif funcHash == "TNULL" or funcHash == "" or funcHash == "NULL":
        return None
    #print("Function Hash:", funcHash)

    return funcHash


def normalize_version(version_string):
    # Replace any non-digit and non-dot characters (like underscores, dashes) with a dot
    normalized_version = re.sub(r'[^0-9\.]', '.', version_string)
    # Remove repeated dots and trim leading/trailing dots
    normalized_version = re.sub(r'\.+', '.', normalized_version).strip('.')
    return normalized_version
def getAffectedCVEs(reuse_info, resDict, repoName):

    affectedCVEs = {}
    for reuse_name in reuse_info.keys():
        # walk through all the subdirs of the reused OSS
        prevelant_versions = normalize_version(reuse_info[reuse_name]["version"])
        #print("Prevelant Versions:", prevelant_versions)
        OSS_path = databasePath + "/" + reuse_info[reuse_name]["developer"] + "_" + reuse_name
        try:
            if not reuse_name == "curl":
                continue
            for CVE in os.listdir(OSS_path):
                if not CVE == "CVE-2018-0500":
                    continue

                # visit all the json file under the CVE directory
                for jsonFile in os.listdir(OSS_path + "/" + CVE):
                    if jsonFile.endswith(".json"):
                        print(jsonFile)
                        parsed_data = CPEjsonParser(OSS_path + "/" + CVE + "/" + jsonFile)
                        for entry in parsed_data:
                            if prevelant_versions in entry["Affected_Versions"]:
                                candidateCVE = reuse_info[reuse_name]["developer"] + "_" + reuse_name  +"/"+ CVE
                                if candidateCVE not in affectedCVEs:
                                    affectedCVEs[candidateCVE] = []
                                affectedCVEs[candidateCVE].append(entry)
        except FileNotFoundError as e:
            print("No such file or directory:",  e)
            continue
    return affectedCVEs
def versionBasedDetection(reuse_info, resDict,inputPath, repoName):

    affectedCVEs = getAffectedCVEs(reuse_info, resDict, repoName)
    print("Affected CVEs:", affectedCVEs)
    for CVE in affectedCVEs.keys():
        pre_patch_code = ""
        post_patch_code = ""
        for modified_file in affectedCVEs[CVE][0]["Modified_Items"]:
            pre_patch_code = readFile(databasePath + CVE + "/0_patch_before/" + modified_file)
            post_patch_code = readFile(databasePath + CVE + "/0_patch_after/" + modified_file)
            print("=====================================")
            strDict, resDict, fileCnt, funcCnt, lineCnt = fileHashing(databasePath + CVE + "/0_patch_before/" + modified_file, databasePath + CVE + "/0_patch_before" , repoName)
            print("resdict:", resDict)
            targetHash = getFunctionHash(function_code)
            for hash in resDict:
                score = tlsh.diff(targetHash, hash)
                print("Score:", score)
                if score <= 100:
                    print("Similar Function Found:", resDict[hash])
                    print("Similarity Score:", score)





if __name__ == '__main__':
    inputPath = "/home/shangzhixu/shangzhi/Centris-public/src/detector/target/TizenRT"
    repoName = "TizenRT"

    strDict, resDict, fileCnt, funcCnt, lineCnt = targetHashing(inputPath, repoName)

    reuse_info = getReuseInfo(repoName)

    versionBasedDetection(reuse_info, resDict,inputPath, repoName)

    # for hash in resDict:
    #     score = tlsh.diff(funcHash, hash)
    #     print("Score:", score)
    #     if score <= 100:
    #         print("Similar Function Found:", resDict[hash])
    #         print("Similarity Score:", score)