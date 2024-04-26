import argparse
import os
import subprocess
import re
import shutil
from multiprocessing import Pool
from multiprocessing import current_process
def process_file(data_filePath):
    # Check if the file has already been visited
    has_visited = False
    with open("visit.txt", "r") as f:
        for line in f.readlines():
            if line.strip() == data_filePath:
                print(f"{data_filePath} has been visited")
                has_visited = True
                break
    if has_visited:
        return

    # Process the file
    process_id = current_process().pid  # Getting the process ID
    process_id_str = str(process_id)  # Converting it to string

    print(f"Running preprocess on {data_filePath}")

    os.system(f"python3 Preprocessor_full_test.py {process_id_str} {data_filePath}")
    # write into visit.txt
    os.system(f"echo {data_filePath} >> visit.txt")


if __name__ == "__main__":

    print("[+] Collecting 500 repos for preanalysis")
    #os.chdir("./preprocessor")
    os.system("pwd")

    # Collect all file paths for processing
    file_paths = []
    for path, dir, files in os.walk("../osscollector/repo_functions_files"):
        for file in files:
            file_paths.append(os.path.join(path, file))

    # print out the number of files and the visited files and the left files to be process
    print("The number of files: ", len(file_paths))
    visited_files = []
    with open("visit.txt", "r") as f:
        for line in f.readlines():
            visited_files.append(line.strip())
    print("The number of visited files: ", len(visited_files))
    left_files = []
    for file_path in file_paths:
        if file_path not in visited_files:
            left_files.append(file_path)
    print("The number of left files: ", len(left_files))

    # Create a pool of worker processes
    with Pool(5) as p:  # Adjust the number of processes as needed
        p.map(process_file, file_paths)


