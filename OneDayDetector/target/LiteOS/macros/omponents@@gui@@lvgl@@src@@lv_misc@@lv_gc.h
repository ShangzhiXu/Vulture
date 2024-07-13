#define LV_DEFINE_ROOT(root_type, root_name) root_type root_name;
#define LV_ITERATE_ROOTS(f) \
    f(lv_ll_t, _lv_task_ll)  /*Linked list to store the lv_tasks*/ \
    f(lv_ll_t, _lv_disp_ll)  /*Linked list of screens*/            \
    f(lv_ll_t, _lv_indev_ll) /*Linked list of screens*/            \
    f(lv_ll_t, _lv_drv_ll)                                         \
    f(lv_ll_t, _lv_file_ll)                                        \
    f(lv_ll_t, _lv_anim_ll)                                        \
    f(lv_ll_t, _lv_group_ll)                                       \
    f(lv_ll_t, _lv_img_defoder_ll)                                 \
    f(lv_ll_t, _lv_obj_style_trans_ll)                             \
    f(lv_img_cache_entry_t*, _lv_img_cache_array)                  \
    f(lv_task_t*, _lv_task_act)                                         \
    f(lv_mem_buf_arr_t , _lv_mem_buf)                              \

