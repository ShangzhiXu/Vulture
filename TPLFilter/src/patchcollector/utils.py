import os
import re
import json
import requests

import openai

from langchain_openai import ChatOpenAI
from langchain_core.prompts import ChatPromptTemplate
from langchain_core.output_parsers import StrOutputParser


URL_NVD_BASE = "https://services.nvd.nist.gov/rest/json/cves/2.0"
URL_NVD_KEYWORD_MAP = URL_NVD_BASE + "?keywordSearch={}&keywordExactMatch"

HEADERS_NVD_API_ACCESS = {'Authorization': os.getenv("NVD_API_KEY")}

PATH_CURRENT_DIR = os.getcwd()
PATH_PRODUCT_LOG_DIR = os.path.join(PATH_CURRENT_DIR, "logs")

PATH_PRODUCT_CVE_RETRIEVED_RESULTS_DIR = os.path.join(PATH_CURRENT_DIR, "pecker_CVEs")

# GitHub crawling related
PATH_FOLDER_PATCH_CRAWL_AND_PARSE = os.path.join(os.getcwd(), "product_CVE_patches")
PATH_PATCH_CRAWL_LOG = os.path.join("logs", "product_CVE_patches_log.txt")
GITHUB_API_TOKEN = os.getenv("GITHUB_API_KEY")
URL_PATCH_FILE = "https://api.github.com/repos/{}/{}/contents/{}?ref={}" # .format(owner, repo, path, commit_sha)
PATTERN_COMMIT_URL = r'^https://github\.com/.+?/.+?/commit'
HEADERS_GITHUB_API_ACCESS = {
        'Authorization': f'token {GITHUB_API_TOKEN}',
        'Accept': 'application/vnd.github.v3+json'
    }
HEADERS_GITHUB_API_COMMIT_DIFF = {
    "Authorization": f"token {GITHUB_API_TOKEN}",
    "Accept": "application/vnd.github.v3.diff"
}

# LLM-based analysis
OPENAI_API_TOKEN = os.getenv("OPENAI_API_KEY")


STR_PROMPT_CVE_DESCRIPTION_FORMALIZATION = """
Following is a CVE description, analyze the CVE details based on the description to extract following information:
1. affected function name: xxx
2. affected variable: xxx
3. affected file: xxx
If one of the information is not contained in the description, just use "None" to indicate. Pay attention don't change the format, including name and even the case.
"""


STR_PROMPT_FINAL_PATCH_COMMIT_DETERMINATION = """
Following is the candidate commits (including commit hash, commit message, commit diff file) regarding given CVE, analyze which commit is actually the patch commit for the CVE.
Just return the commit hash of the actual patch commit. If all the commits are not the CVE-related patch commit, just return "None".
For the result, just return the commit hash if the CVE-related patch commit exists; otherwise just return "None".
"""


class CommitsAnalysisOutputParser(StrOutputParser):
    def parse(self, text):
        list_result = json.loads(text)

        return list_result


class CVEDescriptionAnalysisOutputParser(StrOutputParser):
    def parse(self, text):
        list_str_result = text.split("\n")

        dict_cve_des_formalization = {}

        for str_result in list_str_result:
            str_result = re.sub(r"^\d+\.\s*", "", str_result)
            str_key, str_value = str_result.split(":")[0].strip(), re.sub(r"\([^)]*\)", "", str_result.split(":")[1].strip())
            dict_cve_des_formalization[str_key] = str_value

        if dict_cve_des_formalization["affected function name"].lower() != "none":
            # in some CVE description, the contained file can be complete path, which might compromise further analysis
            dict_cve_des_formalization["affected function name"] = os.path.basename(dict_cve_des_formalization["affected function name"])

        if dict_cve_des_formalization["affected file"].lower() != "none":
            dict_cve_des_formalization["affected file"] = os.path.basename(
                dict_cve_des_formalization["affected file"])
            list_affected_file = dict_cve_des_formalization["affected file"].split(" ")
            if len(list_affected_file) > 1:
                dict_cve_des_formalization["affected file"] = dict_cve_des_formalization["affected file"].split(" ")[0]

        # clean all the contents
        dict_cve_des_formalization["affected function name"] = re.sub(r"[\'\"`]", "", dict_cve_des_formalization["affected function name"]).strip()
        dict_cve_des_formalization["affected file"] = re.sub(r"[\'\"`]", "", dict_cve_des_formalization["affected file"]).strip()
        dict_cve_des_formalization["affected variable"] = re.sub(r"[\'\"`]", "", dict_cve_des_formalization["affected variable"]).strip()

        return dict_cve_des_formalization


def initialize_llm_analyzer(str_prompt: str, output_parser = CommitsAnalysisOutputParser(), str_model: str = "gpt-3.5-turbo-0125"):
    # initialize the base llm
    base_model = ChatOpenAI(
        api_key = OPENAI_API_TOKEN,
        model = str_model
    )

    # set the prompt
    prompt = ChatPromptTemplate.from_messages([
        ("system", str_prompt),
        ("user", "{commits}")
    ])

    # initialize the chain
    chain = prompt | base_model | output_parser

    return chain


def get_commit_detail(str_vendor: str, str_product: str, str_hash: str) -> str:
    """
    Crawl the commit detail to compare CVE description and commit contents.
    :param str_vendor: vendor name, used for crawling
    :param str_product: product name, used for crawling
    :param str_hash: commit hash, used for crawling
    :return: commit diff, containing affected file, affected function, and affected variable
    """
    url = f"https://api.github.com/repos/{str_vendor}/{str_product}/commits/{str_hash}"
    response = requests.get(url, headers=HEADERS_GITHUB_API_COMMIT_DIFF)

    if response.status_code != 200:
        print("Error fetching commit!")
        return ""

    str_commit_diff = response.text
    # print(str_commit_diff)

    return str_commit_diff


def analyze_target_slice(str_vendor, str_product, str_commit_before: str, str_commit_after: str, dict_cve_description: dict) -> bool:
    url = f"https://api.github.com/repos/{str_vendor}/{str_product}/compare/{str_commit_before}...{str_commit_after}"
    response = requests.get(url, headers=HEADERS_GITHUB_API_COMMIT_DIFF)

    bool_target_slice = False

    if response.status_code == 200:
        str_commit_diff = response.text

    else:
        print(f"Failed to fetch data: {response.status_code}, {response.text}")
        return bool_target_slice

    # extract CVE description details
    str_cve_affected_function = dict_cve_description["affected function name"]
    str_cve_affected_file = dict_cve_description["affected file"]
    str_cve_affected_variable = dict_cve_description["affected variable"]

    # align the CVE description with candidate commits
    if (str_cve_affected_function.lower() != "none" and str_cve_affected_function in str_commit_diff) or \
            (str_cve_affected_file.lower() != "none") and str_cve_affected_file in str_commit_diff:
        bool_target_slice = True
    if str_cve_affected_function.lower() == "none" and str_cve_affected_file.lower() == "none":
        if (str_cve_affected_variable.lower() != "none" and str_cve_affected_variable in str_commit_diff):
            bool_target_slice = True

    return bool_target_slice


def get_commits_between_tags(str_vendor, str_product, str_version_before, str_version_after):
    """
    This function is to retrieve the commits between the given tags.
    :param str_vendor: vendor name, which is a string
    :param str_product: product name, which is a string
    :param str_version_before: the last vulnerable version
    :param str_version_after: the fixed version
    :return:
    """
    list_dict_commit_between_tag = []
    page = 1
    while True:
        url = f"https://api.github.com/repos/{str_vendor}/{str_product}/compare/{str_version_before}...{str_version_after}"
        params = {'per_page': 100, 'page': page}
        response = requests.get(url, params=params, headers=HEADERS_GITHUB_API_ACCESS)
        data = response.json()
        list_dict_commit_between_tag.extend(data["commits"])
        if 'next' not in response.links:
            break
        page += 1

    return list_dict_commit_between_tag


def sub_slice_commit_filter(list_dict_commit: list, str_vendor, str_product, dict_cve_description, k_sub_slice_size: int = 20):
    # if the number of commits between given range is smaller than threshold, directly return
    if len(list_dict_commit) < k_sub_slice_size:
        return list_dict_commit

    # initialize return value
    list_dict_candidate_commit = []

    # each tuple denotes (n_flag_index, dict_flag_commit)
    list_tuple_flag_commit = [(index * k_sub_slice_size, value) for index, value in enumerate(list_dict_commit[0::k_sub_slice_size])]

    # deal with the last sub slice
    if list_tuple_flag_commit[-1][0] != len(list_dict_commit) -1:
        list_tuple_flag_commit.append((len(list_dict_commit) -1, list_dict_commit[-1]))

    for i_flag, tuple_flag_commit in enumerate(list_tuple_flag_commit[:-1]):
        str_commit_before = tuple_flag_commit[1]["sha"]
        str_commit_after = list_tuple_flag_commit[i_flag + 1][1]["sha"]

        bool_target = analyze_target_slice(
            str_vendor,
            str_product,
            str_commit_before,
            str_commit_after,
            dict_cve_description
        )

        if bool_target:
            index_commit_before = list_tuple_flag_commit[i_flag][0]
            index_commit_after = list_tuple_flag_commit[i_flag + 1][0]

            list_dict_candidate_commit.extend(list_dict_commit[index_commit_before + 1:index_commit_after + 1])


    return list_dict_candidate_commit


def align_single_cve_commit(
        str_vendor: str,
        str_product: str,
        str_cve_description: str,
        tuple_version: tuple,
        chain_cve_des_analyzer,
        chain_commit_final_patch_analyzer,
    ) -> str:
    """
    Retrieve the patch commit regarding a single CVE.
    :param str_vendor: vendor name of the product
    :param str_product: product name
    :param str_cve_description: CVE description that is a string
    :param tuple_version: versions saved in a tuple, the first element is the last vulnerable version, and the second is the fixed version
    :param chain_cve_des_analyzer: chain for extracting vulnerable elements from the CVE description
    :param chain_commit_final_patch_analyzer: chain for actual patch commit determination
    :return: the target patch commit
    """

    # extract vulnerable elements from CVE description
    dict_cve_description = chain_cve_des_analyzer.invoke(str_cve_description)
    print("0. Vulnerable elements: ")
    print(dict_cve_description)
    print()

    # get all released version
    str_cve_end_version_last = tuple_version[0]
    str_cve_end_version = tuple_version[1]

    # print(f"Version before: {str_cve_end_version_last}, Version after: {str_cve_end_version}")

    # get all commits between the CVE end version and the one before the end version
    list_dict_between_commits = get_commits_between_tags(str_vendor, str_product, str_cve_end_version_last, str_cve_end_version)
    print(f"1. Number of all commits within target version range: {len(list_dict_between_commits)}\n")

    # develop sub-slice filter
    list_dict_candidate_commit = sub_slice_commit_filter(
        list_dict_between_commits,
        str_vendor,
        str_product,
        dict_cve_description,
        k_sub_slice_size = 20
    )

    list_tuple_candidate_patch_commit_message = []
    print("2. Candidate commits:")
    for i_commit, dict_commit in enumerate(list_dict_candidate_commit):
        # access all candidate commits for details
        str_commit_diff = get_commit_detail(str_vendor, str_product, dict_commit["sha"])

        # extract CVE description details
        str_cve_affected_function = dict_cve_description["affected function name"]
        str_cve_affected_file = dict_cve_description["affected file"]
        str_cve_affected_variable = dict_cve_description["affected variable"]

        # align the CVE description with candidate commits
        if (str_cve_affected_function.lower() != "none" and str_cve_affected_function in str_commit_diff) or \
                (str_cve_affected_file.lower() != "none") and str_cve_affected_file in str_commit_diff or \
                (str_cve_affected_variable.lower() != "none" and str_cve_affected_variable in str_commit_diff):

            list_tuple_candidate_patch_commit_message.append((dict_commit["sha"], dict_commit["commit"]["message"], str_commit_diff))

            print(dict_commit["sha"])

    if len(list_tuple_candidate_patch_commit_message) == 0 and len(list_dict_candidate_commit) < 15:
        # non-valid description and the number of candidate is relatively low
        for dict_commit in list_dict_candidate_commit:

            list_tuple_candidate_patch_commit_message.append(
                (dict_commit["sha"], dict_commit["commit"]["message"], str_commit_diff))

    # develop final analyze regarding the candidate patch commits
    str_candidate_patch_commit_details = ""
    print(f"Number of final candidate commits: {len(list_tuple_candidate_patch_commit_message)}\n")
    for i_commit, tuple_candidate_patch_commit_message in enumerate(list_tuple_candidate_patch_commit_message):
        str_temp_patch_commit_details = f"{i_commit + 1}. commit hash: {tuple_candidate_patch_commit_message[0]}, commit message: {tuple_candidate_patch_commit_message[1]}, commit diff: {tuple_candidate_patch_commit_message[2]}\n"
        str_candidate_patch_commit_details += str_temp_patch_commit_details

    str_final_analyze_prompt = """
    CVE description: {}
    Commit details: {}""".format(str_cve_description, str_candidate_patch_commit_details)
    try:
        str_patch_commit_hash = chain_commit_final_patch_analyzer.invoke(str_final_analyze_prompt)
    except openai.BadRequestError as e:
        # commit diff file is too long
        str_candidate_patch_commit_details = ""
        for i_commit, tuple_candidate_patch_commit_message in enumerate(list_tuple_candidate_patch_commit_message):
            str_temp_patch_commit_details = f"{i_commit + 1}. commit hash: {tuple_candidate_patch_commit_message[0]}, commit message: {tuple_candidate_patch_commit_message[1]}\n"
            str_candidate_patch_commit_details += str_temp_patch_commit_details
        str_final_analyze_prompt = """
            CVE description: {}
            Commit details: {}""".format(str_cve_description, str_candidate_patch_commit_details)

        str_patch_commit_hash = chain_commit_final_patch_analyzer.invoke(str_final_analyze_prompt)

    return str_patch_commit_hash


def for_one_cve(
        str_vendor,
        str_product,
        str_cve_description,
        tuple_version,
        chain_cve_des_analyzer,
        chain_commit_final_patch_analyzer,
    ):

    str_patch_commit = align_single_cve_commit(
        str_vendor,
        str_product,
        str_cve_description,
        tuple_version,
        chain_cve_des_analyzer,
        chain_commit_final_patch_analyzer,
    )

    return str_patch_commit