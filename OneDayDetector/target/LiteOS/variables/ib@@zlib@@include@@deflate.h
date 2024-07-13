    ush bi_buf;
    int bi_valid;
    ulg bits_sent;      /* bit length of compressed data sent mod 2^32 */
    ush bl_count[MAX_BITS+1];
    struct tree_desc_s bl_desc;              /* desc. for bit length tree */
    struct ct_data_s bl_tree[2*BL_CODES+1];  /* Huffman tree for bit lengths */
    long block_start;
        ush  code;       /* bit string */
    ulg compressed_len; /* total bit length of compressed file mod 2^32 */
    ushf *d_buf;
    struct tree_desc_s d_desc;               /* desc. for distance tree */
        ush  dad;        /* father node in Huffman tree */
    uch depth[2*L_CODES+1];
    } dl;
    struct ct_data_s dyn_dtree[2*D_CODES+1]; /* distance tree */
    struct ct_data_s dyn_ltree[HEAP_SIZE];   /* literal and length tree */
    ct_data *dyn_tree;           /* the dynamic tree */
    } fc;
        ush  freq;       /* frequency count */
    uInt good_match;
    gz_headerp  gzhead;  /* gzip header information to write */
    ulg   gzindex;       /* where in extra, name, or comment */
    uInt  hash_bits;      /* log2(hash_size) */
    uInt  hash_mask;      /* hash_size-1 */
    uInt  hash_shift;
    uInt  hash_size;      /* number of elements in hash table */
    Posf *head; /* Heads of the hash chains or NIL. */
    int heap[2*L_CODES+1];      /* heap used to build the Huffman trees */
    int heap_len;               /* number of elements in the heap */
    int heap_max;               /* element of largest frequency */
    ulg high_water;
    uInt  ins_h;          /* hash index of string to be inserted */
    uInt insert;        /* bytes at end of window left to insert */
    uchf *l_buf;          /* buffer for literals or lengths */
    struct tree_desc_s l_desc;               /* desc. for literal tree */
    int   last_flush;    /* value of flush param for previous deflate call */
    uInt last_lit;      /* running index in l_buf */
        ush  len;        /* length of bit string */
    int level;    /* compression level (1..9) */
    uInt  lit_bufsize;
    uInt lookahead;              /* number of valid bytes ahead in window */
    int match_available;         /* set if previous match exists */
    uInt match_length;           /* length of best match */
    uInt match_start;            /* start of matching string */
    uInt matches;       /* number of string matches in current block */
    uInt max_chain_length;
    int     max_code;            /* largest code with non zero frequency */
    uInt max_lazy_match;
    Byte  method;        /* can only be DEFLATED */
    int nice_match; /* Stop searching when current match exceeds this */
    ulg opt_len;        /* bit length of current block with optimal trees */
    ulg   pending;       /* nb of bytes in the pending buffer */
    Bytef *pending_buf;  /* output still pending */
    ulg   pending_buf_size; /* size of pending_buf */
    Bytef *pending_out;  /* next pending byte to output to the stream */
    Posf *prev;
    uInt prev_length;
    IPos prev_match;             /* previous match */
    const static_tree_desc *stat_desc;  /* the corresponding static tree */
    ulg static_len;     /* bit length of current block with static trees */
    int   status;        /* as the name implies */
    int strategy; /* favor or force Huffman coding*/
    z_streamp strm;      /* pointer back to this zlib stream */
    uInt strstart;               /* start of string to insert */
    uInt  w_bits;        /* log2(w_size)  (8..16) */
    uInt  w_mask;        /* w_size - 1 */
    uInt  w_size;        /* LZ77 window size (32K by default) */
    Bytef *window;
    ulg window_size;
    int   wrap;          /* bit 0 true for zlib, bit 1 true for gzip */
