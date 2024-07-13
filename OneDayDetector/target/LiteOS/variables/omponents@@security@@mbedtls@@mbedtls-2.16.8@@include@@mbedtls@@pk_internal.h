    int (*can_do)( mbedtls_pk_type_t type );
    int (*check_pair_func)( const void *pub, const void *prv );
    void * (*ctx_alloc_func)( void );
    void (*ctx_free_func)( void *ctx );
    void (*debug_func)( const void *ctx, mbedtls_pk_debug_item *items );
    int (*decrypt_func)( void *ctx, const unsigned char *input, size_t ilen,
                         unsigned char *output, size_t *olen, size_t osize,
                         int (*f_rng)(void *, unsigned char *, size_t),
                         void *p_rng );
    mbedtls_pk_rsa_alt_decrypt_func decrypt_func;
    int (*encrypt_func)( void *ctx, const unsigned char *input, size_t ilen,
                         unsigned char *output, size_t *olen, size_t osize,
                         int (*f_rng)(void *, unsigned char *, size_t),
                         void *p_rng );
    size_t (*get_bitlen)( const void * );
    void *key;
    mbedtls_pk_rsa_alt_key_len_func key_len_func;
    const char *name;
    void * (*rs_alloc_func)( void );
    void (*rs_free_func)( void *rs_ctx );
    int (*sign_func)( void *ctx, mbedtls_md_type_t md_alg,
                      const unsigned char *hash, size_t hash_len,
                      unsigned char *sig, size_t *sig_len,
                      int (*f_rng)(void *, unsigned char *, size_t),
                      void *p_rng );
    mbedtls_pk_rsa_alt_sign_func sign_func;
    int (*sign_rs_func)( void *ctx, mbedtls_md_type_t md_alg,
                         const unsigned char *hash, size_t hash_len,
                         unsigned char *sig, size_t *sig_len,
                         int (*f_rng)(void *, unsigned char *, size_t),
                         void *p_rng, void *rs_ctx );
    mbedtls_pk_type_t type;
    int (*verify_func)( void *ctx, mbedtls_md_type_t md_alg,
                        const unsigned char *hash, size_t hash_len,
                        const unsigned char *sig, size_t sig_len );
    int (*verify_rs_func)( void *ctx, mbedtls_md_type_t md_alg,
                           const unsigned char *hash, size_t hash_len,
                           const unsigned char *sig, size_t sig_len,
                           void *rs_ctx );
