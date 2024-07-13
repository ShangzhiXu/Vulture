#define OS_GOTO_ERREND() do { \
    goto LOS_ERREND; \
} while (0)
#define OS_GOTO_ERR_HANDLER(errorNo) do { \
    errNo = errorNo;                      \
    errLine = OS_ERR_MAGIC_WORD;          \
    goto ERR_HANDLER;                     \
} while (0)
#define OS_RETURN_ERROR(errNo) do {                                               \
    (VOID)LOS_ErrHandle("os_unspecific_file", OS_ERR_MAGIC_WORD, errNo, 0, NULL); \
    return errNo;                                                                 \
} while (0)
#define OS_RETURN_ERROR_P2(errLine, errNo) do {                          \
    (VOID)LOS_ErrHandle("os_unspecific_file", errLine, errNo, 0, NULL);  \
    return errNo;                                                        \
} while (0)
#define OS_RETURN_ERR_FUNCPTR_IS_NULL(func, err) do {   \
    if (func == NULL) {                                 \
        return err;                                     \
    }                                                   \
} while (0)
#define OS_RETURN_FUNCPTR_IS_NULL(func) do {            \
    if (func == NULL) {                                 \
        return;                                         \
    }                                                   \
} while (0)
