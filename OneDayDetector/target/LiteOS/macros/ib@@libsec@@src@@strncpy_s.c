#define SECUREC_STRNCPY_PARAM_OK(strDest, destMax, strSrc, count) \
    (((destMax) > 0 && (destMax) <= SECUREC_STRING_MAX_LEN && (strDest) != NULL && (strSrc) != NULL && \
    ((count) <= SECUREC_STRING_MAX_LEN || (count) == ((size_t)(-1))) && (count) > 0))
#define SECUREC_STRNCPY_PARAM_OK(strDest, destMax, strSrc, count) \
    (((destMax) > 0 && (destMax) <= SECUREC_STRING_MAX_LEN && (strDest) != NULL && (strSrc) != NULL && \
    (count) <= SECUREC_STRING_MAX_LEN && (count) > 0))
