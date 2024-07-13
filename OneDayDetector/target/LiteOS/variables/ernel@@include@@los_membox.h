    struct tagMEMBOX_NODE *pstNext; /**< Free node's pointer to the next node in a static memory pool. */
    LOS_MEMBOX_NODE stFreeList; /**< The list of free memory block node in the static memory pool. This
    UINT32 uwBlkCnt;            /**< The number of allocated memory blocks in the static memory pool */
    UINT32 uwBlkNum;            /**< The total memory block number of the static memory pool */
    UINT32 uwBlkSize;           /**< The memory block size of the static memory pool */
