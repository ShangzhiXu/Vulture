#define AES_FROUND(X0,X1,X2,X3,Y0,Y1,Y2,Y3)                     \
    do                                                          \
    {                                                           \
        (X0) = *RK++ ^ AES_FT0( ( (Y0)       ) & 0xFF ) ^       \
                       AES_FT1( ( (Y1) >>  8 ) & 0xFF ) ^       \
                       AES_FT2( ( (Y2) >> 16 ) & 0xFF ) ^       \
                       AES_FT3( ( (Y3) >> 24 ) & 0xFF );        \
                                                                \
        (X1) = *RK++ ^ AES_FT0( ( (Y1)       ) & 0xFF ) ^       \
                       AES_FT1( ( (Y2) >>  8 ) & 0xFF ) ^       \
                       AES_FT2( ( (Y3) >> 16 ) & 0xFF ) ^       \
                       AES_FT3( ( (Y0) >> 24 ) & 0xFF );        \
                                                                \
        (X2) = *RK++ ^ AES_FT0( ( (Y2)       ) & 0xFF ) ^       \
                       AES_FT1( ( (Y3) >>  8 ) & 0xFF ) ^       \
                       AES_FT2( ( (Y0) >> 16 ) & 0xFF ) ^       \
                       AES_FT3( ( (Y1) >> 24 ) & 0xFF );        \
                                                                \
        (X3) = *RK++ ^ AES_FT0( ( (Y3)       ) & 0xFF ) ^       \
                       AES_FT1( ( (Y0) >>  8 ) & 0xFF ) ^       \
                       AES_FT2( ( (Y1) >> 16 ) & 0xFF ) ^       \
                       AES_FT3( ( (Y2) >> 24 ) & 0xFF );        \
    } while( 0 )
#define AES_FT0(idx) FT0[idx]
#define AES_FT0(idx) FT0[idx]
#define AES_FT1(idx) ROTL8(  FT0[idx] )
#define AES_FT1(idx) FT1[idx]
#define AES_FT2(idx) ROTL16( FT0[idx] )
#define AES_FT2(idx) FT2[idx]
#define AES_FT3(idx) ROTL24( FT0[idx] )
#define AES_FT3(idx) FT3[idx]
#define AES_RROUND(X0,X1,X2,X3,Y0,Y1,Y2,Y3)                 \
    do                                                      \
    {                                                       \
        (X0) = *RK++ ^ AES_RT0( ( (Y0)       ) & 0xFF ) ^   \
                       AES_RT1( ( (Y3) >>  8 ) & 0xFF ) ^   \
                       AES_RT2( ( (Y2) >> 16 ) & 0xFF ) ^   \
                       AES_RT3( ( (Y1) >> 24 ) & 0xFF );    \
                                                            \
        (X1) = *RK++ ^ AES_RT0( ( (Y1)       ) & 0xFF ) ^   \
                       AES_RT1( ( (Y0) >>  8 ) & 0xFF ) ^   \
                       AES_RT2( ( (Y3) >> 16 ) & 0xFF ) ^   \
                       AES_RT3( ( (Y2) >> 24 ) & 0xFF );    \
                                                            \
        (X2) = *RK++ ^ AES_RT0( ( (Y2)       ) & 0xFF ) ^   \
                       AES_RT1( ( (Y1) >>  8 ) & 0xFF ) ^   \
                       AES_RT2( ( (Y0) >> 16 ) & 0xFF ) ^   \
                       AES_RT3( ( (Y3) >> 24 ) & 0xFF );    \
                                                            \
        (X3) = *RK++ ^ AES_RT0( ( (Y3)       ) & 0xFF ) ^   \
                       AES_RT1( ( (Y2) >>  8 ) & 0xFF ) ^   \
                       AES_RT2( ( (Y1) >> 16 ) & 0xFF ) ^   \
                       AES_RT3( ( (Y0) >> 24 ) & 0xFF );    \
    } while( 0 )
#define AES_RT0(idx) RT0[idx]
#define AES_RT0(idx) RT0[idx]
#define AES_RT1(idx) ROTL8(  RT0[idx] )
#define AES_RT1(idx) RT1[idx]
#define AES_RT2(idx) ROTL16( RT0[idx] )
#define AES_RT2(idx) RT2[idx]
#define AES_RT3(idx) ROTL24( RT0[idx] )
#define AES_RT3(idx) RT3[idx]
#define AES_VALIDATE( cond )        \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define AES_VALIDATE_RET( cond )    \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_AES_BAD_INPUT_DATA )
#define GET_UINT32_LE(n,b,i)                            \
{                                                       \
    (n) = ( (uint32_t) (b)[(i)    ]       )             \
        | ( (uint32_t) (b)[(i) + 1] <<  8 )             \
        | ( (uint32_t) (b)[(i) + 2] << 16 )             \
        | ( (uint32_t) (b)[(i) + 3] << 24 );            \
}
#define GET_UINT64_LE(n,b,i)                            \
{                                                       \
    (n) = ( (uint64_t) (b)[(i) + 7] << 56 )             \
        | ( (uint64_t) (b)[(i) + 6] << 48 )             \
        | ( (uint64_t) (b)[(i) + 5] << 40 )             \
        | ( (uint64_t) (b)[(i) + 4] << 32 )             \
        | ( (uint64_t) (b)[(i) + 3] << 24 )             \
        | ( (uint64_t) (b)[(i) + 2] << 16 )             \
        | ( (uint64_t) (b)[(i) + 1] <<  8 )             \
        | ( (uint64_t) (b)[(i)    ]       );            \
}
#define MUL(x,y) ( ( (x) && (y) ) ? pow[(log[(x)]+log[(y)]) % 255] : 0 )
#define PUT_UINT32_LE(n,b,i)                                    \
{                                                               \
    (b)[(i)    ] = (unsigned char) ( ( (n)       ) & 0xFF );    \
    (b)[(i) + 1] = (unsigned char) ( ( (n) >>  8 ) & 0xFF );    \
    (b)[(i) + 2] = (unsigned char) ( ( (n) >> 16 ) & 0xFF );    \
    (b)[(i) + 3] = (unsigned char) ( ( (n) >> 24 ) & 0xFF );    \
}
#define PUT_UINT64_LE(n,b,i)                            \
{                                                       \
    (b)[(i) + 7] = (unsigned char) ( (n) >> 56 );       \
    (b)[(i) + 6] = (unsigned char) ( (n) >> 48 );       \
    (b)[(i) + 5] = (unsigned char) ( (n) >> 40 );       \
    (b)[(i) + 4] = (unsigned char) ( (n) >> 32 );       \
    (b)[(i) + 3] = (unsigned char) ( (n) >> 24 );       \
    (b)[(i) + 2] = (unsigned char) ( (n) >> 16 );       \
    (b)[(i) + 1] = (unsigned char) ( (n) >>  8 );       \
    (b)[(i)    ] = (unsigned char) ( (n)       );       \
}
#define ROTL16(x) ( (uint32_t)( ( x ) << 16 ) + (uint32_t)( ( x ) >> 16 ) )
#define ROTL24(x) ( (uint32_t)( ( x ) << 24 ) + (uint32_t)( ( x ) >>  8 ) )
#define ROTL8(x) ( ( (x) << 8 ) & 0xFFFFFFFF ) | ( (x) >> 24 )
#define ROTL8(x)  ( (uint32_t)( ( x ) <<  8 ) + (uint32_t)( ( x ) >> 24 ) )
#define V(a,b,c,d) 0x##a##b##c##d
#define V(a,b,c,d) 0x##b##c##d##a
#define V(a,b,c,d) 0x##c##d##a##b
#define V(a,b,c,d) 0x##d##a##b##c
#define V(a,b,c,d) 0x##a##b##c##d
#define V(a,b,c,d) 0x##b##c##d##a
#define V(a,b,c,d) 0x##c##d##a##b
#define V(a,b,c,d) 0x##d##a##b##c
#define XTIME(x) ( ( (x) << 1 ) ^ ( ( (x) & 0x80 ) ? 0x1B : 0x00 ) )
