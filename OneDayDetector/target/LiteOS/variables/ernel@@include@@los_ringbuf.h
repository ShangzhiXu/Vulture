    UINT32 endIdx;        /**< Ringbuf write index */
    CHAR *fifo;           /**< Buf to store data */
    SPIN_LOCK_S lock;     /**< Lock for read and write */
    UINT32 remain;        /**< Ringbuf free size */
    UINT32 size;          /**< Ringbuf total size */
    UINT32 startIdx;      /**< Ringbuf read index */
    RingbufStatus status; /**< Ringbuf status */
