#define CHECK_RET_RETURN(ret) \
    do {                      \
        if ((ret) < 0) {      \
            return ret;       \
        }                     \
    } while (0)
#define SPI_FLASH_CS_CLK_ENABLE()                  __HAL_RCC_GPIOF_CLK_ENABLE()
#define SPI_FLASH_CS_DISABLE()                     HAL_GPIO_WritePin(SPI_FLASH_CS_PORT, SPI_FLASH_CS_PIN, GPIO_PIN_SET)
#define SPI_FLASH_CS_ENABLE()                      HAL_GPIO_WritePin(SPI_FLASH_CS_PORT, SPI_FLASH_CS_PIN, GPIO_PIN_RESET)
#define SPI_FLASH_DISABLE(__HANDLE__)              __HAL_SPI_DISABLE(__HANDLE__)
#define SPI_FLASH_ENABLE(__HANDLE__)               __HAL_SPI_ENABLE(__HANDLE__)
#define SPI_FLASH_GPIO_CLK_ENABLE()                __HAL_RCC_GPIOF_CLK_ENABLE()
#define SPI_FLASH_RCC_CLK_DISABLE()                __HAL_RCC_SPI5_CLK_DISABLE()
#define SPI_FLASH_RCC_CLK_ENABLE()                 __HAL_RCC_SPI5_CLK_ENABLE()
