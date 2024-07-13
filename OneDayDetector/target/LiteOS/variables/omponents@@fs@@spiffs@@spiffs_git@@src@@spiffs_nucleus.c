    u32_t compaction;
    const u8_t *conflicting_name;
    spiffs_fd *fd;
    spiffs_span_ix map_objix_end_spix;
    spiffs_span_ix map_objix_start_spix;
    spiffs_obj_id max_obj_id;
    spiffs_obj_id min_obj_id;
    u32_t remaining_objix_pages_to_visit;
