    mbedtls_md_context_t    hmac_ctx;   /*!< context for the HMAC portion   */
    mbedtls_threading_mutex_t mutex;
    unsigned long   serial;     /*!< serial number for expiration   */
    unsigned long   timeout;    /*!< timeout delay, in seconds if HAVE_TIME,
