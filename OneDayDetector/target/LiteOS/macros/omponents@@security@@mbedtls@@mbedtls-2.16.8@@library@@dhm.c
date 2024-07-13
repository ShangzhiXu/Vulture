#define DHM_MPI_EXPORT( X, n )                                          \
    do {                                                                \
        MBEDTLS_MPI_CHK( mbedtls_mpi_write_binary( ( X ),               \
                                                   p + 2,               \
                                                   ( n ) ) );           \
        *p++ = (unsigned char)( ( n ) >> 8 );                           \
        *p++ = (unsigned char)( ( n )      );                           \
        p += ( n );                                                     \
    } while( 0 )
#define DHM_VALIDATE( cond )        \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define DHM_VALIDATE_RET( cond )    \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_DHM_BAD_INPUT_DATA )
