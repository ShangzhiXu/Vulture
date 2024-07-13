    uint16_t dec_point_pos : 4; /*if 0, there is no separator and the number is an integer*/
    uint16_t digit_count : 4;
    uint16_t digit_padding_left : 4;
    int32_t range_max;
    int32_t range_min;
    uint8_t rollover : 1;   // Set to true for rollover functionality
    int32_t step;
    lv_textarea_ext_t ta; /*Ext. of ancestor*/
    int32_t value;
