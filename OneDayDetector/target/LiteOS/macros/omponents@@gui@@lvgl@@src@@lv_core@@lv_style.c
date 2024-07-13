#define LV_STYLE_PROP_GET_TYPE(prop) ((prop >> 8) & 0xFF);
#define LV_STYLE_PROP_TO_ID(prop) (prop & 0xFF);
#define STYLE_ATTR_MIX(attr, r)                                                                                        \
    if(start->attr != end->attr) {                                                                                     \
        res->attr = VAL_PROP(start->attr, end->attr, r);                                                               \
    } else {                                                                                                           \
        res->attr = start->attr;                                                                                       \
    }
#define VAL_PROP(v1, v2, r) v1 + (((v2 - v1) * r) >> STYLE_MIX_SHIFT)
