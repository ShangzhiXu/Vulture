#define _LV_OBJ_STYLE_SET_GET_DECLARE(prop_name, func_name, value_type, style_type, scalar)                             \
    _OBJ_GET_STYLE_##scalar(prop_name, func_name, value_type, style_type)                                               \
    _OBJ_SET_STYLE_LOCAL_##scalar(prop_name, func_name, value_type, style_type)                                         \
    _OBJ_SET_STYLE_##scalar(prop_name, func_name, value_type, style_type)
#define _OBJ_GET_STYLE_nonscalar(prop_name, func_name, value_type, style_type)                      \
    static inline value_type lv_obj_get_style_##func_name (const lv_obj_t * obj, uint8_t part)      \
    {                                                                                               \
        return _lv_obj_get_style##style_type (obj, part, LV_STYLE_##prop_name);                     \
    }
#define _OBJ_GET_STYLE_scalar(prop_name, func_name, value_type, style_type)                         \
    static inline value_type lv_obj_get_style_##func_name (const lv_obj_t * obj, uint8_t part)      \
    {                                                                                               \
        return (value_type) _lv_obj_get_style##style_type (obj, part, LV_STYLE_##prop_name);        \
    }
#define _OBJ_SET_STYLE_LOCAL_nonscalar(prop_name, func_name, value_type, style_type)                                            \
    static inline void lv_obj_set_style_local_##func_name (lv_obj_t * obj, uint8_t part, lv_state_t state, value_type value)    \
    {                                                                                                                           \
        _lv_obj_set_style_local##style_type (obj, part, LV_STYLE_##prop_name | (state << LV_STYLE_STATE_POS), value);           \
    }
#define _OBJ_SET_STYLE_LOCAL_scalar(prop_name, func_name, value_type, style_type)                                               \
    static inline void lv_obj_set_style_local_##func_name (lv_obj_t * obj, uint8_t part, lv_state_t state, value_type value)    \
    {                                                                                                                           \
        _lv_obj_set_style_local##style_type (obj, part, LV_STYLE_##prop_name | (state << LV_STYLE_STATE_POS), value);           \
    }
#define _OBJ_SET_STYLE_nonscalar(prop_name, func_name, value_type, style_type)                                          \
    static inline void lv_style_set_##func_name (lv_style_t * style, lv_state_t state, value_type value)                 \
    {                                                                                                                    \
        _lv_style_set##style_type (style, LV_STYLE_##prop_name | (state << LV_STYLE_STATE_POS), value);                  \
    }
#define _OBJ_SET_STYLE_scalar(prop_name, func_name, value_type, style_type)                                             \
    static inline void lv_style_set_##func_name (lv_style_t * style, lv_state_t state, value_type value)                 \
    {                                                                                                                    \
        _lv_style_set##style_type (style, LV_STYLE_##prop_name | (state << LV_STYLE_STATE_POS), value);                  \
    }
