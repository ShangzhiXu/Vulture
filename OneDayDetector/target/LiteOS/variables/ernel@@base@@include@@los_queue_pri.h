    LOS_DL_LIST memList; /**< Pointer to the memory linked list */
    UINT8 *queueHandle; /**< Pointer to a queue handle */
    UINT16 queueHead; /**< Node head */
    UINT32 queueId; /**< queueId */
    UINT16 queueLen; /**< Queue length */
    UINT8 queueMemType; /**< Queue memory type */
    UINT16 queueSize; /**< Node size */
    UINT8 queueState; /**< Queue state */
    UINT16 queueTail; /**< Node tail */
    LOS_DL_LIST readWriteList[OS_QUEUE_N_RW]; /**< the linked list to be read or written, 0:readlist, 1:writelist */
    UINT16 readWriteableCnt[OS_QUEUE_N_RW]; /**< Count of readable or writable resources, 0:readable, 1:writable */
