    VOID (*clearIrq)(HWI_HANDLE_T hwiNum);
    VOID (*disableIrq)(HWI_HANDLE_T hwiNum);
    VOID (*enableIrq)(HWI_HANDLE_T hwiNum);
    UINT32 (*getCurIrqNum)(VOID);
    HwiHandleInfo *(*getHandleForm)(HWI_HANDLE_T hwiNum);
    CHAR *(*getIrqVersion)(VOID);
    VOID (*handleIrq)(VOID);
    HWI_PROC_FUNC hook;         /* User registered callback function */
    struct tagHwiHandleForm *next;
        HWI_ARG_T registerInfo; /* not the head node of the shared interrupt or no-shared interrupt: this parameter
    UINT32 respCount; /* Interrupt response counts */
    VOID (*sendIpi)(UINT32 target, UINT32 ipi);
    VOID (*setIrqCpuAffinity)(HWI_HANDLE_T hwiNum, UINT32 cpuMask);
    UINT32 (*setIrqPriority)(HWI_HANDLE_T hwiNum, UINT8 priority);
        HWI_ARG_T shareMode;    /* the head node of the shared interrupt: this parameter means the shared flag bit */
    VOID (*triggerIrq)(HWI_HANDLE_T hwiNum);
