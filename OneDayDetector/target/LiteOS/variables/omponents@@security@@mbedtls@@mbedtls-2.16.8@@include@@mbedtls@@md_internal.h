    int block_size;
    void (*clone_func)( void *dst, const void *src );
    void * (*ctx_alloc_func)( void );
    void (*ctx_free_func)( void *ctx );
    int (*digest_func)( const unsigned char *input, size_t ilen,
                        unsigned char *output );
    int (*finish_func)( void *ctx, unsigned char *output );
    const char * name;
    int (*process_func)( void *ctx, const unsigned char *input );
    int size;
    int (*starts_func)( void *ctx );
    mbedtls_md_type_t type;
    int (*update_func)( void *ctx, const unsigned char *input, size_t ilen );
