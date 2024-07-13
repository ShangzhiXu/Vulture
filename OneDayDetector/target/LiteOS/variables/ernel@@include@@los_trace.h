    TraceBaseHeaderInfo baseInfo;          /**< basic info, include bigLittleEndian flag, system clock freq */
    UINT32 bigLittleEndian;     /**< big little endian flag */
    UINT32 clockFreq;           /**< system clock frequency */
    } core;
        UINT32 cpuId      : 8,                       /**< cpuid */
    UINT32  curTask;                                 /**< current running task */
    UINT64  curTime;                                 /**< current timestamp */
    UINT32  eventCount;                               /**< the sequence of happend events */
    UINT32  eventType;                               /**< event type */
    UINT16 frameOffset;                    /**< the offset of the first event frame data to record beginning */
    UINT16 frameSize;                      /**< sizeof #TraceEventFrame */
               hwiActive  : 4,                       /**< whether is in hwi response */
    UINT32      id;                                     /**< kernel obj's id */
    UINTPTR identity;                                /**< subject of the event description */
    CHAR        name[LOSCFG_TRACE_OBJ_MAX_NAME_SIZE];   /**< kernel obj's name */
    UINT16 objOffset;                      /**< the offset of the first obj data to record beginning */
    UINT16 objSize;                        /**< sizeof #ObjData */
               paramCount : 4,                       /**< event frame params' number */
    UINTPTR params[LOSCFG_TRACE_FRAME_MAX_PARAMS];    /**< event frame's params */
    UINT32      prio;                                   /**< kernel obj's priority */
               reserves   : 12;                      /**< reserves */
               taskLockCnt : 4,                      /**< task lock count */
    UINT16 totalLen;                       /**< trace data's total length */
    UINT32 version;             /**< trace version */
