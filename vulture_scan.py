import argparse
import os
import subprocess
import sys

def main():
    parser = argparse.ArgumentParser(description="Vulture Scan Tool")
    parser.add_argument("--file", required=True, help="Path to the target source code directory")
    args = parser.parse_args()

    # 1. Resolve Absolute Path
    target_path = os.path.abspath(args.file)
    if not os.path.isdir(target_path):
        print(f"\033[91m[Error]\033[0m Directory not found: {target_path}")
        sys.exit(1)

    # 2. Normalize Path (Remove trailing slash for Detector.py compatibility)
    target_path_stripped = target_path.rstrip('/')
    repo_name = os.path.basename(target_path_stripped)
    
    # 3. Define Project Paths
    project_root = "/home/project1/shield/Vulture"
    tpl_dir = os.path.join(project_root, "TPLReuseDetector")
    oneday_dir = os.path.join(project_root, "OneDayDetector")

    print(f"\033[94m[Vulture]\033[0m Scanning target: {target_path}")
    print(f"\033[94m[Vulture]\033[0m Repository Name: {repo_name}")

    try:
        # Step 1: TPL Reuse Detection
        print(f"\n\033[92m[Step 1/3] Running TPL Reuse Detector...\033[0m")
        os.chdir(tpl_dir)
        # Detector.py expects a path without trailing slash
        cmd1 = ["python3", "Detector.py", target_path_stripped]
        subprocess.run(cmd1, check=True)

        # Step 2: False Positive Elimination
        print(f"\n\033[92m[Step 2/3] Eliminating False Positives...\033[0m")
        # Expected result file from Step 1: TPLReuseDetector/res/result_{repo_name}_func
        res_file = f"res/result_{repo_name}_func"
        if not os.path.exists(res_file):
            print(f"\033[91m[Error]\033[0m Expected result file not found: {os.path.abspath(res_file)}")
            print("Detector.py might have failed to generate the output.")
            sys.exit(1)
            
        cmd2 = ["python3", "fp_eliminator.py", res_file]
        subprocess.run(cmd2, check=True)

        # Step 3: One Day Vulnerability Detection
        print(f"\n\033[92m[Step 3/3] Running 1-day Vulnerability Detector...\033[0m")
        os.chdir(oneday_dir)
        # VersionBasedDetection.py takes the target path
        cmd3 = ["python3", "VersionBasedDetection.py", target_path_stripped]
        subprocess.run(cmd3, check=True)

        print(f"\n\033[94m[Vulture]\033[0m Scan Completed Successfully.")

    except subprocess.CalledProcessError as e:
        print(f"\n\033[91m[Error]\033[0m A step failed with exit code {e.returncode}.")
        sys.exit(e.returncode)
    except Exception as e:
        print(f"\n\033[91m[Error]\033[0m An unexpected error occurred: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()
