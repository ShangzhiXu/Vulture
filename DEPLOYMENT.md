# Vulture 项目部署与复现全记录

## 1. 初始环境准备

### 1.1 依赖安装
```bash
sudo apt-get update
sudo apt-get install -y clang-format universal-ctags
```
### 1.2 环境创建
为了隔离项目依赖，我们创建并激活了虚拟环境：
```bash
python3 -m venv venv
source venv/bin/activate
```

---

## 2. 依赖安装
```bash
pip install -r requirements.txt
```

### 2.2 修复 `ctags` 路径
- 项目代码中硬编码了 `ctags` 路径为 `/usr/local/bin/ctags`，但系统实际安装路径为 `/usr/bin/ctags`，导致运行时出现 `exit status 127` 错误。
**操作**：将以下4个文件中的 `ctagsPath` 变量进行了更新。

**涉及文件**：
1.  `TPLReuseDetector/Detector.py`
2.  `OneDayDetector/pathDiff.py`
3.  `OneDayDetector/DBConstruction.py`
4.  `OneDayDetector/VersionBasedDetection.py`

**代码变更**：
```python
# 修改前
ctagsPath = "/usr/local/bin/ctags"
# 修改后
ctagsPath = "/usr/bin/ctags"
```

### 2.3 修复数据解析逻辑
**修改原因**：在运行 `VersionBasedDetection.py` 时，解析复用结果文件 (`modified_result_without_funcLiteOS`) 抛出 `IndexError: list index out of range`。这是因为文件首行或某些行存在非预期的缩进（Tab/空格），导致 `split` 逻辑失效。
**操作**：修改 `OneDayDetector/VersionBasedDetection.py` 中的 `getReuseInfo` 函数。

**代码变更**：
```python
# 修改前
if line.startswith("\t"):
    continue

# 修改后 (增加对空格开头的过滤)
if line.startswith("\t") or line.startswith(" "):
    continue
```

---

## 3. 自动化演示与日志记录

为了方便展示和记录运行过程，我们创建了辅助脚本和目录。

### 3.1 创建输出目录
```bash
mkdir -p /home/project1/shield/Vulture/output
```
所有运行日志将保存于此，便于后续审计和展示。

### 3.2 创建演示脚本 (`run_demo.sh`)
我们编写了 `run_demo.sh` 脚本，用于一键执行完整的检测流程。
**脚本功能**：
1.  自动激活虚拟环境。
2.  依次执行 TPLFilter（演示帮助）、Detector（复用识别）、VersionBasedDetection（漏洞检测）。
3.  **核心功能**：使用 `tee` 命令将所有终端输出同时保存到 `output/demo_run_<时间戳>.log` 文件中。

---

## 4. 如何复现运行 (Step-by-Step)

如果您是新接手该项目，请按照以下顺序操作：

1.  **确认依赖**：
    确保 `clang-format` 和 `ctags` 已安装（参考 1.1）。

2.  **激活环境**：
    ```bash
    cd /home/project1/shield/Vulture
    source venv/bin/activate
    ```

3.  **执行演示脚本**：
    ```bash
    ./run_demo.sh
    ```

4.  **查看结果**：
    *   **屏幕输出**：您将在终端看到实时的检测进度和结果。
    *   **日志文件**：检查 `output/` 目录下的 `.log` 文件，里面包含了完整的运行记录。

---

## 5. 项目结构说明 (当前状态)

*   `DEPLOYMENT.md`: 本文档，包含完整的部署和复现记录。
*   `PRESENTATION.md`: 专门用于向他人演示时的演讲/介绍指南。
*   `run_demo.sh`: 自动化运行脚本。
*   `output/`: 存放运行日志的目录。
*   `venv/`: Python 虚拟环境。
*   `requirements.txt`: 已修正的依赖列表。

## 6. 快速扫描本地代码 (新增功能)

我们新增了 `vulture` 指令，支持一键扫描指定的本地代码目录。

**使用方法**：
```bash
# 格式：./vulture --file <源代码目录路径>
./vulture --file ./Code/MyProject
```

**示例**：
```bash
# 扫描 Code 目录下的 test_project
./vulture --file /home/project1/shield/Vulture/Code/test_project
```

**功能说明**：
该指令会自动执行以下步骤：
1.  **TPL Reuse Detection**: 识别代码中复用的第三方库。
2.  **False Positive Elimination**: 过滤误报。
3.  **1-day Vulnerability Detection**: 基于版本检测已知漏洞。
4.  **结果输出**: 在终端直接显示检测到的 CVE 和补丁状态。
