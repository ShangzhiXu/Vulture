    def __init__(self, file_name):
        """
        Instantiate the base class and initialize the line number to 0.

        :param file_name: File path to open.
        """
        super(FileWrapper, self).__init__(file_name, 'r')
        self._line_no = 0
    def get_line_no(self):
        """
        Gives current line number.
        """
        return self._line_no
    def next(self):
        """
        Python 2 iterator method. This method overrides base class's
        next method and extends the next method to count the line
        numbers as each line is read.

        It works for both Python 2 and Python 3 by checking iterator
        method name in the base iterator object.

        :return: Line read from file.
        """
        parent = super(FileWrapper, self)
        if hasattr(parent, '__next__'):
            line = parent.__next__()  # Python 3
        else:
            line = parent.next()  # Python 2 # pylint: disable=no-member
        if line is not None:
            self._line_no += 1
            # Convert byte array to string with correct encoding and
            # strip any whitespaces added in the decoding process.
            return line.decode(sys.getdefaultencoding()).rstrip() + '\n'
        return None
