#define SECUREC_ADDR_ALIGNED_8(addr) ((((size_t)(addr)) & 7U) == 0) /* Use 7 to check aligned 8 */
#define SECUREC_CALC_STR_LEN(str, maxLen, outLen) do { \
    *(outLen) = strnlen((str), (maxLen)); \
} SECUREC_WHILE_ZERO
#define SECUREC_CALC_STR_LEN(str, maxLen, outLen) do { \
    const char *strEnd_ = (const char *)(str); \
    size_t availableSize_ = (size_t)(maxLen); \
    while (availableSize_ > 0 && *strEnd_ != '\0') { \
        --availableSize_; \
        ++strEnd_; \
    } \
    *(outLen) = (size_t)(strEnd_ - (str)); \
} SECUREC_WHILE_ZERO
#define SECUREC_CALC_STR_LEN_OPT(str, maxLen, outLen) do { \
    if ((maxLen) > 8) { \
        /* Optimization or len less then 8 */ \
        if (*((str) + 0) == '\0') { \
            *(outLen) = 0; \
        } else if (*((str) + 1) == '\0') { \
            *(outLen) = 1; \
        } else if (*((str) + 2) == '\0') { \
            *(outLen) = 2; \
        } else if (*((str) + 3) == '\0') { \
            *(outLen) = 3; \
        } else if (*((str) + 4) == '\0') { \
            *(outLen) = 4; \
        } else if (*((str) + 5) == '\0') { \
            *(outLen) = 5; \
        } else if (*((str) + 6) == '\0') { \
            *(outLen) = 6; \
        } else if (*((str) + 7) == '\0') { \
            *(outLen) = 7; \
        } else if (*((str) + 8) == '\0') { \
            /* Optimization with a length of 8 */ \
            *(outLen) = 8; \
        } else { \
            /* The offset is 8 because the performance of 8 byte alignment is high */ \
            *(outLen) = 8 + strnlen((str) + 8, (maxLen) - 8); \
        } \
    } else { \
        SECUREC_CALC_STR_LEN((str), (maxLen), (outLen)); \
    } \
} SECUREC_WHILE_ZERO
#define SECUREC_CALC_WSTR_LEN(str, maxLen, outLen) do { \
    const wchar_t *strEnd_ = (const wchar_t *)(str); \
    size_t len_ = 0; \
    while (len_ < (maxLen) && *strEnd_ != L'\0') { \
        ++len_; \
        ++strEnd_; \
    } \
    *(outLen) = len_; \
} SECUREC_WHILE_ZERO
#define SECUREC_CAT_STRING_IS_OVERLAP(dest, destLen, src, srcLen) \
    (((dest) < (src) && ((dest) + (destLen) + (srcLen)) >= (src)) || \
    ((src) < (dest) && ((src) + (srcLen)) >= (dest)))
#define SECUREC_CHAR(x) L ## x
#define SECUREC_CHAR(x) (x)
#define SECUREC_COPY_VALUE_BY_STRUCT(dest, src, n) do { \
    *(SecStrBuf##n *)(void *)(dest) = *(const SecStrBuf##n *)(const void *)(src); \
} SECUREC_WHILE_ZERO
#define SECUREC_ERROR_BUFFER_OVERLAP(msg)   assert(msg "buffer overlap" == NULL)
#define SECUREC_ERROR_BUFFER_OVERLAP(msg)   printk("%s buffer overlap\n", msg)
#define SECUREC_ERROR_BUFFER_OVERLAP(msg)   printf("%s buffer overlap\n", msg)
#define SECUREC_ERROR_BUFFER_OVERLAP(msg)   LogSecureCRuntimeError(msg " EOVERLAP\n")
#define SECUREC_ERROR_BUFFER_OVERLAP(msg)
#define SECUREC_ERROR_INVALID_PARAMTER(msg) assert(msg "invalid argument" == NULL)
#define SECUREC_ERROR_INVALID_PARAMTER(msg) printk("%s invalid argument\n", msg)
#define SECUREC_ERROR_INVALID_PARAMTER(msg) printf("%s invalid argument\n", msg)
#define SECUREC_ERROR_INVALID_PARAMTER(msg) LogSecureCRuntimeError(msg " EINVAL\n")
#define SECUREC_ERROR_INVALID_PARAMTER(msg)
#define SECUREC_ERROR_INVALID_RANGE(msg)    assert(msg "invalid dest buffer size" == NULL)
#define SECUREC_ERROR_INVALID_RANGE(msg)    printk("%s invalid dest buffer size\n", msg)
#define SECUREC_ERROR_INVALID_RANGE(msg)    printf("%s invalid dest buffer size\n", msg)
#define SECUREC_ERROR_INVALID_RANGE(msg)    LogSecureCRuntimeError(msg " ERANGE\n")
#define SECUREC_ERROR_INVALID_RANGE(msg)
#define SECUREC_FREE(x)   free((void *)(x))
#define SECUREC_MALLOC(x) malloc((size_t)(x))
#define SECUREC_MEMCPY_WARP_OPT(dest, src, count)    (void)SECUREC_MEMCPY_FUNC_OPT((dest), (src), (count))
#define SECUREC_MEMORY_IS_OVERLAP(dest, src, count) \
    (((src) < (dest) && ((const char *)(src) + (count)) > (char *)(dest)) || \
    ((dest) < (src) && ((char *)(dest) + (count)) > (const char *)(src)))
#define SECUREC_MEMORY_NO_OVERLAP(dest, src, count) \
    (((src) < (dest) && ((const char *)(src) + (count)) <= (char *)(dest)) || \
    ((dest) < (src) && ((char *)(dest) + (count)) <= (const char *)(src)))
#define SECUREC_MEMSET_WARP_OPT(dest, value, count)  do { \
    void *(* const volatile fn_)(void *s_, int c_, size_t n_) = SECUREC_MEMSET_FUNC_OPT; \
    (void)(*fn_)((dest), (value), (count)); \
} SECUREC_WHILE_ZERO
#define SECUREC_MEMSET_WARP_OPT(dest, value, count)  (void)SECUREC_MEMSET_FUNC_OPT((dest), (value), (count))
#define SECUREC_MUL_EIGHT(x)                ((x) << 3U)
#define SECUREC_MUL_SIXTEEN(x)              ((x) << 4U)
#define SECUREC_MUL_TEN(x)                  ((((x) << 2U) + (x)) << 1U)
#define SECUREC_MUL_TEN_ADD_BEYOND_MAX(x)   (((x) > SECUREC_MAX_WIDTH_LEN_DIV_TEN))
#define SECUREC_STRING_IS_OVERLAP(dest, src, len) \
    (((src) < (dest) && ((src) + (len)) >= (dest)) || \
    ((dest) < (src) && ((dest) + (len)) >= (src)))
#define SECUREC_STRING_NO_OVERLAP(dest, src, len) \
    (((src) < (dest) && ((src) + (len)) < (dest)) || \
    ((dest) < (src) && ((dest) + (len)) < (src)))
