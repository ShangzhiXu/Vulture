    struct _lv_obj_t * act_scr; /**< Currently active screen on this display */
    uint32_t antialiasing : 1; /**< 1: antialiasing is enabled on this display. */
    lv_area_t area;
    void * buf1; /**< First display buffer. */
    void * buf2; /**< Second display buffer. */
    void * buf_act;
    lv_disp_buf_t * buffer;
    lv_color_t color_chroma_key;
    uint32_t dpi : 10;
    lv_disp_drv_t driver;
    void (*flush_cb)(struct _disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p);
    flushing;      /*1: flushing is in progress. (It can't be a bitfield because when it's cleared from IRQ Read-Modify-Write issue might occur)*/
    flushing_last; /*1: It was the last chunk to flush. (It can't be a bitfield because when it's cleared from IRQ Read-Modify-Write issue might occur)*/
    void (*gpu_blend_cb)(struct _disp_drv_t * disp_drv, lv_color_t * dest, const lv_color_t * src, uint32_t length,
                         lv_opa_t opa);
    void (*gpu_fill_cb)(struct _disp_drv_t * disp_drv, lv_color_t * dest_buf, lv_coord_t dest_width,
                        const lv_area_t * fill_area, lv_color_t color);
    lv_coord_t hor_res; /**< Horizontal resolution. */
    uint8_t inv_area_joined[LV_INV_BUF_SIZE];
    lv_area_t inv_areas[LV_INV_BUF_SIZE];
    uint32_t inv_p : 10;
    uint32_t last_activity_time; /**< Last time there was activity on this display */
    volatile uint32_t last_area         : 1; /*1: the last area is being rendered*/
    volatile uint32_t last_part         : 1; /*1: the last part of the current area is being rendered*/
    void (*monitor_cb)(struct _disp_drv_t * disp_drv, uint32_t time, uint32_t px);
    lv_task_t * refr_task;
    uint32_t rotated : 1; /**< 1: turn the display by 90 degree. @warning Does not update coordinates for you!*/
    void (*rounder_cb)(struct _disp_drv_t * disp_drv, lv_area_t * area);
    lv_ll_t scr_ll;
    uint32_t screen_transp : 1;
    void (*set_px_cb)(struct _disp_drv_t * disp_drv, uint8_t * buf, lv_coord_t buf_w, lv_coord_t x, lv_coord_t y,
                      lv_color_t color, lv_opa_t opa);
    uint32_t size; /*In pixel count*/
    struct _lv_obj_t * sys_layer; /**< @see lv_disp_get_layer_sys */
    struct _lv_obj_t * top_layer; /**< @see lv_disp_get_layer_top */
    lv_disp_drv_user_data_t user_data; /**< Custom display driver user data */
    lv_coord_t ver_res; /**< Vertical resolution. */
    void (*wait_cb)(struct _disp_drv_t * disp_drv);
