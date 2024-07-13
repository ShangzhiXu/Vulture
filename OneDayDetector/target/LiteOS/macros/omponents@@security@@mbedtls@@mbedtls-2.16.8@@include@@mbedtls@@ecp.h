#define MBEDTLS_ECP_BUDGET( ops )   \
    MBEDTLS_MPI_CHK( mbedtls_ecp_check_budget( grp, rs_ctx, \
                                               (unsigned) (ops) ) );
#define MBEDTLS_ECP_BUDGET( ops )   /* no-op; for compatibility */
