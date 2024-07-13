    uint16_t anim_time;
    lv_obj_t * btns;
    lv_tabview_btns_pos_t btns_pos : 3;
    lv_obj_t * content; /*A background page which holds tab's pages*/
    lv_obj_t * indic;
    lv_point_t point_last;
    uint16_t tab_cnt;
    uint16_t tab_cur;
    const char ** tab_name_ptr;
