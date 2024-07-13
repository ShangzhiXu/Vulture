#define CAMELLIA_VALIDATE( cond )                                           \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define CAMELLIA_VALIDATE_RET( cond )                                       \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_CAMELLIA_BAD_INPUT_DATA )
#define FL(XL, XR, KL, KR)                                          \
{                                                                   \
    (XR) = ((((XL) & (KL)) << 1) | (((XL) & (KL)) >> 31)) ^ (XR);   \
    (XL) = ((XR) | (KR)) ^ (XL);                                    \
}
#define FLInv(YL, YR, KL, KR)                                       \
{                                                                   \
    (YL) = ((YR) | (KR)) ^ (YL);                                    \
    (YR) = ((((YL) & (KL)) << 1) | (((YL) & (KL)) >> 31)) ^ (YR);   \
}
#define GET_UINT32_BE(n,b,i)                            \
{                                                       \
    (n) = ( (uint32_t) (b)[(i)    ] << 24 )             \
        | ( (uint32_t) (b)[(i) + 1] << 16 )             \
        | ( (uint32_t) (b)[(i) + 2] <<  8 )             \
        | ( (uint32_t) (b)[(i) + 3]       );            \
}
#define PUT_UINT32_BE(n,b,i)                            \
{                                                       \
    (b)[(i)    ] = (unsigned char) ( (n) >> 24 );       \
    (b)[(i) + 1] = (unsigned char) ( (n) >> 16 );       \
    (b)[(i) + 2] = (unsigned char) ( (n) >>  8 );       \
    (b)[(i) + 3] = (unsigned char) ( (n)       );       \
}
#define ROTL(DEST, SRC, SHIFT)                                      \
{                                                                   \
    (DEST)[0] = (SRC)[0] << (SHIFT) ^ (SRC)[1] >> (32 - (SHIFT));   \
    (DEST)[1] = (SRC)[1] << (SHIFT) ^ (SRC)[2] >> (32 - (SHIFT));   \
    (DEST)[2] = (SRC)[2] << (SHIFT) ^ (SRC)[3] >> (32 - (SHIFT));   \
    (DEST)[3] = (SRC)[3] << (SHIFT) ^ (SRC)[0] >> (32 - (SHIFT));   \
}
#define SBOX1(n) FSb[(n)]
#define SBOX1(n) FSb[(n)]
#define SBOX2(n) (unsigned char)((FSb[(n)] >> 7 ^ FSb[(n)] << 1) & 0xff)
#define SBOX2(n) FSb2[(n)]
#define SBOX3(n) (unsigned char)((FSb[(n)] >> 1 ^ FSb[(n)] << 7) & 0xff)
#define SBOX3(n) FSb3[(n)]
#define SBOX4(n) FSb[((n) << 1 ^ (n) >> 7) &0xff]
#define SBOX4(n) FSb4[(n)]
#define SHIFT_AND_PLACE(INDEX, OFFSET)                      \
{                                                           \
    TK[0] = KC[(OFFSET) * 4 + 0];                           \
    TK[1] = KC[(OFFSET) * 4 + 1];                           \
    TK[2] = KC[(OFFSET) * 4 + 2];                           \
    TK[3] = KC[(OFFSET) * 4 + 3];                           \
                                                            \
    for( i = 1; i <= 4; i++ )                               \
        if( shifts[(INDEX)][(OFFSET)][i -1] )               \
            ROTL(TK + i * 4, TK, ( 15 * i ) % 32);          \
                                                            \
    for( i = 0; i < 20; i++ )                               \
        if( indexes[(INDEX)][(OFFSET)][i] != -1 ) {         \
            RK[indexes[(INDEX)][(OFFSET)][i]] = TK[ i ];    \
        }                                                   \
}
