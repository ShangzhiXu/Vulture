        void                   *arg;        /* arg for ops if is file with ops */
    uint32_t                   attr;        /* R(readable)/W(writable)/E(exclusive)/D(dir)/B(buffer) */
        void                   *buff;       /* buff addr, if file is linked to buffer */
        struct kifs_node       *child;      /* child if is dir */
        struct kifs_ops        *kiops;      /* kiops if is file with ops */
    char                       name [LOS_MAX_FILE_NAME_LEN];
    struct kifs_node           *parent;
    struct kifs_node           *sibling;
        size_t                 size;        /* buff size, if file is linked to buffer */
