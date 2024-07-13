#define IS_RCC_ADCCLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_ADCCLKSOURCE_NONE)    || \
                ((__SOURCE__) == RCC_ADCCLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_ADCCLKSOURCE_PLLSAI2) || \
                ((__SOURCE__) == RCC_ADCCLKSOURCE_SYSCLK))
#define IS_RCC_ADCCLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_ADCCLKSOURCE_NONE)    || \
                ((__SOURCE__) == RCC_ADCCLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_ADCCLKSOURCE_SYSCLK))
#define IS_RCC_CRS_ERRORLIMIT(__VALUE__)   (((__VALUE__) <= 0xFFU))
#define IS_RCC_CRS_FREQERRORDIR(__DIR__)   (((__DIR__) == RCC_CRS_FREQERRORDIR_UP) || \
                                            ((__DIR__) == RCC_CRS_FREQERRORDIR_DOWN))
#define IS_RCC_CRS_HSI48CALIBRATION(__VALUE__) (((__VALUE__) <= 0x3FU))
#define IS_RCC_CRS_RELOADVALUE(__VALUE__)  (((__VALUE__) <= 0xFFFFU))
#define IS_RCC_CRS_SYNC_DIV(__DIV__)       (((__DIV__) == RCC_CRS_SYNC_DIV1)  || ((__DIV__) == RCC_CRS_SYNC_DIV2)  || \
                                            ((__DIV__) == RCC_CRS_SYNC_DIV4)  || ((__DIV__) == RCC_CRS_SYNC_DIV8)  || \
                                            ((__DIV__) == RCC_CRS_SYNC_DIV16) || ((__DIV__) == RCC_CRS_SYNC_DIV32) || \
                                            ((__DIV__) == RCC_CRS_SYNC_DIV64) || ((__DIV__) == RCC_CRS_SYNC_DIV128))
#define IS_RCC_CRS_SYNC_POLARITY(__POLARITY__) (((__POLARITY__) == RCC_CRS_SYNC_POLARITY_RISING) || \
                                                ((__POLARITY__) == RCC_CRS_SYNC_POLARITY_FALLING))
#define IS_RCC_CRS_SYNC_SOURCE(__SOURCE__) (((__SOURCE__) == RCC_CRS_SYNC_SOURCE_GPIO) || \
                                            ((__SOURCE__) == RCC_CRS_SYNC_SOURCE_LSE)  || \
                                            ((__SOURCE__) == RCC_CRS_SYNC_SOURCE_USB))
#define IS_RCC_DFSDM1AUDIOCLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_DFSDM1AUDIOCLKSOURCE_SAI1) || \
                ((__SOURCE__) == RCC_DFSDM1AUDIOCLKSOURCE_HSI) || \
                ((__SOURCE__) == RCC_DFSDM1AUDIOCLKSOURCE_MSI))
#define IS_RCC_DFSDM1CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_DFSDM1CLKSOURCE_PCLK2) || \
                ((__SOURCE__) == RCC_DFSDM1CLKSOURCE_SYSCLK))
#define IS_RCC_DSICLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_DSICLKSOURCE_DSIPHY) || \
                ((__SOURCE__) == RCC_DSICLKSOURCE_PLLSAI2))
#define IS_RCC_I2C1CLKSOURCE(__SOURCE__)   \
               (((__SOURCE__) == RCC_I2C1CLKSOURCE_PCLK1) || \
                ((__SOURCE__) == RCC_I2C1CLKSOURCE_SYSCLK)|| \
                ((__SOURCE__) == RCC_I2C1CLKSOURCE_HSI))
#define IS_RCC_I2C2CLKSOURCE(__SOURCE__)   \
               (((__SOURCE__) == RCC_I2C2CLKSOURCE_PCLK1) || \
                ((__SOURCE__) == RCC_I2C2CLKSOURCE_SYSCLK)|| \
                ((__SOURCE__) == RCC_I2C2CLKSOURCE_HSI))
#define IS_RCC_I2C3CLKSOURCE(__SOURCE__)   \
               (((__SOURCE__) == RCC_I2C3CLKSOURCE_PCLK1) || \
                ((__SOURCE__) == RCC_I2C3CLKSOURCE_SYSCLK)|| \
                ((__SOURCE__) == RCC_I2C3CLKSOURCE_HSI))
#define IS_RCC_I2C4CLKSOURCE(__SOURCE__)   \
               (((__SOURCE__) == RCC_I2C4CLKSOURCE_PCLK1) || \
                ((__SOURCE__) == RCC_I2C4CLKSOURCE_SYSCLK)|| \
                ((__SOURCE__) == RCC_I2C4CLKSOURCE_HSI))
#define IS_RCC_LPTIM1CLK(__SOURCE__)  \
               (((__SOURCE__) == RCC_LPTIM1CLKSOURCE_PCLK1) || \
                ((__SOURCE__) == RCC_LPTIM1CLKSOURCE_LSI)   || \
                ((__SOURCE__) == RCC_LPTIM1CLKSOURCE_HSI)   || \
                ((__SOURCE__) == RCC_LPTIM1CLKSOURCE_LSE))
#define IS_RCC_LPTIM2CLK(__SOURCE__)  \
               (((__SOURCE__) == RCC_LPTIM2CLKSOURCE_PCLK1) || \
                ((__SOURCE__) == RCC_LPTIM2CLKSOURCE_LSI)   || \
                ((__SOURCE__) == RCC_LPTIM2CLKSOURCE_HSI)   || \
                ((__SOURCE__) == RCC_LPTIM2CLKSOURCE_LSE))
#define IS_RCC_LPUART1CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_LPUART1CLKSOURCE_PCLK1)  || \
                ((__SOURCE__) == RCC_LPUART1CLKSOURCE_SYSCLK) || \
                ((__SOURCE__) == RCC_LPUART1CLKSOURCE_LSE)    || \
                ((__SOURCE__) == RCC_LPUART1CLKSOURCE_HSI))
#define IS_RCC_LSCOSOURCE(__SOURCE__) (((__SOURCE__) == RCC_LSCOSOURCE_LSI) || \
                                       ((__SOURCE__) == RCC_LSCOSOURCE_LSE))
#define IS_RCC_LTDCCLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_LTDCCLKSOURCE_PLLSAI2_DIV2) || \
                ((__SOURCE__) == RCC_LTDCCLKSOURCE_PLLSAI2_DIV4) || \
                ((__SOURCE__) == RCC_LTDCCLKSOURCE_PLLSAI2_DIV8) || \
                ((__SOURCE__) == RCC_LTDCCLKSOURCE_PLLSAI2_DIV16))
#define IS_RCC_OSPICLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_OSPICLKSOURCE_SYSCLK) || \
                ((__SOURCE__) == RCC_OSPICLKSOURCE_MSI) || \
                ((__SOURCE__) == RCC_OSPICLKSOURCE_PLL))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)  == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)  == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)  == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1) == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)    == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)    == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)    == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)  == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)  == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)    == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)     == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SWPMI1)  == RCC_PERIPHCLK_SWPMI1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)     == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)     == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)  == RCC_PERIPHCLK_SDMMC1))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)  == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)  == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1) == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)    == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)    == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)  == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)  == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)    == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_USB)     == RCC_PERIPHCLK_USB)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)     == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SWPMI1)  == RCC_PERIPHCLK_SWPMI1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)     == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)     == RCC_PERIPHCLK_RNG))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)  == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)  == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)  == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1) == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)    == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)    == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)    == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)  == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)  == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)    == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_USB)     == RCC_PERIPHCLK_USB)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)     == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SWPMI1)  == RCC_PERIPHCLK_SWPMI1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)     == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)     == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)  == RCC_PERIPHCLK_SDMMC1))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)  == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)  == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)  == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART4)   == RCC_PERIPHCLK_UART4)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1) == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)    == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)    == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)    == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C4)    == RCC_PERIPHCLK_I2C4)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)  == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)  == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)    == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)     == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1)  == RCC_PERIPHCLK_DFSDM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)     == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)     == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)  == RCC_PERIPHCLK_SDMMC1))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)  == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)  == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)  == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART4)   == RCC_PERIPHCLK_UART4)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1) == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)    == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)    == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)    == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C4)    == RCC_PERIPHCLK_I2C4)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)  == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)  == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)    == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_USB)     == RCC_PERIPHCLK_USB)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)     == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1)  == RCC_PERIPHCLK_DFSDM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)     == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)     == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)  == RCC_PERIPHCLK_SDMMC1))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)  == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)  == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)  == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART4)   == RCC_PERIPHCLK_UART4)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART5)   == RCC_PERIPHCLK_UART5)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1) == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)    == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)    == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)    == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)  == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)  == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)    == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI2)    == RCC_PERIPHCLK_SAI2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)     == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SWPMI1)  == RCC_PERIPHCLK_SWPMI1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1)  == RCC_PERIPHCLK_DFSDM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)     == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)     == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)  == RCC_PERIPHCLK_SDMMC1))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)  == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)  == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)  == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART4)   == RCC_PERIPHCLK_UART4)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART5)   == RCC_PERIPHCLK_UART5)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1) == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)    == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)    == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)    == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C4)    == RCC_PERIPHCLK_I2C4)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)  == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)  == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)    == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI2)    == RCC_PERIPHCLK_SAI2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_USB)     == RCC_PERIPHCLK_USB)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)     == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SWPMI1)  == RCC_PERIPHCLK_SWPMI1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1)  == RCC_PERIPHCLK_DFSDM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)     == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)     == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)  == RCC_PERIPHCLK_SDMMC1))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)      == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)      == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)      == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART4)       == RCC_PERIPHCLK_UART4)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART5)       == RCC_PERIPHCLK_UART5)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1)     == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)        == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)        == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)        == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C4)        == RCC_PERIPHCLK_I2C4)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)      == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)      == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)        == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI2)        == RCC_PERIPHCLK_SAI2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_USB)         == RCC_PERIPHCLK_USB)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)         == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1)      == RCC_PERIPHCLK_DFSDM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1AUDIO) == RCC_PERIPHCLK_DFSDM1AUDIO) || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)         == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)         == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)      == RCC_PERIPHCLK_SDMMC1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_OSPI)        == RCC_PERIPHCLK_OSPI))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)      == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)      == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)      == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART4)       == RCC_PERIPHCLK_UART4)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART5)       == RCC_PERIPHCLK_UART5)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1)     == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)        == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)        == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)        == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C4)        == RCC_PERIPHCLK_I2C4)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)      == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)      == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)        == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI2)        == RCC_PERIPHCLK_SAI2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_USB)         == RCC_PERIPHCLK_USB)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)         == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1)      == RCC_PERIPHCLK_DFSDM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1AUDIO) == RCC_PERIPHCLK_DFSDM1AUDIO) || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)         == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)         == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)      == RCC_PERIPHCLK_SDMMC1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_OSPI)        == RCC_PERIPHCLK_OSPI) || \
                (((__SELECTION__) & RCC_PERIPHCLK_LTDC)        == RCC_PERIPHCLK_LTDC))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)      == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)      == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)      == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART4)       == RCC_PERIPHCLK_UART4)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART5)       == RCC_PERIPHCLK_UART5)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1)     == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)        == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)        == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)        == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C4)        == RCC_PERIPHCLK_I2C4)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)      == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)      == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)        == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI2)        == RCC_PERIPHCLK_SAI2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_USB)         == RCC_PERIPHCLK_USB)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)         == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1)      == RCC_PERIPHCLK_DFSDM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1AUDIO) == RCC_PERIPHCLK_DFSDM1AUDIO) || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)         == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)         == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)      == RCC_PERIPHCLK_SDMMC1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_OSPI)        == RCC_PERIPHCLK_OSPI)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LTDC)        == RCC_PERIPHCLK_LTDC)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_DSI)         == RCC_PERIPHCLK_DSI))
#define IS_RCC_PERIPHCLOCK(__SELECTION__)  \
               ((((__SELECTION__) & RCC_PERIPHCLK_USART1)  == RCC_PERIPHCLK_USART1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART2)  == RCC_PERIPHCLK_USART2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_USART3)  == RCC_PERIPHCLK_USART3)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART4)   == RCC_PERIPHCLK_UART4)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_UART5)   == RCC_PERIPHCLK_UART5)   || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPUART1) == RCC_PERIPHCLK_LPUART1) || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C1)    == RCC_PERIPHCLK_I2C1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C2)    == RCC_PERIPHCLK_I2C2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_I2C3)    == RCC_PERIPHCLK_I2C3)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM1)  == RCC_PERIPHCLK_LPTIM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_LPTIM2)  == RCC_PERIPHCLK_LPTIM2)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI1)    == RCC_PERIPHCLK_SAI1)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_SAI2)    == RCC_PERIPHCLK_SAI2)    || \
                (((__SELECTION__) & RCC_PERIPHCLK_USB)     == RCC_PERIPHCLK_USB)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_ADC)     == RCC_PERIPHCLK_ADC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SWPMI1)  == RCC_PERIPHCLK_SWPMI1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_DFSDM1)  == RCC_PERIPHCLK_DFSDM1)  || \
                (((__SELECTION__) & RCC_PERIPHCLK_RTC)     == RCC_PERIPHCLK_RTC)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_RNG)     == RCC_PERIPHCLK_RNG)     || \
                (((__SELECTION__) & RCC_PERIPHCLK_SDMMC1)  == RCC_PERIPHCLK_SDMMC1))
#define IS_RCC_PLLSAI1M_VALUE(__VALUE__)   ((1U <= (__VALUE__)) && ((__VALUE__) <= 16U))
#define IS_RCC_PLLSAI1M_VALUE(__VALUE__)   ((1U <= (__VALUE__)) && ((__VALUE__) <= 8U))
#define IS_RCC_PLLSAI1N_VALUE(__VALUE__)   ((8U <= (__VALUE__)) && ((__VALUE__) <= 86U))
#define IS_RCC_PLLSAI1P_VALUE(__VALUE__)   (((__VALUE__) >= 2U) && ((__VALUE__) <= 31U))
#define IS_RCC_PLLSAI1P_VALUE(__VALUE__)   (((__VALUE__) == 7U) || ((__VALUE__) == 17U))
#define IS_RCC_PLLSAI1Q_VALUE(__VALUE__)   (((__VALUE__) == 2U) || ((__VALUE__) == 4U) || \
                                            ((__VALUE__) == 6U) || ((__VALUE__) == 8U))
#define IS_RCC_PLLSAI1R_VALUE(__VALUE__)   (((__VALUE__) == 2U) || ((__VALUE__) == 4U) || \
                                            ((__VALUE__) == 6U) || ((__VALUE__) == 8U))
#define IS_RCC_PLLSAI1SOURCE(__VALUE__)    IS_RCC_PLLSOURCE(__VALUE__)
#define IS_RCC_PLLSAI2M_VALUE(__VALUE__)   ((1U <= (__VALUE__)) && ((__VALUE__) <= 16U))
#define IS_RCC_PLLSAI2M_VALUE(__VALUE__)   ((1U <= (__VALUE__)) && ((__VALUE__) <= 8U))
#define IS_RCC_PLLSAI2N_VALUE(__VALUE__)   ((8U <= (__VALUE__)) && ((__VALUE__) <= 86U))
#define IS_RCC_PLLSAI2P_VALUE(__VALUE__)   (((__VALUE__) >= 2U) && ((__VALUE__) <= 31U))
#define IS_RCC_PLLSAI2P_VALUE(__VALUE__)   (((__VALUE__) == 7U) || ((__VALUE__) == 17U))
#define IS_RCC_PLLSAI2Q_VALUE(__VALUE__)   (((__VALUE__) == 2U) || ((__VALUE__) == 4U) || \
                                            ((__VALUE__) == 6U) || ((__VALUE__) == 8U))
#define IS_RCC_PLLSAI2R_VALUE(__VALUE__)   (((__VALUE__) == 2U) || ((__VALUE__) == 4U) || \
                                            ((__VALUE__) == 6U) || ((__VALUE__) == 8U))
#define IS_RCC_PLLSAI2SOURCE(__VALUE__)    IS_RCC_PLLSOURCE(__VALUE__)
#define IS_RCC_RNGCLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_RNGCLKSOURCE_HSI48)   || \
                ((__SOURCE__) == RCC_RNGCLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_RNGCLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_RNGCLKSOURCE_MSI))
#define IS_RCC_RNGCLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_RNGCLKSOURCE_NONE)    || \
                ((__SOURCE__) == RCC_RNGCLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_RNGCLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_RNGCLKSOURCE_MSI))
#define IS_RCC_SAI1CLK(__SOURCE__)   \
               (((__SOURCE__) == RCC_SAI1CLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_PLLSAI2) || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_PIN)     || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_HSI))
#define IS_RCC_SAI1CLK(__SOURCE__)   \
               (((__SOURCE__) == RCC_SAI1CLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_PLLSAI2) || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_PIN))
#define IS_RCC_SAI1CLK(__SOURCE__)   \
               (((__SOURCE__) == RCC_SAI1CLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_SAI1CLKSOURCE_PIN))
#define IS_RCC_SAI2CLK(__SOURCE__)   \
               (((__SOURCE__) == RCC_SAI2CLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_SAI2CLKSOURCE_PLLSAI2) || \
                ((__SOURCE__) == RCC_SAI2CLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_SAI2CLKSOURCE_PIN)     || \
                ((__SOURCE__) == RCC_SAI2CLKSOURCE_HSI))
#define IS_RCC_SAI2CLK(__SOURCE__)   \
               (((__SOURCE__) == RCC_SAI2CLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_SAI2CLKSOURCE_PLLSAI2) || \
                ((__SOURCE__) == RCC_SAI2CLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_SAI2CLKSOURCE_PIN))
#define IS_RCC_SDMMC1CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_SDMMC1CLKSOURCE_PLLP)    || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_HSI48)   || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_MSI))
#define IS_RCC_SDMMC1CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_SDMMC1CLKSOURCE_HSI48)   || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_MSI))
#define IS_RCC_SDMMC1CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_SDMMC1CLKSOURCE_NONE)    || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_SDMMC1CLKSOURCE_MSI))
#define IS_RCC_SWPMI1CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_SWPMI1CLKSOURCE_PCLK1) || \
                ((__SOURCE__) == RCC_SWPMI1CLKSOURCE_HSI))
#define IS_RCC_UART4CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_UART4CLKSOURCE_PCLK1)  || \
                ((__SOURCE__) == RCC_UART4CLKSOURCE_SYSCLK) || \
                ((__SOURCE__) == RCC_UART4CLKSOURCE_LSE)    || \
                ((__SOURCE__) == RCC_UART4CLKSOURCE_HSI))
#define IS_RCC_UART5CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_UART5CLKSOURCE_PCLK1)  || \
                ((__SOURCE__) == RCC_UART5CLKSOURCE_SYSCLK) || \
                ((__SOURCE__) == RCC_UART5CLKSOURCE_LSE)    || \
                ((__SOURCE__) == RCC_UART5CLKSOURCE_HSI))
#define IS_RCC_USART1CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_USART1CLKSOURCE_PCLK2)  || \
                ((__SOURCE__) == RCC_USART1CLKSOURCE_SYSCLK) || \
                ((__SOURCE__) == RCC_USART1CLKSOURCE_LSE)    || \
                ((__SOURCE__) == RCC_USART1CLKSOURCE_HSI))
#define IS_RCC_USART2CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_USART2CLKSOURCE_PCLK1)  || \
                ((__SOURCE__) == RCC_USART2CLKSOURCE_SYSCLK) || \
                ((__SOURCE__) == RCC_USART2CLKSOURCE_LSE)    || \
                ((__SOURCE__) == RCC_USART2CLKSOURCE_HSI))
#define IS_RCC_USART3CLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_USART3CLKSOURCE_PCLK1)  || \
                ((__SOURCE__) == RCC_USART3CLKSOURCE_SYSCLK) || \
                ((__SOURCE__) == RCC_USART3CLKSOURCE_LSE)    || \
                ((__SOURCE__) == RCC_USART3CLKSOURCE_HSI))
#define IS_RCC_USBCLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_USBCLKSOURCE_HSI48)   || \
                ((__SOURCE__) == RCC_USBCLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_USBCLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_USBCLKSOURCE_MSI))
#define IS_RCC_USBCLKSOURCE(__SOURCE__)  \
               (((__SOURCE__) == RCC_USBCLKSOURCE_NONE)    || \
                ((__SOURCE__) == RCC_USBCLKSOURCE_PLLSAI1) || \
                ((__SOURCE__) == RCC_USBCLKSOURCE_PLL)     || \
                ((__SOURCE__) == RCC_USBCLKSOURCE_MSI))
#define __HAL_RCC_ADC_CONFIG(__ADC_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_ADCSEL, (__ADC_CLKSOURCE__))
#define __HAL_RCC_CRS_AUTOMATIC_CALIB_DISABLE()    CLEAR_BIT(CRS->CR, CRS_CR_AUTOTRIMEN)
#define __HAL_RCC_CRS_AUTOMATIC_CALIB_ENABLE()     SET_BIT(CRS->CR, CRS_CR_AUTOTRIMEN)
#define __HAL_RCC_CRS_CLEAR_FLAG(__FLAG__)     do { \
                                                 if(((__FLAG__) & RCC_CRS_FLAG_ERROR_MASK) != RESET) \
                                                 { \
                                                   WRITE_REG(CRS->ICR, CRS_ICR_ERRC | ((__FLAG__) & ~RCC_CRS_FLAG_ERROR_MASK)); \
                                                 } \
                                                 else \
                                                 { \
                                                   WRITE_REG(CRS->ICR, (__FLAG__)); \
                                                 } \
                                               } while(0)
#define __HAL_RCC_CRS_CLEAR_IT(__INTERRUPT__)  do { \
                                                 if(((__INTERRUPT__) & RCC_CRS_IT_ERROR_MASK) != RESET) \
                                                 { \
                                                   WRITE_REG(CRS->ICR, CRS_ICR_ERRC | ((__INTERRUPT__) & ~RCC_CRS_IT_ERROR_MASK)); \
                                                 } \
                                                 else \
                                                 { \
                                                   WRITE_REG(CRS->ICR, (__INTERRUPT__)); \
                                                 } \
                                               } while(0)
#define __HAL_RCC_CRS_DISABLE_IT(__INTERRUPT__)  CLEAR_BIT(CRS->CR, (__INTERRUPT__))
#define __HAL_RCC_CRS_ENABLE_IT(__INTERRUPT__)   SET_BIT(CRS->CR, (__INTERRUPT__))
#define __HAL_RCC_CRS_FREQ_ERROR_COUNTER_DISABLE() CLEAR_BIT(CRS->CR, CRS_CR_CEN)
#define __HAL_RCC_CRS_FREQ_ERROR_COUNTER_ENABLE()  SET_BIT(CRS->CR, CRS_CR_CEN)
#define __HAL_RCC_CRS_GET_FLAG(__FLAG__)  (READ_BIT(CRS->ISR, (__FLAG__)) == (__FLAG__))
#define __HAL_RCC_CRS_GET_IT_SOURCE(__INTERRUPT__)  ((READ_BIT(CRS->CR, (__INTERRUPT__)) != RESET) ? SET : RESET)
#define __HAL_RCC_CRS_RELOADVALUE_CALCULATE(__FTARGET__, __FSYNC__)  (((__FTARGET__) / (__FSYNC__)) - 1U)
#define __HAL_RCC_DFSDM1AUDIO_CONFIG(__DFSDM1AUDIO_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR2, RCC_CCIPR2_ADFSDM1SEL, (__DFSDM1AUDIO_CLKSOURCE__))
#define __HAL_RCC_DFSDM1_CONFIG(__DFSDM1_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR2, RCC_CCIPR2_DFSDM1SEL, (__DFSDM1_CLKSOURCE__))
#define __HAL_RCC_DFSDM1_CONFIG(__DFSDM1_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_DFSDM1SEL, (__DFSDM1_CLKSOURCE__))
#define __HAL_RCC_DSI_CONFIG(__DSI_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR2, RCC_CCIPR2_DSISEL, (__DSI_CLKSOURCE__))
#define __HAL_RCC_GET_ADC_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_ADCSEL))
#define __HAL_RCC_GET_DFSDM1AUDIO_SOURCE() (READ_BIT(RCC->CCIPR2, RCC_CCIPR2_ADFSDM1SEL))
#define __HAL_RCC_GET_DFSDM1_SOURCE() (READ_BIT(RCC->CCIPR2, RCC_CCIPR2_DFSDM1SEL))
#define __HAL_RCC_GET_DFSDM1_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_DFSDM1SEL))
#define __HAL_RCC_GET_DSI_SOURCE() (READ_BIT(RCC->CCIPR2, RCC_CCIPR2_DSISEL))
#define __HAL_RCC_GET_I2C1_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_I2C1SEL))
#define __HAL_RCC_GET_I2C2_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_I2C2SEL))
#define __HAL_RCC_GET_I2C3_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_I2C3SEL))
#define __HAL_RCC_GET_I2C4_SOURCE() (READ_BIT(RCC->CCIPR2, RCC_CCIPR2_I2C4SEL))
#define __HAL_RCC_GET_LPTIM1_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_LPTIM1SEL))
#define __HAL_RCC_GET_LPTIM2_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_LPTIM2SEL))
#define __HAL_RCC_GET_LPUART1_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_LPUART1SEL))
#define __HAL_RCC_GET_LTDC_SOURCE() (READ_BIT(RCC->CCIPR2, RCC_CCIPR2_PLLSAI2DIVR))
#define __HAL_RCC_GET_OSPI_SOURCE() (READ_BIT(RCC->CCIPR2, RCC_CCIPR2_OSPISEL))
#define __HAL_RCC_GET_PLLSAI1CLKOUT_CONFIG(__PLLSAI1_CLOCKOUT__)  READ_BIT(RCC->PLLSAI1CFGR, (__PLLSAI1_CLOCKOUT__))
#define __HAL_RCC_GET_PLLSAI2CLKOUT_CONFIG(__PLLSAI2_CLOCKOUT__)  READ_BIT(RCC->PLLSAI2CFGR, (__PLLSAI2_CLOCKOUT__))
#define __HAL_RCC_GET_RNG_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_CLK48SEL))
#define __HAL_RCC_GET_SAI1_SOURCE() (READ_BIT(RCC->CCIPR2, RCC_CCIPR2_SAI1SEL))
#define __HAL_RCC_GET_SAI1_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_SAI1SEL))
#define __HAL_RCC_GET_SAI2_SOURCE() (READ_BIT(RCC->CCIPR2, RCC_CCIPR2_SAI2SEL))
#define __HAL_RCC_GET_SAI2_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_SAI2SEL))
#define __HAL_RCC_GET_SDMMC1_SOURCE() \
                  ((READ_BIT(RCC->CCIPR2, RCC_CCIPR2_SDMMCSEL) != RESET) ? RCC_SDMMC1CLKSOURCE_PLLP : (READ_BIT(RCC->CCIPR, RCC_CCIPR_CLK48SEL)))
#define __HAL_RCC_GET_SDMMC1_SOURCE() \
                  (READ_BIT(RCC->CCIPR, RCC_CCIPR_CLK48SEL))
#define __HAL_RCC_GET_SWPMI1_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_SWPMI1SEL))
#define __HAL_RCC_GET_UART4_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_UART4SEL))
#define __HAL_RCC_GET_UART5_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_UART5SEL))
#define __HAL_RCC_GET_USART1_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_USART1SEL))
#define __HAL_RCC_GET_USART2_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_USART2SEL))
#define __HAL_RCC_GET_USART3_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_USART3SEL))
#define __HAL_RCC_GET_USB_SOURCE() (READ_BIT(RCC->CCIPR, RCC_CCIPR_CLK48SEL))
#define __HAL_RCC_I2C1_CONFIG(__I2C1_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_I2C1SEL, (__I2C1_CLKSOURCE__))
#define __HAL_RCC_I2C2_CONFIG(__I2C2_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_I2C2SEL, (__I2C2_CLKSOURCE__))
#define __HAL_RCC_I2C3_CONFIG(__I2C3_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_I2C3SEL, (__I2C3_CLKSOURCE__))
#define __HAL_RCC_I2C4_CONFIG(__I2C4_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR2, RCC_CCIPR2_I2C4SEL, (__I2C4_CLKSOURCE__))
#define __HAL_RCC_LPTIM1_CONFIG(__LPTIM1_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_LPTIM1SEL, (__LPTIM1_CLKSOURCE__))
#define __HAL_RCC_LPTIM2_CONFIG(__LPTIM2_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_LPTIM2SEL, (__LPTIM2_CLKSOURCE__))
#define __HAL_RCC_LPUART1_CONFIG(__LPUART1_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_LPUART1SEL, (__LPUART1_CLKSOURCE__))
#define __HAL_RCC_LSECSS_EXTI_CLEAR_FLAG()     WRITE_REG(EXTI->PR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_DISABLE_EVENT()  CLEAR_BIT(EXTI->EMR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_DISABLE_FALLING_EDGE()  CLEAR_BIT(EXTI->FTSR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_DISABLE_IT()     CLEAR_BIT(EXTI->IMR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_DISABLE_RISING_EDGE()  CLEAR_BIT(EXTI->RTSR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_DISABLE_RISING_FALLING_EDGE()  \
  do {                                                       \
    __HAL_RCC_LSECSS_EXTI_DISABLE_RISING_EDGE();             \
    __HAL_RCC_LSECSS_EXTI_DISABLE_FALLING_EDGE();            \
  } while(0)
#define __HAL_RCC_LSECSS_EXTI_ENABLE_EVENT()   SET_BIT(EXTI->EMR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_ENABLE_FALLING_EDGE()  SET_BIT(EXTI->FTSR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_ENABLE_IT()      SET_BIT(EXTI->IMR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_ENABLE_RISING_EDGE()   SET_BIT(EXTI->RTSR1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_ENABLE_RISING_FALLING_EDGE()  \
  do {                                                      \
    __HAL_RCC_LSECSS_EXTI_ENABLE_RISING_EDGE();             \
    __HAL_RCC_LSECSS_EXTI_ENABLE_FALLING_EDGE();            \
  } while(0)
#define __HAL_RCC_LSECSS_EXTI_GENERATE_SWIT()  SET_BIT(EXTI->SWIER1, RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LSECSS_EXTI_GET_FLAG()       (READ_BIT(EXTI->PR1, RCC_EXTI_LINE_LSECSS) == RCC_EXTI_LINE_LSECSS)
#define __HAL_RCC_LTDC_CONFIG(__LTDC_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR2, RCC_CCIPR2_PLLSAI2DIVR, (__LTDC_CLKSOURCE__))
#define __HAL_RCC_OSPI_CONFIG(__OSPI_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR2, RCC_CCIPR2_OSPISEL, (__OSPI_CLKSOURCE__))
#define __HAL_RCC_PLLSAI1CLKOUT_DISABLE(__PLLSAI1_CLOCKOUT__)  CLEAR_BIT(RCC->PLLSAI1CFGR, (__PLLSAI1_CLOCKOUT__))
#define __HAL_RCC_PLLSAI1CLKOUT_ENABLE(__PLLSAI1_CLOCKOUT__)   SET_BIT(RCC->PLLSAI1CFGR, (__PLLSAI1_CLOCKOUT__))
#define __HAL_RCC_PLLSAI1_CLEAR_IT()   WRITE_REG(RCC->CICR, RCC_CICR_PLLSAI1RDYC)
#define __HAL_RCC_PLLSAI1_CONFIG(__PLLSAI1M__, __PLLSAI1N__, __PLLSAI1P__, __PLLSAI1Q__, __PLLSAI1R__) \
                  WRITE_REG(RCC->PLLSAI1CFGR, ((__PLLSAI1N__) << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) | \
                   ((((__PLLSAI1Q__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) | \
                   ((((__PLLSAI1R__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1R_Pos) | \
                   ((__PLLSAI1P__) << RCC_PLLSAI1CFGR_PLLSAI1PDIV_Pos) | \
                   (((__PLLSAI1M__) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1M_Pos))
#define __HAL_RCC_PLLSAI1_CONFIG(__PLLSAI1M__, __PLLSAI1N__, __PLLSAI1P__, __PLLSAI1Q__, __PLLSAI1R__) \
                  WRITE_REG(RCC->PLLSAI1CFGR, ((__PLLSAI1N__) << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) | \
                   (((__PLLSAI1P__) >> 4U) << RCC_PLLSAI1CFGR_PLLSAI1P_Pos) | \
                   ((((__PLLSAI1Q__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) | \
                   ((((__PLLSAI1R__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1R_Pos) | \
                   (((__PLLSAI1M__) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1M_Pos))
#define __HAL_RCC_PLLSAI1_CONFIG(__PLLSAI1N__, __PLLSAI1P__, __PLLSAI1Q__, __PLLSAI1R__) \
                  WRITE_REG(RCC->PLLSAI1CFGR, ((__PLLSAI1N__) << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) | \
                   ((((__PLLSAI1Q__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) | \
                   ((((__PLLSAI1R__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1R_Pos) | \
                   ((__PLLSAI1P__) << RCC_PLLSAI1CFGR_PLLSAI1PDIV_Pos))
#define __HAL_RCC_PLLSAI1_CONFIG(__PLLSAI1N__, __PLLSAI1P__, __PLLSAI1Q__, __PLLSAI1R__) \
                  WRITE_REG(RCC->PLLSAI1CFGR, ((__PLLSAI1N__) << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) | \
                   (((__PLLSAI1P__) >> 4U) << RCC_PLLSAI1CFGR_PLLSAI1P_Pos) | \
                   ((((__PLLSAI1Q__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) | \
                   ((((__PLLSAI1R__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1R_Pos))
#define __HAL_RCC_PLLSAI1_DISABLE() CLEAR_BIT(RCC->CR, RCC_CR_PLLSAI1ON)
#define __HAL_RCC_PLLSAI1_DISABLE_IT() CLEAR_BIT(RCC->CIER, RCC_CIER_PLLSAI1RDYIE)
#define __HAL_RCC_PLLSAI1_DIVM_CONFIG(__PLLSAI1M__) \
                  MODIFY_REG(RCC->PLLSAI1CFGR, RCC_PLLSAI1CFGR_PLLSAI1M, ((__PLLSAI1M__) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1M_Pos)
#define __HAL_RCC_PLLSAI1_DIVP_CONFIG(__PLLSAI1P__) \
                  MODIFY_REG(RCC->PLLSAI1CFGR, RCC_PLLSAI1CFGR_PLLSAI1P, ((__PLLSAI1P__) >> 4U) << RCC_PLLSAI1CFGR_PLLSAI1P_Pos)
#define __HAL_RCC_PLLSAI1_DIVP_CONFIG(__PLLSAI1P__) \
                  MODIFY_REG(RCC->PLLSAI1CFGR, RCC_PLLSAI1CFGR_PLLSAI1PDIV, (__PLLSAI1P__) << RCC_PLLSAI1CFGR_PLLSAI1PDIV_Pos)
#define __HAL_RCC_PLLSAI1_DIVQ_CONFIG(__PLLSAI1Q__) \
                  MODIFY_REG(RCC->PLLSAI1CFGR, RCC_PLLSAI1CFGR_PLLSAI1Q, (((__PLLSAI1Q__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1Q_Pos)
#define __HAL_RCC_PLLSAI1_DIVR_CONFIG(__PLLSAI1R__) \
                  MODIFY_REG(RCC->PLLSAI1CFGR, RCC_PLLSAI1CFGR_PLLSAI1R, (((__PLLSAI1R__) >> 1U) - 1U) << RCC_PLLSAI1CFGR_PLLSAI1R_Pos)
#define __HAL_RCC_PLLSAI1_ENABLE()  SET_BIT(RCC->CR, RCC_CR_PLLSAI1ON)
#define __HAL_RCC_PLLSAI1_ENABLE_IT()  SET_BIT(RCC->CIER, RCC_CIER_PLLSAI1RDYIE)
#define __HAL_RCC_PLLSAI1_GET_FLAG()   (READ_BIT(RCC->CR, RCC_CR_PLLSAI1RDY) == (RCC_CR_PLLSAI1RDY))
#define __HAL_RCC_PLLSAI1_GET_IT_SOURCE()     (READ_BIT(RCC->CIFR, RCC_CIFR_PLLSAI1RDYF) == RCC_CIFR_PLLSAI1RDYF)
#define __HAL_RCC_PLLSAI1_MULN_CONFIG(__PLLSAI1N__) \
                  MODIFY_REG(RCC->PLLSAI1CFGR, RCC_PLLSAI1CFGR_PLLSAI1N, (__PLLSAI1N__) << RCC_PLLSAI1CFGR_PLLSAI1N_Pos)
#define __HAL_RCC_PLLSAI2CLKOUT_DISABLE(__PLLSAI2_CLOCKOUT__) CLEAR_BIT(RCC->PLLSAI2CFGR, (__PLLSAI2_CLOCKOUT__))
#define __HAL_RCC_PLLSAI2CLKOUT_ENABLE(__PLLSAI2_CLOCKOUT__)  SET_BIT(RCC->PLLSAI2CFGR, (__PLLSAI2_CLOCKOUT__))
#define __HAL_RCC_PLLSAI2_CLEAR_IT()   WRITE_REG(RCC->CICR, RCC_CICR_PLLSAI2RDYC)
#define __HAL_RCC_PLLSAI2_CONFIG(__PLLSAI2M__, __PLLSAI2N__, __PLLSAI2P__, __PLLSAI2Q__, __PLLSAI2R__) \
                  WRITE_REG(RCC->PLLSAI2CFGR, ((__PLLSAI2N__) << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) | \
                   ((((__PLLSAI2Q__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2Q_Pos) | \
                   ((((__PLLSAI2R__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2R_Pos) | \
                   ((__PLLSAI2P__) << RCC_PLLSAI2CFGR_PLLSAI2PDIV_Pos) | \
                   (((__PLLSAI2M__) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2M_Pos))
#define __HAL_RCC_PLLSAI2_CONFIG(__PLLSAI2M__, __PLLSAI2N__, __PLLSAI2P__, __PLLSAI2R__) \
                  WRITE_REG(RCC->PLLSAI2CFGR, ((__PLLSAI2N__) << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) | \
                   ((((__PLLSAI2R__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2R_Pos) | \
                   ((__PLLSAI2P__) << RCC_PLLSAI2CFGR_PLLSAI2PDIV_Pos) | \
                   (((__PLLSAI2M__) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2M_Pos))
#define __HAL_RCC_PLLSAI2_CONFIG(__PLLSAI2M__, __PLLSAI2N__, __PLLSAI2P__, __PLLSAI2R__) \
                  WRITE_REG(RCC->PLLSAI2CFGR, ((__PLLSAI2N__) << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) | \
                   (((__PLLSAI2P__) >> 4U) << RCC_PLLSAI2CFGR_PLLSAI2P_Pos) | \
                   ((((__PLLSAI2R__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2R_Pos) | \
                   (((__PLLSAI2M__) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2M_Pos))
#define __HAL_RCC_PLLSAI2_CONFIG(__PLLSAI2N__, __PLLSAI2P__, __PLLSAI2Q__, __PLLSAI2R__) \
                  WRITE_REG(RCC->PLLSAI2CFGR, ((__PLLSAI2N__) << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) | \
                   ((((__PLLSAI2Q__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2Q_Pos) | \
                   ((((__PLLSAI2R__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2R_Pos) | \
                   ((__PLLSAI2P__) << RCC_PLLSAI2CFGR_PLLSAI2PDIV_Pos))
#define __HAL_RCC_PLLSAI2_CONFIG(__PLLSAI2N__, __PLLSAI2P__, __PLLSAI2R__) \
                  WRITE_REG(RCC->PLLSAI2CFGR, ((__PLLSAI2N__) << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) | \
                   ((((__PLLSAI2R__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2R_Pos) | \
                   ((__PLLSAI2P__) << RCC_PLLSAI2CFGR_PLLSAI2PDIV_Pos))
#define __HAL_RCC_PLLSAI2_CONFIG(__PLLSAI2N__, __PLLSAI2P__, __PLLSAI2R__) \
                  WRITE_REG(RCC->PLLSAI2CFGR, ((__PLLSAI2N__) << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) | \
                    (((__PLLSAI2P__) >> 4U) << RCC_PLLSAI2CFGR_PLLSAI2P_Pos) | \
                    ((((__PLLSAI2R__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2R_Pos))
#define __HAL_RCC_PLLSAI2_DISABLE() CLEAR_BIT(RCC->CR, RCC_CR_PLLSAI2ON)
#define __HAL_RCC_PLLSAI2_DISABLE_IT() CLEAR_BIT(RCC->CIER, RCC_CIER_PLLSAI2RDYIE)
#define __HAL_RCC_PLLSAI2_DIVM_CONFIG(__PLLSAI2M__) \
                  MODIFY_REG(RCC->PLLSAI2CFGR, RCC_PLLSAI2CFGR_PLLSAI2M,  ((__PLLSAI2M__) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2M_Pos)
#define __HAL_RCC_PLLSAI2_DIVP_CONFIG(__PLLSAI2P__) \
                  MODIFY_REG(RCC->PLLSAI2CFGR, RCC_PLLSAI2CFGR_PLLSAI2P, ((__PLLSAI2P__) >> 4U) << RCC_PLLSAI2CFGR_PLLSAI2P_Pos)
#define __HAL_RCC_PLLSAI2_DIVQ_CONFIG(__PLLSAI2Q__) \
                  MODIFY_REG(RCC->PLLSAI2CFGR, RCC_PLLSAI2CFGR_PLLSAI2Q, (((__PLLSAI2Q__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2Q_Pos)
#define __HAL_RCC_PLLSAI2_DIVR_CONFIG(__PLLSAI2R__) \
                  MODIFY_REG(RCC->PLLSAI2CFGR, RCC_PLLSAI2CFGR_PLLSAI2R, (((__PLLSAI2R__) >> 1U) - 1U) << RCC_PLLSAI2CFGR_PLLSAI2R_Pos)
#define __HAL_RCC_PLLSAI2_ENABLE()  SET_BIT(RCC->CR, RCC_CR_PLLSAI2ON)
#define __HAL_RCC_PLLSAI2_ENABLE_IT()  SET_BIT(RCC->CIER, RCC_CIER_PLLSAI2RDYIE)
#define __HAL_RCC_PLLSAI2_GET_FLAG()   (READ_BIT(RCC->CR, RCC_CR_PLLSAI2RDY) == (RCC_CR_PLLSAI2RDY))
#define __HAL_RCC_PLLSAI2_GET_IT_SOURCE()     (READ_BIT(RCC->CIFR, RCC_CIFR_PLLSAI2RDYF) == RCC_CIFR_PLLSAI2RDYF)
#define __HAL_RCC_PLLSAI2_MULN_CONFIG(__PLLSAI2N__) \
                  MODIFY_REG(RCC->PLLSAI2CFGR, RCC_PLLSAI2CFGR_PLLSAI2N, (__PLLSAI2N__) << RCC_PLLSAI2CFGR_PLLSAI2N_Pos)
#define __HAL_RCC_RNG_CONFIG(__RNG_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_CLK48SEL, (__RNG_CLKSOURCE__))
#define __HAL_RCC_SAI1_CONFIG(__SAI1_CLKSOURCE__)\
                  MODIFY_REG(RCC->CCIPR2, RCC_CCIPR2_SAI1SEL, (__SAI1_CLKSOURCE__))
#define __HAL_RCC_SAI1_CONFIG(__SAI1_CLKSOURCE__)\
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_SAI1SEL, (__SAI1_CLKSOURCE__))
#define __HAL_RCC_SAI2_CONFIG(__SAI2_CLKSOURCE__ )\
                  MODIFY_REG(RCC->CCIPR2, RCC_CCIPR2_SAI2SEL, (__SAI2_CLKSOURCE__))
#define __HAL_RCC_SAI2_CONFIG(__SAI2_CLKSOURCE__ )\
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_SAI2SEL, (__SAI2_CLKSOURCE__))
#define __HAL_RCC_SDMMC1_CONFIG(__SDMMC1_CLKSOURCE__) \
                  do \
                  {  \
                    if((__SDMMC1_CLKSOURCE__) == RCC_SDMMC1CLKSOURCE_PLLP) \
                    { \
                      SET_BIT(RCC->CCIPR2, RCC_CCIPR2_SDMMCSEL); \
                    } \
                    else \
                    { \
                      CLEAR_BIT(RCC->CCIPR2, RCC_CCIPR2_SDMMCSEL); \
                      MODIFY_REG(RCC->CCIPR, RCC_CCIPR_CLK48SEL, (__SDMMC1_CLKSOURCE__)); \
                    } \
                  } while(0)
#define __HAL_RCC_SDMMC1_CONFIG(__SDMMC1_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_CLK48SEL, (__SDMMC1_CLKSOURCE__))
#define __HAL_RCC_SWPMI1_CONFIG(__SWPMI1_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_SWPMI1SEL, (__SWPMI1_CLKSOURCE__))
#define __HAL_RCC_UART4_CONFIG(__UART4_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_UART4SEL, (__UART4_CLKSOURCE__))
#define __HAL_RCC_UART5_CONFIG(__UART5_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_UART5SEL, (__UART5_CLKSOURCE__))
#define __HAL_RCC_USART1_CONFIG(__USART1_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_USART1SEL, (__USART1_CLKSOURCE__))
#define __HAL_RCC_USART2_CONFIG(__USART2_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_USART2SEL, (__USART2_CLKSOURCE__))
#define __HAL_RCC_USART3_CONFIG(__USART3_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_USART3SEL, (__USART3_CLKSOURCE__))
#define __HAL_RCC_USB_CONFIG(__USB_CLKSOURCE__) \
                  MODIFY_REG(RCC->CCIPR, RCC_CCIPR_CLK48SEL, (__USB_CLKSOURCE__))
