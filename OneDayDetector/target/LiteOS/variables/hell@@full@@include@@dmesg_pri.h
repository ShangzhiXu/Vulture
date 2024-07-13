    CHAR   *logBuf; /* The log buffer addr */
    UINT32 logHead; /* The index of the first log data. Data_out_flag */
    UINT32 logSize; /* The size of log in buffer */
    UINT32 logTail; /* The index where to write, write in and plus one. Data_it_flag */
