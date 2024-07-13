    VOID        *nextPool;
    VOID        *pool;      /* Starting address of a memory pool */
    UINT32      poolSize;   /* Memory pool size */
    struct LosSlabControlHeader slabCtrlHdr;
    Memstat     stat;
