    unsigned char V[MBEDTLS_MD_MAX_SIZE];  /*!< V in the spec          */
    size_t entropy_len;         /*!< entropy bytes grabbed on each (re)seed */
    int (*f_entropy)(void *, unsigned char *, size_t); /*!< entropy function */
    mbedtls_md_context_t md_ctx;                    /*!< HMAC context (inc. K)  */
    mbedtls_threading_mutex_t mutex;
    void *p_entropy;            /*!< context for the entropy function        */
    int prediction_resistance;  /*!< enable prediction resistance (Automatic
    int reseed_counter;                     /*!< reseed counter         */
    int reseed_interval;        /*!< reseed interval   */
