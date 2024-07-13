static void ecdsa_restart_ver_init( mbedtls_ecdsa_restart_ver_ctx *ctx )
{
    mbedtls_mpi_init( &ctx->u1 );
    mbedtls_mpi_init( &ctx->u2 );
    ctx->state = ecdsa_ver_init;
}
