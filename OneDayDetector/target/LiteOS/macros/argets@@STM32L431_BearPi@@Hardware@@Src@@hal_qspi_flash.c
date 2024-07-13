#define CHECK_RET_RETURN(ret) \
    do {                      \
        if ((ret) < 0) {      \
            return ret;       \
        }                     \
    } while (0)
