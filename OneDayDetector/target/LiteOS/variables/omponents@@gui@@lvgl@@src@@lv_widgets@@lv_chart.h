    lv_color_t color;
    uint8_t hdiv_cnt;     /*Number of horizontal division lines*/
    const char * list_of_values;
    uint8_t major_tick_len;
    uint8_t minor_tick_len;
    uint8_t num_tick_marks;
    lv_chart_axis_options_t options;
    uint16_t point_cnt;   /*Point number in a data line*/
    lv_coord_t * points;
    lv_chart_axis_cfg_t secondary_y_axis;
    lv_ll_t series_ll;    /*Linked list for the data line pointers (stores lv_chart_dl_t)*/
    uint16_t start_point;
    lv_style_list_t style_series;
    lv_style_list_t style_series_bg;
    lv_chart_type_t type; /*Line, column or point chart (from 'lv_chart_type_t')*/
    uint8_t update_mode : 1;
    uint8_t vdiv_cnt;     /*Number of vertical division lines*/
    lv_chart_axis_cfg_t x_axis;
    lv_chart_axis_cfg_t y_axis;
    lv_coord_t ymax;      /*y max value (used to scale the data)*/
    lv_coord_t ymin;      /*y min value (used to scale the data)*/
