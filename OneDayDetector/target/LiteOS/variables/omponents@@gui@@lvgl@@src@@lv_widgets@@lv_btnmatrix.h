    uint16_t btn_cnt;                                 /*Number of button in 'map_p'(Handled by the library)*/
    uint16_t btn_id_act;    /*Index of the active button (being pressed/released etc) or LV_BTNMATRIX_BTN_NONE */
    uint16_t btn_id_focused;                          /*Index of the currently focused button or LV_BTNMATRIX_BTN_NONE*/
    uint16_t btn_id_pr;                               /*Index of the currently pressed button or LV_BTNMATRIX_BTN_NONE*/
    lv_area_t * button_areas;                         /*Array of areas of buttons*/
    lv_btnmatrix_ctrl_t * ctrl_bits;                       /*Array of control bytes*/
    const char ** map_p;                              /*Pointer to the current map*/
    uint8_t one_check : 1;  /*Single button toggled at once*/
    uint8_t recolor : 1;    /*Enable button recoloring*/
    lv_style_list_t style_btn;                     /*Styles of buttons in each state*/
