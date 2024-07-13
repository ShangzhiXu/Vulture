#define IS_WWDG_COUNTER(__COUNTER__) (((__COUNTER__) >= 0x40) && ((__COUNTER__) <= 0x7F))
#define IS_WWDG_PRESCALER(__PRESCALER__) (((__PRESCALER__) == WWDG_PRESCALER_1) || \
                                          ((__PRESCALER__) == WWDG_PRESCALER_2) || \
                                          ((__PRESCALER__) == WWDG_PRESCALER_4) || \
                                          ((__PRESCALER__) == WWDG_PRESCALER_8))
#define IS_WWDG_WINDOW(__WINDOW__) ((__WINDOW__) <= 0x7F)
#define __HAL_WWDG_CLEAR_FLAG(__HANDLE__, __FLAG__)         ((__HANDLE__)->Instance->SR = ~(__FLAG__))
#define __HAL_WWDG_CLEAR_IT(__HANDLE__, __INTERRUPT__)     __HAL_WWDG_CLEAR_FLAG((__HANDLE__), (__INTERRUPT__))
#define __HAL_WWDG_DISABLE(__HANDLE__)                      /* dummy  macro */
#define __HAL_WWDG_DISABLE_IT(__HANDLE__, __INTERRUPT__)                   /* dummy  macro */
#define __HAL_WWDG_ENABLE(__HANDLE__)             SET_BIT((__HANDLE__)->Instance->CR, WWDG_CR_WDGA)
#define __HAL_WWDG_ENABLE_IT(__HANDLE__, __INTERRUPT__)     SET_BIT((__HANDLE__)->Instance->CFR, (__INTERRUPT__))
#define __HAL_WWDG_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_WWDG_GET_IT(__HANDLE__, __INTERRUPT__)       __HAL_WWDG_GET_FLAG((__HANDLE__),(__INTERRUPT__))
#define __HAL_WWDG_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->CFR & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_WWDG_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_WWDG_STATE_RESET)
