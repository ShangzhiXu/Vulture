    uLong   adler;      /* Adler-32 or CRC-32 value of the uncompressed data */
    uInt     avail_in;  /* number of bytes available at next_in */
    uInt     avail_out; /* remaining free space at next_out */
    uInt    comm_max;   /* space at comment (only when reading header) */
    Bytef   *comment;   /* pointer to zero-terminated comment or Z_NULL */
    int     data_type;  /* best guess about the data type: binary or text
    int     done;       /* true when done reading gzip header (not used
    Bytef   *extra;     /* pointer to extra field or Z_NULL if none */
    uInt    extra_len;  /* extra field length (valid if extra != Z_NULL) */
    uInt    extra_max;  /* space at extra (only when reading header) */
    unsigned have;
    int     hcrc;       /* true if there was or will be a header crc */
    z_const char *msg;  /* last error message, NULL if no error */
    Bytef   *name;      /* pointer to zero-terminated file name or Z_NULL */
    uInt    name_max;   /* space at name (only when reading header) */
    unsigned char *next;
    z_const Bytef *next_in;     /* next input byte */
    Bytef    *next_out; /* next output byte will go here */
    voidpf     opaque;  /* private data object passed to zalloc and zfree */
    int     os;         /* operating system */
    z_off64_t pos;
    uLong   reserved;   /* reserved for future use */
    struct internal_state FAR *state; /* not visible by applications */
    int     text;       /* true if compressed data believed to be text */
    uLong   time;       /* modification time */
    uLong    total_in;  /* total number of input bytes read so far */
    uLong    total_out; /* total number of bytes output so far */
    int     xflags;     /* extra flags (not used when writing a gzip file) */
    alloc_func zalloc;  /* used to allocate the internal state */
    free_func  zfree;   /* used to free the internal state */
