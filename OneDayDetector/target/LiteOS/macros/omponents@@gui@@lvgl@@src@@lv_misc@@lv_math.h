#define LV_IS_SIGNED(t) (((t)(-1)) < ((t) 0))
#define LV_MATH_ABS(x) ((x) > 0 ? (x) : (-(x)))
#define LV_MATH_MAX(a, b) ((a) > (b) ? (a) : (b))
#define LV_MATH_MAX3(a, b, c) (LV_MATH_MAX(LV_MATH_MAX(a,b), c))
#define LV_MATH_MAX4(a, b, c, d) (LV_MATH_MAX(LV_MATH_MAX(a,b), LV_MATH_MAX(c,d)))
#define LV_MATH_MIN(a, b) ((a) < (b) ? (a) : (b))
#define LV_MATH_MIN3(a, b, c) (LV_MATH_MIN(LV_MATH_MIN(a,b), c))
#define LV_MATH_MIN4(a, b, c, d) (LV_MATH_MIN(LV_MATH_MIN(a,b), LV_MATH_MIN(c,d)))
#define LV_MATH_UDIV255(x) ((uint32_t)((uint32_t) (x) * 0x8081) >> 0x17)
#define LV_MAX_OF(t) ((unsigned long) (LV_IS_SIGNED(t) ? LV_SMAX_OF(t) : LV_UMAX_OF(t)))
#define LV_SMAX_OF(t) (((0x1ULL << ((sizeof(t) * 8ULL) - 1ULL)) - 1ULL) | (0x7ULL << ((sizeof(t) * 8ULL) - 4ULL)))
#define LV_UMAX_OF(t) (((0x1ULL << ((sizeof(t) * 8ULL) - 1ULL)) - 1ULL) | (0xFULL << ((sizeof(t) * 8ULL) - 4ULL)))
