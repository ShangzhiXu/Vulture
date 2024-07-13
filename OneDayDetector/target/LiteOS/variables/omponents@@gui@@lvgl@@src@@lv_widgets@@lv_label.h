    uint8_t align : 2;                  /*Align type from 'lv_label_align_t'*/
    uint16_t anim_speed; /*Speed of scroll and roll animation in px/sec unit*/
    } dot;
    uint16_t dot_end;  /*The text end position in dot mode (Handled by the library)*/
    uint8_t dot_tmp_alloc : 1; /*True if dot_tmp has been allocated. False if dot_tmp directly holds up to 4 bytes of
    uint8_t expand : 1;                 /*Ignore real width (used by the library with LV_LABEL_LONG_SROLL)*/
    lv_draw_label_hint_t hint; /*Used to buffer info about large text*/
    lv_label_long_mode_t long_mode : 3; /*Determinate what to do with the long texts*/
    lv_point_t offset; /*Text draw position offset*/
    uint8_t recolor : 1;                /*Enable in-line letter re-coloring*/
    uint16_t sel_end;
    uint16_t sel_start;
    uint8_t static_txt : 1;             /*Flag to indicate the text is static*/
    char * text;        /*Text of the label*/
        char tmp[LV_LABEL_DOT_NUM + 1]; /* Directly store the characters if <=4 characters */
        char * tmp_ptr; /* Pointer to the allocated memory containing the character which are replaced by dots (Handled
