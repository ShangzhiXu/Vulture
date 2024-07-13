void mbedtls_ecdsa_restart_init( mbedtls_ecdsa_restart_ctx *ctx )
{
    ECDSA_VALIDATE( ctx != NULL );

    mbedtls_ecp_restart_init( &ctx->ecp );

    ctx->ver = NULL;
    ctx->sig = NULL;
#if defined(MBEDTLS_ECDSA_DETERMINISTIC)
    ctx->det = NULL;
#endif
}
