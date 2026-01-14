# Vulture 项目演示指南

本文档旨在辅助您向他人展示 Vulture 项目的功能和运行流程。通过运行自动化脚本 `run_demo.sh`，您可以复现整个检测过程，并展示生成的日志和结果。

## 1. 项目简介
**Vulture** 是一个针对第三方库 (TPL) 复用场景下的 1-day 漏洞检测工具。
它通过分析代码补丁 (Patch Analysis) 来精准识别漏洞，解决了版本号欺骗和代码修改带来的检测难题。

**核心模块：**
1.  **TPLFilter Construction**: 构建包含函数哈希、版本、CVE 和补丁信息的数据库。
2.  **TPL Reuse Identification**: 识别目标软件中复用了哪些第三方库及其版本。
3.  **1-day Vulnerability Detection**: 基于版本和代码特征，检测已识别库中的具体漏洞。

---

## 2. 演示准备

### 环境恢复
在演示开始前，我们已经清理了之前的运行结果，将项目恢复到了初始状态。

### 自动演示脚本
我们编写了一个脚本 `run_demo.sh`，它会自动执行上述三个步骤，并将所有终端输出（包括命令、过程日志、检测结果）保存到 `output/` 目录下。

---

## 3. 演示流程

请在终端中运行以下命令开始演示：

```bash
cd /home/project1/shield/Vulture
./run_demo.sh
```

### 步骤解析与预期输出

#### 步骤 1: TPLFilter Construction (演示)
*   **命令**: `python3 TPLFilter/src/TPLselection/git_all_spider.py --help`
*   **说明**: 展示爬虫和数据库构建工具的入口。由于实际构建耗时较长，演示中仅展示其帮助信息，证明工具可用性。
*   **展示点**: 看到 Help 信息输出，说明环境依赖（如 Python 库）配置正确。

#### 步骤 2: TPL Reuse Identification (TPL 复用识别)
*   **命令**: `python3 Detector.py .../TPLReuseDetector/LiteOS`
*   **说明**: 工具正在分析目标软件 `LiteOS` 的代码特征，并与数据库比对。
*   **展示点**: 
    *   终端会输出正在处理的函数哈希。
    *   **关键输出**: 生成中间结果文件，表明识别到了潜在的第三方库引用。

#### 步骤 3: 1-day Vulnerability Detection (漏洞检测)
*   **命令**: `python3 VersionBasedDetection.py target/LiteOS`
*   **说明**: 这是最核心的一步。工具会对比目标代码与已知漏洞的补丁特征（Pre-patch 和 Post-patch 代码）。
*   **展示点 (请重点展示最后的输出)**:
    *   `Pre-patch Code`: 漏洞修复前的代码哈希。
    *   `Post-patch Code`: 漏洞修复后的代码哈希。
    *   **最终结果**:
        *   `Vulnerable CVEs`: 确认存在的漏洞。
        *   `Patched CVEs`: 确认已修复的漏洞（例如 `Patched CVEs Modified: {'curl_curl/CVE-2018-0500', ...}`）。
        *   `Version Detection`: 基于版本推断的潜在漏洞。

#### 步骤 4: 快速扫描本地代码 (新增功能演示)
*   **命令**: `./vulture --file ./Code/MyProject`
*   **说明**: 我们将繁琐的分步操作封装成了统一的指令，支持直接扫描本地目录。
*   **展示点**: 展示其一键执行的便捷性，自动串联了上述所有步骤。

---

## 4. 结果验证

演示结束后，您可以向观众展示生成的日志文件，证明检测过程的可追溯性。

*   **日志位置**: `/home/project1/shield/Vulture/output/`
*   **文件名格式**: `demo_run_YYYYMMDD_HHMMSS.log`
*   **查看命令**:
    ```bash
    ls -l output/
    less output/demo_run_*.log
    ```

## 5. 总结话术示例

> "大家可以看到，Vulture 工具通过自动化脚本成功运行。它首先分析了 LiteOS 的代码库，识别出其中复用了 curl 等第三方库。随后，通过比对漏洞补丁的特征，它精准地指出了哪些 CVE 漏洞已经被修复（Patched），哪些可能依然存在。整个过程的详细日志都已自动保存，方便后续审计。"
