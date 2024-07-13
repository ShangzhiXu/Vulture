#define OsTraceNotifyStart() do {                                \
        OsTraceSendNotify(SYS_START, TRACE_CTL_MAGIC_NUM);       \
        OsTraceSendHead();                                       \
        OsTraceSendObjTable();                                   \
    } while (0)
#define OsTraceNotifyStart()
#define OsTraceNotifyStop() do {                                 \
        OsTraceSendNotify(SYS_STOP, TRACE_CTL_MAGIC_NUM);        \
    } while (0)
#define OsTraceNotifyStop()
#define OsTraceRecordDump(toClient)
#define OsTraceReset()
#define TRACE_GET_MODE_FLAG(type)           ((type) & 0xFFFFFFF0)
#define TRACE_LOCK(state)                   LOS_SpinLockSave(&g_traceSpin, &(state))
#define TRACE_MASK_COMBINE(c1, c2, c3, c4)  (((c1) << 24) | ((c2) << 16) | ((c3) << 8) | (c4))
#define TRACE_UNLOCK(state)                 LOS_SpinUnlockRestore(&g_traceSpin, (state))
#define TRACE_VERSION(MODE)                 (0xFFFFFFFF & (MODE))
