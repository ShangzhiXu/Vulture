#define ECDSA_BUDGET( ops )   \
    MBEDTLS_MPI_CHK( mbedtls_ecp_check_budget( grp, ECDSA_RS_ECP, ops ) );
#define ECDSA_BUDGET( ops )   /* no-op; for compatibility */
#define ECDSA_RS_ENTER( SUB )   do {                                 \
    /* reset ops count for this call if top-level */                 \
    if( rs_ctx != NULL && rs_ctx->ecp.depth++ == 0 )                 \
        rs_ctx->ecp.ops_done = 0;                                    \
                                                                     \
    /* set up our own sub-context if needed */                       \
    if( mbedtls_ecp_restart_is_enabled() &&                          \
        rs_ctx != NULL && rs_ctx->SUB == NULL )                      \
    {                                                                \
        rs_ctx->SUB = mbedtls_calloc( 1, sizeof( *rs_ctx->SUB ) );   \
        if( rs_ctx->SUB == NULL )                                    \
            return( MBEDTLS_ERR_ECP_ALLOC_FAILED );                  \
                                                                     \
        ecdsa_restart_## SUB ##_init( rs_ctx->SUB );                 \
    }                                                                \
} while( 0 )
#define ECDSA_RS_ENTER( SUB )   (void) rs_ctx
#define ECDSA_RS_LEAVE( SUB )   do {                                 \
    /* clear our sub-context when not in progress (done or error) */ \
    if( rs_ctx != NULL && rs_ctx->SUB != NULL &&                     \
        ret != MBEDTLS_ERR_ECP_IN_PROGRESS )                         \
    {                                                                \
        ecdsa_restart_## SUB ##_free( rs_ctx->SUB );                 \
        mbedtls_free( rs_ctx->SUB );                                 \
        rs_ctx->SUB = NULL;                                          \
    }                                                                \
                                                                     \
    if( rs_ctx != NULL )                                             \
        rs_ctx->ecp.depth--;                                         \
} while( 0 )
#define ECDSA_RS_LEAVE( SUB )   (void) rs_ctx
#define ECDSA_VALIDATE( cond )        \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define ECDSA_VALIDATE_RET( cond )    \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_ECP_BAD_INPUT_DATA )
