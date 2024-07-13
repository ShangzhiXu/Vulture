    uint32_t buf[68];           /*!< Unaligned data buffer. This buffer can
    mbedtls_aes_context crypt; /*!< The AES context to use for AES block
    int nr;                     /*!< The number of rounds. */
    uint32_t *rk;               /*!< AES round keys. */
    mbedtls_aes_context tweak; /*!< The AES context used for tweak
