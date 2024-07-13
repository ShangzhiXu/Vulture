#define HWI_LOCK(state)       LOS_SpinLockSave(&g_hwiSpin, &(state))
#define HWI_NUM_VALID(num)    (((num) >= OS_USER_HWI_MIN) && ((num) <= OS_USER_HWI_MAX))
#define HWI_PRI_VALID(pri)    (((pri) >= OS_HWI_PRIO_HIGHEST) && ((pri) <= OS_HWI_PRIO_LOWEST))
#define HWI_UNLOCK(state)     LOS_SpinUnlockRestore(&g_hwiSpin, (state))
