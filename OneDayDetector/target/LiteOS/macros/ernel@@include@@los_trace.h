#define EVENT_CLEAR_PARAMS(eventCB, eventId, events)    eventCB, eventId, events
#define EVENT_CREATE_PARAMS(eventCB)                    eventCB
#define EVENT_DELETE_PARAMS(eventCB, delRetCode)        eventCB, delRetCode
#define EVENT_READ_PARAMS(eventCB, eventId, mask, mode, timeout) \
    eventCB, eventId, mask, mode, timeout
#define EVENT_WRITE_PARAMS(eventCB, eventId, events)    eventCB, eventId, events
#define HWI_CLEAR_PARAMS(hwiNum)                        hwiNum
#define HWI_CREATE_PARAMS(hwiNum, hwiPrio, hwiMode, hwiHandler) hwiNum, hwiPrio, hwiMode, hwiHandler
#define HWI_CREATE_SHARE_PARAMS(hwiNum, pDevId, ret)    hwiNum, pDevId, ret
#define HWI_DELETE_PARAMS(hwiNum)                       hwiNum
#define HWI_DELETE_SHARE_PARAMS(hwiNum, pDevId, ret)    hwiNum, pDevId, ret
#define HWI_DISABLE_PARAMS(hwiNum)                      hwiNum
#define HWI_ENABLE_PARAMS(hwiNum)                       hwiNum
#define HWI_RESPONSE_IN_PARAMS(hwiNum)                  hwiNum
#define HWI_RESPONSE_OUT_PARAMS(hwiNum)                 hwiNum
#define HWI_SENDIPI_PARAMS(hwiNum, cpuMask)             hwiNum, cpuMask
#define HWI_SETAFFINITY_PARAMS(hwiNum, cpuMask)         hwiNum, cpuMask
#define HWI_SETPRI_PARAMS(hwiNum, priority)             hwiNum, priority
#define HWI_TRIGGER_PARAMS(hwiNum)                      hwiNum
#define LOS_TRACE(TYPE, IDENTITY, ...)                                             \
    do {                                                                           \
        LOS_PERF(TYPE);                                                            \
        UINTPTR _inner[] = {0, TYPE##_PARAMS((UINTPTR)IDENTITY, ##__VA_ARGS__)};   \
        UINTPTR _n = sizeof(_inner) / sizeof(UINTPTR);                             \
        if (_n > 1) {                                                              \
            OsTraceHook(TYPE, _inner[1], _n > 2 ? &_inner[2] : NULL, _n - 2);      \
        }                                                                          \
    } while (0)
#define LOS_TRACE(TYPE, ...)   LOS_PERF(TYPE)
#define LOS_TRACE_EASY(TYPE, IDENTITY, ...)                                                                 \
    do {                                                                                                    \
        UINTPTR _inner[] = {0, ##__VA_ARGS__};                                                              \
        UINTPTR _n = sizeof(_inner) / sizeof(UINTPTR);                                                      \
        OsTraceHook(TRACE_USER_DEFAULT_FLAG | TYPE, (UINTPTR)IDENTITY, _n > 1 ? &_inner[1] : NULL, _n - 1); \
    } while (0)
#define LOS_TRACE_EASY(...)
#define MEM_ALLOC_ALIGN_PARAMS(pool, ptr, size, boundary)   pool, ptr, size, boundary
#define MEM_ALLOC_PARAMS(pool, ptr, size)                   pool, ptr, size
#define MEM_FREE_PARAMS(pool, ptr)                          pool, ptr
#define MEM_INFO_PARAMS(pool, usedSize, freeSize)           pool, usedSize, freeSize
#define MEM_INFO_REQ_PARAMS(pool)                           pool
#define MEM_REALLOC_PARAMS(pool, ptr, size)                 pool, ptr, size
#define MUX_CREATE_PARAMS(muxId)                        muxId
#define MUX_DELETE_PARAMS(muxId, state, count, owner)   muxId, state, count, owner
#define MUX_PEND_PARAMS(muxId, count, owner, timeout)   muxId, count, owner, timeout
#define MUX_POST_PARAMS(muxId, count, owner)            muxId, count, owner
#define QUEUE_CREATE_PARAMS(queueId, queueSz, itemSz, queueAddr, memType) \
    queueId, queueSz, itemSz, queueAddr, memType
#define QUEUE_DELETE_PARAMS(queueId, state, readable)   queueId, state, readable
#define QUEUE_RW_PARAMS(queueId, queueSize, bufSize, operateType, readable, writeable, timeout) \
    queueId, queueSize, bufSize, operateType, readable, writeable, timeout
#define SEM_CREATE_PARAMS(semId, type, count)           semId, type, count
#define SEM_DELETE_PARAMS(semId, delRetCode)            semId, delRetCode
#define SEM_PEND_PARAMS(semId, count, timeout)          semId, count, timeout
#define SEM_POST_PARAMS(semId, type, count)             semId, type, count
#define SWTMR_CREATE_PARAMS(swtmrId)                                  swtmrId
#define SWTMR_DELETE_PARAMS(swtmrId)                                  swtmrId
#define SWTMR_EXPIRED_PARAMS(swtmrId)                                 swtmrId
#define SWTMR_START_PARAMS(swtmrId, mode, overrun, interval, expiry)  swtmrId, mode, overrun, interval, expiry
#define SWTMR_STOP_PARAMS(swtmrId)                                    swtmrId
#define SYS_ERROR_PARAMS(errno)                         errno
#define TASK_CREATE_PARAMS(taskId, taskStatus, prio)     taskId, taskStatus, prio
#define TASK_DELETE_PARAMS(taskId, taskStatus, usrStack) taskId, taskStatus, usrStack
#define TASK_PRIOSET_PARAMS(taskId, taskStatus, oldPrio, newPrio) taskId, taskStatus, oldPrio, newPrio
#define TASK_RESUME_PARAMS(taskId, taskStatus, prio)     taskId, taskStatus, prio
#define TASK_SIGNAL_PARAMS(taskId, signal, schedFlag)    // taskId, signal, schedFlag
#define TASK_SUSPEND_PARAMS(taskId, taskStatus, runTaskId) taskId, taskStatus, runTaskId
#define TASK_SWITCH_PARAMS(taskId, oldPriority, oldTaskStatus, newPriority, newTaskStatus) \
    taskId, oldPriority, oldTaskStatus, newPriority, newTaskStatus
