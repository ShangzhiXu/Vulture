#define MBEDTLS_ASN1_CHK_ADD(g, f)                      \
    do                                                  \
    {                                                   \
        if( ( ret = (f) ) < 0 )                         \
            return( ret );                              \
        else                                            \
            (g) += ret;                                 \
    } while( 0 )
