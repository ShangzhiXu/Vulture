#define CYCLE_TO_NS(cycles) ((cycles) * g_cycle2NsScale)
#define TICK_LOCK(state)                       LOS_SpinLockSave(&g_tickSpin, &(state))
#define TICK_UNLOCK(state)                     LOS_SpinUnlockRestore(&g_tickSpin, (state))
