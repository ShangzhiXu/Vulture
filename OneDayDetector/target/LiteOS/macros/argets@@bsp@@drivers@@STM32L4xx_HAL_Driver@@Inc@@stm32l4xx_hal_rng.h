#define IS_RNG_CED(__MODE__) (((__MODE__) == RNG_CED_ENABLE) || \
                              ((__MODE__) == RNG_CED_DISABLE))
#define __HAL_RNG_CLEAR_FLAG(__HANDLE__, __FLAG__)                      /* dummy  macro */
#define __HAL_RNG_CLEAR_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->SR) = ~(__INTERRUPT__))
#define __HAL_RNG_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR &= ~RNG_CR_RNGEN)
#define __HAL_RNG_DISABLE_IT(__HANDLE__) ((__HANDLE__)->Instance->CR &= ~RNG_CR_IE)
#define __HAL_RNG_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR |=  RNG_CR_RNGEN)
#define __HAL_RNG_ENABLE_IT(__HANDLE__) ((__HANDLE__)->Instance->CR |=  RNG_CR_IE)
#define __HAL_RNG_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_RNG_GET_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->SR & (__INTERRUPT__)) == (__INTERRUPT__))   
#define __HAL_RNG_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_RNG_STATE_RESET)
