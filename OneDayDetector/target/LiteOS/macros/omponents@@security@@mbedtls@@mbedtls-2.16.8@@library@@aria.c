#define ARIA_P1(x) ARIA_P2( ARIA_P3( x ) )
#define ARIA_P1(x) ((((x) >> 8) & 0x00FF00FF) ^ (((x) & 0x00FF00FF) << 8))
#define ARIA_P2(x) (((x) >> 16) ^ ((x) << 16))
#define ARIA_P3(x) ARIA_P2( ARIA_P1 ( x ) )
#define ARIA_VALIDATE( cond )                                           \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define ARIA_VALIDATE_RET( cond )                                       \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_ARIA_BAD_INPUT_DATA )
#define GET_UINT32_LE( n, b, i )                \
{                                               \
    (n) = ( (uint32_t) (b)[(i)    ]       )     \
        | ( (uint32_t) (b)[(i) + 1] <<  8 )     \
        | ( (uint32_t) (b)[(i) + 2] << 16 )     \
        | ( (uint32_t) (b)[(i) + 3] << 24 );    \
}
#define PUT_UINT32_LE( n, b, i )                                \
{                                                               \
    (b)[(i)    ] = (unsigned char) ( ( (n)       ) & 0xFF );    \
    (b)[(i) + 1] = (unsigned char) ( ( (n) >>  8 ) & 0xFF );    \
    (b)[(i) + 2] = (unsigned char) ( ( (n) >> 16 ) & 0xFF );    \
    (b)[(i) + 3] = (unsigned char) ( ( (n) >> 24 ) & 0xFF );    \
}
