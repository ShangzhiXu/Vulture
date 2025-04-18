#define __HAL_SD_SDIO_CLEAR_FLAG(__HANDLE__, __FLAG__) __SDIO_CLEAR_FLAG((__HANDLE__)->Instance, (__FLAG__))
#define __HAL_SD_SDIO_CLEAR_IT(__HANDLE__, __INTERRUPT__) __SDIO_CLEAR_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_SD_SDIO_DISABLE(__HANDLE__) __SDIO_DISABLE((__HANDLE__)->Instance)
#define __HAL_SD_SDIO_DISABLE_IT(__HANDLE__, __INTERRUPT__) __SDIO_DISABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_SD_SDIO_DMA_DISABLE(__HANDLE__)  __SDIO_DMA_DISABLE((__HANDLE__)->Instance)
#define __HAL_SD_SDIO_DMA_ENABLE(__HANDLE__) __SDIO_DMA_ENABLE((__HANDLE__)->Instance)
#define __HAL_SD_SDIO_ENABLE(__HANDLE__) __SDIO_ENABLE((__HANDLE__)->Instance)
#define __HAL_SD_SDIO_ENABLE_IT(__HANDLE__, __INTERRUPT__) __SDIO_ENABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_SD_SDIO_GET_FLAG(__HANDLE__, __FLAG__) __SDIO_GET_FLAG((__HANDLE__)->Instance, (__FLAG__))
