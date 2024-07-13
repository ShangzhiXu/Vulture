    int active;
    mbedtls_net_context client_fd;
    const mbedtls_ssl_config *config;
    thread_info_t   data;
    pthread_t       thread;
    int thread_complete;
