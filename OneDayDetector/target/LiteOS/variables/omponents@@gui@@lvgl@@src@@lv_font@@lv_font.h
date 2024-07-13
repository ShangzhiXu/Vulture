    uint16_t adv_w; /**< The glyph needs this space. Draw the next glyph after this width. 8 bit integer, 4 bit fractional */
    lv_coord_t base_line;           /**< Base line measured from the top of the line_height*/
    uint16_t box_h;  /**< Height of the glyph's bounding box*/
    uint16_t box_w;  /**< Width of the glyph's bounding box*/
    uint8_t bpp;   /**< Bit-per-pixel: 1, 2, 4, 8*/
    void * dsc;                     /**< Store implementation specific or run_time data or caching here*/
    const uint8_t * (*get_glyph_bitmap)(const struct _lv_font_struct *, uint32_t);
    bool (*get_glyph_dsc)(const struct _lv_font_struct *, lv_font_glyph_dsc_t *, uint32_t letter, uint32_t letter_next);
    lv_coord_t line_height;         /**< The real line height where any text fits*/
    int16_t ofs_x;   /**< x offset of the bounding box*/
    int16_t ofs_y;  /**< y offset of the bounding box*/
    uint8_t subpx  : 2;             /**< An element of `lv_font_subpx_t`*/
    lv_font_user_data_t user_data;  /**< Custom user data for font. */
