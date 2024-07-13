    mbedtls_aes_context aes_ctx;        /*!< The AES context. */
    unsigned char counter[16];  /*!< The counter (V). */
    size_t entropy_len;         /*!< The amount of entropy grabbed on each
    int (*f_entropy)(void *, unsigned char *, size_t);
    mbedtls_threading_mutex_t mutex;
    void *p_entropy;            /*!< The context for the entropy function. */
    int prediction_resistance;  /*!< This determines whether prediction
    int reseed_counter;         /*!< The reseed counter. */
    int reseed_interval;        /*!< The reseed interval. */
