    UINT16 muxCount; /**< Times of locking a mutex */
    UINT16 muxCount; /**< Times of locking a mutex */
    UINT32 muxId; /**< Handle ID */
    LOS_DL_LIST muxList; /**< Mutex linked list */
    LOS_DL_LIST muxList; /**< Mutex linked list */
    UINT8 muxStat; /**< State OS_MUX_UNUSED, OS_MUX_USED */
    LosTaskCB *owner; /**< The current thread that is locking a mutex */
    LosTaskCB *owner; /**< The current thread that is locking a mutex */
