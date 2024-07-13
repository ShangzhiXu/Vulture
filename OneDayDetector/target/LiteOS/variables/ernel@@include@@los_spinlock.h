    UINT32      cpuid;              /**< the cpu id when the lock is obtained. It is defined
    const CHAR  *name;              /**< the lock owner's task name. It is defined only when
    VOID        *owner;             /**< the pointer to the lock owner's task control block.
    size_t      rawLock;            /**< raw spinlock */
