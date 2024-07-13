    lv_anim_value_t anim_end;
    lv_anim_value_t anim_start;
    lv_anim_value_t anim_state;
    lv_anim_value_t anim_time;
    lv_obj_t * bar;
    int16_t cur_value; /*Current value of the bar*/
    lv_bar_anim_t cur_value_anim;
    lv_area_t indic_area;   /*Save the indicator area. MIght be used by derived types*/
    int16_t max_value; /*Maximum value of the bar*/
    int16_t min_value; /*Minimum value of the bar*/
    int16_t start_value; /*Start value of the bar*/
    lv_bar_anim_t start_value_anim;
    lv_style_list_t style_indic; /*Style of the indicator*/
    uint8_t type : 2;           /*Type of bar*/
