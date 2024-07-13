    UINT32 excFlag;                             /* cpu halt or exc flag */
    LOS_DL_LIST funcLink;                       /* mp function call link */
    UINT32 idleTaskId;                          /* idle task id */
    UINT32 schedFlag;                           /* pending scheduler flag */
    UINT32 swtmrHandlerQueue;                   /* software timer timeout queue id */
    SortLinkAttribute swtmrSortLink;            /* swtmr sort link */
    UINT32 swtmrTaskId;                         /* software timer task id */
    UINT32 taskLockCnt;                         /* task lock flag */
    SortLinkAttribute taskSortLink;             /* task sort link */
