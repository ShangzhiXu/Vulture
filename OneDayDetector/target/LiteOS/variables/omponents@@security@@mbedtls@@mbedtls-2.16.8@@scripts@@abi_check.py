    def __init__(self, old_version, new_version, configuration):
        """Instantiate the API/ABI checker.

        old_version: RepoVersion containing details to compare against
        new_version: RepoVersion containing details to check
        configuration.report_dir: directory for output files
        configuration.keep_all_reports: if false, delete old reports
        configuration.brief: if true, output shorter report to stdout
        configuration.skip_file: path to file containing symbols and types to skip
        """
        self.repo_path = "."
        self.log = None
        self.verbose = configuration.verbose
        self._setup_logger()
        self.report_dir = os.path.abspath(configuration.report_dir)
        self.keep_all_reports = configuration.keep_all_reports
        self.can_remove_report_dir = not (os.path.exists(self.report_dir) or
                                          self.keep_all_reports)
        self.old_version = old_version
        self.new_version = new_version
        self.skip_file = configuration.skip_file
        self.brief = configuration.brief
        self.git_command = "git"
        self.make_command = "make"
    def _abi_compliance_command(self, mbed_module, output_path):
        """Build the command to run to analyze the library mbed_module.
        The report will be placed in output_path."""
        abi_compliance_command = [
            "abi-compliance-checker",
            "-l", mbed_module,
            "-old", self.old_version.abi_dumps[mbed_module],
            "-new", self.new_version.abi_dumps[mbed_module],
            "-strict",
            "-report-path", output_path,
        ]
        if self.skip_file:
            abi_compliance_command += ["-skip-symbols", self.skip_file,
                                       "-skip-types", self.skip_file]
        if self.brief:
            abi_compliance_command += ["-report-format", "xml",
                                       "-stdout"]
        return abi_compliance_command
    def _build_shared_libraries(self, git_worktree_path, version):
        """Build the shared libraries in the specified worktree."""
        my_environment = os.environ.copy()
        my_environment["CFLAGS"] = "-g -Og"
        my_environment["SHARED"] = "1"
        if os.path.exists(os.path.join(git_worktree_path, "crypto")):
            my_environment["USE_CRYPTO_SUBMODULE"] = "1"
        make_output = subprocess.check_output(
            [self.make_command, "lib"],
            env=my_environment,
            cwd=git_worktree_path,
            stderr=subprocess.STDOUT
        )
        self.log.debug(make_output.decode("utf-8"))
        for root, _dirs, files in os.walk(git_worktree_path):
            for file in fnmatch.filter(files, "*.so"):
                version.modules[os.path.splitext(file)[0]] = (
                    os.path.join(root, file)
                )
    def _cleanup_worktree(self, git_worktree_path):
        """Remove the specified git worktree."""
        shutil.rmtree(git_worktree_path)
        worktree_output = subprocess.check_output(
            [self.git_command, "worktree", "prune"],
            cwd=self.repo_path,
            stderr=subprocess.STDOUT
        )
        self.log.debug(worktree_output.decode("utf-8"))
    def _get_abi_dump_for_ref(self, version):
        """Generate the ABI dumps for the specified git revision."""
        git_worktree_path = self._get_clean_worktree_for_git_revision(version)
        self._update_git_submodules(git_worktree_path, version)
        self._build_shared_libraries(git_worktree_path, version)
        self._get_abi_dumps_from_shared_libraries(version)
        self._cleanup_worktree(git_worktree_path)
    def _get_abi_dumps_from_shared_libraries(self, version):
        """Generate the ABI dumps for the specified git revision.
        The shared libraries must have been built and the module paths
        present in version.modules."""
        for mbed_module, module_path in version.modules.items():
            output_path = os.path.join(
                self.report_dir, "{}-{}-{}.dump".format(
                    mbed_module, version.revision, version.version
                )
            )
            abi_dump_command = [
                "abi-dumper",
                module_path,
                "-o", output_path,
                "-lver", self._pretty_revision(version),
            ]
            abi_dump_output = subprocess.check_output(
                abi_dump_command,
                stderr=subprocess.STDOUT
            )
            self.log.debug(abi_dump_output.decode("utf-8"))
            version.abi_dumps[mbed_module] = output_path
    def _get_clean_worktree_for_git_revision(self, version):
        """Make a separate worktree with version.revision checked out.
        Do not modify the current worktree."""
        git_worktree_path = tempfile.mkdtemp()
        if version.repository:
            self.log.debug(
                "Checking out git worktree for revision {} from {}".format(
                    version.revision, version.repository
                )
            )
            fetch_output = subprocess.check_output(
                [self.git_command, "fetch",
                 version.repository, version.revision],
                cwd=self.repo_path,
                stderr=subprocess.STDOUT
            )
            self.log.debug(fetch_output.decode("utf-8"))
            worktree_rev = "FETCH_HEAD"
        else:
            self.log.debug("Checking out git worktree for revision {}".format(
                version.revision
            ))
            worktree_rev = version.revision
        worktree_output = subprocess.check_output(
            [self.git_command, "worktree", "add", "--detach",
             git_worktree_path, worktree_rev],
            cwd=self.repo_path,
            stderr=subprocess.STDOUT
        )
        self.log.debug(worktree_output.decode("utf-8"))
        version.commit = subprocess.check_output(
            [self.git_command, "rev-parse", "HEAD"],
            cwd=git_worktree_path,
            stderr=subprocess.STDOUT
        ).decode("ascii").rstrip()
        self.log.debug("Commit is {}".format(version.commit))
        return git_worktree_path
    def _is_library_compatible(self, mbed_module, compatibility_report):
        """Test if the library mbed_module has remained compatible.
        Append a message regarding compatibility to compatibility_report."""
        output_path = os.path.join(
            self.report_dir, "{}-{}-{}.html".format(
                mbed_module, self.old_version.revision,
                self.new_version.revision
            )
        )
        try:
            subprocess.check_output(
                self._abi_compliance_command(mbed_module, output_path),
                stderr=subprocess.STDOUT
            )
        except subprocess.CalledProcessError as err:
            if err.returncode != 1:
                raise err
            if self.brief:
                self.log.info(
                    "Compatibility issues found for {}".format(mbed_module)
                )
                report_root = ET.fromstring(err.output.decode("utf-8"))
                self._remove_extra_detail_from_report(report_root)
                self.log.info(ET.tostring(report_root).decode("utf-8"))
            else:
                self.can_remove_report_dir = False
                compatibility_report.append(
                    "Compatibility issues found for {}, "
                    "for details see {}".format(mbed_module, output_path)
                )
            return False
        compatibility_report.append(
            "No compatibility issues for {}".format(mbed_module)
        )
        if not (self.keep_all_reports or self.brief):
            os.remove(output_path)
        return True
    def _pretty_revision(version):
        if version.revision == version.commit:
            return version.revision
        else:
            return "{} ({})".format(version.revision, version.commit)
    def _remove_children_with_tag(self, parent, tag):
        children = parent.getchildren()
        for child in children:
            if child.tag == tag:
                parent.remove(child)
            else:
                self._remove_children_with_tag(child, tag)
    def _remove_extra_detail_from_report(self, report_root):
        for tag in ['test_info', 'test_results', 'problem_summary',
                    'added_symbols', 'affected']:
            self._remove_children_with_tag(report_root, tag)

        for report in report_root:
            for problems in report.getchildren()[:]:
                if not problems.getchildren():
                    report.remove(problems)
    def _setup_logger(self):
        self.log = logging.getLogger()
        if self.verbose:
            self.log.setLevel(logging.DEBUG)
        else:
            self.log.setLevel(logging.INFO)
        self.log.addHandler(logging.StreamHandler())
    def _update_git_submodules(self, git_worktree_path, version):
        """If the crypto submodule is present, initialize it.
        if version.crypto_revision exists, update it to that revision,
        otherwise update it to the default revision"""
        update_output = subprocess.check_output(
            [self.git_command, "submodule", "update", "--init", '--recursive'],
            cwd=git_worktree_path,
            stderr=subprocess.STDOUT
        )
        self.log.debug(update_output.decode("utf-8"))
        if not (os.path.exists(os.path.join(git_worktree_path, "crypto"))
                and version.crypto_revision):
            return

        if version.crypto_repository:
            fetch_output = subprocess.check_output(
                [self.git_command, "fetch", version.crypto_repository,
                 version.crypto_revision],
                cwd=os.path.join(git_worktree_path, "crypto"),
                stderr=subprocess.STDOUT
            )
            self.log.debug(fetch_output.decode("utf-8"))
            crypto_rev = "FETCH_HEAD"
        else:
            crypto_rev = version.crypto_revision

        checkout_output = subprocess.check_output(
            [self.git_command, "checkout", crypto_rev],
            cwd=os.path.join(git_worktree_path, "crypto"),
            stderr=subprocess.STDOUT
        )
        self.log.debug(checkout_output.decode("utf-8"))
    def check_abi_tools_are_installed():
        for command in ["abi-dumper", "abi-compliance-checker"]:
            if not shutil.which(command):
                raise Exception("{} not installed, aborting".format(command))
    def check_for_abi_changes(self):
        """Generate a report of ABI differences
        between self.old_rev and self.new_rev."""
        self.check_repo_path()
        self.check_abi_tools_are_installed()
        self._get_abi_dump_for_ref(self.old_version)
        self._get_abi_dump_for_ref(self.new_version)
        return self.get_abi_compatibility_report()
    def check_repo_path():
        if not all(os.path.isdir(d) for d in ["include", "library", "tests"]):
            raise Exception("Must be run from Mbed TLS root")
    def get_abi_compatibility_report(self):
        """Generate a report of the differences between the reference ABI
        and the new ABI. ABI dumps from self.old_version and self.new_version
        must be available."""
        compatibility_report = ["Checking evolution from {} to {}".format(
            self._pretty_revision(self.old_version),
            self._pretty_revision(self.new_version)
        )]
        compliance_return_code = 0
        shared_modules = list(set(self.old_version.modules.keys()) &
                              set(self.new_version.modules.keys()))
        for mbed_module in shared_modules:
            if not self._is_library_compatible(mbed_module,
                                               compatibility_report):
                compliance_return_code = 1
        for version in [self.old_version, self.new_version]:
            for mbed_module, mbed_module_dump in version.abi_dumps.items():
                os.remove(mbed_module_dump)
        if self.can_remove_report_dir:
            os.rmdir(self.report_dir)
        self.log.info("\n".join(compatibility_report))
        return compliance_return_code
