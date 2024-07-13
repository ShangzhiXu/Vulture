#define F1( x, y, z )   ( (x) ^ (y) ^ (z) )
#define F2( x, y, z )   ( ( (x) & (y) ) | ( ~(x) & (z) ) )
#define F3( x, y, z )   ( ( (x) | ~(y) ) ^ (z) )
#define F4( x, y, z )   ( ( (x) & (z) ) | ( (y) & ~(z) ) )
#define F5( x, y, z )   ( (x) ^ ( (y) | ~(z) ) )
#define GET_UINT32_LE(n,b,i)                            \
{                                                       \
    (n) = ( (uint32_t) (b)[(i)    ]       )             \
        | ( (uint32_t) (b)[(i) + 1] <<  8 )             \
        | ( (uint32_t) (b)[(i) + 2] << 16 )             \
        | ( (uint32_t) (b)[(i) + 3] << 24 );            \
}
#define P( a, b, c, d, e, r, s, f, k )                \
    do                                                \
    {                                                 \
        (a) += f( (b), (c), (d) ) + X[r] + (k);       \
        (a) = S( (a), (s) ) + (e);                    \
        (c) = S( (c), 10 );                           \
    } while( 0 )
#define P2( a, b, c, d, e, r, s, rp, sp )                               \
    do                                                                  \
    {                                                                   \
        P( (a), (b), (c), (d), (e), (r), (s), F, K );                   \
        P( a ## p, b ## p, c ## p, d ## p, e ## p,                      \
           (rp), (sp), Fp, Kp );                                        \
    } while( 0 )
#define PUT_UINT32_LE(n,b,i)                                    \
{                                                               \
    (b)[(i)    ] = (unsigned char) ( ( (n)       ) & 0xFF );    \
    (b)[(i) + 1] = (unsigned char) ( ( (n) >>  8 ) & 0xFF );    \
    (b)[(i) + 2] = (unsigned char) ( ( (n) >> 16 ) & 0xFF );    \
    (b)[(i) + 3] = (unsigned char) ( ( (n) >> 24 ) & 0xFF );    \
}
#define S( x, n ) ( ( (x) << (n) ) | ( (x) >> (32 - (n)) ) )
