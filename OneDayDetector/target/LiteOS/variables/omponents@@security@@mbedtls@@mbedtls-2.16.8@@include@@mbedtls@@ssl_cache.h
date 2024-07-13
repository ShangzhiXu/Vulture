    mbedtls_ssl_cache_entry *chain;     /*!< start of the chain     */
    int max_entries;            /*!< maximum entries        */
    mbedtls_threading_mutex_t mutex;    /*!< mutex                  */
    mbedtls_ssl_cache_entry *next;      /*!< chain pointer      */
    mbedtls_x509_buf peer_cert;         /*!< entry peer_cert    */
    mbedtls_ssl_session session;        /*!< entry session      */
    int timeout;                /*!< cache entry timeout    */
    mbedtls_time_t timestamp;           /*!< entry timestamp    */
