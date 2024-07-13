#define IS_RNG_FLAG(FLAG) (((FLAG) == RNG_FLAG_DRDY) || \
                            ((FLAG) == RNG_FLAG_CECS) || \
                            ((FLAG) == RNG_FLAG_SECS))
#define IS_RNG_IT(IT) (((IT) == RNG_IT_CEI) || \
                       ((IT) == RNG_IT_SEI))
#define __HAL_RNG_CLEAR_FLAG(__HANDLE__, __FLAG__)                      /* dummy  macro */
#define __HAL_RNG_CLEAR_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->SR) = ~(__INTERRUPT__))
#define __HAL_RNG_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR &= ~RNG_CR_RNGEN)
#define __HAL_RNG_DISABLE_IT(__HANDLE__) ((__HANDLE__)->Instance->CR &= ~RNG_CR_IE)
#define __HAL_RNG_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR |=  RNG_CR_RNGEN)
#define __HAL_RNG_ENABLE_IT(__HANDLE__) ((__HANDLE__)->Instance->CR |=  RNG_CR_IE)
#define __HAL_RNG_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_RNG_GET_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->SR & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_RNG_RESET_HANDLE_STATE(__HANDLE__)  do{                                                   \
                                                       (__HANDLE__)->State = HAL_RNG_STATE_RESET;       \
                                                       (__HANDLE__)->MspInitCallback = NULL;            \
                                                       (__HANDLE__)->MspDeInitCallback = NULL;          \
                                                    } while(0U)
#define __HAL_RNG_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_RNG_STATE_RESET)
