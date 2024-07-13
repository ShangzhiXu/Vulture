#define PIPE_LOCK(state)                   LOS_SpinLockSave(&g_pipeSpin, &(state))
#define PIPE_UNLOCK(state)                 LOS_SpinUnlockRestore(&g_pipeSpin, (state))
