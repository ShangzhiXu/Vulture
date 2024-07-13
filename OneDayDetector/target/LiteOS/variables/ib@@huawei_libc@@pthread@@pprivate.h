    pthread_attr_t      attr; /* Current thread attributes */
    struct pthread_cleanup_buffer *cancelbuf; /* cleanup buffer */
    volatile UINT8      canceled; /* pending cancel flag */
    UINT8               cancelstate; /* Cancel state of thread */
    volatile UINT8      canceltype; /* Cancel type of thread */
    UINT32              freestack; /* stack malloced, must be freed */
    pthread_t           id; /* My thread ID */
    LosSemCB            *joiner; /* sem for pthread_join */
    CHAR                name[PTHREAD_DATA_NAME_MAX]; /* Thread name */
    UINT32              stackmem; /* base of stack memory area only valid if freestack == true */
    UINT8               state; /* Thread state */
    LosTaskCB           *task; /* pointer to Huawei LiteOS thread object */
    VOID                **thread_data; /* Per-thread data table pointer */
    VOID *tsd[PTHREAD_KEYS_MAX];
    UINT8 tsd_used : 1; /* pthread tsd */
