  uint32_t                       api;   ///< API version (major.minor.rev: mmnnnrrrr dec).
  uint32_t                 attr_bits;   ///< attribute bits
  uint32_t                 attr_bits;   ///< attribute bits
  uint32_t                 attr_bits;   ///< attribute bits
  uint32_t                 attr_bits;   ///< attribute bits
  uint32_t                 attr_bits;   ///< attribute bits
  uint32_t                 attr_bits;   ///< attribute bits
  uint32_t                 attr_bits;   ///< attribute bits
  void                      *cb_mem;    ///< memory for control block
  void                      *cb_mem;    ///< memory for control block
  void                      *cb_mem;    ///< memory for control block
  void                      *cb_mem;    ///< memory for control block
  void                      *cb_mem;    ///< memory for control block
  void                      *cb_mem;    ///< memory for control block
  void                      *cb_mem;    ///< memory for control block
  uint32_t                   cb_size;   ///< size of provided memory for control block
  uint32_t                   cb_size;   ///< size of provided memory for control block
  uint32_t                   cb_size;   ///< size of provided memory for control block
  uint32_t                   cb_size;   ///< size of provided memory for control block
  uint32_t                   cb_size;   ///< size of provided memory for control block
  uint32_t                   cb_size;   ///< size of provided memory for control block
  uint32_t                   cb_size;   ///< size of provided memory for control block
  uint32_t                    kernel;   ///< Kernel version (major.minor.rev: mmnnnrrrr dec).
  void                      *mp_mem;    ///< memory for data storage
  uint32_t                   mp_size;   ///< size of provided memory for data storage
  void                      *mq_mem;    ///< memory for data storage
  uint32_t                   mq_size;   ///< size of provided memory for data storage
  const char                   *name;   ///< name of the event flags
  const char                   *name;   ///< name of the memory pool
  const char                   *name;   ///< name of the message queue
  const char                   *name;   ///< name of the mutex
  const char                   *name;   ///< name of the semaphore
  const char                   *name;   ///< name of the thread
  const char                   *name;   ///< name of the timer
  osPriority_t              priority;   ///< initial thread priority (default: osPriorityNormal)
  uint32_t                  reserved;   ///< reserved (must be 0)
  void                   *stack_mem;    ///< memory for stack
  uint32_t                stack_size;   ///< size of stack
  TZ_ModuleId_t            tz_module;   ///< TrustZone module identifier
