#define IS_TSC_ACQ_MODE(__VALUE__)      (((__VALUE__) == TSC_ACQ_MODE_NORMAL) || ((__VALUE__) == TSC_ACQ_MODE_SYNCHRO))
#define IS_TSC_CTPH(__VALUE__)          (((__VALUE__) == TSC_CTPH_1CYCLE)   || \
                                         ((__VALUE__) == TSC_CTPH_2CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPH_3CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPH_4CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPH_5CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPH_6CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPH_7CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPH_8CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPH_9CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPH_10CYCLES) || \
                                         ((__VALUE__) == TSC_CTPH_11CYCLES) || \
                                         ((__VALUE__) == TSC_CTPH_12CYCLES) || \
                                         ((__VALUE__) == TSC_CTPH_13CYCLES) || \
                                         ((__VALUE__) == TSC_CTPH_14CYCLES) || \
                                         ((__VALUE__) == TSC_CTPH_15CYCLES) || \
                                         ((__VALUE__) == TSC_CTPH_16CYCLES))
#define IS_TSC_CTPL(__VALUE__)          (((__VALUE__) == TSC_CTPL_1CYCLE)   || \
                                         ((__VALUE__) == TSC_CTPL_2CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPL_3CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPL_4CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPL_5CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPL_6CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPL_7CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPL_8CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPL_9CYCLES)  || \
                                         ((__VALUE__) == TSC_CTPL_10CYCLES) || \
                                         ((__VALUE__) == TSC_CTPL_11CYCLES) || \
                                         ((__VALUE__) == TSC_CTPL_12CYCLES) || \
                                         ((__VALUE__) == TSC_CTPL_13CYCLES) || \
                                         ((__VALUE__) == TSC_CTPL_14CYCLES) || \
                                         ((__VALUE__) == TSC_CTPL_15CYCLES) || \
                                         ((__VALUE__) == TSC_CTPL_16CYCLES))
#define IS_TSC_GROUP(__VALUE__)         (((__VALUE__) == 0UL)                               ||\
                                         (((__VALUE__) & TSC_GROUP1_IO1) == TSC_GROUP1_IO1) ||\
                                         (((__VALUE__) & TSC_GROUP1_IO2) == TSC_GROUP1_IO2) ||\
                                         (((__VALUE__) & TSC_GROUP1_IO3) == TSC_GROUP1_IO3) ||\
                                         (((__VALUE__) & TSC_GROUP1_IO4) == TSC_GROUP1_IO4) ||\
                                         (((__VALUE__) & TSC_GROUP2_IO1) == TSC_GROUP2_IO1) ||\
                                         (((__VALUE__) & TSC_GROUP2_IO2) == TSC_GROUP2_IO2) ||\
                                         (((__VALUE__) & TSC_GROUP2_IO3) == TSC_GROUP2_IO3) ||\
                                         (((__VALUE__) & TSC_GROUP2_IO4) == TSC_GROUP2_IO4) ||\
                                         (((__VALUE__) & TSC_GROUP3_IO1) == TSC_GROUP3_IO1) ||\
                                         (((__VALUE__) & TSC_GROUP3_IO2) == TSC_GROUP3_IO2) ||\
                                         (((__VALUE__) & TSC_GROUP3_IO3) == TSC_GROUP3_IO3) ||\
                                         (((__VALUE__) & TSC_GROUP3_IO4) == TSC_GROUP3_IO4) ||\
                                         (((__VALUE__) & TSC_GROUP4_IO1) == TSC_GROUP4_IO1) ||\
                                         (((__VALUE__) & TSC_GROUP4_IO2) == TSC_GROUP4_IO2) ||\
                                         (((__VALUE__) & TSC_GROUP4_IO3) == TSC_GROUP4_IO3) ||\
                                         (((__VALUE__) & TSC_GROUP4_IO4) == TSC_GROUP4_IO4) ||\
                                         (((__VALUE__) & TSC_GROUP5_IO1) == TSC_GROUP5_IO1) ||\
                                         (((__VALUE__) & TSC_GROUP5_IO2) == TSC_GROUP5_IO2) ||\
                                         (((__VALUE__) & TSC_GROUP5_IO3) == TSC_GROUP5_IO3) ||\
                                         (((__VALUE__) & TSC_GROUP5_IO4) == TSC_GROUP5_IO4) ||\
                                         (((__VALUE__) & TSC_GROUP6_IO1) == TSC_GROUP6_IO1) ||\
                                         (((__VALUE__) & TSC_GROUP6_IO2) == TSC_GROUP6_IO2) ||\
                                         (((__VALUE__) & TSC_GROUP6_IO3) == TSC_GROUP6_IO3) ||\
                                         (((__VALUE__) & TSC_GROUP6_IO4) == TSC_GROUP6_IO4) ||\
                                         (((__VALUE__) & TSC_GROUP7_IO1) == TSC_GROUP7_IO1) ||\
                                         (((__VALUE__) & TSC_GROUP7_IO2) == TSC_GROUP7_IO2) ||\
                                         (((__VALUE__) & TSC_GROUP7_IO3) == TSC_GROUP7_IO3) ||\
                                         (((__VALUE__) & TSC_GROUP7_IO4) == TSC_GROUP7_IO4) ||\
                                         (((__VALUE__) & TSC_GROUP8_IO1) == TSC_GROUP8_IO1) ||\
                                         (((__VALUE__) & TSC_GROUP8_IO2) == TSC_GROUP8_IO2) ||\
                                         (((__VALUE__) & TSC_GROUP8_IO3) == TSC_GROUP8_IO3) ||\
                                         (((__VALUE__) & TSC_GROUP8_IO4) == TSC_GROUP8_IO4))
#define IS_TSC_GROUP_INDEX(__VALUE__)   (((__VALUE__) == 0UL) || (((__VALUE__) > 0UL) && ((__VALUE__) < (uint32_t)TSC_NB_OF_GROUPS)))
#define IS_TSC_IODEF(__VALUE__)         (((__VALUE__) == TSC_IODEF_OUT_PP_LOW) || ((__VALUE__) == TSC_IODEF_IN_FLOAT))
#define IS_TSC_MCE_IT(__VALUE__)        (((FunctionalState)(__VALUE__) == DISABLE) || ((FunctionalState)(__VALUE__) == ENABLE))
#define IS_TSC_MCV(__VALUE__)           (((__VALUE__) == TSC_MCV_255)  || \
                                         ((__VALUE__) == TSC_MCV_511)  || \
                                         ((__VALUE__) == TSC_MCV_1023) || \
                                         ((__VALUE__) == TSC_MCV_2047) || \
                                         ((__VALUE__) == TSC_MCV_4095) || \
                                         ((__VALUE__) == TSC_MCV_8191) || \
                                          ((__VALUE__) == TSC_MCV_16383))
#define IS_TSC_PG_PRESC(__VALUE__)      (((__VALUE__) == TSC_PG_PRESC_DIV1)  || \
                                         ((__VALUE__) == TSC_PG_PRESC_DIV2)  || \
                                         ((__VALUE__) == TSC_PG_PRESC_DIV4)  || \
                                         ((__VALUE__) == TSC_PG_PRESC_DIV8)  || \
                                         ((__VALUE__) == TSC_PG_PRESC_DIV16) || \
                                         ((__VALUE__) == TSC_PG_PRESC_DIV32) || \
                                         ((__VALUE__) == TSC_PG_PRESC_DIV64) || \
                                         ((__VALUE__) == TSC_PG_PRESC_DIV128))
#define IS_TSC_SS(__VALUE__)            (((FunctionalState)(__VALUE__) == DISABLE) || ((FunctionalState)(__VALUE__) == ENABLE))
#define IS_TSC_SSD(__VALUE__)           (((__VALUE__) == 0UL) || (((__VALUE__) > 0UL) && ((__VALUE__) < 128UL)))
#define IS_TSC_SS_PRESC(__VALUE__)      (((__VALUE__) == TSC_SS_PRESC_DIV1) || ((__VALUE__) == TSC_SS_PRESC_DIV2))
#define IS_TSC_SYNC_POL(__VALUE__)      (((__VALUE__) == TSC_SYNC_POLARITY_FALLING) || ((__VALUE__) == TSC_SYNC_POLARITY_RISING))
#define __HAL_TSC_CLEAR_FLAG(__HANDLE__, __FLAG__)                 ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_TSC_CLOSE_ANALOG_SWITCH(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOASCR |= (__GX_IOY_MASK__))
#define __HAL_TSC_DISABLE(__HANDLE__)                              ((__HANDLE__)->Instance->CR &= (~TSC_CR_TSCE))
#define __HAL_TSC_DISABLE_CHANNEL(__HANDLE__, __GX_IOY_MASK__)     ((__HANDLE__)->Instance->IOCCR &= (~(__GX_IOY_MASK__)))
#define __HAL_TSC_DISABLE_GROUP(__HANDLE__, __GX_MASK__) ((__HANDLE__)->Instance->IOGCSR &= (~(__GX_MASK__)))
#define __HAL_TSC_DISABLE_HYSTERESIS(__HANDLE__, __GX_IOY_MASK__)  ((__HANDLE__)->Instance->IOHCR &= (~(__GX_IOY_MASK__)))
#define __HAL_TSC_DISABLE_IT(__HANDLE__, __INTERRUPT__)            ((__HANDLE__)->Instance->IER &= (~(__INTERRUPT__)))
#define __HAL_TSC_DISABLE_SAMPLING(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOSCR &= (~(__GX_IOY_MASK__)))
#define __HAL_TSC_ENABLE(__HANDLE__)                               ((__HANDLE__)->Instance->CR |= TSC_CR_TSCE)
#define __HAL_TSC_ENABLE_CHANNEL(__HANDLE__, __GX_IOY_MASK__)      ((__HANDLE__)->Instance->IOCCR |= (__GX_IOY_MASK__))
#define __HAL_TSC_ENABLE_GROUP(__HANDLE__, __GX_MASK__) ((__HANDLE__)->Instance->IOGCSR |= (__GX_MASK__))
#define __HAL_TSC_ENABLE_HYSTERESIS(__HANDLE__, __GX_IOY_MASK__)   ((__HANDLE__)->Instance->IOHCR |= (__GX_IOY_MASK__))
#define __HAL_TSC_ENABLE_IT(__HANDLE__, __INTERRUPT__)             ((__HANDLE__)->Instance->IER |= (__INTERRUPT__))
#define __HAL_TSC_ENABLE_SAMPLING(__HANDLE__, __GX_IOY_MASK__)     ((__HANDLE__)->Instance->IOSCR |= (__GX_IOY_MASK__))
#define __HAL_TSC_GET_FLAG(__HANDLE__, __FLAG__)                   ((((__HANDLE__)->Instance->ISR & (__FLAG__)) == (__FLAG__)) ? SET : RESET)
#define __HAL_TSC_GET_GROUP_STATUS(__HANDLE__, __GX_INDEX__) \
((((__HANDLE__)->Instance->IOGCSR & (uint32_t)(1UL << (((__GX_INDEX__) & 0xFUL) + 16UL))) == (uint32_t)(1UL << (((__GX_INDEX__) & 0xFUL) + 16UL))) ? TSC_GROUP_COMPLETED : TSC_GROUP_ONGOING)
#define __HAL_TSC_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)         ((((__HANDLE__)->Instance->IER & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_TSC_OPEN_ANALOG_SWITCH(__HANDLE__, __GX_IOY_MASK__)  ((__HANDLE__)->Instance->IOASCR &= (~(__GX_IOY_MASK__)))
#define __HAL_TSC_RESET_HANDLE_STATE(__HANDLE__)                   do{                                                   \
                                                                       (__HANDLE__)->State = HAL_TSC_STATE_RESET;       \
                                                                       (__HANDLE__)->MspInitCallback = NULL;            \
                                                                       (__HANDLE__)->MspDeInitCallback = NULL;          \
                                                                     } while(0)
#define __HAL_TSC_RESET_HANDLE_STATE(__HANDLE__)                   ((__HANDLE__)->State = HAL_TSC_STATE_RESET)
#define __HAL_TSC_SET_IODEF_INFLOAT(__HANDLE__)                    ((__HANDLE__)->Instance->CR |= TSC_CR_IODEF)
#define __HAL_TSC_SET_IODEF_OUTPPLOW(__HANDLE__)                   ((__HANDLE__)->Instance->CR &= (~TSC_CR_IODEF))
#define __HAL_TSC_SET_SYNC_POL_FALL(__HANDLE__)                    ((__HANDLE__)->Instance->CR &= (~TSC_CR_SYNCPOL))
#define __HAL_TSC_SET_SYNC_POL_RISE_HIGH(__HANDLE__)               ((__HANDLE__)->Instance->CR |= TSC_CR_SYNCPOL)
#define __HAL_TSC_START_ACQ(__HANDLE__)                            ((__HANDLE__)->Instance->CR |= TSC_CR_START)
#define __HAL_TSC_STOP_ACQ(__HANDLE__)                             ((__HANDLE__)->Instance->CR &= (~TSC_CR_START))
