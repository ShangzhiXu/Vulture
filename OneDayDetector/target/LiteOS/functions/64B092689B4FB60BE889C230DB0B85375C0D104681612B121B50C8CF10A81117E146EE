static void ecdsa_restart_sig_init( mbedtls_ecdsa_restart_sig_ctx *ctx )
{
    ctx->sign_tries = 0;
    ctx->key_tries = 0;
    mbedtls_mpi_init( &ctx->k );
    mbedtls_mpi_init( &ctx->r );
    ctx->state = ecdsa_sig_init;
}
