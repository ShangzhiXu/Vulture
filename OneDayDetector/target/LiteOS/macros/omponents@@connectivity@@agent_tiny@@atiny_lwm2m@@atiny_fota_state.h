#define ASSERT_THIS(do_something) if (thi == NULL) { \
        ATINY_LOG(LOG_ERR, "this null pointer");     \
        do_something;                                \
    }
#define ATINY_GET_STATE(state) (&((state).interface))
#define CALL_MEM_FUNCTION_R(object, func, ret, ...) do {   \
        if ((object) != NULL) && ((object)->func) != NULL) \
            {                                              \
                (ret) = (object)->func(__VA_ARGS__);       \
            }                                              \
    } while (0)
