#define __HAL_PCCARD_RESET_HANDLE_STATE(__HANDLE__)       do {                                               \
                                                               (__HANDLE__)->State = HAL_PCCARD_STATE_RESET; \
                                                               (__HANDLE__)->MspInitCallback = NULL;         \
                                                               (__HANDLE__)->MspDeInitCallback = NULL;       \
                                                             } while(0)
#define __HAL_PCCARD_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_PCCARD_STATE_RESET)
