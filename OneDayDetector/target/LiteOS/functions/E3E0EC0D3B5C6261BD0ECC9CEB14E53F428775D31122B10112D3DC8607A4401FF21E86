void mbedtls_ecdsa_restart_free( mbedtls_ecdsa_restart_ctx *ctx )
{
    if( ctx == NULL )
        return;

    mbedtls_ecp_restart_free( &ctx->ecp );

    ecdsa_restart_ver_free( ctx->ver );
    mbedtls_free( ctx->ver );
    ctx->ver = NULL;

    ecdsa_restart_sig_free( ctx->sig );
    mbedtls_free( ctx->sig );
    ctx->sig = NULL;

#if defined(MBEDTLS_ECDSA_DETERMINISTIC)
    ecdsa_restart_det_free( ctx->det );
    mbedtls_free( ctx->det );
    ctx->det = NULL;
#endif
}
