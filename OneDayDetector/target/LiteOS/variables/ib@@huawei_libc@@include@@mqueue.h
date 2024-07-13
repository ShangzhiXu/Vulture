    long mq_curmsgs;  /**< Number of messages in the current message queue */
    int mq_flags;
    long mq_flags;    /**< Message queue flags */
    UINT32 mq_id;
    long mq_maxmsg;   /**< Maximum number of messages */
    long mq_msgsize;  /**< Maximum size of a message */
    char mq_name[PATH_MAX];
    struct mqpersonal *mq_next;
    struct mqpersonal *mq_personal;
    struct mqarray *mq_posixdes;
    UINT32 mq_status;
    LosQueueCB *mqcb;
    BOOL unlinkflag;
