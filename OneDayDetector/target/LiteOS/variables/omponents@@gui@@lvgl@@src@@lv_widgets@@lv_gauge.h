    lv_gauge_format_cb_t format_cb;
    uint8_t label_count;              /*Number of labels on the scale*/
    lv_linemeter_ext_t lmeter; /*Ext. of ancestor*/
    const lv_color_t * needle_colors; /*Color of the needles (lv_color_t my_colors[needle_num])*/
    uint8_t needle_count;             /*Number of needles*/
    const void * needle_img;
    lv_point_t needle_img_pivot;
    lv_style_list_t style_needle;
    lv_style_list_t style_strong;
    int32_t * values;        /*Array of the set values (for needles) */
