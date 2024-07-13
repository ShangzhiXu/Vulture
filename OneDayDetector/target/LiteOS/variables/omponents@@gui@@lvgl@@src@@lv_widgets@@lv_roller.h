    uint8_t auto_fit : 1;         /*1: Automatically set the width*/
    lv_roller_mode_t mode : 1;
    uint16_t option_cnt;          /*Number of options*/
    lv_page_ext_t page; /*Ext. of ancestor*/
    uint16_t sel_opt_id;          /*Index of the current option*/
    uint16_t sel_opt_id_ori;      /*Store the original index on focus*/
    lv_style_list_t style_sel; /*Style of the selected option*/
