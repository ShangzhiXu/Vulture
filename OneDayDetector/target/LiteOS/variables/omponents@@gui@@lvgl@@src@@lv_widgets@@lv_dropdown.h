    lv_dropdown_dir_t dir         : 2;
    lv_coord_t max_height;        /*Height of the ddlist when opened. (0: auto-size)*/
    uint16_t option_cnt;          /*Number of options*/
    char * options;
    lv_obj_t * page;             /*The dropped down list*/
    uint16_t pr_opt_id;             /*Index of the currently pressed option*/
    uint16_t sel_opt_id;          /*Index of the currently selected option*/
    uint16_t sel_opt_id_orig;     /*Store the original index on focus*/
    uint8_t show_selected  : 1;
    uint8_t static_txt : 1;
    lv_style_list_t style_page;     /*Style of the dropped down list*/
    lv_style_list_t style_scrlbar; /*Style of the scroll bar*/
    lv_style_list_t style_selected; /*Style of the selected option*/
    const char * symbol;         /*Arrow or other icon when the drop-down list is closed*/
    const char * text;           /*Text to display on the ddlist's button*/
