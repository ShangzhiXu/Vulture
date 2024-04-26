import os
import subprocess
import re
import shutil

if __name__ == "__main__":
    # the work dir should be in centris-public/src/
    # step1 collect 10 repos for analysis
    print("[+] Collecting 10 repos for analysis")
    os.chdir("./osscollector")
    os.system("pwd")
    for path, dir, files in os.walk("../../database"):
        for file in files:
            try:
                os.chdir("../osscollector")
                data_filePath = os.path.join(path, file)
                print(f"Running OSS_Collector on {data_filePath}")
                has_visited = False
                with open("visit.txt", "r") as f:
                    for line in f.readlines():
                        if line.strip() == data_filePath:
                            print(f"{data_filePath} has been visited")
                            has_visited = True
                            break
                if has_visited:
                    continue
                os.system(f"cp {data_filePath} ./sample")
                print(f"visting {data_filePath}")
                os.system(f"python3 OSS_Collector.py")
                # write into visit.txt
                os.system(f"echo {data_filePath} >> visit.txt")
                shutil.rmtree("repo_src")
                # # step2 run the preprocessor on the 10 repos
                # print("[+] Running preprocessor on the 10 repos")
                # os.chdir("../preprocessor")
                # run_preprocessor = subprocess.check_output(
                #     "python3 Preprocessor_full.py", stderr=subprocess.STDOUT,
                #     shell=True).decode()
                #
                # # step3 run the analysis on each target repo
                # print("[+] Running analysis on each target repo")
                # os.chdir("../detector")
                # with os.scandir("../../target") as entries:
                #     for entry in entries:
                #         if entry.is_dir():
                #             full_path = entry.path
                #             print(f"Run script in: {full_path}")
                #             command = f"python3 Detector.py {full_path}"
                #             run_detector = subprocess.check_output(
                #                 command, stderr=subprocess.STDOUT,
                #                 shell=True).decode()
                #
                # # step4 collect the results and delete the 10 repos
                # print("[+] Collecting the results and deleting the 10 repos")
                # os.chdir("../osscollector")
                # #shutil.rmtree("repo_date")
                # #shutil.rmtree("repo_functions")
                # shutil.rmtree("repo_src")
                # os.chdir("../preprocessor")
                # shutil.rmtree("componentDB/")
                # shutil.rmtree("funcDate/")
                # shutil.rmtree("initialSigs/")
                # shutil.rmtree("metaInfos/")
                # shutil.rmtree("verIDX/")
            except Exception as e:
                print(e)
                continue


