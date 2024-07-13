from utils import initialize_llm_analyzer, for_one_cve
from utils import ( STR_PROMPT_CVE_DESCRIPTION_FORMALIZATION,
                    STR_PROMPT_FINAL_PATCH_COMMIT_DETERMINATION,
                    CVEDescriptionAnalysisOutputParser,
                    StrOutputParser )


def main(str_vendor: str, str_product, tuple_version, str_cve_description):
    """
    This function is the main function for collecting security patch.
    :param str_vendor: name of the vendor
    :param str_product: name of the product
    :param tuple_version: affected version info regarding the CVE, the first is the last vulnerable version, and the
                          second is the fixed version; this info can be ontained from NVD
    :param str_cve_description: description of the CVE, which can be obtained from NVD
    :return:
    """
    # initialize chain analyzers
    chain_cve_des_analyzer = initialize_llm_analyzer(STR_PROMPT_CVE_DESCRIPTION_FORMALIZATION,
                                                     output_parser = CVEDescriptionAnalysisOutputParser(),
                                                     str_model="gpt-3.5-turbo")

    chain_commit_final_patch_analyzer = initialize_llm_analyzer(STR_PROMPT_FINAL_PATCH_COMMIT_DETERMINATION,
                                                                output_parser = StrOutputParser(),
                                                                str_model="gpt-4-turbo")

    str_commit = for_one_cve(
        str_vendor,
        str_product,
        str_cve_description,
        tuple_version,
        chain_cve_des_analyzer,
        chain_commit_final_patch_analyzer,
    )

    print(f"3. Target patch commit: {str_commit}")


if __name__ == "__main__":
    # set target CVE info
    # an instance:
    # str_vendor = "wireshark"
    # str_product = "wireshark"
    # tuple_version = ("wireshark-2.0.5", "wireshark-2.0.6")
    # str_cve_description = "epan/dissectors/packet-umts_fp.c in the UMTS FP dissector in Wireshark 2.x before 2.0.6 does not ensure that memory is allocated for certain data structures, which allows remote attackers to cause a denial of service (invalid write access and application crash) via a crafted packe"

    str_vendor = ""
    str_product = ""
    tuple_version = ("", "")
    str_cve_description = ""

    main(str_vendor, str_product, tuple_version, str_cve_description)