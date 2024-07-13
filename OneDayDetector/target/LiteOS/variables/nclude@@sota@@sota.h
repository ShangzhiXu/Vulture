    sota_run_mode_e current_run_stage;
    sota_run_mode_e firmware_download_stage;
    int (*get_ver)(char *buf, uint32_t len);
    ota_opt_s ota_info;
    void (*sota_free)(void *ptr);
    void *(*sota_malloc)(size_t size);
    int (*sota_printf)(const char *fmt, ...);
    int (*sota_send)(const char *buf, int len);
