#define LV_DPX(n)   LV_MATH_MAX((( lv_disp_get_dpi(NULL) * (n) + 80) / 160), 1) /*+80 for rounding*/
