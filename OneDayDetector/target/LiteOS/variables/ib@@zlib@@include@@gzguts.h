    int direct;             /* 0 if processing gzip, 1 if transparent */
    int eof;                /* true if end of input file reached */
    int err;                /* error code */
    int fd;                 /* file descriptor */
    int how;                /* 0: get header, 1: copy, 2: decompress */
    unsigned char *in;      /* input buffer (double-sized when writing) */
    int level;              /* compression level */
    int mode;               /* see gzip modes above */
    char *msg;              /* error message */
    unsigned char *out;     /* output buffer (double-sized when reading) */
    int past;               /* true if read requested past end */
    char *path;             /* path or fd for error messages */
    int seek;               /* true if seek request pending */
    unsigned size;          /* buffer size, zero if not allocated yet */
    z_off64_t skip;         /* amount to skip (already rewound if backwards) */
    z_off64_t start;        /* where the gzip data started, for rewinding */
    int strategy;           /* compression strategy */
    z_stream strm;          /* stream structure in-place (not a pointer) */
    unsigned want;          /* requested buffer size, default is GZBUFSIZE */
    struct gzFile_s x;      /* "x" for exposed */
