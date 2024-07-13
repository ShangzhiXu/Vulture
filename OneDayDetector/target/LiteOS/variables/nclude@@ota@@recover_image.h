    int32_t flash_erase_unit;   // Smallest unit of erase operation on flash.
    int (*func_flash_read)(flash_type_e flash_type, void *buf, int32_t len, uint32_t offset);
    int (*func_flash_write)(flash_type_e flash_type, const void *buf, int32_t len, uint32_t offset);
    void (*func_free)(void *ptr);
    void *(*func_malloc)(size_t size);
    int (*func_printf)(const char *fmt, ...);
    int32_t max_new_image_size; // Max size of newimage area.
    int32_t max_old_image_size; // Max size of oldimage area.
    int32_t max_patch_size;     // Max size of patch area.
    uint32_t new_image_addr;    // Head address of newimage.
    uint32_t old_image_addr;    // Head address of oldimage.
    uint32_t patch_addr;        // Head address of patch.
    int8_t recover_on_oldimage; // Whether recover on oldimage area or not.
