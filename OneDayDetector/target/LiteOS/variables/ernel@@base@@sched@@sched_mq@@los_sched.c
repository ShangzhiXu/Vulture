    UINT32          bitmap;           /* priority-queue bitmap */
    SPIN_LOCK_S     lock;             /* private spinlock */
    LOS_DL_LIST     queues[NPQS];     /* one for each priority */
