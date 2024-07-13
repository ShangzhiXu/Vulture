    const char * accapted_chars; /*Only these characters will be accepted. NULL: accept all*/
        lv_area_t area;            /* Cursor area relative to the Text Area*/
        uint16_t blink_time;       /*Blink period*/
        uint8_t click_pos : 1;     /*1: Enable positioning the cursor by clicking the text area*/
    } cursor;
        uint8_t hidden : 1;        /*Cursor is hidden by he user */
    lv_obj_t * label;            /*Label of the text area*/
    uint16_t max_length;         /*The max. number of characters. 0: no limit*/
    uint8_t one_line : 1; /*One line mode (ignore line breaks)*/
    lv_page_ext_t page; /*Ext. of ancestor*/
    char * placeholder_txt;      /*Place holder label. only visible if text is an empty string*/
        uint16_t pos;              /* The current cursor position
    uint8_t pwd_mode : 1; /*Replace characters with '*' */
    uint16_t pwd_show_time;      /*Time to show characters in password mode before change them to '*' */
    char * pwd_tmp;              /*Used to store the original text in password mode*/
    uint16_t sel_end;
    uint16_t sel_start;  /*Temporary values for text selection*/
        uint8_t state : 1;         /*Cursor is visible now or not (Handled by the library)*/
        lv_style_list_t style;  /* Style of the cursor (NULL to use label's style)*/
    lv_style_list_t style_placeholder;
    uint8_t text_sel_en : 1;      /*Text can be selected on this text area*/
    uint8_t text_sel_in_prog : 1; /*User is in process of selecting */
        uint16_t txt_byte_pos;     /* Byte index of the letter after (on) the cursor*/
        lv_coord_t valid_x;        /* Used when stepping up/down to a shorter line.
