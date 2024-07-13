    VOID (*changeFreq)(LosFreqMode);         /**< System frequency tuning interface, the param is LosFreqMode */
    VOID (*deepSleepVoteBegin)(VOID);        /**< Deep sleep vote mark interface */
    VOID (*deepSleepVoteDelay)(UINT32 tick); /**< Deep sleep vote delay interface, the param is the delayed ticks */
    VOID (*deepSleepVoteEnd)(VOID);          /**< Deep sleep vote erase interface */
    UINT32 (*getDeepSleepVoteCount)(VOID);   /**< Get deep sleep vote count interface */
    UINT32 (*getSleepMode)(VOID);            /**< Get sleep mode interface, the retval type is LosIntermitMode */
    VOID (*process)(VOID);                   /**< Power manager framework entry interface */
    VOID (*registerExternalVoter)(UINT32 (*handler)(VOID));  /**< External voter registration interface */
    VOID (*resumeFromInterrupt)(UINT32);     /**< Recovery interface used to wakeup from interrupt */
    VOID (*setSleepMode)(UINT32 mode);       /**< Set sleep mode interface, the param type is LosIntermitMode */
    VOID (*wakeupFromReset)(VOID);           /**< Recovery interface used to wakeup from image */
