#define GET_ITEM( dst )         \
    do                          \
    {                           \
        (dst) = p;              \
        while( *p != ',' )      \
            if( ++p > end )     \
                goto error;     \
        *p++ = '\0';            \
    } while( 0 )
#define HEX2NUM( c )                        \
    do                                      \
    {                                       \
        if( (c) >= '0' && (c) <= '9' )      \
            (c) -= '0';                     \
        else if( (c) >= 'a' && (c) <= 'f' ) \
            (c) -= 'a' - 10;                \
        else if( (c) >= 'A' && (c) <= 'F' ) \
            (c) -= 'A' - 10;                \
        else                                \
            return( -1 );                   \
    } while( 0 )
#define PUT_UINT64_BE(out_be,in_le,i)                                   \
{                                                                       \
    (out_be)[(i) + 0] = (unsigned char)( ( (in_le) >> 56 ) & 0xFF );    \
    (out_be)[(i) + 1] = (unsigned char)( ( (in_le) >> 48 ) & 0xFF );    \
    (out_be)[(i) + 2] = (unsigned char)( ( (in_le) >> 40 ) & 0xFF );    \
    (out_be)[(i) + 3] = (unsigned char)( ( (in_le) >> 32 ) & 0xFF );    \
    (out_be)[(i) + 4] = (unsigned char)( ( (in_le) >> 24 ) & 0xFF );    \
    (out_be)[(i) + 5] = (unsigned char)( ( (in_le) >> 16 ) & 0xFF );    \
    (out_be)[(i) + 6] = (unsigned char)( ( (in_le) >> 8  ) & 0xFF );    \
    (out_be)[(i) + 7] = (unsigned char)( ( (in_le) >> 0  ) & 0xFF );    \
}
