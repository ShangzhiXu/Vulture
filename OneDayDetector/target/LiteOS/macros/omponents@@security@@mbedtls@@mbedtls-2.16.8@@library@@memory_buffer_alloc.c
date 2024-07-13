#define TEST_ASSERT( condition )            \
    if( ! (condition) )                     \
    {                                       \
        if( verbose != 0 )                  \
            mbedtls_printf( "failed\n" );  \
                                            \
        ret = 1;                            \
        goto cleanup;                       \
    }
