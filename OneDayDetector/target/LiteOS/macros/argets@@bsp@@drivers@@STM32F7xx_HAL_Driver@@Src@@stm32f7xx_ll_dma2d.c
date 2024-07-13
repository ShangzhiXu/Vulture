#define IS_LL_DMA2D_ALPHA(ALPHA)        ((ALPHA) <= LL_DMA2D_COLOR)
#define IS_LL_DMA2D_ALPHAINV(ALPHA)     (((ALPHA) == LL_DMA2D_ALPHA_REGULAR) || \
                                         ((ALPHA) == LL_DMA2D_ALPHA_INVERTED))
#define IS_LL_DMA2D_ALPHAMODE(MODE)     (((MODE) == LL_DMA2D_ALPHA_MODE_NO_MODIF) || \
                                         ((MODE) == LL_DMA2D_ALPHA_MODE_REPLACE)  || \
                                         ((MODE) == LL_DMA2D_ALPHA_MODE_COMBINE))
#define IS_LL_DMA2D_BLUE(BLUE)          ((BLUE)  <= LL_DMA2D_COLOR)
#define IS_LL_DMA2D_CLUTCMODE(CLUTCMODE) (((CLUTCMODE) == LL_DMA2D_CLUT_COLOR_MODE_ARGB8888) || \
                                          ((CLUTCMODE) == LL_DMA2D_CLUT_COLOR_MODE_RGB888))
#define IS_LL_DMA2D_CLUTSIZE(SIZE)      ((SIZE) <= LL_DMA2D_CLUTSIZE_MAX)
#define IS_LL_DMA2D_GREEN(GREEN)        ((GREEN) <= LL_DMA2D_COLOR)
#define IS_LL_DMA2D_LCMODE(MODE_ARGB)   (((MODE_ARGB) == LL_DMA2D_INPUT_MODE_ARGB8888) || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_RGB888)   || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_RGB565)   || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_ARGB1555) || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_ARGB4444) || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_L8)       || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_AL44)     || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_AL88)     || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_L4)       || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_A8)       || \
                                         ((MODE_ARGB) == LL_DMA2D_INPUT_MODE_A4))
#define IS_LL_DMA2D_LINE(LINES)         ((LINES)  <= LL_DMA2D_NUMBEROFLINES)
#define IS_LL_DMA2D_MODE(MODE)          (((MODE) == LL_DMA2D_MODE_M2M)       || \
                                         ((MODE) == LL_DMA2D_MODE_M2M_PFC)   || \
                                         ((MODE) == LL_DMA2D_MODE_M2M_BLEND) || \
                                         ((MODE) == LL_DMA2D_MODE_R2M))
#define IS_LL_DMA2D_OCMODE(MODE_ARGB)   (((MODE_ARGB) == LL_DMA2D_OUTPUT_MODE_ARGB8888) || \
                                         ((MODE_ARGB) == LL_DMA2D_OUTPUT_MODE_RGB888)   || \
                                         ((MODE_ARGB) == LL_DMA2D_OUTPUT_MODE_RGB565)   || \
                                         ((MODE_ARGB) == LL_DMA2D_OUTPUT_MODE_ARGB1555) || \
                                         ((MODE_ARGB) == LL_DMA2D_OUTPUT_MODE_ARGB4444))
#define IS_LL_DMA2D_OFFSET(OFFSET)      ((OFFSET) <= LL_DMA2D_OFFSET_MAX)
#define IS_LL_DMA2D_PIXEL(PIXELS)       ((PIXELS) <= LL_DMA2D_NUMBEROFPIXELS)
#define IS_LL_DMA2D_RBSWAP(RBSWAP)      (((RBSWAP) == LL_DMA2D_RB_MODE_REGULAR) || \
                                         ((RBSWAP) == LL_DMA2D_RB_MODE_SWAP))
#define IS_LL_DMA2D_RED(RED)            ((RED)   <= LL_DMA2D_COLOR)
#define assert_param(expr) ((void)0U)
