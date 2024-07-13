    int     (*close)(void *);
    int     (*ioctl)(void *, int, unsigned long);
    int     (*open)(void *, int);
    ssize_t (*read)(void *, char *, size_t);
    ssize_t (*write)(void *, const char *, size_t);
