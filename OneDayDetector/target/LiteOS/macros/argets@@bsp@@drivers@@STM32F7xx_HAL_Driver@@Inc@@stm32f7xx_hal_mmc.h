#define __HAL_MMC_CLEAR_FLAG(__HANDLE__, __FLAG__) __SDMMC_CLEAR_FLAG((__HANDLE__)->Instance, (__FLAG__))
#define __HAL_MMC_CLEAR_IT(__HANDLE__, __INTERRUPT__) __SDMMC_CLEAR_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_MMC_DISABLE(__HANDLE__) __SDMMC_DISABLE((__HANDLE__)->Instance)
#define __HAL_MMC_DISABLE_IT(__HANDLE__, __INTERRUPT__) __SDMMC_DISABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_MMC_DMA_DISABLE(__HANDLE__)  __SDMMC_DMA_DISABLE((__HANDLE__)->Instance)
#define __HAL_MMC_DMA_ENABLE(__HANDLE__) __SDMMC_DMA_ENABLE((__HANDLE__)->Instance)
#define __HAL_MMC_ENABLE(__HANDLE__) __SDMMC_ENABLE((__HANDLE__)->Instance)
#define __HAL_MMC_ENABLE_IT(__HANDLE__, __INTERRUPT__) __SDMMC_ENABLE_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_MMC_GET_FLAG(__HANDLE__, __FLAG__) __SDMMC_GET_FLAG((__HANDLE__)->Instance, (__FLAG__))
#define __HAL_MMC_GET_IT(__HANDLE__, __INTERRUPT__) __SDMMC_GET_IT((__HANDLE__)->Instance, (__INTERRUPT__))
#define __HAL_MMC_RESET_HANDLE_STATE(__HANDLE__)           do {                                              \
                                                               (__HANDLE__)->State = HAL_MMC_STATE_RESET; \
                                                               (__HANDLE__)->MspInitCallback = NULL;       \
                                                               (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                             } while(0)
#define __HAL_MMC_RESET_HANDLE_STATE(__HANDLE__)           ((__HANDLE__)->State = HAL_MMC_STATE_RESET)
