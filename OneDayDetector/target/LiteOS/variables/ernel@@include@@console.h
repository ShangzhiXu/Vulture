    UINT32 consoleID;
    UINT32 consoleMask;
    UINT32 consoleSem;
    struct termios consoleTermios;
    UINT32 consoleType;
    UINT32 currentLen;
    struct inode *devInode;
    INT32 fd;
    UINT8 fifo[CONSOLE_FIFO_SIZE];
    UINT32 fifoIn;
    UINT32 fifoOut;
    BOOL isNonBlock;
    CHAR *name;
    UINT32 refCount;
    Ringbuf ringbuf;           /* Ring buffer */
    RingbufSendCB *ringbufSendCB;
    EVENT_CB_S sendEvent;   /* Inform telnet send task */
    UINT32 sendTaskID;
    UINT32 shellEntryId;
    VOID *shellHandle;
