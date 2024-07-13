#define FILL_NORMAL_MASK_PX(out_x,  color)                                                          \
    if(*mask_tmp_x) {          \
        if(*mask_tmp_x == LV_OPA_COVER) disp_buf_first[out_x] = color;                                 \
        else disp_buf_first[out_x] = lv_color_mix(color, disp_buf_first[out_x], *mask_tmp_x);            \
    }                                                                                               \
    mask_tmp_x++;
#define FILL_NORMAL_MASK_PX_SCR_TRANSP(out_x,  color)                                               \
    if(*mask_tmp_x) {          \
        if(*mask_tmp_x == LV_OPA_COVER) disp_buf_first[out_x] = color;                                 \
        else if(disp->driver.screen_transp) lv_color_mix_with_alpha(disp_buf_first[out_x], disp_buf_first[out_x].ch.alpha,              \
                                                                        color, *mask_tmp_x, &disp_buf_first[out_x], &disp_buf_first[out_x].ch.alpha);           \
        else disp_buf_first[out_x] = lv_color_mix(color, disp_buf_first[out_x], *mask_tmp_x);            \
    }                                                                                                      \
    mask_tmp_x++;
#define MAP_NORMAL_MASK_PX(x)                                                          \
    if(*mask_tmp_x) {          \
        if(*mask_tmp_x == LV_OPA_COVER) disp_buf_first[x] = map_buf_first[x];                                 \
        else disp_buf_first[x] = lv_color_mix(map_buf_first[x], disp_buf_first[x], *mask_tmp_x);            \
    }                                                                                               \
    mask_tmp_x++;
#define MAP_NORMAL_MASK_PX_SCR_TRANSP(x)                        \
    if(*mask_tmp_x) {          \
        if(*mask_tmp_x == LV_OPA_COVER) disp_buf_first[x] = map_buf_first[x];                                 \
        else if(disp->driver.screen_transp) lv_color_mix_with_alpha(disp_buf_first[x], disp_buf_first[x].ch.alpha,              \
                                                                        map_buf_first[x], *mask_tmp_x, &disp_buf_first[x], &disp_buf_first[x].ch.alpha);                  \
        else disp_buf_first[x] = lv_color_mix(map_buf_first[x], disp_buf_first[x], *mask_tmp_x);            \
    }                                                                                               \
    mask_tmp_x++;
