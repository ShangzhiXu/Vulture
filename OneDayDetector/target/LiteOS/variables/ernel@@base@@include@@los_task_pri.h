    UINTPTR         args[4];            /* Parameter, of which the maximum number is 4 */
    VOID            *args;              /* Parameter, of which the type is void * */
    UINT16          cpuAffiMask;        /* CPU affinity mask, support up to 16 cores */
    UINT16          currCpu;            /* CPU core number of this task is running on */
    EVENT_CB_S      event;
    UINT32          eventMask;          /* Event mask */
    UINT32          eventMode;          /* Event mode */
    UINTPTR         fp;
    UINT16          lastCpu;            /* CPU core number of this task is running on last time */
    LockDep         lockDep;
    VOID            *msg;               /* Memory allocated to queues */
    UINTPTR         pc;
    LOS_DL_LIST     pendList;           /* Task pend node */
    UINT32          priBitMap;          /* BitMap for recording the change of task priority,
    UINT16          priority;           /* Task priority */
    SchedStat       schedStat;          /* Schedule statistics */
    UINT32          signal;             /* Task signal */
    SortLinkList    sortList;           /* Task sortlink node */
    UINT32          stackFrame;         /* Stack frame: 0=Basic, 1=Extended */
    VOID            *stackPointer;      /* Task stack pointer */
    UINT32          stackSize;          /* Task stack size */
    UINT32          syncSignal;         /* Synchronization for signal handling */
    LosTaskCB *task; /* Current running task */
    TSK_ENTRY_FUNC  taskEntry;          /* Task entrance function */
    UINT32          taskFlags : 31;     /* Task extend flags: taskFlags uses 8 bits now. 23 bits left */
    UINT32          taskId;             /* Task ID */
    VOID            *taskMux;           /* Task-held mutex */
    CHAR            *taskName;          /* Task name */
    VOID            *taskSem;           /* Task-held semaphore */
    UINT16          taskStatus;         /* Task status */
    VOID            *threadJoin;        /* pthread adaption */
    VOID            *threadJoinRetval;  /* pthread adaption */
    UINT16 time;     /* Expiration time point */
    UINT16          timeSlice;          /* Remaining time slice */
    UINT16 timeout;  /* Expiration duration */
    UINT32          timerCpu;           /* CPU core number of this task is delayed or pended */
    UINTPTR         topOfStack;         /* Task stack top */
    UINT32          usrStack : 1;       /* Usr Stack uses the last bit */
