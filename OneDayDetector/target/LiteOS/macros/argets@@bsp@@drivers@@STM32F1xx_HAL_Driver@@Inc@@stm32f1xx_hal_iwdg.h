#define IS_IWDG_PRESCALER(__PRESCALER__) (((__PRESCALER__) == IWDG_PRESCALER_4)  || \
                                          ((__PRESCALER__) == IWDG_PRESCALER_8)  || \
                                          ((__PRESCALER__) == IWDG_PRESCALER_16) || \
                                          ((__PRESCALER__) == IWDG_PRESCALER_32) || \
                                          ((__PRESCALER__) == IWDG_PRESCALER_64) || \
                                          ((__PRESCALER__) == IWDG_PRESCALER_128)|| \
                                          ((__PRESCALER__) == IWDG_PRESCALER_256))
#define IS_IWDG_RELOAD(__RELOAD__) ((__RELOAD__) <= 0xFFF)
#define IWDG_DISABLE_WRITE_ACCESS(__HANDLE__) WRITE_REG((__HANDLE__)->Instance->KR, IWDG_KEY_WRITE_ACCESS_DISABLE)
#define IWDG_ENABLE_WRITE_ACCESS(__HANDLE__) WRITE_REG((__HANDLE__)->Instance->KR, IWDG_KEY_WRITE_ACCESS_ENABLE)
#define __HAL_IWDG_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_IWDG_RELOAD_COUNTER(__HANDLE__) WRITE_REG((__HANDLE__)->Instance->KR, IWDG_KEY_RELOAD)
#define __HAL_IWDG_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_IWDG_STATE_RESET)
#define __HAL_IWDG_START(__HANDLE__) WRITE_REG((__HANDLE__)->Instance->KR, IWDG_KEY_ENABLE)
