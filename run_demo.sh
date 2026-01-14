#!/bin/bash

# Configuration
PROJECT_ROOT="/home/project1/shield/Vulture"
OUTPUT_DIR="${PROJECT_ROOT}/output"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
LOG_FILE="${OUTPUT_DIR}/demo_run_${TIMESTAMP}.log"

# Function to log and run command
log_run() {
    local cmd="$@"
    echo "" | tee -a "$LOG_FILE"
    echo "============================================================" | tee -a "$LOG_FILE"
    echo "[Command] $cmd" | tee -a "$LOG_FILE"
    echo "============================================================" | tee -a "$LOG_FILE"
    
    # Execute command and redirect output to both console and log file
    eval "$cmd" 2>&1 | tee -a "$LOG_FILE"
}

# Ensure output directory exists
mkdir -p "$OUTPUT_DIR"

echo "Vulture Project Demonstration Started at ${TIMESTAMP}" | tee "$LOG_FILE"
echo "Output will be saved to: ${LOG_FILE}" | tee -a "$LOG_FILE"

# Activate virtual environment
echo "[Info] Activating virtual environment..." | tee -a "$LOG_FILE"
source "${PROJECT_ROOT}/venv/bin/activate"

# Step 1: TPLFilter Construction (Demonstration)
# Note: The actual crawling takes a long time, so we show the help message or dry run if possible.
# Here we show the help message to demonstrate the command exists.
echo "" | tee -a "$LOG_FILE"
echo "### Step 1: TPLFilter Construction ###" | tee -a "$LOG_FILE"
echo "[Info] Demonstrating TPLFilter/src/TPLselection/git_all_spider.py usage..." | tee -a "$LOG_FILE"
cd "${PROJECT_ROOT}"
log_run "python3 TPLFilter/src/TPLselection/git_all_spider.py --help"

# Step 2: TPL Reuse Identification
echo "" | tee -a "$LOG_FILE"
echo "### Step 2: TPL Reuse Identification ###" | tee -a "$LOG_FILE"
echo "[Info] Running Detector.py on target/LiteOS..." | tee -a "$LOG_FILE"
# Note: Detector.py expects absolute path without trailing slash
TARGET_PATH="${PROJECT_ROOT}/TPLReuseDetector/LiteOS"
cd "${PROJECT_ROOT}/TPLReuseDetector"
log_run "python3 Detector.py ${TARGET_PATH}"

# Step 3: 1-day Vulnerability Detection
echo "" | tee -a "$LOG_FILE"
echo "### Step 3: 1-day Vulnerability Detection ###" | tee -a "$LOG_FILE"
echo "[Info] Running VersionBasedDetection.py on target/LiteOS..." | tee -a "$LOG_FILE"
cd "${PROJECT_ROOT}/OneDayDetector"
# VersionBasedDetection.py takes a relative path or absolute path. 
# Based on previous successful run, we use "target/LiteOS" relative to OneDayDetector dir.
log_run "python3 VersionBasedDetection.py target/LiteOS"

echo "" | tee -a "$LOG_FILE"
echo "============================================================" | tee -a "$LOG_FILE"
echo "Demonstration Completed at $(date +"%Y%m%d_%H%M%S")" | tee -a "$LOG_FILE"
echo "Log saved to: ${LOG_FILE}" | tee -a "$LOG_FILE"
