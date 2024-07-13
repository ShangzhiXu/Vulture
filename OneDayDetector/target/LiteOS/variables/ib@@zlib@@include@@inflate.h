    int back;                   /* bits back of last unprocessed length/lit */
    unsigned bits;              /* number of bits in "in" */
    unsigned long check;        /* protected copy of check value */
    code codes[ENOUGH];         /* space for code tables */
    unsigned distbits;          /* index bits for distcode */
    code const FAR *distcode;   /* starting table for distance codes */
    unsigned dmax;              /* zlib header max distance (INFLATE_STRICT) */
    unsigned extra;             /* extra bits needed */
    int flags;                  /* gzip header method and flags (0 if zlib) */
    unsigned have;              /* number of code lengths in lens[] */
    int havedict;               /* true if dictionary provided */
    gz_headerp head;            /* where to save gzip header information */
    unsigned long hold;         /* input bit accumulator */
    int last;                   /* true if processing last block */
    unsigned lenbits;           /* index bits for lencode */
    code const FAR *lencode;    /* starting table for length/literal codes */
    unsigned length;            /* literal or length of data to copy */
    unsigned short lens[320];   /* temporary storage for code lengths */
    inflate_mode mode;          /* current inflate mode */
    unsigned ncode;             /* number of code length code lengths */
    unsigned ndist;             /* number of distance code lengths */
    code FAR *next;             /* next available space in codes[] */
    unsigned nlen;              /* number of length code lengths */
    unsigned offset;            /* distance back to copy string from */
    int sane;                   /* if false, allow invalid distance too far */
    z_streamp strm;             /* pointer back to this zlib stream */
    unsigned long total;        /* protected copy of output count */
    unsigned was;               /* initial length of match */
    unsigned wbits;             /* log base 2 of requested window size */
    unsigned whave;             /* valid bytes in the window */
    unsigned char FAR *window;  /* allocated sliding window, if needed */
    unsigned wnext;             /* window write index */
    unsigned short work[288];   /* work area for code table building */
    int wrap;                   /* bit 0 true for zlib, bit 1 true for gzip,
    unsigned wsize;             /* window size or zero if not using window */
