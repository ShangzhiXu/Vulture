#define LV_STYLE_CREATE(name, copy_p) static lv_style_t name; lv_style_init(&name); lv_style_copy(&name, copy);
#define LV_STYLE_PROP_INIT(name, group, id, attr)  name = (((group << 4) + id) | ((attr) << 8))
