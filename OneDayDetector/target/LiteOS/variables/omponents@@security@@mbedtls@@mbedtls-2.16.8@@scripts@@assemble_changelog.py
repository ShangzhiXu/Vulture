    def __eq__(self, other):
        return self.sort_key() == other.sort_key()
    def __init__(self, filename):
        """Determine position of the file in the changelog entry order.

        This constructor returns an object that can be used with comparison
        operators, with `sort` and `sorted`, etc. Older entries are sorted
        before newer entries.
        """
        self.filename = filename
        creation_hash = self.creation_hash(filename)
        if not creation_hash:
            self.category = self.LOCAL
            self.datetime = self.file_timestamp(filename)
            return
        merge_hash = self.merge_hash(creation_hash)
        if not merge_hash:
            self.category = self.COMMITTED
            self.datetime = self.commit_timestamp(creation_hash)
            return
        self.category = self.MERGED
        self.datetime = self.commit_timestamp(merge_hash)
    def __init__(self, filename, line):
        message = ('Lost content from {}: "{}"'.format(filename, line))
        super().__init__(message)
    def __init__(self, filename, line_number, message, *args, **kwargs):
        message = '{}:{}: {}'.format(filename, line_number,
                                     message.format(*args, **kwargs))
        super().__init__(message)
    def __init__(self, input_stream, changelog_format):
        """Create a changelog object.

        Populate the changelog object from the content of the file
        input_stream.
        """
        self.format = changelog_format
        whole_file = input_stream.read()
        (self.header,
         self.top_version_title, top_version_body,
         self.trailer) = self.format.extract_top_version(whole_file)
        # Split the top version section into categories.
        self.categories = OrderedDict()
        for category in STANDARD_CATEGORIES:
            self.categories[category] = b''
        offset = (self.header + self.top_version_title).count(b'\n') + 1
        self.add_categories_from_text(input_stream.name, offset,
                                      top_version_body, True)
    def __init__(self, line_offset, error_message):
        self.line_offset = line_offset
        self.error_message = error_message
        super().__init__('{}: {}'.format(line_offset, error_message))
    def __lt__(self, other):
        return self.sort_key() < other.sort_key()
    def add_categories_from_text(self, filename, line_offset,
                                 text, allow_unknown_category):
        """Parse a version section or entry file."""
        try:
            categories = self.format.split_categories(text)
        except CategoryParseError as e:
            raise InputFormatError(filename, line_offset + e.line_offset,
                                   e.error_message)
        for category in categories:
            if not allow_unknown_category and \
               category.name not in self.categories:
                raise InputFormatError(filename,
                                       line_offset + category.title_line,
                                       'Unknown category: "{}"',
                                       category.name.decode('utf8'))
            self.categories[category.name] += category.body
    def add_file(self, input_stream):
        """Add changelog entries from a file.
        """
        self.add_categories_from_text(input_stream.name, 1,
                                      input_stream.read(), False)
    def commit_timestamp(commit_id):
        """Return the timestamp of the given commit."""
        text = subprocess.check_output(['git', 'show', '-s',
                                        '--format=%ct',
                                        commit_id])
        return datetime.datetime.utcfromtimestamp(int(text))
    def creation_hash(filename):
        """Return the git commit id at which the given file was created.

        Return None if the file was never checked into git.
        """
        hashes = subprocess.check_output(['git', 'log', '--format=%H',
                                          '--follow',
                                          '--', filename])
        m = re.search(b'(.+)$', hashes)
        if not m:
            # The git output is empty. This means that the file was
            # never checked in.
            return None
        # The last commit in the log is the oldest one, which is when the
        # file was created.
        return m.group(0)
    def extract_top_version(cls, changelog_file_content):
        """Split out the top version section.

        If the top version is already released, create a new top
        version section for an unreleased version.

        Return ``(header, top_version_title, top_version_body, trailer)``
        where the "top version" is the existing top version section if it's
        for unreleased changes, and a newly created section otherwise.
        To assemble the changelog after modifying top_version_body,
        concatenate the four pieces.
        """
        raise NotImplementedError
    def extract_top_version(cls, changelog_file_content):
        """A version section starts with a line starting with '='."""
        m = re.search(cls._top_version_re, changelog_file_content)
        top_version_start = m.start(1)
        top_version_end = m.end(2)
        top_version_title = m.group(1)
        top_version_body = m.group(2)
        if cls.is_released_version(top_version_title):
            top_version_end = top_version_start
            top_version_title = cls._unreleased_version_text + b'\n\n'
            top_version_body = b''
        return (changelog_file_content[:top_version_start],
                top_version_title, top_version_body,
                changelog_file_content[top_version_end:])
    def file_timestamp(filename):
        """Return the modification timestamp of the given file."""
        mtime = os.stat(filename).st_mtime
        return datetime.datetime.fromtimestamp(mtime)
    def format_category(cls, title, body):
        """Construct the text of a category section from its title and body."""
        raise NotImplementedError
    def format_category(cls, title, body):
        # `split_categories` ensures that each body ends with a newline.
        # Make sure that there is additionally a blank line between categories.
        if not body.endswith(b'\n\n'):
            body += b'\n'
        return title + b'\n' + body
    def is_released_version(cls, title):
        # Look for an incomplete release date
        return not re.search(br'[0-9x]{4}-[0-9x]{2}-[0-9x]?x', title)
    def list_merges(some_hash, target, *options):
        """List merge commits from some_hash to target.

        Pass options to git to select which commits are included.
        """
        text = subprocess.check_output(['git', 'rev-list',
                                        '--merges', *options,
                                        b'..'.join([some_hash, target])])
        return text.rstrip(b'\n').split(b'\n')
    def merge_hash(cls, some_hash):
        """Return the git commit id at which the given commit was merged.

        Return None if the given commit was never merged.
        """
        target = b'HEAD'
        # List the merges from some_hash to the target in two ways.
        # The ancestry list is the ones that are both descendants of
        # some_hash and ancestors of the target.
        ancestry = frozenset(cls.list_merges(some_hash, target,
                                             '--ancestry-path'))
        # The first_parents list only contains merges that are directly
        # on the target branch. We want it in reverse order (oldest first).
        first_parents = cls.list_merges(some_hash, target,
                                        '--first-parent', '--reverse')
        # Look for the oldest merge commit that's both on the direct path
        # and directly on the target branch. That's the place where some_hash
        # was merged on the target branch. See
        # https://stackoverflow.com/questions/8475448/find-merge-commit-which-include-a-specific-commit
        for commit in first_parents:
            if commit in ancestry:
                return commit
        return None
    def sort_key(self):
        """"Return a concrete sort key for this entry file sort key object.

        ``ts1 < ts2`` is implemented as ``ts1.sort_key() < ts2.sort_key()``.
        """
        return (self.category, self.datetime, self.filename)
    def split_categories(cls, version_body):
        """Split a changelog version section body into categories.

        Return a list of `CategoryContent` the name is category title
        without any formatting.
        """
        raise NotImplementedError
    def split_categories(cls, version_body):
        """A category title is a line with the title in column 0."""
        if not version_body:
            return []
        title_matches = list(re.finditer(cls._category_title_re, version_body))
        if not title_matches or title_matches[0].start() != 0:
            # There is junk before the first category.
            raise CategoryParseError(0, 'Junk found where category expected')
        title_starts = [m.start(1) for m in title_matches]
        body_starts = [m.end(0) for m in title_matches]
        body_ends = title_starts[1:] + [len(version_body)]
        bodies = [version_body[body_start:body_end].rstrip(b'\n') + b'\n'
                  for (body_start, body_end) in zip(body_starts, body_ends)]
        title_lines = [version_body[:pos].count(b'\n') for pos in title_starts]
        body_lines = [version_body[:pos].count(b'\n') for pos in body_starts]
        return [CategoryContent(title_match.group(1), title_line,
                                body, body_line)
                for title_match, title_line, body, body_line
                in zip(title_matches, title_lines, bodies, body_lines)]
    def version_title_text(cls, version_title):
        """Return the text of a formatted version section title."""
        raise NotImplementedError
    def version_title_text(cls, version_title):
        return re.sub(br'\n.*', version_title, re.DOTALL)
    def write(self, filename):
        """Write the changelog to the specified file.
        """
        with open(filename, 'wb') as out:
            out.write(self.header)
            out.write(self.top_version_title)
            for title, body in self.categories.items():
                if not body:
                    continue
                out.write(self.format.format_category(title, body))
            out.write(self.trailer)
