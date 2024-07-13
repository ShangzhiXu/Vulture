#define IS_ALIGNED(value, alignSize) ((((UINTPTR)(value)) & ((UINTPTR)((alignSize) - 1))) == 0)
#define MEM_LOCK(state)       LOS_SpinLockSave(&g_memSpin, &(state))
#define MEM_UNLOCK(state)     LOS_SpinUnlockRestore(&g_memSpin, (state))
