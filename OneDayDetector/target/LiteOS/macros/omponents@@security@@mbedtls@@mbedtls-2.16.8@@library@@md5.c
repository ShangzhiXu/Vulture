#define F(x,y,z) ((z) ^ ((x) & ((y) ^ (z))))
#define F(x,y,z) ((y) ^ ((z) & ((x) ^ (y))))
#define F(x,y,z) ((x) ^ (y) ^ (z))
#define F(x,y,z) ((y) ^ ((x) | ~(z)))
#define GET_UINT32_LE(n,b,i)                            \
{                                                       \
    (n) = ( (uint32_t) (b)[(i)    ]       )             \
        | ( (uint32_t) (b)[(i) + 1] <<  8 )             \
        | ( (uint32_t) (b)[(i) + 2] << 16 )             \
        | ( (uint32_t) (b)[(i) + 3] << 24 );            \
}
#define P(a,b,c,d,k,s,t)                                        \
    do                                                          \
    {                                                           \
        (a) += F((b),(c),(d)) + X[(k)] + (t);                   \
        (a) = S((a),(s)) + (b);                                 \
    } while( 0 )
#define PUT_UINT32_LE(n,b,i)                                    \
{                                                               \
    (b)[(i)    ] = (unsigned char) ( ( (n)       ) & 0xFF );    \
    (b)[(i) + 1] = (unsigned char) ( ( (n) >>  8 ) & 0xFF );    \
    (b)[(i) + 2] = (unsigned char) ( ( (n) >> 16 ) & 0xFF );    \
    (b)[(i) + 3] = (unsigned char) ( ( (n) >> 24 ) & 0xFF );    \
}
#define S(x,n)                                                          \
    ( ( (x) << (n) ) | ( ( (x) & 0xFFFFFFFF) >> ( 32 - (n) ) ) )
