    void (*init)(void);
    int (*read_flash_info)(void *buffer, uint32_t len);
    int (*write_flash_info)(const void *buffer, uint32_t len);
