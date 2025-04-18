  spiffs_block_ix block;
  u32_t block_count;
  void *cache;
  u32_t cache_hits;
  u32_t cache_misses;
  u32_t cache_size;
  spiffs_config cfg;
  spiffs_check_callback check_cb_f;
  u8_t cleaning;
  u32_t config_magic;
  spiffs_block_ix cursor_block_ix;
  int cursor_obj_lu_entry;
  spiffs_span_ix end_spix;
  int entry;
  s32_t err_code;
  u32_t fd_count;
  u8_t *fd_space;
  u16_t fh_ix_offset;
  spiffs_file_callback file_cb_f;
  u32_t free_blocks;
  spiffs_block_ix free_cursor_block_ix;
  int free_cursor_obj_lu_entry;
  spiffs *fs;
  spiffs_erase hal_erase_f;
  spiffs_read hal_read_f;
  spiffs_write hal_write_f;
  u32_t log_block_size;
  u32_t log_page_size;
  u8_t *lu_work;
  spiffs_page_ix *map_buf;
  spiffs_obj_id max_erase_count;
  u8_t meta[SPIFFS_OBJ_META_LEN];
  u8_t meta[SPIFFS_OBJ_META_LEN];
  u8_t mounted;
  u8_t name[SPIFFS_OBJ_NAME_LEN];
  u8_t name[SPIFFS_OBJ_NAME_LEN];
  spiffs_obj_id obj_id;
  spiffs_obj_id obj_id;
  u32_t offset;
  u32_t phys_addr;
  u32_t phys_erase_block;
  u32_t phys_size;
  spiffs_page_ix pix;
  spiffs_page_ix pix;
  u32_t size;
  u32_t size;
  spiffs_span_ix start_spix;
  u32_t stats_gc_runs;
  u32_t stats_p_allocated;
  u32_t stats_p_deleted;
  spiffs_obj_type type;
  spiffs_obj_type type;
  void *user_data;
  u8_t *work;
