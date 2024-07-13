  int bio_bytes_appl;
  int bio_bytes_read;
  void *conf;
  u8_t flags;
  struct pbuf *rx;
  struct pbuf *rx_app;
  int rx_passed_unrecved;
  mbedtls_ssl_context ssl_context;
