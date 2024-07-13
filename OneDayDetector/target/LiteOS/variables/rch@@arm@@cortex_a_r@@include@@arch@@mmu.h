    UINT32 ap : 1;            /* [15] */
    UINT32 ap : 1;            /* [9] */
    UINT32 ap : 1;            /* [9] */
    UINT32 ap1 : 2;           /* [11 : 10] */
    UINT32 ap1 : 2;           /* [5 : 4] */
    UINT32 ap1 : 2;           /* [5 : 4] */
    UINT32 b : 1;             /* [2] */
    UINT32 b : 1;             /* [2] */
    UINT32 b : 1;             /* [2] */
    UINT32 baseAddress : 12;  /* [31 : 20] */
    UINT32 baseAddress : 16;  /* [31 : 16] */
    UINT32 baseAddress : 20;  /* [31 : 12] */
    UINT32 baseAddress : 22;  /* [31 : 10] */
    struct MMUSecondLevelBigPageTable bigPageTable;
    UINT32 c : 1;             /* [3] */
    UINT32 c : 1;             /* [3] */
    UINT32 c : 1;             /* [3] */
    UINT32 domain : 4;        /* [8 : 5] */
    UINT32 domain : 4;        /* [8 : 5] */
    UINT32 endAddr;   /* Ending address of a section. */
    struct MMUFirstLevelFault fault;
    UINT32 id : 1;            /* [1] */
    UINT32 id : 2;            /* [1 : 0] */
    UINT32 id : 2;            /* [1 : 0] */
    UINT32 id : 2;            /* [1 : 0] */
    UINT32 id : 2;            /* [1 : 0] */
    UINT32 id : 2;            /* [1 : 0] */
    UINT32 imp : 1;           /* [9] */
    UINT32 imp : 1;           /* [9] */
    UINT32 ng : 1;            /* [11] */
    UINT32 ng : 1;            /* [11] */
    UINT32 ng : 1;            /* [17] */
    UINT32 ns : 1;            /* [19] */
    UINT32 ns : 1;            /* [3] */
    struct MMUFirstLevelPageTable pageTable;
    UINT32 page_addr;   /* The second page start addr */
    UINT32 page_descriptor_addr;
    UINT32 page_length; /* The second page length */
    UINT32 page_type;
    UINT32 pxn : 1;           /* [2] */
    struct MMUFirstLevelReserved reserved;
    UINT32 revs : 1;          /* [18] */
    UINT32 s : 1;             /* [10] */
    UINT32 s : 1;             /* [10] */
    UINT32 s : 1;             /* [16] */
    UINT32 sbz : 1;           /* [4] */
    UINT32 sbz : 30;          /* [31 : 2] */
    UINT32 sbz : 30;          /* [31 : 2] */
    UINT32 sbz : 3;           /* [8 : 6] */
    struct MMUFirstLevelSection section;
    struct MMUSecondLevelSmallPageTable smallPageTable;
    SENCOND_PAGE *stPage;
    UINT32 startAddr; /* Starting address of a section. */
    UINT32 tex : 3;           /* [14 : 12] */
    UINT32 tex : 3;           /* [14 : 12] */
    UINT32 tex : 3;           /* [8 : 6] */
    UINT32 uwFlag;
    UINTPTR word;
    UINT32 xn : 1;            /* [0] */
    UINT32 xn : 1;            /* [15] */
    UINT32 xn : 1;            /* [4] */
