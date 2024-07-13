#define SECUREC_SMALL_STR_COPY(strDest, strSrc, lenWithTerm) do { \
    if (SECUREC_ADDR_ALIGNED_8(strDest) && SECUREC_ADDR_ALIGNED_8(strSrc)) { \
        /* Use struct assignment */ \
        switch (lenWithTerm) { \
            case 1: \
                *(strDest) = *(strSrc); \
                break; \
            case 2: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 2); \
                break; \
            case 3: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 3); \
                break; \
            case 4: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 4); \
                break; \
            case 5: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 5); \
                break; \
            case 6: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 6); \
                break; \
            case 7: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 7); \
                break; \
            case 8: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 8); \
                break; \
            case 9: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 9); \
                break; \
            case 10: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 10); \
                break; \
            case 11: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 11); \
                break; \
            case 12: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 12); \
                break; \
            case 13: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 13); \
                break; \
            case 14: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 14); \
                break; \
            case 15: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 15); \
                break; \
            case 16: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 16); \
                break; \
            case 17: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 17); \
                break; \
            case 18: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 18); \
                break; \
            case 19: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 19); \
                break; \
            case 20: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 20); \
                break; \
            case 21: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 21); \
                break; \
            case 22: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 22); \
                break; \
            case 23: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 23); \
                break; \
            case 24: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 24); \
                break; \
            case 25: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 25); \
                break; \
            case 26: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 26); \
                break; \
            case 27: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 27); \
                break; \
            case 28: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 28); \
                break; \
            case 29: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 29); \
                break; \
            case 30: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 30); \
                break; \
            case 31: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 31); \
                break; \
            case 32: \
                SECUREC_COPY_VALUE_BY_STRUCT((strDest), (strSrc), 32); \
                break; \
            default: \
                /* Do nothing */ \
                break; \
        } /* END switch */ \
    } else { \
        char *tmpStrDest_ = (char *)(strDest); \
        const char *tmpStrSrc_ = (const char *)(strSrc); \
        switch (lenWithTerm) { \
            case 32: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 31: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 30: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 29: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 28: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 27: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 26: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 25: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 24: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 23: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 22: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 21: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 20: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 19: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 18: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 17: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 16: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 15: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 14: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 13: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 12: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 11: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 10: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 9: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 8: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 7: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 6: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 5: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 4: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 3: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 2: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            case 1: \
                *(tmpStrDest_++) = *(tmpStrSrc_++); \
                /* fall-through */ /* FALLTHRU */ \
            default: \
                /* Do nothing */ \
                break; \
        } \
    } \
} SECUREC_WHILE_ZERO
#define SECUREC_STRCPY_OPT(dest, src, lenWithTerm) SECUREC_MEMCPY_WARP_OPT((dest), (src), (lenWithTerm))
#define SECUREC_STRCPY_OPT(dest, src, lenWithTerm) do { \
    if ((lenWithTerm) > SECUREC_STRCOPY_THRESHOLD_SIZE) { \
        SECUREC_MEMCPY_WARP_OPT((dest), (src), (lenWithTerm)); \
    } else { \
        SECUREC_SMALL_STR_COPY((dest), (src), (lenWithTerm)); \
    } \
} SECUREC_WHILE_ZERO
#define SECUREC_STRCPY_PARAM_OK(strDest, destMax, strSrc) ((destMax) > 0 && \
    (destMax) <= SECUREC_STRING_MAX_LEN && (strDest) != NULL && (strSrc) != NULL && (strDest) != (strSrc))
