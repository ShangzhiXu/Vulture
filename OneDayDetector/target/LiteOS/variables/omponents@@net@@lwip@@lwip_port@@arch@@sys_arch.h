    int first, last;
    int isEmpty;
    int isFull;
    int first, last;
    int mbox_size;
    void** msgs;
    unsigned int  mutex;
    struct sys_thread* next;
    unsigned int  not_empty;
    unsigned int  not_full;
    UINT32 pthread;
    LosSemCB* sem;        /**< Semaphore attribute structure*/
