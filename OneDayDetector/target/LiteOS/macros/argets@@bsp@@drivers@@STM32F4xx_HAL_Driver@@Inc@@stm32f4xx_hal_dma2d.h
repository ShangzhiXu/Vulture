#define IS_DMA2D_ALPHA_MODE(AlphaMode)        (((AlphaMode) == DMA2D_NO_MODIF_ALPHA) || \
                                               ((AlphaMode) == DMA2D_REPLACE_ALPHA)  || \
                                               ((AlphaMode) == DMA2D_COMBINE_ALPHA))
#define IS_DMA2D_CLUT_CM(CLUT_CM)             (((CLUT_CM) == DMA2D_CCM_ARGB8888) || ((CLUT_CM) == DMA2D_CCM_RGB888))
#define IS_DMA2D_CLUT_SIZE(CLUT_SIZE)         ((CLUT_SIZE) <= DMA2D_CLUT_SIZE)
#define IS_DMA2D_CMODE(MODE_ARGB)             (((MODE_ARGB) == DMA2D_OUTPUT_ARGB8888) || ((MODE_ARGB) == DMA2D_OUTPUT_RGB888)   || \
                                               ((MODE_ARGB) == DMA2D_OUTPUT_RGB565)   || ((MODE_ARGB) == DMA2D_OUTPUT_ARGB1555) || \
                                               ((MODE_ARGB) == DMA2D_OUTPUT_ARGB4444))
#define IS_DMA2D_COLOR(COLOR)                 ((COLOR) <= DMA2D_COLOR_VALUE)
#define IS_DMA2D_GET_FLAG(FLAG)               (((FLAG) == DMA2D_FLAG_CTC) || ((FLAG) == DMA2D_FLAG_CAE) || \
                                               ((FLAG) == DMA2D_FLAG_TW)   || ((FLAG) == DMA2D_FLAG_TC)  || \
                                               ((FLAG) == DMA2D_FLAG_TE)   || ((FLAG) == DMA2D_FLAG_CE))
#define IS_DMA2D_INPUT_COLOR_MODE(INPUT_CM)   (((INPUT_CM) == DMA2D_INPUT_ARGB8888) || ((INPUT_CM) == DMA2D_INPUT_RGB888)   || \
                                               ((INPUT_CM) == DMA2D_INPUT_RGB565)   || ((INPUT_CM) == DMA2D_INPUT_ARGB1555) || \
                                               ((INPUT_CM) == DMA2D_INPUT_ARGB4444) || ((INPUT_CM) == DMA2D_INPUT_L8)       || \
                                               ((INPUT_CM) == DMA2D_INPUT_AL44)     || ((INPUT_CM) == DMA2D_INPUT_AL88)     || \
                                               ((INPUT_CM) == DMA2D_INPUT_L4)       || ((INPUT_CM) == DMA2D_INPUT_A8)       || \
                                               ((INPUT_CM) == DMA2D_INPUT_A4))
#define IS_DMA2D_IT(IT)                       (((IT) == DMA2D_IT_CTC) || ((IT) == DMA2D_IT_CAE) || \
                                               ((IT) == DMA2D_IT_TW) || ((IT) == DMA2D_IT_TC) || \
                                               ((IT) == DMA2D_IT_TE) || ((IT) == DMA2D_IT_CE))
#define IS_DMA2D_LAYER(LAYER)                 (((LAYER) == DMA2D_BACKGROUND_LAYER) || ((LAYER) == DMA2D_FOREGROUND_LAYER))
#define IS_DMA2D_LINE(LINE)                   ((LINE) <= DMA2D_LINE)
#define IS_DMA2D_LINEWATERMARK(LineWatermark) ((LineWatermark) <= DMA2D_LINE_WATERMARK_MAX)
#define IS_DMA2D_MODE(MODE)                   (((MODE) == DMA2D_M2M)       || ((MODE) == DMA2D_M2M_PFC) || \
                                               ((MODE) == DMA2D_M2M_BLEND) || ((MODE) == DMA2D_R2M))
#define IS_DMA2D_OFFSET(OOFFSET)              ((OOFFSET) <= DMA2D_OFFSET)
#define IS_DMA2D_PIXEL(PIXEL)                 ((PIXEL) <= DMA2D_PIXEL)
#define __HAL_DMA2D_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->IFCR = (__FLAG__))
#define __HAL_DMA2D_DISABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))
#define __HAL_DMA2D_ENABLE(__HANDLE__)        ((__HANDLE__)->Instance->CR |= DMA2D_CR_START)
#define __HAL_DMA2D_ENABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))
#define __HAL_DMA2D_GET_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ISR & (__FLAG__))
#define __HAL_DMA2D_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->CR & (__INTERRUPT__))
#define __HAL_DMA2D_RESET_HANDLE_STATE(__HANDLE__) do{                                            \
                                                      (__HANDLE__)->State = HAL_DMA2D_STATE_RESET;\
                                                      (__HANDLE__)->MspInitCallback = NULL;       \
                                                      (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                     }while(0)
#define __HAL_DMA2D_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_DMA2D_STATE_RESET)
