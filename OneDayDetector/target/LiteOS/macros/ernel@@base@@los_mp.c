#define MP_CALL_LOCK(state)       LOS_SpinLockSave(&g_mpCallSpin, &(state))
#define MP_CALL_UNLOCK(state)     LOS_SpinUnlockRestore(&g_mpCallSpin, (state))
