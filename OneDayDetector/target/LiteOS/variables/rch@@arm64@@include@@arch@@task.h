    UINT64 LR;              /* X30 */
    UINT64 NZCV;
    UINT64 PC;              /* PC */
    UINT128 Q[FP_REGS_NUM]; /* Q0-Q31 */
    UINT64 X[GEN_REGS_NUM]; /* X0-X29 */
    UINT64 regFPCR;         /* FPCR */
    UINT64 regFPSR;         /* FPSR */
    UINT64 regSPSR;
