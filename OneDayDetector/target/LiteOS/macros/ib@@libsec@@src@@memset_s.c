#define SECUREC_ALIGNED_SET_OPT_ZERO_FF(dest, c, count) do { \
    switch (c) { \
        case 0: \
            switch (count) { \
                case 1: \
                    *(unsigned char *)(dest) = (unsigned char)0; \
                    break; \
                case 2: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 2); \
                    break; \
                case 3: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 3); \
                    break; \
                case 4: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 4); \
                    break; \
                case 5: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 5); \
                    break; \
                case 6: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 6); \
                    break; \
                case 7: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 7); \
                    break; \
                case 8: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 8); \
                    break; \
                case 9: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 9); \
                    break; \
                case 10: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 10); \
                    break; \
                case 11: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 11); \
                    break; \
                case 12: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 12); \
                    break; \
                case 13: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 13); \
                    break; \
                case 14: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 14); \
                    break; \
                case 15: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 15); \
                    break; \
                case 16: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 16); \
                    break; \
                case 17: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 17); \
                    break; \
                case 18: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 18); \
                    break; \
                case 19: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 19); \
                    break; \
                case 20: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 20); \
                    break; \
                case 21: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 21); \
                    break; \
                case 22: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 22); \
                    break; \
                case 23: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 23); \
                    break; \
                case 24: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 24); \
                    break; \
                case 25: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 25); \
                    break; \
                case 26: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 26); \
                    break; \
                case 27: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 27); \
                    break; \
                case 28: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 28); \
                    break; \
                case 29: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 29); \
                    break; \
                case 30: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 30); \
                    break; \
                case 31: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 31); \
                    break; \
                case 32: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allZero, 32); \
                    break; \
                default: \
                    /* Do nothing */ \
                    break; \
            } \
            break; \
        case 0xFF: \
            switch (count) { \
                case 1: \
                    *(unsigned char *)(dest) = (unsigned char)0xffU; \
                    break; \
                case 2: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 2); \
                    break; \
                case 3: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 3); \
                    break; \
                case 4: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 4); \
                    break; \
                case 5: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 5); \
                    break; \
                case 6: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 6); \
                    break; \
                case 7: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 7); \
                    break; \
                case 8: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 8); \
                    break; \
                case 9: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 9); \
                    break; \
                case 10: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 10); \
                    break; \
                case 11: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 11); \
                    break; \
                case 12: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 12); \
                    break; \
                case 13: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 13); \
                    break; \
                case 14: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 14); \
                    break; \
                case 15: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 15); \
                    break; \
                case 16: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 16); \
                    break; \
                case 17: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 17); \
                    break; \
                case 18: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 18); \
                    break; \
                case 19: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 19); \
                    break; \
                case 20: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 20); \
                    break; \
                case 21: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 21); \
                    break; \
                case 22: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 22); \
                    break; \
                case 23: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 23); \
                    break; \
                case 24: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 24); \
                    break; \
                case 25: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 25); \
                    break; \
                case 26: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 26); \
                    break; \
                case 27: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 27); \
                    break; \
                case 28: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 28); \
                    break; \
                case 29: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 29); \
                    break; \
                case 30: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 30); \
                    break; \
                case 31: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 31); \
                    break; \
                case 32: \
                    SECUREC_SET_VALUE_BY_STRUCT((dest), g_allFF, 32); \
                    break; \
                default: \
                    /* Do nothing */ \
                    break; \
            } \
            break; \
        default: \
            SECUREC_UNALIGNED_SET((dest), (c), (count)); \
            break; \
    } /* END switch */ \
} SECUREC_WHILE_ZERO
#define SECUREC_MEMSET_OPT(dest, c, count) do { \
    if ((count) > SECUREC_MEMSET_THRESHOLD_SIZE) { \
        SECUREC_MEMSET_WARP_OPT((dest), (c), (count)); \
    } else { \
        SECUREC_SMALL_MEM_SET((dest), (c), (count)); \
    } \
} SECUREC_WHILE_ZERO
#define SECUREC_MEMSET_PARAM_OK(dest, destMax, count) (SECUREC_LIKELY((destMax) <= SECUREC_MEM_MAX_LEN && \
    (dest) != NULL && (count) <= (destMax)))
#define SECUREC_SET_VALUE_BY_STRUCT(dest, dataName, n) do { \
    *(SecStrBuf##n *)(dest) = *(const SecStrBuf##n *)(&((SecStrictAliasingCast(&(dataName)))->buf##n)); \
} SECUREC_WHILE_ZERO
#define SECUREC_SMALL_MEM_SET(dest, c, count) do { \
    if (SECUREC_ADDR_ALIGNED_8((dest))) { \
        SECUREC_ALIGNED_SET_OPT_ZERO_FF((dest), (c), (count)); \
    } else { \
        SECUREC_UNALIGNED_SET((dest), (c), (count)); \
    } \
} SECUREC_WHILE_ZERO
#define SECUREC_UNALIGNED_SET(dest, c, count) do { \
    unsigned char *pDest_ = (unsigned char *)(dest); \
    switch (count) { \
        case 32: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 31: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 30: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 29: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 28: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 27: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 26: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 25: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 24: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 23: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 22: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 21: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 20: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 19: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 18: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 17: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 16: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 15: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 14: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 13: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 12: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 11: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 10: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 9: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 8: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 7: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 6: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 5: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 4: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 3: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 2: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        case 1: \
            *(pDest_++) = (unsigned char)(c); \
            /* fall-through */ /* FALLTHRU */ \
        default: \
            /* Do nothing */ \
            break; \
    } \
} SECUREC_WHILE_ZERO
