    unsigned char       state[MBEDTLS_CIPHER_BLKSIZE_MAX];
    unsigned char       unprocessed_block[MBEDTLS_CIPHER_BLKSIZE_MAX];
    size_t              unprocessed_len;
