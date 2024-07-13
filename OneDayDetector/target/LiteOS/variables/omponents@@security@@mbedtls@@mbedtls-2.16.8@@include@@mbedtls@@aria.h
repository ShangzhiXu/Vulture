    unsigned char nr;           /*!< The number of rounds (12, 14 or 16) */
    uint32_t rk[MBEDTLS_ARIA_MAX_ROUNDS + 1][MBEDTLS_ARIA_BLOCKSIZE / 4];
