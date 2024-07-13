#define SECUREC_ARRAY_WIDTH_IS_WRONG(spec) ((spec).arrayWidth == 0 || \
    ((spec).isWCharOrLong <= 0 && (spec).arrayWidth > SECUREC_STRING_MAX_LEN) || \
    ((spec).isWCharOrLong > 0 && (spec).arrayWidth > SECUREC_WCHAR_STRING_MAX_LEN))
#define SECUREC_ARRAY_WIDTH_IS_WRONG(spec) ((spec).arrayWidth == 0 || (spec).arrayWidth > SECUREC_STRING_MAX_LEN)
#define SECUREC_BRACKET_INDEX(x)  ((unsigned int)(x) >> 3U)
#define SECUREC_BRACKET_VALUE(x)  ((unsigned char)(1U << ((unsigned int)(x) & 7U)))
#define SECUREC_CONVERT_IS_SIGNED(conv) ((conv) == 'd' || (conv) == 'i')
#define SECUREC_CONVERT_IS_UNSIGNED(conv) ((conv) == 'x' || (conv) == 'o' || (conv) == 'u')
#define SECUREC_FILED_WIDTH_DEC(spec) do { \
    if ((spec)->widthSet != 0) { \
        --(spec)->width; \
    } \
} SECUREC_WHILE_ZERO
#define SECUREC_FILED_WIDTH_ENOUGH(spec) ((spec)->widthSet == 0 || (spec)->width > 0)
#define SECUREC_GET_CHAR(stream, outCh) do { \
    if ((stream)->count >= sizeof(SecChar)) { \
        *(outCh) = (SecInt)(SECUREC_CHAR_MASK & \
            (unsigned int)(int)(*((const SecChar *)(const void *)(stream)->cur))); \
        (stream)->cur += sizeof(SecChar); \
        (stream)->count -= sizeof(SecChar); \
    } else { \
        *(outCh) = SECUREC_EOF; \
    } \
} SECUREC_WHILE_ZERO
#define SECUREC_LONG_HEX_BEYOND_MAX(number)     (((unsigned long long)(number) >> (SECUREC_LONG_BIT_NUM - 4U)) > 0)
#define SECUREC_LONG_OCTAL_BEYOND_MAX(number)   (((unsigned long long)(number) >> (SECUREC_LONG_BIT_NUM - 3U)) > 0)
#define SECUREC_QWORD_HEX_BEYOND_MAX(number)    (((number) >> (64U - 4U)) > 0)
#define SECUREC_QWORD_OCTAL_BEYOND_MAX(number)  (((number) >> (64U - 3U)) > 0)
#define SECUREC_TO_LOWERCASE(chr) ((int)((unsigned int)(int)(chr) | (unsigned int)('a' - 'A')))
#define SECUREC_UN_GET_CHAR(stream) do { \
    if ((stream)->cur > (stream)->base) { \
        (stream)->cur -= sizeof(SecChar); \
        (stream)->count += sizeof(SecChar); \
    } \
} SECUREC_WHILE_ZERO
#define __va_copy(dest, src) do { \
    size_t destSize_ = (size_t)sizeof(dest); \
    size_t srcSize_ = (size_t)sizeof(src); \
    if (destSize_ != srcSize_) { \
        (void)memcpy((dest), (src), sizeof(va_list)); \
    } else { \
        (void)memcpy(&(dest), &(src), sizeof(va_list)); \
    } \
} SECUREC_WHILE_ZERO
