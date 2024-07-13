#define MBEDTLS_DEBUG_STRIP_PARENS( ... )   __VA_ARGS__
#define MBEDTLS_SSL_DEBUG_BUF( level, text, buf, len )  do { } while( 0 )
#define MBEDTLS_SSL_DEBUG_BUF( level, text, buf, len )           \
    mbedtls_debug_print_buf( ssl, level, __FILE__, __LINE__, text, buf, len )
#define MBEDTLS_SSL_DEBUG_CRT( level, text, crt )       do { } while( 0 )
#define MBEDTLS_SSL_DEBUG_CRT( level, text, crt )                \
    mbedtls_debug_print_crt( ssl, level, __FILE__, __LINE__, text, crt )
#define MBEDTLS_SSL_DEBUG_ECDH( level, ecdh, attr )     do { } while( 0 )
#define MBEDTLS_SSL_DEBUG_ECDH( level, ecdh, attr )               \
    mbedtls_debug_printf_ecdh( ssl, level, __FILE__, __LINE__, ecdh, attr )
#define MBEDTLS_SSL_DEBUG_ECP( level, text, X )         do { } while( 0 )
#define MBEDTLS_SSL_DEBUG_ECP( level, text, X )                  \
    mbedtls_debug_print_ecp( ssl, level, __FILE__, __LINE__, text, X )
#define MBEDTLS_SSL_DEBUG_MPI( level, text, X )         do { } while( 0 )
#define MBEDTLS_SSL_DEBUG_MPI( level, text, X )                  \
    mbedtls_debug_print_mpi( ssl, level, __FILE__, __LINE__, text, X )
#define MBEDTLS_SSL_DEBUG_MSG( level, args )            do { } while( 0 )
#define MBEDTLS_SSL_DEBUG_MSG( level, args )                    \
    mbedtls_debug_print_msg( ssl, level, __FILE__, __LINE__,    \
                             MBEDTLS_DEBUG_STRIP_PARENS args )
#define MBEDTLS_SSL_DEBUG_RET( level, text, ret )       do { } while( 0 )
#define MBEDTLS_SSL_DEBUG_RET( level, text, ret )                \
    mbedtls_debug_print_ret( ssl, level, __FILE__, __LINE__, text, ret )
