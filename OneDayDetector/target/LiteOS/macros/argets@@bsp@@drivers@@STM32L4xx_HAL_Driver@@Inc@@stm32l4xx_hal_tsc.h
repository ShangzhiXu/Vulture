#define IS_TSC_ACQ_MODE(VAL) (((VAL) == TSC_ACQ_MODE_NORMAL) || ((VAL) == TSC_ACQ_MODE_SYNCHRO))
#define IS_TSC_CTPH(VAL) (((VAL) == TSC_CTPH_1CYCLE) || \
                          ((VAL) == TSC_CTPH_2CYCLES) || \
                          ((VAL) == TSC_CTPH_3CYCLES) || \
                          ((VAL) == TSC_CTPH_4CYCLES) || \
                          ((VAL) == TSC_CTPH_5CYCLES) || \
                          ((VAL) == TSC_CTPH_6CYCLES) || \
                          ((VAL) == TSC_CTPH_7CYCLES) || \
                          ((VAL) == TSC_CTPH_8CYCLES) || \
                          ((VAL) == TSC_CTPH_9CYCLES) || \
                          ((VAL) == TSC_CTPH_10CYCLES) || \
                          ((VAL) == TSC_CTPH_11CYCLES) || \
                          ((VAL) == TSC_CTPH_12CYCLES) || \
                          ((VAL) == TSC_CTPH_13CYCLES) || \
                          ((VAL) == TSC_CTPH_14CYCLES) || \
                          ((VAL) == TSC_CTPH_15CYCLES) || \
                          ((VAL) == TSC_CTPH_16CYCLES))
#define IS_TSC_CTPL(VAL) (((VAL) == TSC_CTPL_1CYCLE) || \
                          ((VAL) == TSC_CTPL_2CYCLES) || \
                          ((VAL) == TSC_CTPL_3CYCLES) || \
                          ((VAL) == TSC_CTPL_4CYCLES) || \
                          ((VAL) == TSC_CTPL_5CYCLES) || \
                          ((VAL) == TSC_CTPL_6CYCLES) || \
                          ((VAL) == TSC_CTPL_7CYCLES) || \
                          ((VAL) == TSC_CTPL_8CYCLES) || \
                          ((VAL) == TSC_CTPL_9CYCLES) || \
                          ((VAL) == TSC_CTPL_10CYCLES) || \
                          ((VAL) == TSC_CTPL_11CYCLES) || \
                          ((VAL) == TSC_CTPL_12CYCLES) || \
                          ((VAL) == TSC_CTPL_13CYCLES) || \
                          ((VAL) == TSC_CTPL_14CYCLES) || \
                          ((VAL) == TSC_CTPL_15CYCLES) || \
                          ((VAL) == TSC_CTPL_16CYCLES))
#define IS_TSC_GROUP_INDEX(VAL) (((VAL) == 0) || (((VAL) > 0) && ((VAL) < TSC_NB_OF_GROUPS)))
#define IS_TSC_IODEF(VAL) (((VAL) == TSC_IODEF_OUT_PP_LOW) || ((VAL) == TSC_IODEF_IN_FLOAT))
#define IS_TSC_IOMODE(VAL) (((VAL) == TSC_IOMODE_UNUSED) || \
                            ((VAL) == TSC_IOMODE_CHANNEL) || \
                            ((VAL) == TSC_IOMODE_SHIELD) || \
                            ((VAL) == TSC_IOMODE_SAMPLING))
#define IS_TSC_MCE_IT(VAL) (((VAL) == DISABLE) || ((VAL) == ENABLE))
#define IS_TSC_MCV(VAL) (((VAL) == TSC_MCV_255) || \
                         ((VAL) == TSC_MCV_511) || \
                         ((VAL) == TSC_MCV_1023) || \
                         ((VAL) == TSC_MCV_2047) || \
                         ((VAL) == TSC_MCV_4095) || \
                         ((VAL) == TSC_MCV_8191) || \
                         ((VAL) == TSC_MCV_16383))
#define IS_TSC_PG_PRESC(VAL) (((VAL) == TSC_PG_PRESC_DIV1) || \
                              ((VAL) == TSC_PG_PRESC_DIV2) || \
                              ((VAL) == TSC_PG_PRESC_DIV4) || \
                              ((VAL) == TSC_PG_PRESC_DIV8) || \
                              ((VAL) == TSC_PG_PRESC_DIV16) || \
                              ((VAL) == TSC_PG_PRESC_DIV32) || \
                              ((VAL) == TSC_PG_PRESC_DIV64) || \
                              ((VAL) == TSC_PG_PRESC_DIV128))
#define IS_TSC_SS(VAL) (((VAL) == DISABLE) || ((VAL) == ENABLE))
#define IS_TSC_SSD(VAL) (((VAL) == 0) || (((VAL) > 0) && ((VAL) < 128)))
#define IS_TSC_SS_PRESC(VAL) (((VAL) == TSC_SS_PRESC_DIV1) || ((VAL) == TSC_SS_PRESC_DIV2))
#define IS_TSC_SYNC_POL(VAL) (((VAL) == TSC_SYNC_POLARITY_FALLING) || ((VAL) == TSC_SYNC_POLARITY_RISING))
#define __HAL_TSC_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_TSC_CLOSE_ANALOG_SWITCH(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOASCR |= (__GX_IOY_MASK__))
#define __HAL_TSC_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR &= (uint32_t)(~TSC_CR_TSCE))
#define __HAL_TSC_DISABLE_CHANNEL(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOCCR &= (uint32_t)(~(__GX_IOY_MASK__)))
#define __HAL_TSC_DISABLE_GROUP(__HANDLE__, __GX_MASK__) ((__HANDLE__)->Instance->IOGCSR &= (uint32_t)(~(__GX_MASK__)))
#define __HAL_TSC_DISABLE_HYSTERESIS(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOHCR &= (uint32_t)(~(__GX_IOY_MASK__)))
#define __HAL_TSC_DISABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->IER &= (uint32_t)(~(__INTERRUPT__)))
#define __HAL_TSC_DISABLE_SAMPLING(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOSCR &= (uint32_t)(~(__GX_IOY_MASK__)))
#define __HAL_TSC_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR |= TSC_CR_TSCE)
#define __HAL_TSC_ENABLE_CHANNEL(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOCCR |= (__GX_IOY_MASK__))
#define __HAL_TSC_ENABLE_GROUP(__HANDLE__, __GX_MASK__) ((__HANDLE__)->Instance->IOGCSR |= (__GX_MASK__))
#define __HAL_TSC_ENABLE_HYSTERESIS(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOHCR |= (__GX_IOY_MASK__))
#define __HAL_TSC_ENABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->IER |= (__INTERRUPT__))
#define __HAL_TSC_ENABLE_SAMPLING(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOSCR |= (__GX_IOY_MASK__))
#define __HAL_TSC_GET_FLAG(__HANDLE__, __FLAG__) ((((__HANDLE__)->Instance->ISR & (__FLAG__)) == (__FLAG__)) ? SET : RESET)
#define __HAL_TSC_GET_GROUP_STATUS(__HANDLE__, __GX_INDEX__) \
((((__HANDLE__)->Instance->IOGCSR & (uint32_t)((uint32_t)1 << ((__GX_INDEX__) + (uint32_t)16))) == (uint32_t)((uint32_t)1 << ((__GX_INDEX__) + (uint32_t)16))) ? TSC_GROUP_COMPLETED : TSC_GROUP_ONGOING)
#define __HAL_TSC_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->IER & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_TSC_OPEN_ANALOG_SWITCH(__HANDLE__, __GX_IOY_MASK__) ((__HANDLE__)->Instance->IOASCR &= (uint32_t)(~(__GX_IOY_MASK__)))
#define __HAL_TSC_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_TSC_STATE_RESET)
#define __HAL_TSC_SET_IODEF_INFLOAT(__HANDLE__) ((__HANDLE__)->Instance->CR |= TSC_CR_IODEF)
#define __HAL_TSC_SET_IODEF_OUTPPLOW(__HANDLE__) ((__HANDLE__)->Instance->CR &= (uint32_t)(~TSC_CR_IODEF))
#define __HAL_TSC_SET_SYNC_POL_FALL(__HANDLE__) ((__HANDLE__)->Instance->CR &= (uint32_t)(~TSC_CR_SYNCPOL))
#define __HAL_TSC_SET_SYNC_POL_RISE_HIGH(__HANDLE__) ((__HANDLE__)->Instance->CR |= TSC_CR_SYNCPOL)
#define __HAL_TSC_START_ACQ(__HANDLE__) ((__HANDLE__)->Instance->CR |= TSC_CR_START)
#define __HAL_TSC_STOP_ACQ(__HANDLE__) ((__HANDLE__)->Instance->CR &= (uint32_t)(~TSC_CR_START))
