static void ecdsa_restart_det_free( mbedtls_ecdsa_restart_det_ctx *ctx )
{
    if( ctx == NULL )
        return;

    mbedtls_hmac_drbg_free( &ctx->rng_ctx );

    ecdsa_restart_det_init( ctx );
}
