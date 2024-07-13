#define SECUREC_VSNPRINTF_PARAM_ERROR(format, strDest, destMax, count, maxLimit) \
    (((format) == NULL || (strDest) == NULL || (destMax) == 0 || (destMax) > (maxLimit)) || \
    ((count) > (SECUREC_STRING_MAX_LEN - 1) && (count) != (size_t)(-1)))
#define SECUREC_VSNPRINTF_PARAM_ERROR(format, strDest, destMax, count, maxLimit) \
    (((format) == NULL || (strDest) == NULL || (destMax) == 0 || (destMax) > (maxLimit)) || \
    ((count) > (SECUREC_STRING_MAX_LEN - 1)))
#define SECUREC_VSPRINTF_CLEAR_DEST(strDest, destMax, maxLimit) do { \
    if ((strDest) != NULL && (destMax) > 0 && (destMax) <= (maxLimit)) { \
        *(strDest) = '\0'; \
    } \
} SECUREC_WHILE_ZERO
#define SECUREC_VSPRINTF_PARAM_ERROR(format, strDest, destMax, maxLimit) \
    ((format) == NULL || (strDest) == NULL || (destMax) == 0 || (destMax) > (maxLimit))
