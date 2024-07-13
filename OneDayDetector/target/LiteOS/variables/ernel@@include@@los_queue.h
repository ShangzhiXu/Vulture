    UINT16 usQueueHead;     /**< The position of queue header node, it is an array subscript */
    UINT16 usQueueLen;      /**< Queue length, that is the number of node in the queue */
    UINT16 usQueueSize;     /**< Node size in the queue */
    UINT16 usQueueTail;     /**< The position of queue tail node, it is an array subscript */
    UINT16 usReadableCnt;   /**< Count of readable resources */
    UINT16 usWritableCnt;   /**< Count of writable resources */
    UINT32 uwQueueID;       /**< Queue ID */
    UINT64 uwWaitMemTask;   /**< Tasks waiting for memory used by the MailBox in the CMSIS-RTOS.
    UINT64 uwWaitReadTask;  /**< Tasks waiting for reading message. It is a 64-bit unsigned
    UINT64 uwWaitWriteTask; /**< Tasks waiting for writing message. It is a 64-bit unsigned
