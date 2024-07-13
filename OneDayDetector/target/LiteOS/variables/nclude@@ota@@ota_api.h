    uint32_t flash_block_size;
    ota_key_s key;
    int (*read_flash)(ota_flash_type_e type, void *buf, int32_t len, uint32_t location);
    const char *rsa_E; /* RSA public key E, should valid all the time */
    const char *rsa_N; /* RSA public key N, should valid all the time */
    int (*write_flash)(ota_flash_type_e type, const void *buf, int32_t len, uint32_t location);
