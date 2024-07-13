    unsigned char active;           /*!< index of the currently active key  */
    mbedtls_cipher_context_t ctx;   /*!< context for auth enc/decryption    */
    int  (*f_rng)(void *, unsigned char *, size_t);
    uint32_t generation_time;       /*!< key generation timestamp (seconds) */
    mbedtls_ssl_ticket_key keys[2]; /*!< ticket protection keys             */
    mbedtls_threading_mutex_t mutex;
    unsigned char name[4];          /*!< random key identifier              */
    void *p_rng;                    /*!< context for the RNG function       */
    uint32_t ticket_lifetime;       /*!< lifetime of tickets in seconds     */
