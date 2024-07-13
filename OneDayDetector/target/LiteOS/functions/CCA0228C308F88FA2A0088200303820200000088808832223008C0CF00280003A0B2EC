static void ecdsa_restart_det_init( mbedtls_ecdsa_restart_det_ctx *ctx )
{
    mbedtls_hmac_drbg_init( &ctx->rng_ctx );
    ctx->state = ecdsa_det_init;
}
