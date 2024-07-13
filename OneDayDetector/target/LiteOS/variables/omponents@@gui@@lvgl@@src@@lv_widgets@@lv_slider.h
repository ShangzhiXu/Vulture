    lv_bar_ext_t bar; /*Ext. of ancestor*/
    uint8_t dragging : 1;       /*1: the slider is being dragged*/
    lv_area_t left_knob_area;
    lv_area_t right_knob_area;
    lv_style_list_t style_knob; /*Style of the knob*/
    int16_t * value_to_set; /* Which bar value to set */
