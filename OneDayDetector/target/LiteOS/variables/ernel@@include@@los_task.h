    CHAR                acName[LOS_TASK_NAMELEN];   /**< Task name, the default value of
    UINTPTR         auwArgs[4];    /**< Task parameters, of which the maximum number is four.
    BOOL                bOvf;                       /**< Flag that indicates whether a task stack overflow
    VOID            *pArgs;        /**< Task Parameter, of which the type is void * */
    VOID                *pTaskMux;                  /**< Mutex pointer            */
    VOID                *pTaskSem;                  /**< Semaphore pointer        */
    CHAR            *pcName;       /**< Task name */
    TSK_ENTRY_FUNC  pfnTaskEntry;  /**< Task entrance function */
    UINT16          usCpuAffiMask; /**< Task cpu affinity mask. It is defined only when LOSCFG_KERNEL_SMP is defined. */
    UINT16              usTaskPrio;                 /**< Task priority            */
    UINT16          usTaskPrio;    /**< Task priority */
    UINT16              usTaskStatus;               /**< Task status              */
    UINTPTR             uwBottomOfStack;            /**< Task stack bottom        */
    UINT32              uwCurrUsed;                 /**< Current task stack usage */
    EVENT_CB_S          uwEvent;                    /**< Event                    */
    UINT32              uwEventMask;                /**< Event mask               */
    UINT32              uwPeakUsed;                 /**< Task stack usage peak    */
    UINT32          uwResved;      /**< Task is automatically deleted if uwResved is set to #LOS_TASK_STATUS_DETACHED.
    UINTPTR             uwSP;                       /**< Task SP pointer          */
    UINT32              uwStackSize;                /**< Task stack size          */
    UINT32          uwStackSize;   /**< Task stack size */
    UINT32              uwTaskID;                   /**< Task ID                  */
    UINTPTR             uwTopOfStack;               /**< Task stack top           */
