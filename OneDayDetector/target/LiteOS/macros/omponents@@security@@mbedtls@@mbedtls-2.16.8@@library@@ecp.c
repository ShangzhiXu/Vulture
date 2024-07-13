#define ECP_RS_ENTER( SUB )   do {                                      \
    /* reset ops count for this call if top-level */                    \
    if( rs_ctx != NULL && rs_ctx->depth++ == 0 )                        \
        rs_ctx->ops_done = 0;                                           \
                                                                        \
    /* set up our own sub-context if needed */                          \
    if( mbedtls_ecp_restart_is_enabled() &&                             \
        rs_ctx != NULL && rs_ctx->SUB == NULL )                         \
    {                                                                   \
        rs_ctx->SUB = mbedtls_calloc( 1, sizeof( *rs_ctx->SUB ) );      \
        if( rs_ctx->SUB == NULL )                                       \
            return( MBEDTLS_ERR_ECP_ALLOC_FAILED );                     \
                                                                        \
        ecp_restart_## SUB ##_init( rs_ctx->SUB );                      \
    }                                                                   \
} while( 0 )
#define ECP_RS_ENTER( sub )     (void) rs_ctx;
#define ECP_RS_LEAVE( SUB )   do {                                      \
    /* clear our sub-context when not in progress (done or error) */    \
    if( rs_ctx != NULL && rs_ctx->SUB != NULL &&                        \
        ret != MBEDTLS_ERR_ECP_IN_PROGRESS )                            \
    {                                                                   \
        ecp_restart_## SUB ##_free( rs_ctx->SUB );                      \
        mbedtls_free( rs_ctx->SUB );                                    \
        rs_ctx->SUB = NULL;                                             \
    }                                                                   \
                                                                        \
    if( rs_ctx != NULL )                                                \
        rs_ctx->depth--;                                                \
} while( 0 )
#define ECP_RS_LEAVE( sub )     (void) rs_ctx;
#define ECP_VALIDATE( cond )        \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define ECP_VALIDATE_RET( cond )    \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_ECP_BAD_INPUT_DATA )
#define HASH_FUNC( in, ilen, out )  mbedtls_sha512_ret( in, ilen, out, 0 );
#define HASH_FUNC( in, ilen, out )  mbedtls_sha256_ret( in, ilen, out, 0 );
#define MOD_ADD( N )                                                    \
    while( mbedtls_mpi_cmp_mpi( &(N), &grp->P ) >= 0 )                  \
        MBEDTLS_MPI_CHK( mbedtls_mpi_sub_abs( &(N), &(N), &grp->P ) )
#define MOD_MUL( N )                                                    \
    do                                                                  \
    {                                                                   \
        MBEDTLS_MPI_CHK( ecp_modp( &(N), grp ) );                       \
        INC_MUL_COUNT                                                   \
    } while( 0 )
#define MOD_SUB( N )                                                    \
    while( (N).s < 0 && mbedtls_mpi_cmp_int( &(N), 0 ) != 0 )           \
        MBEDTLS_MPI_CHK( mbedtls_mpi_add_mpi( &(N), &(N), &grp->P ) )
