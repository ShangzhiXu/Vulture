    uint32_t adv_w : 12;            /**< Draw the next glyph after this width. 8.4 format (real_value * 16 is stored). */
    uint16_t bitmap_format  : 2;
    uint32_t bitmap_index : 20;     /**< Start index of the bitmap. A font can be max 1 MB. */
    uint8_t box_h;                  /**< Height of the glyph's bounding box*/
    uint8_t box_w;                  /**< Width of the glyph's bounding box*/
    uint16_t bpp            : 4;
    const int8_t * class_pair_values;    /*left_class_num * right_class_num value*/
    uint16_t cmap_num       : 10;
    const lv_font_fmt_txt_cmap_t * cmaps;
    const uint8_t * glyph_bitmap;
    const lv_font_fmt_txt_glyph_dsc_t * glyph_dsc;
    const void * glyph_id_ofs_list;
    uint16_t glyph_id_start;
    const void * glyph_ids;
    uint32_t glyph_ids_size : 2;    /*0: `glyph_ids` is stored as `uint8_t`; 1: as `uint16_t`*/
    uint16_t kern_classes   : 1;
    const void * kern_dsc;
    uint16_t kern_scale;
    uint32_t last_glyph_id;
    uint32_t last_letter;
    uint8_t left_class_cnt;
    const uint8_t * left_class_mapping;   /*Map the glyph_ids to classes: index -> glyph_id -> class_id*/
    uint16_t list_length;
    int8_t ofs_x;                   /**< x offset of the bounding box*/
    int8_t ofs_y;                  /**< y offset of the bounding box. Measured from the top of the line*/
    uint32_t pair_cnt   : 24;
    uint16_t range_length;
    uint32_t range_start;
    uint8_t right_class_cnt;
    const uint8_t * right_class_mapping;  /*Map the glyph_ids to classes: index -> glyph_id -> class_id*/
    lv_font_fmt_txt_cmap_type_t type;
    const uint16_t * unicode_list;
    const int8_t * values;
