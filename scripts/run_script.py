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

            except Exception as e:
                print(e)
                continue


