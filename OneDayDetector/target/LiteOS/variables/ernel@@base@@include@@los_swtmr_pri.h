    UINTPTR arg;                /**< Parameter passed in when the callback function
    UINTPTR arg;      /**< Parameter passed in when the callback function
    UINT32 cpuid;     /**< The cpu where the timer running on */
    UINT32 expiry;    /**< Timeout interval of an one-off software timer (unit: tick) */
    SWTMR_PROC_FUNC handler;    /**< Callback function that handles software timer timeout  */
    SWTMR_PROC_FUNC handler; /**< Callback function that handles software timer timeout */
    UINT32 interval;  /**< Timeout interval of a periodic software timer (unit: tick) */
    UINT8 mode;       /**< Software timer mode */
    UINT8 overrun;    /**< Times that a software timer repeats timing */
    SortLinkList sortList;
    UINT8 state;      /**< Software timer state */
    UINT16 timerId;   /**< Software timer ID */
