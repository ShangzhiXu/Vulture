#define MEMBOX_LOCK(state)       LOS_SpinLockSave(&g_memboxSpin, &(state))
#define MEMBOX_UNLOCK(state)     LOS_SpinUnlockRestore(&g_memboxSpin, (state))
#define OS_MEMBOX_CHECK_MAGIC(addr) \
    ((((LOS_MEMBOX_NODE *)(addr))->pstNext == (LOS_MEMBOX_NODE *)OS_MEMBOX_MAGIC) ? LOS_OK : LOS_NOK)
#define OS_MEMBOX_NODE_ADDR(addr) \
    ((LOS_MEMBOX_NODE *)(VOID *)((UINT8 *)(addr) - OS_MEMBOX_NODE_HEAD_SIZE))
#define OS_MEMBOX_SET_MAGIC(addr) \
    ((LOS_MEMBOX_NODE *)(addr))->pstNext = (LOS_MEMBOX_NODE *)OS_MEMBOX_MAGIC
#define OS_MEMBOX_USER_ADDR(addr) \
    ((VOID *)((UINT8 *)(addr) + OS_MEMBOX_NODE_HEAD_SIZE))
