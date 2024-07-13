    mbedtls_sha256_context  accumulator;
    mbedtls_sha512_context  accumulator;
    int accumulator_started;
    mbedtls_entropy_f_source_ptr    f_source;   /**< The entropy source callback */
    mbedtls_havege_state    havege_data;
    int initial_entropy_run;
    mbedtls_threading_mutex_t mutex;    /*!< mutex                  */
    void *          p_source;   /**< The callback data pointer */
    size_t          size;       /**< Amount received in bytes */
    mbedtls_entropy_source_state    source[MBEDTLS_ENTROPY_MAX_SOURCES];
    int             source_count;
    int             strong;     /**< Is the source strong? */
    size_t          threshold;  /**< Minimum bytes required before release */
