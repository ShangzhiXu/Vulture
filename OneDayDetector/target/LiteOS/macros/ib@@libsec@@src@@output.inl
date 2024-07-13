#define SECUREC_DIV_QUOTIENT_HEX(val64)       ((val64) >> 4ULL)
#define SECUREC_DIV_QUOTIENT_OCTAL(val64)     ((val64) >> 3ULL)
#define SECUREC_DIV_RESIDUE_HEX(val64)        ((val64) & 0xfULL)
#define SECUREC_DIV_RESIDUE_OCTAL(val64)      ((val64) & 7ULL)
#define SECUREC_GET_CHAR_FROM_ARG(attr) ((((attr).flags & SECUREC_FLAG_SIGNED) != 0) ? \
    SecUpdateNegativeChar(&(attr), ((char)va_arg(argList, int))) : \
    (SecInt64)(unsigned char)va_arg(argList, int))
#define SECUREC_GET_INT_FROM_ARG(attr) ((((attr).flags & SECUREC_FLAG_SIGNED) != 0) ? \
    (SecInt64)(int)va_arg(argList, int) : \
    (SecInt64)(unsigned int)va_arg(argList, int))
#define SECUREC_GET_LONG_FROM_ARG(attr) ((((attr).flags & SECUREC_FLAG_SIGNED) != 0) ? \
    (SecInt64)(long)va_arg(argList, long) : \
    (SecInt64)(unsigned long)va_arg(argList, long))
#define SECUREC_GET_SHORT_FROM_ARG(attr) ((((attr).flags & SECUREC_FLAG_SIGNED) != 0) ? \
    (SecInt64)(short)va_arg(argList, int) : \
    (SecInt64)(unsigned short)va_arg(argList, int))
#define SECUREC_GET_SIZE_FROM_ARG(attr) ((((attr).flags & SECUREC_FLAG_SIGNED) != 0) ? \
    ((SecIsSameSize(sizeof(size_t), sizeof(long)) != 0) ? (SecInt64)(long)va_arg(argList, long) : \
    ((SecIsSameSize(sizeof(size_t), sizeof(long long)) != 0) ? (SecInt64)(long long)va_arg(argList, long long) : \
    (SecInt64)(int)va_arg(argList, int))) : \
    (SecInt64)(size_t)va_arg(argList, size_t))
