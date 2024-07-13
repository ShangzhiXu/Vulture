#define CALL_FUNC_NO_RETURN(ops, func, ...) do { \
        if (((ops).func != NULL)) {              \
            (ops).func(__VA_ARGS__);             \
        }                                        \
    } while (0)
#define CALL_FUNC_NO_RETURN_FROM_PTR(ops, func, ...) do { \
        if (((ops) != NULL) && ((ops)->func != NULL)) {   \
            (ops)->func(__VA_ARGS__);                     \
        }                                                 \
    } while (0)
#define CALL_FUNC_WITH_RETURN(ops, ret, func, ...) do { \
        if (((ops).func != NULL)) {                     \
            (ret) = (ops).func(__VA_ARGS__);            \
        }                                               \
    } while (0)
#define CALL_FUNC_WITH_RETURN_FROM_PTR(ops, ret, func, ...) do { \
        if (((ops) != NULL) && ((ops)->func != NULL)) {          \
            (ret) = (ops)->func(__VA_ARGS__);                    \
        }                                                        \
    } while (0)
