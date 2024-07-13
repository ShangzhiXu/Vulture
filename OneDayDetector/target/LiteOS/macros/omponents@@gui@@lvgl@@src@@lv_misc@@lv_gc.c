#define LV_CLEAR_ROOT(root_type, root_name) _lv_memset_00(&LV_GC_ROOT(root_name), sizeof(LV_GC_ROOT(root_name)));
