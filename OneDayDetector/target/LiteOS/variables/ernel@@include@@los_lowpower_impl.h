    VOID (*changeFreq)(UINT8 freq);           /**< Tune system frequency */
    PowerMgrConfig config;               /**< power manager config */
    VOID (*contextRestore)(VOID);             /**< Context restore */
    VOID (*contextSave)(VOID);                /**< Context save */
    BOOL (*couldDeepSleep)(VOID);    /**< Check whether could enter deep sleep */
    PowerMgrDeepSleepOps deepSleepOps;   /**< power manager deep sleep operations */
    VOID (*enterDeepSleep)(VOID);             /**< Enter deep sleep */
    VOID (*enterLightSleep)(VOID);            /**< Enter light sleep */
    UINT32 (*getDeepSleepVoteCount)(VOID);    /**< Get deep sleep vote count */
    UINT32 (*getSleepMode)(VOID);             /**< Get sleep mode */
    UINT32 (*getSleepTime)(VOID);             /**< Get sleep time */
    UINT32 maxDeepSleepTicks;  /**< Max deep sleep ticks */
    UINT32 minDeepSleepTicks;  /**< Min deep sleep ticks */
    UINT32 minLightSleepTicks; /**< Min light sleep ticks */
    VOID (*otherCoreResume)(VOID);   /**< Other core Resume for multi-core scenes */
    VOID (*postConfig)(VOID);                 /**< Postconfig, provided for special needs after wakeup */
    UINT32 (*preConfig)(VOID);                /**< Preconfig, provided for special needs before entering sleep */
    VOID (*resumeCallBack)(VOID);    /**< Resume callback */
    VOID (*resumeDevice)(VOID);      /**< Resume device after wakeup from deep sleep */
    VOID (*resumeFromReset)(VOID);   /**< Resume from image */
    VOID (*resumePostConfig)(VOID);  /**< Resume postconfig, provided for special needs after wakeup from deep sleep */
    VOID (*rollback)(VOID);          /**< Rollback if failed */
    PowerMgrRunOps runOps;               /**< power manager framework running operations */
    UINT32 (*selectSleepMode)(UINT32);        /**< Select sleep mode, developers can set their own mode selecetion
    VOID (*setSleepMode)(UINT32 mode);        /**< Set sleep mode */
    VOID (*setWakeUpTimer)(UINT32 timeout);   /**< Set wakeup timer */
    VOID (*suspendDevice)(VOID);     /**< Supend device before entering deep sleep */
    BOOL (*suspendPreConfig)(VOID);  /**< Suspend preconfig, provided for special needs before entering deep sleep */
    VOID (*systemWakeup)(VOID);      /**< System wakup */
    UINT32 (*withdrawWakeUpTimer)(VOID);      /**< Withdraw wakeup timer */
