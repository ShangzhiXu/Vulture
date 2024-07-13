  } def;                               ///< event definition
  uint32_t                   dummy;    ///< dummy value.
  uint32_t                   dummy;    ///< dummy value.
  uint32_t               instances;    ///< maximum number of instances of that thread function
  uint32_t                 item_sz;    ///< size of an item
  uint32_t                 item_sz;    ///< size of an item
  uint32_t                 item_sz;    ///< size of an item
    osMailQId             mail_id;     ///< mail id obtained by \ref osMailCreate
    osMessageQId       message_id;     ///< message id obtained by \ref osMessageCreate
  char                       *name;
    void                       *p;     ///< message or mail as void pointer
    void *pool;
  void                       *pool;    ///< memory array for mail
  void                       *pool;    ///< memory array for messages
  void                       *pool;    ///< pointer to memory for pool
  uint32_t                 pool_sz;    ///< number of items (elements) in the pool
  os_pthread               pthread;    ///< start address of thread function
  os_ptimer                 ptimer;    ///< start address of a timer function
    uint32_t queue;
  uint32_t                queue_sz;    ///< number of elements in the queue
  uint32_t                queue_sz;    ///< number of elements in the queue
    int32_t               signals;     ///< signal flags
  uint32_t               stacksize;    ///< stack size requirements in bytes; 0 is default stack size
  osStatus                 status;     ///< status code: event or error information
  osPriority             tpriority;    ///< initial thread priority
    uint32_t                    v;     ///< message as 32-bit value
  } value;                             ///< event value
