#define __HAL_SD_CLEAR_FLAG(__HANDLE__, __FLAG__) __SDIO_CLEAR_FLAG((__HANDLE__)->Instance, (__FLAG__))
#define __HAL_SD_CLEAR_IT(__HANDLE__, __INTERRUPT__) __SDIO_CLEAR_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_SD_DISABLE(__HANDLE__) __SDIO_DISABLE((__HANDLE__)->Instance)
#define __HAL_SD_DISABLE_IT(__HANDLE__, __INTERRUPT__) __SDIO_DISABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_SD_DMA_DISABLE(__HANDLE__)  __SDIO_DMA_DISABLE((__HANDLE__)->Instance)
#define __HAL_SD_DMA_ENABLE(__HANDLE__) __SDIO_DMA_ENABLE((__HANDLE__)->Instance)
#define __HAL_SD_ENABLE(__HANDLE__) __SDIO_ENABLE((__HANDLE__)->Instance)
#define __HAL_SD_ENABLE_IT(__HANDLE__, __INTERRUPT__) __SDIO_ENABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_SD_GET_FLAG(__HANDLE__, __FLAG__) __SDIO_GET_FLAG((__HANDLE__)->Instance, (__FLAG__))
#define __HAL_SD_GET_IT(__HANDLE__, __INTERRUPT__) __SDIO_GET_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_SD_RESET_HANDLE_STATE(__HANDLE__)           do {                                              \
                                                               (__HANDLE__)->State = HAL_SD_STATE_RESET; \
                                                               (__HANDLE__)->MspInitCallback = NULL;       \
                                                               (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                             } while(0)
#define __HAL_SD_RESET_HANDLE_STATE(__HANDLE__)           ((__HANDLE__)->State = HAL_SD_STATE_RESET)
