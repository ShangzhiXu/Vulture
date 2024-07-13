#define OsSetVector(num, vector) do {                               \
    g_hwiVec[num + OS_SYS_VECTOR_CNT] = (HWI_PROC_FUNC)IrqEntryV7M; \
    g_hwiForm[num + OS_SYS_VECTOR_CNT].pfnHook = vector;            \
} while (0)
