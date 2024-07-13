int mbedtls_ecdsa_write_signature( mbedtls_ecdsa_context *ctx,
                                 mbedtls_md_type_t md_alg,
                                 const unsigned char *hash, size_t hlen,
                                 unsigned char *sig, size_t *slen,
                                 int (*f_rng)(void *, unsigned char *, size_t),
                                 void *p_rng )
{
    ECDSA_VALIDATE_RET( ctx  != NULL );
    ECDSA_VALIDATE_RET( hash != NULL );
    ECDSA_VALIDATE_RET( sig  != NULL );
    ECDSA_VALIDATE_RET( slen != NULL );
    return( mbedtls_ecdsa_write_signature_restartable(
                ctx, md_alg, hash, hlen, sig, slen, f_rng, p_rng, NULL ) );
}
