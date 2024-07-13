#define ASSIGN_MEMBER(lhs, rhs, member)             \
    do {                                            \
        if ((rhs)->member == FORCE_NULL_CALLBACK) { \
            (lhs)->member = NULL;                   \
        } else if ((rhs)->member != NULL) {         \
            (lhs)->member = (rhs)->member;          \
        }                                           \
    } while (0)
#define ASSIGN_MEMBER_NOT_NULL(lhs, rhs, member) \
    do {                                         \
        ASSIGN_MEMBER(lhs, rhs, member);         \
        if ((lhs)->member == NULL) {             \
            PRINT_ERR("\r\n [PM] %s must be non-null.\n", __FUNCTION__); \
            while (1) {};                        \
        }                                        \
    } while (0)
#define CALL_RUN_OPS_FUNC_NO_RETURN(func) CallVoidFunction(&g_pmRunOps, OFFSET_OF_FIELD(PowerMgrRunOps, func));
#define DEEPOPS_CALL_FUNC_VOID(func, ...) CALL_FUNC_NO_RETURN(g_deepSleepOps, func, __VA_ARGS__)
#define DEEPOPS_CALL_FUNC_VOID(func, ...)
#define OFFSET_OF_FIELD(type, field) ((UINTPTR) & ((type *)0)->field)
#define RUNOPS_CALL_FUNC_VOID(func, ...) CALL_FUNC_NO_RETURN(g_pmRunOps, func, __VA_ARGS__)
#define TRACE_FUNC_CALL() PRINTK("trace: %s, %s, %d\n", __FILE__, __FUNCTION__, __LINE__)
#define TRACE_FUNC_CALL()
