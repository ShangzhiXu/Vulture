    def __init__(self):
        self.files_with_issues = {}
    def __init__(self, log_file):
        """Instantiate the sanity checker.
        Check files under the current directory.
        Write a report of issues to log_file."""
        self.check_repo_path()
        self.logger = None
        self.setup_logger(log_file)
        self.issues_to_check = [
            PermissionIssueTracker(),
            EndOfFileNewlineIssueTracker(),
            Utf8BomIssueTracker(),
            UnixLineEndingIssueTracker(),
            WindowsLineEndingIssueTracker(),
            TrailingWhitespaceIssueTracker(),
            TabIssueTracker(),
            MergeArtifactIssueTracker(),
        ]
    def check_file_for_issue(self, filepath):
        """Check the specified file for the issue that this class is for.

        Subclasses must implement this method.
        """
        raise NotImplementedError
    def check_file_for_issue(self, filepath):
        """Check the lines of the specified file.

        Subclasses must implement the ``issue_with_line`` method.
        """
        with open(filepath, "rb") as f:
            for i, line in enumerate(iter(f.readline, b"")):
                self.check_file_line(filepath, line, i + 1)
    def check_file_for_issue(self, filepath):
        is_executable = os.access(filepath, os.X_OK)
        should_be_executable = filepath.endswith((".sh", ".pl", ".py"))
        if is_executable != should_be_executable:
            self.files_with_issues[filepath] = None
    def check_file_for_issue(self, filepath):
        with open(filepath, "rb") as f:
            try:
                f.seek(-1, 2)
            except OSError:
                # This script only works on regular files. If we can't seek
                # 1 before the end, it means that this position is before
                # the beginning of the file, i.e. that the file is empty.
                return
            if f.read(1) != b"\n":
                self.files_with_issues[filepath] = None
    def check_file_for_issue(self, filepath):
        with open(filepath, "rb") as f:
            if f.read().startswith(codecs.BOM_UTF8):
                self.files_with_issues[filepath] = None
    def check_file_line(self, filepath, line, line_number):
        if self.issue_with_line(line, filepath):
            self.record_issue(filepath, line_number)
    def check_files(self):
        for issue_to_check in self.issues_to_check:
            for filepath in self.collect_files():
                if issue_to_check.should_check_file(filepath):
                    issue_to_check.check_file_for_issue(filepath)
    def check_repo_path():
        if not all(os.path.isdir(d) for d in ["include", "library", "tests"]):
            raise Exception("Must be run from Mbed TLS root")
    def collect_files():
        bytes_output = subprocess.check_output(['git', 'ls-files', '-z'])
        bytes_filepaths = bytes_output.split(b'\0')[:-1]
        ascii_filepaths = map(lambda fp: fp.decode('ascii'), bytes_filepaths)
        # Prepend './' to files in the top-level directory so that
        # something like `'/Makefile' in fp` matches in the top-level
        # directory as well as in subdirectories.
        return [fp if os.path.dirname(fp) else os.path.join(os.curdir, fp)
                for fp in ascii_filepaths]
    def issue_with_line(self, line, _filepath):
        return b"\r" in line
    def issue_with_line(self, line, _filepath):
        return not line.endswith(b"\r\n") or b"\r" in line[:-2]
    def issue_with_line(self, line, _filepath):
        return line.rstrip(b"\r\n") != line.rstrip()
    def issue_with_line(self, line, _filepath):
        return b"\t" in line
    def issue_with_line(self, line, _filepath):
        # Detect leftover git conflict markers.
        if line.startswith(b'<<<<<<< ') or line.startswith(b'>>>>>>> '):
            return True
        if line.startswith(b'||||||| '): # from merge.conflictStyle=diff3
            return True
        if line.rstrip(b'\r\n') == b'=======' and \
           not _filepath.endswith('.md'):
            return True
        return False
    def issue_with_line(self, line, filepath):
        """Check the specified line for the issue that this class is for.

        Subclasses must implement this method.
        """
        raise NotImplementedError
    def normalize_path(filepath):
        """Normalize ``filepath`` with / as the directory separator."""
        filepath = os.path.normpath(filepath)
        # On Windows, we may have backslashes to separate directories.
        # We need slashes to match exemption lists.
        seps = os.path.sep
        if os.path.altsep is not None:
            seps += os.path.altsep
        return '/'.join(filepath.split(seps))
    def output_file_issues(self, logger):
        """Log all the locations where the issue was found."""
        if self.files_with_issues.values():
            logger.info(self.heading)
            for filename, lines in sorted(self.files_with_issues.items()):
                if lines:
                    logger.info("{}: {}".format(
                        filename, ", ".join(str(x) for x in lines)
                    ))
                else:
                    logger.info(filename)
            logger.info("")
    def output_issues(self):
        integrity_return_code = 0
        for issue_to_check in self.issues_to_check:
            if issue_to_check.files_with_issues:
                integrity_return_code = 1
            issue_to_check.output_file_issues(self.logger)
        return integrity_return_code
    def record_issue(self, filepath, line_number):
        """Record that an issue was found at the specified location."""
        if filepath not in self.files_with_issues.keys():
            self.files_with_issues[filepath] = []
        self.files_with_issues[filepath].append(line_number)
    def setup_logger(self, log_file, level=logging.INFO):
        self.logger = logging.getLogger()
        self.logger.setLevel(level)
        if log_file:
            handler = logging.FileHandler(log_file)
            self.logger.addHandler(handler)
        else:
            console = logging.StreamHandler()
            self.logger.addHandler(console)
    def should_check_file(self, filepath):
        if not super().should_check_file(filepath):
            return False
        return not is_windows_file(filepath)
    def should_check_file(self, filepath):
        if not super().should_check_file(filepath):
            return False
        return is_windows_file(filepath)
    def should_check_file(self, filepath):
        """Whether the given file name should be checked.

        Files whose name ends with a string listed in ``self.suffix_exemptions``
        or whose path matches ``self.path_exemptions`` will not be checked.
        """
        for files_exemption in self.suffix_exemptions:
            if filepath.endswith(files_exemption):
                return False
        if self.path_exemptions and \
           re.match(self.path_exemptions, self.normalize_path(filepath)):
            return False
        return True
