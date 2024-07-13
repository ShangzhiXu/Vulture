    int8_t btn_pressing;                    /*-1: prev month pressing, +1 next month pressing on the header*/
    int8_t day;
    const char ** day_names;   /*Pointer to an array with the name of the days (NULL: use default names)*/
    lv_calendar_date_t * highlighted_dates; /*Apply different style on these days (pointer to an
    uint16_t highlighted_dates_num;          /*Number of elements in `highlighted_days`*/
    int8_t month;
    const char ** month_names; /*Pointer to an array with the name of the month (NULL. use default names)*/
    lv_calendar_date_t pressed_date;
    lv_calendar_date_t showed_date;         /*Currently visible month (day is ignored)*/
    lv_style_list_t style_date_nums;
    lv_style_list_t style_day_names;
    lv_style_list_t style_header;
    lv_calendar_date_t today;               /*Date of today*/
    uint16_t year;
