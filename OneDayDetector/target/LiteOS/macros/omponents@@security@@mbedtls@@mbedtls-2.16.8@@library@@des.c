#define DES_FP(X,Y)                                                       \
    do                                                                    \
    {                                                                     \
        (X) = (((X) << 31) | ((X) >> 1)) & 0xFFFFFFFF;                    \
        T = ((X) ^ (Y)) & 0xAAAAAAAA; (X) ^= T; (Y) ^= T;                 \
        (Y) = (((Y) << 31) | ((Y) >> 1)) & 0xFFFFFFFF;                    \
        T = (((Y) >>  8) ^ (X)) & 0x00FF00FF; (X) ^= T; (Y) ^= (T <<  8); \
        T = (((Y) >>  2) ^ (X)) & 0x33333333; (X) ^= T; (Y) ^= (T <<  2); \
        T = (((X) >> 16) ^ (Y)) & 0x0000FFFF; (Y) ^= T; (X) ^= (T << 16); \
        T = (((X) >>  4) ^ (Y)) & 0x0F0F0F0F; (Y) ^= T; (X) ^= (T <<  4); \
    } while( 0 )
#define DES_IP(X,Y)                                                       \
    do                                                                    \
    {                                                                     \
        T = (((X) >>  4) ^ (Y)) & 0x0F0F0F0F; (Y) ^= T; (X) ^= (T <<  4); \
        T = (((X) >> 16) ^ (Y)) & 0x0000FFFF; (Y) ^= T; (X) ^= (T << 16); \
        T = (((Y) >>  2) ^ (X)) & 0x33333333; (X) ^= T; (Y) ^= (T <<  2); \
        T = (((Y) >>  8) ^ (X)) & 0x00FF00FF; (X) ^= T; (Y) ^= (T <<  8); \
        (Y) = (((Y) << 1) | ((Y) >> 31)) & 0xFFFFFFFF;                    \
        T = ((X) ^ (Y)) & 0xAAAAAAAA; (Y) ^= T; (X) ^= T;                 \
        (X) = (((X) << 1) | ((X) >> 31)) & 0xFFFFFFFF;                    \
    } while( 0 )
#define DES_ROUND(X,Y)                              \
    do                                              \
    {                                               \
        T = *SK++ ^ (X);                            \
        (Y) ^= SB8[ (T      ) & 0x3F ] ^            \
               SB6[ (T >>  8) & 0x3F ] ^            \
               SB4[ (T >> 16) & 0x3F ] ^            \
               SB2[ (T >> 24) & 0x3F ];             \
                                                    \
        T = *SK++ ^ (((X) << 28) | ((X) >> 4));     \
        (Y) ^= SB7[ (T      ) & 0x3F ] ^            \
               SB5[ (T >>  8) & 0x3F ] ^            \
               SB3[ (T >> 16) & 0x3F ] ^            \
               SB1[ (T >> 24) & 0x3F ];             \
    } while( 0 )
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
#define SWAP(a,b)                                       \
    do                                                  \
    {                                                   \
        uint32_t t = (a); (a) = (b); (b) = t; t = 0;    \
    } while( 0 )
