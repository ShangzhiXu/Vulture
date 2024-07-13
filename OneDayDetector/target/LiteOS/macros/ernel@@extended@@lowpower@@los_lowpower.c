#define CALL_PMOPS_FUNC_RET(func, ret, ...) CALL_FUNC_WITH_RETURN_FROM_PTR(g_pmOps, ret, func, __VA_ARGS__)
#define CALL_PMOPS_FUNC_VOID(func, ...) CALL_FUNC_NO_RETURN_FROM_PTR(g_pmOps, func, __VA_ARGS__)
