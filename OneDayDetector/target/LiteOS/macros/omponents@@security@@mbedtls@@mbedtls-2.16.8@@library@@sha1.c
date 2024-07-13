#define F(x,y,z) ((z) ^ ((x) & ((y) ^ (z))))
#define F(x,y,z) ((x) ^ (y) ^ (z))
#define F(x,y,z) (((x) & (y)) | ((z) & ((x) | (y))))
#define F(x,y,z) ((x) ^ (y) ^ (z))
#define GET_UINT32_BE(n,b,i)                            \
{                                                       \
    (n) = ( (uint32_t) (b)[(i)    ] << 24 )             \
        | ( (uint32_t) (b)[(i) + 1] << 16 )             \
        | ( (uint32_t) (b)[(i) + 2] <<  8 )             \
        | ( (uint32_t) (b)[(i) + 3]       );            \
}
#define P(a,b,c,d,e,x)                                          \
    do                                                          \
    {                                                           \
        (e) += S((a),5) + F((b),(c),(d)) + K + (x);             \
        (b) = S((b),30);                                        \
    } while( 0 )
#define PUT_UINT32_BE(n,b,i)                            \
{                                                       \
    (b)[(i)    ] = (unsigned char) ( (n) >> 24 );       \
    (b)[(i) + 1] = (unsigned char) ( (n) >> 16 );       \
    (b)[(i) + 2] = (unsigned char) ( (n) >>  8 );       \
    (b)[(i) + 3] = (unsigned char) ( (n)       );       \
}
#define R(t)                                                    \
    (                                                           \
        temp = W[( (t) -  3 ) & 0x0F] ^ W[( (t) - 8 ) & 0x0F] ^ \
               W[( (t) - 14 ) & 0x0F] ^ W[  (t)       & 0x0F],  \
        ( W[(t) & 0x0F] = S(temp,1) )                           \
    )
#define S(x,n) (((x) << (n)) | (((x) & 0xFFFFFFFF) >> (32 - (n))))
#define SHA1_VALIDATE(cond)  MBEDTLS_INTERNAL_VALIDATE( cond )
#define SHA1_VALIDATE_RET(cond)                             \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_SHA1_BAD_INPUT_DATA )
