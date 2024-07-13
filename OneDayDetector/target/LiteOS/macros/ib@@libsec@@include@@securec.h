#define memcpy_sp(dest, destMax, src, count)  (__builtin_constant_p((count)) ? \
    (SECUREC_MEMCPY_SM((dest), (destMax), (src), (count))) : \
    (__builtin_constant_p((destMax)) ? \
    (((size_t)(destMax) > 0 && \
    (((unsigned long long)(destMax) & (unsigned long long)(-2)) < SECUREC_MEM_MAX_LEN)) ? \
    memcpy_sOptTc((dest), (destMax), (src), (count)) : ERANGE) : \
    memcpy_sOptAsm((dest), (destMax), (src), (count))))
#define memset_sp(dest, destMax, c, count)  (__builtin_constant_p((count)) ? \
    (SECUREC_MEMSET_SM((dest), (destMax), (c), (count))) : \
    (__builtin_constant_p((destMax)) ? \
    (((((unsigned long long)(destMax) & (unsigned long long)(-2)) < SECUREC_MEM_MAX_LEN)) ? \
    memset_sOptTc((dest), (destMax), (c), (count)) : ERANGE) : \
    memset_sOptAsm((dest), (destMax), (c), (count))))
#define strcat_sp(dest, destMax, src) ((__builtin_constant_p((destMax)) && \
    __builtin_constant_p((src))) ?  \
    SECUREC_STRCAT_SM((dest), (destMax), (src)) : \
    strcat_s((dest), (destMax), (src)))
#define strcpy_sp(dest, destMax, src)  ((__builtin_constant_p((destMax)) && \
    __builtin_constant_p((src))) ?  \
    SECUREC_STRCPY_SM((dest), (destMax), (src)) : \
    strcpy_s((dest), (destMax), (src)))
#define strncat_sp(dest, destMax, src, count) ((__builtin_constant_p((count)) &&  \
    __builtin_constant_p((destMax)) && \
    __builtin_constant_p((src))) ?  \
    SECUREC_STRNCAT_SM((dest), (destMax), (src), (count)) : \
    strncat_s((dest), (destMax), (src), (count)))
#define strncpy_sp(dest, destMax, src, count)  ((__builtin_constant_p((count)) && \
    __builtin_constant_p((destMax)) && \
    __builtin_constant_p((src))) ?  \
    SECUREC_STRNCPY_SM((dest), (destMax), (src), (count)) : \
    strncpy_s((dest), (destMax), (src), (count)))
