    uint16_t anim_time; /*Scroll animation time*/
    lv_cont_ext_t bg; /*Ext. of ancestor*/
        uint8_t bottom_ip : 1;    /*Used internally to show that bottom most position is reached (flash
    } edge_flash;
        uint8_t enabled : 1;      /*1: Show a flash animation on the edge*/
        lv_area_t hor_area;       /*Horizontal scrollbar area relative to the page. (Handled by the library) */
        uint8_t hor_draw : 1;     /*1: horizontal scrollbar is visible now (Handled by the library)*/
        uint8_t left_ip : 1;      /*Used internally to show that left most position is reached (flash is
        lv_scrollbar_mode_t mode : 3;    /*Scrollbar visibility from 'lv_scrollbar_mode_t'*/
        uint8_t right_ip : 1;     /*Used internally to show that right most position is reached (flash
    lv_obj_t * scrl; /*The scrollable object on the background*/
    } scrlbar;
    uint8_t scroll_prop : 1;   /*The direction of the scroll propagation*/
    lv_obj_t * scroll_prop_obj;          /*Pointer to child page from where the scroll is being propagated */
        lv_anim_value_t state;    /*Store the current size of the edge flash effect*/
        lv_style_list_t style; /*Style of edge flash effect (usually homogeneous circle)*/
        lv_style_list_t style; /*Style of scrollbars*/
        uint8_t top_ip : 1;       /*Used internally to show that top most position is reached (flash is In
        lv_area_t ver_area;       /*Vertical scrollbar area relative to the page (Handled by the library)*/
        uint8_t ver_draw : 1;     /*1: vertical scrollbar is visible now (Handled by the library)*/
