    lv_blend_mode_t blend_mode  : 2;
    lv_color_t color;
    lv_style_int_t dash_gap;
    lv_style_int_t dash_width;
    lv_opa_t opa;
    uint8_t raw_end     : 1;    /*Do not bother with perpendicular line ending is it's not visible for any reason*/
    uint8_t round_end   : 1;
    uint8_t round_start : 1;
    lv_style_int_t width;
