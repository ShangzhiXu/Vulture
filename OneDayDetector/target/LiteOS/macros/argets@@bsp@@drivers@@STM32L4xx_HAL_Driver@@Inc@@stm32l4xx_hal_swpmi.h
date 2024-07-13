#define IS_SWPMI_BITRATE_VALUE(__VALUE__)    (((__VALUE__) <= 63))
#define IS_SWPMI_RX_BUFFERING_MODE(__MODE__) (((__MODE__) == SWPMI_RX_NO_SOFTWAREBUFFER) || \
                                              ((__MODE__) == SWPMI_RX_MULTI_SOFTWAREBUFFER))
#define IS_SWPMI_TX_BUFFERING_MODE(__MODE__) (((__MODE__) == SWPMI_TX_NO_SOFTWAREBUFFER) || \
                                              ((__MODE__) == SWPMI_TX_MULTI_SOFTWAREBUFFER))
#define IS_SWPMI_VOLTAGE_CLASS(__CLASS__)    (((__CLASS__) == SWPMI_VOLTAGE_CLASS_C) || \
                                              ((__CLASS__) == SWPMI_VOLTAGE_CLASS_B))
#define __HAL_SWPMI_CLEAR_FLAG(__HANDLE__, __FLAG__) WRITE_REG((__HANDLE__)->Instance->ICR, (__FLAG__))
#define __HAL_SWPMI_DISABLE(__HANDLE__)  CLEAR_BIT((__HANDLE__)->Instance->CR, SWPMI_CR_SWPACT)
#define __HAL_SWPMI_DISABLE_IT(__HANDLE__, __INTERRUPT__)  CLEAR_BIT((__HANDLE__)->Instance->IER, (__INTERRUPT__))
#define __HAL_SWPMI_ENABLE(__HANDLE__)   SET_BIT((__HANDLE__)->Instance->CR, SWPMI_CR_SWPACT)
#define __HAL_SWPMI_ENABLE_IT(__HANDLE__, __INTERRUPT__)   SET_BIT((__HANDLE__)->Instance->IER, (__INTERRUPT__))
#define __HAL_SWPMI_GET_FLAG(__HANDLE__, __FLAG__) (READ_BIT((__HANDLE__)->Instance->ISR, (__FLAG__)) == (__FLAG__))
#define __HAL_SWPMI_GET_IT(__HANDLE__, __IT__)  (READ_BIT((__HANDLE__)->Instance->ISR,(__IT__)) == (__IT__))
#define __HAL_SWPMI_GET_IT_SOURCE(__HANDLE__, __IT__) ((READ_BIT((__HANDLE__)->Instance->IER, (__IT__)) == (__IT__)) ? SET : RESET)
#define __HAL_SWPMI_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SWPMI_STATE_RESET)
