    CHAR cmdBuf[CMD_MAX_LEN]; /* the command to watch */
    UINT32 count; /* the total number of command executions */
    UINT32 interval; /* running cycle of the command */
    BOOL title; /* whether to hide the timestamps */
    EVENT_CB_S watchEvent; /* event handle of the watch structure */
