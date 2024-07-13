#define ECJPAKE_VALIDATE( cond )        \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define ECJPAKE_VALIDATE_RET( cond )    \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_ECP_BAD_INPUT_DATA )
#define TEST_ASSERT( x )    \
    do {                    \
        if( x )             \
            ret = 0;        \
        else                \
        {                   \
            ret = 1;        \
            goto cleanup;   \
        }                   \
    } while( 0 )
