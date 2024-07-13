    lv_btnmatrix_ext_t btnm; /*Ext. of ancestor*/
    uint8_t cursor_mng : 1; /*1: automatically show/hide cursor when a text area is assigned or left*/
    lv_keyboard_mode_t mode;      /*Key map type*/
    lv_obj_t * ta;          /*Pointer to the assigned text area*/
