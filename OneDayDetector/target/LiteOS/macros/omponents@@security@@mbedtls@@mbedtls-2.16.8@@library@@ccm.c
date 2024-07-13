#define CCM_VALIDATE( cond ) \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define CCM_VALIDATE_RET( cond ) \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_CCM_BAD_INPUT )
#define CTR_CRYPT( dst, src, len  )                                            \
    do                                                                  \
    {                                                                   \
        if( ( ret = mbedtls_cipher_update( &ctx->cipher_ctx, ctr,       \
                                           16, b, &olen ) ) != 0 )      \
        {                                                               \
            return( ret );                                              \
        }                                                               \
                                                                        \
        for( i = 0; i < (len); i++ )                                    \
            (dst)[i] = (src)[i] ^ b[i];                                 \
    } while( 0 )
