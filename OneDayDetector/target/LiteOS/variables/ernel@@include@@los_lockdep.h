    HeldLocks heldLocks[MAX_LOCK_DEPTH];
    UINT64 holdTime;
    VOID *lockAddr;
    INT32 lockDepth;
    VOID *lockPtr;
    VOID *waitLock;
    UINT64 waitTime;
