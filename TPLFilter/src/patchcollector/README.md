## PatchCollector

This tool is for collecting security patch from GitHub commits regarding specific CVEs that are reported towards open-source projects (maintained on GitHub).



#### Environment

The environment file is provided with `environment.yml`, which can help to create the conda environment by executing:

 `conda evn create -f environment.yml`.



#### Settings

This tool relies on GitHub API access and NVD API access, also with employing OpenAI API for analysis. Correspondingly, the following API keys are required, which are suggested to add to the environment variables.

* ``GITHUB_API_KEY = "your_github_access_api_key"``
* ``NVD_API_KEY = "your_nvd_access_api_key"``
* ``OPENAI_API_KEY = "your_openai_api_key"``



#### Security Patch Collection

Set arguments regarding specific CVE in `collect_patch.py`; then run `collect_patch.py`

For instance (for `CVE-2016-7178`):

```python
# set target CVE info

str_vendor = "wireshark"
str_product = "wireshark"
tuple_version = ("wireshark-2.0.5", "wireshark-2.0.6")
str_cve_description = "epan/dissectors/packet-umts_fp.c in the UMTS FP dissector in Wireshark 2.x before 2.0.6 does not ensure that memory is allocated for certain data structures, which allows remote attackers to cause a denial of service (invalid write access and application crash) via a crafted packe"
```

