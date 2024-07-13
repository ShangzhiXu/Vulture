#define SECUREC_ATTRIBUTE(x, y)  __attribute__((format(printf, (x), (y))))
#define SECUREC_ATTRIBUTE(x, y)
#define SECUREC_LIKELY(x) __builtin_expect(!!(x), 1)
#define SECUREC_LIKELY(x) (x)
#define  SECUREC_MEMCPY_SM(dest, destMax, src, count) \
    (!(((size_t)(destMax) == 0) || \
        (((unsigned long long)(destMax) & (unsigned long long)(-2)) > SECUREC_MEM_MAX_LEN) || \
        ((size_t)(count) > (size_t)(destMax)) || ((void *)(dest)) == NULL || ((void *)(src) == NULL)) ? \
        (memcpy((dest), (src), (count)), EOK) : \
        (memcpy_s((dest), (destMax), (src), (count))))
#define  SECUREC_MEMSET_SM(dest, destMax, c, count) \
    (!((((unsigned long long)(destMax) & (unsigned long long)(-2)) > SECUREC_MEM_MAX_LEN) || \
        ((void *)(dest) == NULL) || ((size_t)(count) > (size_t)(destMax))) ? \
        (memset((dest), (c), (count)), EOK) : \
        (memset_s((dest), (destMax), (c), (count))))
#define SECUREC_STRCAT_SM(dest, destMax, src) ({ \
    int catRet_ = EOK; \
    if ((void *)(dest) != NULL && (void *)(src) != NULL && (size_t)(destMax) > 0 && \
        (((unsigned long long)(destMax) & (unsigned long long)(-2)) < SECUREC_STRING_MAX_LEN)) { \
        char *catTmpDst_ = (char *)(dest); \
        size_t catRestSize_ = (destMax); \
        while (catRestSize_ > 0 && *catTmpDst_ != '\0') { \
            ++catTmpDst_; \
            --catRestSize_; \
        } \
        if (catRestSize_ == 0) { \
            catRet_ = EINVAL; \
        } else if ((strlen(src) + 1) <= catRestSize_) { \
            memcpy(catTmpDst_, (src), strlen(src) + 1); \
            catRet_ = EOK; \
        } else { \
            catRet_ = ERANGE; \
        } \
        if (catRet_ != EOK) { \
            catRet_ = strcat_s((dest), (destMax), (src)); \
        } \
    } else { \
        catRet_ = strcat_s((dest), (destMax), (src)); \
    } \
    catRet_; \
})
#define SECUREC_STRCAT_SM(dest, destMax, src) strcat_s((dest), (destMax), (src))
#define SECUREC_STRCPY_SM(dest, destMax, src) \
    (((void *)(dest) != NULL && (void *)(src) != NULL && (size_t)(destMax) > 0 && \
    (((unsigned long long)(destMax) & (unsigned long long)(-2)) < SECUREC_STRING_MAX_LEN) && \
    (strlen(src) + 1) <= (size_t)(destMax)) ? (memcpy((dest), (src), strlen(src) + 1), EOK) : \
    (strcpy_error((dest), (destMax), (src))))
#define SECUREC_STRNCAT_SM(dest, destMax, src, count) ({ \
    int ncatRet_ = EOK; \
    if ((void *)(dest) != NULL && (void *)(src) != NULL && (size_t)(destMax) > 0 && \
        (((unsigned long long)(destMax) & (unsigned long long)(-2)) < SECUREC_STRING_MAX_LEN)  && \
        (((unsigned long long)(count) & (unsigned long long)(-2)) < SECUREC_STRING_MAX_LEN)) { \
        char *ncatTmpDest_ = (char *)(dest); \
        size_t ncatRestSize_ = (size_t)(destMax); \
        while (ncatRestSize_ > 0 && *ncatTmpDest_ != '\0') { \
            ++ncatTmpDest_; \
            --ncatRestSize_; \
        } \
        if (ncatRestSize_ == 0) { \
            ncatRet_ = EINVAL; \
        } else if ((SECUREC_TWO_MIN((count), strlen(src)) + 1) <= ncatRestSize_) { \
            if ((size_t)(count) < strlen(src)) { \
                memcpy(ncatTmpDest_, (src), (count)); \
                *(ncatTmpDest_ + (count)) = '\0'; \
            } else { \
                memcpy(ncatTmpDest_, (src), strlen(src) + 1); \
            } \
        } else { \
            ncatRet_ = ERANGE; \
        } \
        if (ncatRet_ != EOK) { \
            ncatRet_ = strncat_s((dest), (destMax), (src), (count)); \
        } \
    } else { \
        ncatRet_ = strncat_s((dest), (destMax), (src), (count)); \
    } \
    ncatRet_; \
})
#define SECUREC_STRNCAT_SM(dest, destMax, src, count) strncat_s((dest), (destMax), (src), (count))
#define SECUREC_STRNCPY_SM(dest, destMax, src, count) \
    (((void *)(dest) != NULL && (void *)(src) != NULL && (size_t)(destMax) > 0 && \
    (((unsigned long long)(destMax) & (unsigned long long)(-2)) < SECUREC_STRING_MAX_LEN) && \
    (SECUREC_TWO_MIN((size_t)(count), strlen(src)) + 1) <= (size_t)(destMax)) ? \
    (((size_t)(count) < strlen(src)) ? (memcpy((dest), (src), (count)), *((char *)(dest) + (count)) = '\0', EOK) : \
    (memcpy((dest), (src), strlen(src) + 1), EOK)) : (strncpy_error((dest), (destMax), (src), (count))))
#define SECUREC_TWO_MIN(a, b) ((a) < (b) ? (a) : (b))
#define SECUREC_UNLIKELY(x) __builtin_expect(!!(x), 0)
#define SECUREC_UNLIKELY(x) (x)
