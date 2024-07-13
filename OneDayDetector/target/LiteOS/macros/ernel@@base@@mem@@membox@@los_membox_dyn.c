#define MEMBOX_LOCK(state)       LOS_SpinLockSave(&g_memboxSpin, &(state))
#define MEMBOX_UNLOCK(state)     LOS_SpinUnlockRestore(&g_memboxSpin, (state))
