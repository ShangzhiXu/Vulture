#define F(x, y, z) (((x) & (y)) | ((~(x)) & (z)))
#define F(x,y,z) (((x) & (y)) | ((x) & (z)) | ((y) & (z)))
#define F(x,y,z) ((x) ^ (y) ^ (z))
#define GET_UINT32_LE(n,b,i)                            \
{                                                       \
    (n) = ( (uint32_t) (b)[(i)    ]       )             \
        | ( (uint32_t) (b)[(i) + 1] <<  8 )             \
        | ( (uint32_t) (b)[(i) + 2] << 16 )             \
        | ( (uint32_t) (b)[(i) + 3] << 24 );            \
}
#define P(a,b,c,d,x,s)                           \
    do                                           \
    {                                            \
        (a) += F((b),(c),(d)) + (x);             \
        (a) = S((a),(s));                        \
    } while( 0 )
#define P(a,b,c,d,x,s)                          \
    do                                          \
    {                                           \
        (a) += F((b),(c),(d)) + (x) + 0x5A827999;       \
        (a) = S((a),(s));                               \
    } while( 0 )
#define P(a,b,c,d,x,s)                                  \
    do                                                  \
    {                                                   \
        (a) += F((b),(c),(d)) + (x) + 0x6ED9EBA1;       \
        (a) = S((a),(s));                               \
    } while( 0 )
#define PUT_UINT32_LE(n,b,i)                                    \
{                                                               \
    (b)[(i)    ] = (unsigned char) ( ( (n)       ) & 0xFF );    \
    (b)[(i) + 1] = (unsigned char) ( ( (n) >>  8 ) & 0xFF );    \
    (b)[(i) + 2] = (unsigned char) ( ( (n) >> 16 ) & 0xFF );    \
    (b)[(i) + 3] = (unsigned char) ( ( (n) >> 24 ) & 0xFF );    \
}
#define S(x,n) (((x) << (n)) | (((x) & 0xFFFFFFFF) >> (32 - (n))))
