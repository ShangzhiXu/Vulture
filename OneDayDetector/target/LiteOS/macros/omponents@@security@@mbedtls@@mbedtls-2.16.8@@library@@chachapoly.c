#define ASSERT( cond, args )            \
    do                                  \
    {                                   \
        if( ! ( cond ) )                \
        {                               \
            if( verbose != 0 )          \
                mbedtls_printf args;    \
                                        \
            return( -1 );               \
        }                               \
    }                                   \
    while( 0 )
#define CHACHAPOLY_VALIDATE( cond )                                           \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define CHACHAPOLY_VALIDATE_RET( cond )                                       \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_POLY1305_BAD_INPUT_DATA )
