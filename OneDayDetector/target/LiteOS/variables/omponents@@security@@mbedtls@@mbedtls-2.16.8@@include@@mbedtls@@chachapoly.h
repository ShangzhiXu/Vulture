    uint64_t aad_len;                       /**< The length (bytes) of the Additional Authenticated Data. */
    mbedtls_chacha20_context chacha20_ctx;  /**< The ChaCha20 context. */
    uint64_t ciphertext_len;                /**< The length (bytes) of the ciphertext. */
    mbedtls_chachapoly_mode_t mode;         /**< Cipher mode (encrypt or decrypt). */
    mbedtls_poly1305_context poly1305_ctx;  /**< The Poly1305 context. */
    int state;                              /**< The current state of the context. */
