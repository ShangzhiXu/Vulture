  mbedtls_x509_crt *ca;
  struct mbedtls_ssl_cache_context cache;
  mbedtls_x509_crt *cert;
  mbedtls_ssl_config conf;
  mbedtls_ctr_drbg_context ctr_drbg;
  mbedtls_entropy_context entropy;
  mbedtls_pk_context *pkey;
