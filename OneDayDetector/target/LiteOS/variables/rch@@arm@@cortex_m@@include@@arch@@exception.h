    UINT32 FPSCR;
    UINT32 LR;
    UINT32 NO_NAME;
    UINT32 PC;
    UINT32 PriMask;
    UINT32 R0;
    UINT32 R1;
    UINT32 R10;
    UINT32 R11;
    UINT32 R12;
    UINT32 R2;
    UINT32 R3;
    UINT32 R4;
    UINT32 R5;
    UINT32 R6;
    UINT32 R7;
    UINT32 R8;
    UINT32 R9;
    UINT32 S0;
    UINT32 S1;
    UINT32 S10;
    UINT32 S11;
    UINT32 S12;
    UINT32 S13;
    UINT32 S14;
    UINT32 S15;
    UINT32 S16;
    UINT32 S17;
    UINT32 S18;
    UINT32 S19;
    UINT32 S2;
    UINT32 S20;
    UINT32 S21;
    UINT32 S22;
    UINT32 S23;
    UINT32 S24;
    UINT32 S25;
    UINT32 S26;
    UINT32 S27;
    UINT32 S28;
    UINT32 S29;
    UINT32 S3;
    UINT32 S30;
    UINT32 S31;
    UINT32 S4;
    UINT32 S5;
    UINT32 S6;
    UINT32 S7;
    UINT32 S8;
    UINT32 S9;
    UINT32 SP;
    ExcContext *context;       /* Hardware context when an exception occurs */
    UINT32 faultAddr;          /* The wrong access address when the exception occurred */
    EXC_INFO_SAVE_CALLBACK  fnExcInfoCb;
    UINT32 intNumOrTaskId;     /* An exception occurred during the interrupt indicating the interrupt number,
    UINT16 nestCnt;            /* Count of nested exception */
    VOID                    *pArg;
    UINT16 phase;              /* Phase in which an exception occurs:
    UINT16 reserved;           /* Reserved for alignment */
    ExcInfoType             type;
    UINT16 type;               /* Exception type */
    UINT32                  valid;
    UINT32 xPSR;
