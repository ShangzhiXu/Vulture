    UINT64      lastAccessTime; /* The last operation time */
    VOID        *muxCB;  /* The Mutex CB pointer */
    LOS_DL_LIST muxList; /* Insert mutex into the owner task CB */
    LOS_DL_LIST muxListHead;    /* Task-held mutexs list */
