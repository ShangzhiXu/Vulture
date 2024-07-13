#define IS_WWDG_COUNTER(__COUNTER__)        (((__COUNTER__) >= WWDG_CR_T_6) && ((__COUNTER__) <= WWDG_CR_T))
#define IS_WWDG_EWI_MODE(__MODE__)          (((__MODE__) == WWDG_EWI_ENABLE) || \
                                             ((__MODE__) == WWDG_EWI_DISABLE))
#define IS_WWDG_PRESCALER(__PRESCALER__)    (((__PRESCALER__) == WWDG_PRESCALER_1) || \
                                             ((__PRESCALER__) == WWDG_PRESCALER_2) || \
                                             ((__PRESCALER__) == WWDG_PRESCALER_4) || \
                                             ((__PRESCALER__) == WWDG_PRESCALER_8))
#define IS_WWDG_WINDOW(__WINDOW__)          (((__WINDOW__) >= WWDG_CFR_W_6) && ((__WINDOW__) <= WWDG_CFR_W))
#define __HAL_WWDG_CLEAR_FLAG(__HANDLE__, __FLAG__)         ((__HANDLE__)->Instance->SR = ~(__FLAG__))
#define __HAL_WWDG_CLEAR_IT(__HANDLE__, __INTERRUPT__)      __HAL_WWDG_CLEAR_FLAG((__HANDLE__), (__INTERRUPT__))
#define __HAL_WWDG_ENABLE(__HANDLE__)                         SET_BIT((__HANDLE__)->Instance->CR, WWDG_CR_WDGA)
#define __HAL_WWDG_ENABLE_IT(__HANDLE__, __INTERRUPT__)       SET_BIT((__HANDLE__)->Instance->CFR, (__INTERRUPT__))
#define __HAL_WWDG_GET_FLAG(__HANDLE__, __FLAG__)           (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_WWDG_GET_IT(__HANDLE__, __INTERRUPT__)        __HAL_WWDG_GET_FLAG((__HANDLE__),(__INTERRUPT__))
#define __HAL_WWDG_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->CFR & (__INTERRUPT__)) == (__INTERRUPT__))
