    UINT32 LR;      /**< Program returning address. */
    UINT32 PC;      /**< PC pointer of the exceptional function */
    UINT32 R0;      /**< Register R0 */
    UINT32 R1;      /**< Register R1 */
    UINT32 R10;     /**< Register R10 */
    UINT32 R11;     /**< Register R11 */
    UINT32 R12;     /**< Register R12 */
    UINT32 R2;      /**< Register R2 */
    UINT32 R3;      /**< Register R3 */
    UINT32 R4;      /**< Register R4 */
    UINT32 R5;      /**< Register R5 */
    UINT32 R6;      /**< Register R6 */
    UINT32 R7;      /**< Register R7 */
    UINT32 R8;      /**< Register R8 */
    UINT32 R9;      /**< Register R9 */
    UINT32 SP;      /**< Stack pointer */
    ExcContext *context; /**< Hardware context when an exception occurs */
    UINT16 nestCnt;      /**< Count of nested exception */
    UINT16 phase;        /**< Phase in which an exception occurs */
    UINT32 regCPSR; /**< Current program status register (CPSR) */
    UINT16 reserved;     /**< Reserved for alignment */
    UINT16 type;         /**< Exception type */
