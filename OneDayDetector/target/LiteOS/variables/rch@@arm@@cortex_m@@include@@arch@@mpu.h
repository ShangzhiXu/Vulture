    UINT32 accessPermission;  /* privilege level and user level access permission */
    UINT32 baseAddress;       /* set the base address of the protected region,
    BOOL buffable;            /* whether buffer */
    BOOL cachable;            /* whether cache */
    BOOL hfnmiena;            /* Whether in the NMI and hard fault service routine
    UINT8 number;             /* number of MPU register to be checked */
    UINT32 regionSize;        /* region size */
    BOOL sharable;            /* whether to share */
    BOOL xn;                  /* To indicate whether instructions are fetchable in this region,
