    UINT64 allTime;                                       /* Total running time */
    UINT64 historyTime[OS_CPUP_HISTORY_RECORD_NUM + 1];   /* Historical running time, the last one saves zero */
    UINT32 id;                                            /* Task ID */
    UINT64 startTime;                                     /* Time before a task is invoked */
    UINT16 status;                                        /* Task status */
