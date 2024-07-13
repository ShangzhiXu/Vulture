    LosMemCtlNode backupNode;
    UINTPTR checksum; /* magic = xor checksum */
        LOS_DL_LIST freeNodeInfo;         /* Free memory node */
    UINT32 gapSize;
    UINTPTR linkReg[LOS_RECORD_LR_CNT];
            UINT32 magic;
            UINT32 moduleId : 16;
    UINT32 originSize;
    struct tagLosMemDynNode *preNode; /* Pointer to the previous memory node */
    UINT32 reserve1; /* 64-bit alignment */
    UINT32 reserve2; /* 64-bit alignment */
    LosMemCtlNode selfNode;
    UINT32 sizeAndFlag;
            UINT32 taskId   : 16;
