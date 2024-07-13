    int (*active_software)(pack_storage_device_api_s *thi);
    void (*free)(void *ptr);
    void *(*malloc)(size_t size);
    ota_opt_s ota_opt;
    int (*printf)(const char *fmt, ...);
    int (*write_software)(pack_storage_device_api_s *thi, uint32_t offset, const uint8_t *buffer, uint32_t len);
    int (*write_software_end)(pack_storage_device_api_s *thi, pack_download_result_e result, uint32_t total_len);
