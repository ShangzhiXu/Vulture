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
#define BYTES_TO_U32_LE( data, offset )                           \
    ( (uint32_t) (data)[offset]                                     \
          | (uint32_t) ( (uint32_t) (data)[( offset ) + 1] << 8 )   \
          | (uint32_t) ( (uint32_t) (data)[( offset ) + 2] << 16 )  \
          | (uint32_t) ( (uint32_t) (data)[( offset ) + 3] << 24 )  \
    )
#define POLY1305_VALIDATE( cond )                                           \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define POLY1305_VALIDATE_RET( cond )                                       \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_POLY1305_BAD_INPUT_DATA )
