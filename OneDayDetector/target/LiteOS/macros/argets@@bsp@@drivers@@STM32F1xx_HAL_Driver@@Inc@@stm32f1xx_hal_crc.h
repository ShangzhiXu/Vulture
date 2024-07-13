#define __HAL_CRC_DR_RESET(__HANDLE__)            (SET_BIT((__HANDLE__)->Instance->CR,CRC_CR_RESET))
#define __HAL_CRC_GET_IDR(__HANDLE__) (((__HANDLE__)->Instance->IDR) & CRC_IDR_IDR)
#define __HAL_CRC_RESET_HANDLE_STATE(__HANDLE__)  ((__HANDLE__)->State = HAL_CRC_STATE_RESET)
#define __HAL_CRC_SET_IDR(__HANDLE__, __VALUE__) (WRITE_REG((__HANDLE__)->Instance->IDR, (__VALUE__)))
