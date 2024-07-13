    UINT64 LR;                  /**< Program returning address. X30 */
    UINT64 SP;
    UINT64 SPSR;
    UINT64 X[EXC_GEN_REGS_NUM]; /**< Register X0-X29 */
    ExcContext *context; /**< Hardware context when an exception occurs */
    UINT16 nestCnt;      /**< Count of nested exception */
    UINT16 phase;        /**< Phase in which an exception occurs */
    UINT64 regELR;
    UINT16 reserved;     /**< Reserved for alignment */
    UINT16 type;         /**< Exception type */
