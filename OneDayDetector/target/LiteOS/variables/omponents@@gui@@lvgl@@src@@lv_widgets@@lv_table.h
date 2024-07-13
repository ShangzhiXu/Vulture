        uint8_t align : 2;
    char ** cell_data;
    lv_style_list_t cell_style[LV_TABLE_CELL_STYLE_CNT];
    uint8_t cell_types : 4; /*Keep track which cell types exists to avoid dealing with unused ones*/
    uint16_t col_cnt;
    lv_coord_t col_w[LV_TABLE_COL_MAX];
        uint8_t crop : 1;
    uint8_t format_byte;
        uint8_t right_merge : 1;
    uint16_t row_cnt;
    lv_coord_t * row_h;
    } s;
        uint8_t type : 2;
