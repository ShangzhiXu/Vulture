#define _LV_LL_READ(list, i) for(i = _lv_ll_get_head(&list); i != NULL; i = _lv_ll_get_next(&list, i))
#define _LV_LL_READ_BACK(list, i) for(i = _lv_ll_get_tail(&list); i != NULL; i = _lv_ll_get_prev(&list, i))
