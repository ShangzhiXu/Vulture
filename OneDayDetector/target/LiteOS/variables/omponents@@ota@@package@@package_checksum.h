    int (*check)(struct pack_checksum_alg_tag_s *thi, const uint8_t *checksum, uint16_t checksum_len);
    void (*destroy)(struct pack_checksum_alg_tag_s *thi);
    uint32_t (*get_block_size)(struct pack_hardware_tag_s *thi);
    uint32_t (*get_max_size)(struct pack_hardware_tag_s *thi);
    int (*read_software)(struct pack_hardware_tag_s *thi, uint32_t offset, uint8_t *buffer, uint32_t len);
    void (*reset)(struct pack_checksum_alg_tag_s *thi);
    void (*set_flash_type)(struct pack_hardware_tag_s *thi, ota_flash_type_e type);
    int (*update)(struct pack_checksum_alg_tag_s *thi, const uint8_t *buff, uint16_t len);
    int (*write_software)(struct pack_hardware_tag_s *thi, uint32_t offset, const uint8_t *buffer, uint32_t len);
