#  define LV_ASSERT_MEM(p) LV_DEBUG_ASSERT(LV_DEBUG_IS_NULL(p), "Out of memory", p);
# define LV_ASSERT_MEM(p) true
#  define LV_ASSERT_MEM_INTEGRITY() LV_DEBUG_ASSERT(LV_DEBUG_CHECK_MEM_INTEGRITY(), "Memory integrity error", 0);
# define LV_ASSERT_MEM_INTEGRITY() true
#  define LV_ASSERT_NULL(p) LV_DEBUG_ASSERT(LV_DEBUG_IS_NULL(p), "NULL pointer", p);
# define LV_ASSERT_NULL(p) true
#   define LV_ASSERT_OBJ(obj_p, obj_type) LV_ASSERT_NULL(obj_p)
#   define LV_ASSERT_OBJ(obj_p, obj_type) true
#  define LV_ASSERT_OBJ(obj_p, obj_type) LV_DEBUG_ASSERT(LV_DEBUG_IS_OBJ(obj_p, obj_type), "Invalid object", obj_p);
#   define LV_ASSERT_STR(str) LV_ASSERT_NULL(str)
#   define LV_ASSERT_STR(str) true
#  define LV_ASSERT_STR(str) LV_DEBUG_ASSERT(LV_DEBUG_IS_STR(str), "Strange or invalid string", str);
#  define LV_ASSERT_STYLE(style_p) LV_DEBUG_ASSERT(LV_DEBUG_IS_STYLE(style_p), "Invalid style", style_p);
#  define LV_ASSERT_STYLE(style_p) true
#  define LV_ASSERT_STYLE_LIST(list_p) LV_DEBUG_ASSERT(LV_DEBUG_IS_STYLE_LIST(list_p), "Invalid style list", list_p);
#  define LV_ASSERT_STYLE_LIST(list_p) true
#define LV_DEBUG_ASSERT(expr, msg, value)       \
    do {                                            \
        if(!(expr)) {                               \
            LV_LOG_ERROR(__func__);                 \
            lv_debug_log_error(msg, (uint64_t)((uintptr_t)value));         \
            while(1);                               \
        }                                           \
    } while(0)
#define LV_DEBUG_CHECK_MEM_INTEGRITY()    (lv_debug_check_mem_integrity())
#define LV_DEBUG_IS_NULL(p)    (lv_debug_check_null(p))
#define LV_DEBUG_IS_OBJ(obj_p, obj_type) (lv_debug_check_null(obj_p) &&      \
                                          lv_debug_check_obj_valid(obj_p) && \
                                          lv_debug_check_obj_type(obj_p, obj_type))
#define LV_DEBUG_IS_STR(str)   (lv_debug_check_null(str) &&      \
                                lv_debug_check_str(str))
#define LV_DEBUG_IS_STYLE(style_p) (lv_debug_check_style(style_p))
#define LV_DEBUG_IS_STYLE_LIST(list_p) (lv_debug_check_style_list(list_p))
