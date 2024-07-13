#define LOS_MEMBOX_ALLIGNED(memAddr) (((UINTPTR)(memAddr) + sizeof(UINTPTR) - 1) & (~(sizeof(UINTPTR) - 1)))
#define LOS_MEMBOX_SIZE(blkSize, blkNum) \
    (sizeof(LOS_MEMBOX_INFO) + (LOS_MEMBOX_ALLIGNED((blkSize) + OS_MEMBOX_NODE_HEAD_SIZE) * (blkNum)))
#define OS_MEMBOX_NEXT(addr, blkSize) (LOS_MEMBOX_NODE *)(VOID *)((UINT8 *)(addr) + (blkSize))
