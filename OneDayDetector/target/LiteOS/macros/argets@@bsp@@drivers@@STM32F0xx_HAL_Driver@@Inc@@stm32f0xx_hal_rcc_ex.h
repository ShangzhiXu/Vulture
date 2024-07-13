#define IS_RCC_CECCLKSOURCE(SOURCE)  (((SOURCE) == RCC_CECCLKSOURCE_HSI) || \
                                      ((SOURCE) == RCC_CECCLKSOURCE_LSE))
#define IS_RCC_CRS_ERRORLIMIT(_VALUE_) (((_VALUE_) <= 0xFFU))
#define IS_RCC_CRS_FREQERRORDIR(_DIR_) (((_DIR_) == RCC_CRS_FREQERRORDIR_UP) || \
                                        ((_DIR_) == RCC_CRS_FREQERRORDIR_DOWN))
#define IS_RCC_CRS_HSI48CALIBRATION(_VALUE_) (((_VALUE_) <= 0x3FU))
#define IS_RCC_CRS_RELOADVALUE(_VALUE_) (((_VALUE_) <= 0xFFFFU))
#define IS_RCC_CRS_SYNC_DIV(_DIV_) (((_DIV_) == RCC_CRS_SYNC_DIV1)  || ((_DIV_) == RCC_CRS_SYNC_DIV2)  || \
                                    ((_DIV_) == RCC_CRS_SYNC_DIV4)  || ((_DIV_) == RCC_CRS_SYNC_DIV8)  || \
                                    ((_DIV_) == RCC_CRS_SYNC_DIV16) || ((_DIV_) == RCC_CRS_SYNC_DIV32) || \
                                    ((_DIV_) == RCC_CRS_SYNC_DIV64) || ((_DIV_) == RCC_CRS_SYNC_DIV128))
#define IS_RCC_CRS_SYNC_POLARITY(_POLARITY_) (((_POLARITY_) == RCC_CRS_SYNC_POLARITY_RISING) || \
                                              ((_POLARITY_) == RCC_CRS_SYNC_POLARITY_FALLING))
#define IS_RCC_CRS_SYNC_SOURCE(_SOURCE_) (((_SOURCE_) == RCC_CRS_SYNC_SOURCE_GPIO) || \
                                          ((_SOURCE_) == RCC_CRS_SYNC_SOURCE_LSE)  || \
                                          ((_SOURCE_) == RCC_CRS_SYNC_SOURCE_USB))
#define IS_RCC_HSI48(HSI48) (((HSI48) == RCC_HSI48_OFF) || ((HSI48) == RCC_HSI48_ON))
#define IS_RCC_LSE_DRIVE(__DRIVE__) (((__DRIVE__) == RCC_LSEDRIVE_LOW)        || \
                                     ((__DRIVE__) == RCC_LSEDRIVE_MEDIUMLOW)  || \
                                     ((__DRIVE__) == RCC_LSEDRIVE_MEDIUMHIGH) || \
                                     ((__DRIVE__) == RCC_LSEDRIVE_HIGH))
#define IS_RCC_MCO1SOURCE(SOURCE)  (((SOURCE) == RCC_MCO1SOURCE_NOCLOCK)     || \
                                   ((SOURCE) == RCC_MCO1SOURCE_LSI)          || \
                                   ((SOURCE) == RCC_MCO1SOURCE_LSE)          || \
                                   ((SOURCE) == RCC_MCO1SOURCE_SYSCLK)       || \
                                   ((SOURCE) == RCC_MCO1SOURCE_HSI)          || \
                                   ((SOURCE) == RCC_MCO1SOURCE_HSE)          || \
                                   ((SOURCE) == RCC_MCO1SOURCE_PLLCLK)       || \
                                   ((SOURCE) == RCC_MCO1SOURCE_PLLCLK_DIV2)  || \
                                   ((SOURCE) == RCC_MCO1SOURCE_HSI14))
#define IS_RCC_MCODIV(DIV) (((DIV) == RCC_MCODIV_1)  || ((DIV) == RCC_MCODIV_2)   || \
                            ((DIV) == RCC_MCODIV_4)  || ((DIV) == RCC_MCODIV_8)   || \
                            ((DIV) == RCC_MCODIV_16) || ((DIV) == RCC_MCODIV_32)  || \
                            ((DIV) == RCC_MCODIV_64) || ((DIV) == RCC_MCODIV_128))
#define IS_RCC_OSCILLATORTYPE(OSCILLATOR) (((OSCILLATOR) == RCC_OSCILLATORTYPE_NONE)                               || \
                                           (((OSCILLATOR) & RCC_OSCILLATORTYPE_HSE) == RCC_OSCILLATORTYPE_HSE)     || \
                                           (((OSCILLATOR) & RCC_OSCILLATORTYPE_HSI) == RCC_OSCILLATORTYPE_HSI)     || \
                                           (((OSCILLATOR) & RCC_OSCILLATORTYPE_LSI) == RCC_OSCILLATORTYPE_LSI)     || \
                                           (((OSCILLATOR) & RCC_OSCILLATORTYPE_LSE) == RCC_OSCILLATORTYPE_LSE)     || \
                                           (((OSCILLATOR) & RCC_OSCILLATORTYPE_HSI14) == RCC_OSCILLATORTYPE_HSI14) || \
                                           (((OSCILLATOR) & RCC_OSCILLATORTYPE_HSI48) == RCC_OSCILLATORTYPE_HSI48))
#define IS_RCC_PERIPHCLOCK(SELECTION) ((SELECTION) <= (RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_I2C1 | \
                                                     RCC_PERIPHCLK_RTC))
#define IS_RCC_PERIPHCLOCK(SELECTION) ((SELECTION) <= (RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_I2C1 | \
                                                     RCC_PERIPHCLK_RTC    | RCC_PERIPHCLK_USB))
#define IS_RCC_PERIPHCLOCK(SELECTION) ((SELECTION) <= (RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_I2C1   | \
                                                     RCC_PERIPHCLK_CEC    | RCC_PERIPHCLK_RTC    | \
                                                     RCC_PERIPHCLK_USB))
#define IS_RCC_PERIPHCLOCK(SELECTION) ((SELECTION) <= (RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_I2C1 | \
                                                     RCC_PERIPHCLK_CEC    | RCC_PERIPHCLK_RTC))
#define IS_RCC_PERIPHCLOCK(SELECTION) ((SELECTION) <= (RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_USART2 | \
                                                     RCC_PERIPHCLK_I2C1   | RCC_PERIPHCLK_CEC    | \
                                                     RCC_PERIPHCLK_RTC))
#define IS_RCC_PERIPHCLOCK(SELECTION) ((SELECTION) <= (RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_USART2 | \
                                                     RCC_PERIPHCLK_I2C1   | RCC_PERIPHCLK_CEC    | \
                                                     RCC_PERIPHCLK_RTC    | RCC_PERIPHCLK_USB))
#define IS_RCC_PERIPHCLOCK(SELECTION) ((SELECTION) <= (RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_USART2 | \
                                                     RCC_PERIPHCLK_I2C1   | RCC_PERIPHCLK_CEC    | \
                                                     RCC_PERIPHCLK_RTC    | RCC_PERIPHCLK_USART3 ))
#define IS_RCC_PLLSOURCE(SOURCE) (((SOURCE) == RCC_PLLSOURCE_HSI)   || \
                                  ((SOURCE) == RCC_PLLSOURCE_HSI48) || \
                                  ((SOURCE) == RCC_PLLSOURCE_HSE))
#define IS_RCC_SYSCLKSOURCE(SOURCE)  (((SOURCE) == RCC_SYSCLKSOURCE_HSI)    || \
                                      ((SOURCE) == RCC_SYSCLKSOURCE_HSE)    || \
                                      ((SOURCE) == RCC_SYSCLKSOURCE_PLLCLK) || \
                                      ((SOURCE) == RCC_SYSCLKSOURCE_HSI48))
#define IS_RCC_SYSCLKSOURCE_STATUS(SOURCE) (((SOURCE) == RCC_SYSCLKSOURCE_STATUS_HSI)    || \
                                            ((SOURCE) == RCC_SYSCLKSOURCE_STATUS_HSE)    || \
                                            ((SOURCE) == RCC_SYSCLKSOURCE_STATUS_PLLCLK) || \
                                            ((SOURCE) == RCC_SYSCLKSOURCE_STATUS_HSI48))
#define IS_RCC_USART2CLKSOURCE(SOURCE)  (((SOURCE) == RCC_USART2CLKSOURCE_PCLK1)  || \
                                         ((SOURCE) == RCC_USART2CLKSOURCE_SYSCLK) || \
                                         ((SOURCE) == RCC_USART2CLKSOURCE_LSE)    || \
                                         ((SOURCE) == RCC_USART2CLKSOURCE_HSI))
#define IS_RCC_USART3CLKSOURCE(SOURCE)  (((SOURCE) == RCC_USART3CLKSOURCE_PCLK1)  || \
                                         ((SOURCE) == RCC_USART3CLKSOURCE_SYSCLK) || \
                                         ((SOURCE) == RCC_USART3CLKSOURCE_LSE)    || \
                                         ((SOURCE) == RCC_USART3CLKSOURCE_HSI))
#define IS_RCC_USBCLKSOURCE(SOURCE)  (((SOURCE) == RCC_USBCLKSOURCE_HSI48) || \
                                      ((SOURCE) == RCC_USBCLKSOURCE_PLL))
#define IS_RCC_USBCLKSOURCE(SOURCE)  (((SOURCE) == RCC_USBCLKSOURCE_NONE) || \
                                      ((SOURCE) == RCC_USBCLKSOURCE_PLL))
#define __HAL_RCC_CAN1_CLK_DISABLE()    (RCC->APB1ENR &= ~(RCC_APB1ENR_CANEN))
#define __HAL_RCC_CAN1_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_CANEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_CANEN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_CAN1_FORCE_RESET()      (RCC->APB1RSTR |= (RCC_APB1RSTR_CANRST))
#define __HAL_RCC_CAN1_IS_CLK_DISABLED()     ((RCC->APB1ENR & (RCC_APB1ENR_CAN1EN)) == RESET)
#define __HAL_RCC_CAN1_IS_CLK_ENABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_CAN1EN)) != RESET)
#define __HAL_RCC_CAN1_RELEASE_RESET()    (RCC->APB1RSTR &= ~(RCC_APB1RSTR_CANRST))
#define __HAL_RCC_CEC_CLK_DISABLE()    (RCC->APB1ENR &= ~(RCC_APB1ENR_CECEN))
#define __HAL_RCC_CEC_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_CECEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_CECEN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_CEC_CONFIG(__CECCLKSOURCE__) \
                  MODIFY_REG(RCC->CFGR3, RCC_CFGR3_CECSW, (uint32_t)(__CECCLKSOURCE__))
#define __HAL_RCC_CEC_FORCE_RESET()      (RCC->APB1RSTR |= (RCC_APB1RSTR_CECRST))
#define __HAL_RCC_CEC_IS_CLK_DISABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_CECEN)) == RESET)
#define __HAL_RCC_CEC_IS_CLK_ENABLED()       ((RCC->APB1ENR & (RCC_APB1ENR_CECEN)) != RESET)
#define __HAL_RCC_CEC_RELEASE_RESET()    (RCC->APB1RSTR &= ~(RCC_APB1RSTR_CECRST))
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
                                               } while(0U)
#define __HAL_RCC_CRS_CLEAR_IT(__INTERRUPT__)  do { \
                                                 if(((__INTERRUPT__) & RCC_CRS_IT_ERROR_MASK) != RESET) \
                                                 { \
                                                   WRITE_REG(CRS->ICR, CRS_ICR_ERRC | ((__INTERRUPT__) & ~RCC_CRS_IT_ERROR_MASK)); \
                                                 } \
                                                 else \
                                                 { \
                                                   WRITE_REG(CRS->ICR, (__INTERRUPT__)); \
                                                 } \
                                               } while(0U)
#define __HAL_RCC_CRS_CLK_DISABLE()    (RCC->APB1ENR &= ~(RCC_APB1ENR_CRSEN))
#define __HAL_RCC_CRS_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_CRSEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_CRSEN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_CRS_DISABLE_IT(__INTERRUPT__)  CLEAR_BIT(CRS->CR, (__INTERRUPT__))
#define __HAL_RCC_CRS_ENABLE_IT(__INTERRUPT__)   SET_BIT(CRS->CR, (__INTERRUPT__))
#define __HAL_RCC_CRS_FORCE_RESET()      (RCC->APB1RSTR |= (RCC_APB1RSTR_CRSRST))
#define __HAL_RCC_CRS_FREQ_ERROR_COUNTER_DISABLE() CLEAR_BIT(CRS->CR, CRS_CR_CEN)
#define __HAL_RCC_CRS_FREQ_ERROR_COUNTER_ENABLE()  SET_BIT(CRS->CR, CRS_CR_CEN)
#define __HAL_RCC_CRS_GET_FLAG(__FLAG__)  (READ_BIT(CRS->ISR, (__FLAG__)) == (__FLAG__))
#define __HAL_RCC_CRS_GET_IT_SOURCE(__INTERRUPT__)  ((READ_BIT(CRS->CR, (__INTERRUPT__)) != RESET) ? SET : RESET)
#define __HAL_RCC_CRS_IS_CLK_DISABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_CRSEN)) == RESET)
#define __HAL_RCC_CRS_IS_CLK_ENABLED()       ((RCC->APB1ENR & (RCC_APB1ENR_CRSEN)) != RESET)
#define __HAL_RCC_CRS_RELEASE_RESET()    (RCC->APB1RSTR &= ~(RCC_APB1RSTR_CRSRST))
#define __HAL_RCC_CRS_RELOADVALUE_CALCULATE(__FTARGET__, __FSYNC__)  (((__FTARGET__) / (__FSYNC__)) - 1U)
#define __HAL_RCC_DAC1_CLK_DISABLE()   (RCC->APB1ENR &= ~(RCC_APB1ENR_DACEN))
#define __HAL_RCC_DAC1_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_DACEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_DACEN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_DAC1_FORCE_RESET()     (RCC->APB1RSTR |= (RCC_APB1RSTR_DACRST))
#define __HAL_RCC_DAC1_IS_CLK_DISABLED()     ((RCC->APB1ENR & (RCC_APB1ENR_DAC1EN)) == RESET)
#define __HAL_RCC_DAC1_IS_CLK_ENABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_DAC1EN)) != RESET)
#define __HAL_RCC_DAC1_RELEASE_RESET()   (RCC->APB1RSTR &= ~(RCC_APB1RSTR_DACRST))
#define __HAL_RCC_DMA2_CLK_DISABLE()        (RCC->AHBENR &= ~(RCC_AHBENR_DMA2EN))
#define __HAL_RCC_DMA2_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->AHBENR, RCC_AHBENR_DMA2EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->AHBENR, RCC_AHBENR_DMA2EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_DMA2_IS_CLK_DISABLED()     ((RCC->AHBENR & (RCC_AHBENR_DMA2EN)) == RESET)
#define __HAL_RCC_DMA2_IS_CLK_ENABLED()      ((RCC->AHBENR & (RCC_AHBENR_DMA2EN)) != RESET)
#define __HAL_RCC_GET_CEC_SOURCE() ((uint32_t)(READ_BIT(RCC->CFGR3, RCC_CFGR3_CECSW)))
#define __HAL_RCC_GET_HSI48_STATE() \
                  (((uint32_t)(READ_BIT(RCC->CR2, RCC_CR2_HSI48ON)) != RESET) ? RCC_HSI48_ON : RCC_HSI48_OFF)  
#define __HAL_RCC_GET_USART2_SOURCE() ((uint32_t)(READ_BIT(RCC->CFGR3, RCC_CFGR3_USART2SW)))
#define __HAL_RCC_GET_USART3_SOURCE() ((uint32_t)(READ_BIT(RCC->CFGR3, RCC_CFGR3_USART3SW)))
#define __HAL_RCC_GET_USB_SOURCE() ((uint32_t)(READ_BIT(RCC->CFGR3, RCC_CFGR3_USBSW)))
#define __HAL_RCC_GPIOD_CLK_DISABLE()        (RCC->AHBENR &= ~(RCC_AHBENR_GPIODEN))
#define __HAL_RCC_GPIOD_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->AHBENR, RCC_AHBENR_GPIODEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->AHBENR, RCC_AHBENR_GPIODEN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_GPIOD_FORCE_RESET()   (RCC->AHBRSTR |= (RCC_AHBRSTR_GPIODRST))
#define __HAL_RCC_GPIOD_IS_CLK_DISABLED()    ((RCC->AHBENR & (RCC_AHBENR_GPIODEN)) == RESET)
#define __HAL_RCC_GPIOD_IS_CLK_ENABLED()     ((RCC->AHBENR & (RCC_AHBENR_GPIODEN)) != RESET)
#define __HAL_RCC_GPIOD_RELEASE_RESET() (RCC->AHBRSTR &= ~(RCC_AHBRSTR_GPIODRST))
#define __HAL_RCC_GPIOE_CLK_DISABLE()        (RCC->AHBENR &= ~(RCC_AHBENR_GPIOEEN))
#define __HAL_RCC_GPIOE_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->AHBENR, RCC_AHBENR_GPIOEEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->AHBENR, RCC_AHBENR_GPIOEEN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_GPIOE_FORCE_RESET()   (RCC->AHBRSTR |= (RCC_AHBRSTR_GPIOERST))
#define __HAL_RCC_GPIOE_IS_CLK_DISABLED()    ((RCC->AHBENR & (RCC_AHBENR_GPIOEEN)) == RESET)
#define __HAL_RCC_GPIOE_IS_CLK_ENABLED()     ((RCC->AHBENR & (RCC_AHBENR_GPIOEEN)) != RESET)
#define __HAL_RCC_GPIOE_RELEASE_RESET() (RCC->AHBRSTR &= ~(RCC_AHBRSTR_GPIOERST))
#define __HAL_RCC_HSI48_DISABLE() CLEAR_BIT(RCC->CR2, RCC_CR2_HSI48ON)
#define __HAL_RCC_HSI48_ENABLE()  SET_BIT(RCC->CR2, RCC_CR2_HSI48ON)
#define __HAL_RCC_I2C2_CLK_DISABLE()   (RCC->APB1ENR &= ~(RCC_APB1ENR_I2C2EN))
#define __HAL_RCC_I2C2_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_I2C2EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_I2C2EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_I2C2_FORCE_RESET()     (RCC->APB1RSTR |= (RCC_APB1RSTR_I2C2RST))
#define __HAL_RCC_I2C2_IS_CLK_DISABLED()     ((RCC->APB1ENR & (RCC_APB1ENR_I2C2EN)) == RESET)
#define __HAL_RCC_I2C2_IS_CLK_ENABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_I2C2EN)) != RESET)
#define __HAL_RCC_I2C2_RELEASE_RESET()   (RCC->APB1RSTR &= ~(RCC_APB1RSTR_I2C2RST))
#define __HAL_RCC_LSEDRIVE_CONFIG(__RCC_LSEDRIVE__) (MODIFY_REG(RCC->BDCR,\
        RCC_BDCR_LSEDRV, (uint32_t)(__RCC_LSEDRIVE__) ))
#define __HAL_RCC_SPI2_CLK_DISABLE()   (RCC->APB1ENR &= ~(RCC_APB1ENR_SPI2EN))
#define __HAL_RCC_SPI2_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_SPI2EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_SPI2EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_SPI2_FORCE_RESET()     (RCC->APB1RSTR |= (RCC_APB1RSTR_SPI2RST))
#define __HAL_RCC_SPI2_IS_CLK_DISABLED()     ((RCC->APB1ENR & (RCC_APB1ENR_SPI2EN)) == RESET)
#define __HAL_RCC_SPI2_IS_CLK_ENABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_SPI2EN)) != RESET)
#define __HAL_RCC_SPI2_RELEASE_RESET()   (RCC->APB1RSTR &= ~(RCC_APB1RSTR_SPI2RST))
#define __HAL_RCC_TIM15_CLK_DISABLE()   (RCC->APB2ENR &= ~(RCC_APB2ENR_TIM15EN))
#define __HAL_RCC_TIM15_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM15EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM15EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_TIM15_FORCE_RESET()    (RCC->APB2RSTR |= (RCC_APB2RSTR_TIM15RST))
#define __HAL_RCC_TIM15_IS_CLK_DISABLED()    ((RCC->APB2ENR & (RCC_APB2ENR_TIM15EN)) == RESET)
#define __HAL_RCC_TIM15_IS_CLK_ENABLED()     ((RCC->APB2ENR & (RCC_APB2ENR_TIM15EN)) != RESET)
#define __HAL_RCC_TIM15_RELEASE_RESET()  (RCC->APB2RSTR &= ~(RCC_APB2RSTR_TIM15RST))
#define __HAL_RCC_TIM2_CLK_DISABLE()   (RCC->APB1ENR &= ~(RCC_APB1ENR_TIM2EN))
#define __HAL_RCC_TIM2_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_TIM2EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_TIM2EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_TIM2_FORCE_RESET()     (RCC->APB1RSTR |= (RCC_APB1RSTR_TIM2RST))
#define __HAL_RCC_TIM2_IS_CLK_DISABLED()     ((RCC->APB1ENR & (RCC_APB1ENR_TIM2EN)) == RESET)
#define __HAL_RCC_TIM2_IS_CLK_ENABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_TIM2EN)) != RESET)
#define __HAL_RCC_TIM2_RELEASE_RESET()   (RCC->APB1RSTR &= ~(RCC_APB1RSTR_TIM2RST))
#define __HAL_RCC_TIM6_CLK_DISABLE()   (RCC->APB1ENR &= ~(RCC_APB1ENR_TIM6EN))
#define __HAL_RCC_TIM6_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_TIM6EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_TIM6EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_TIM6_FORCE_RESET()     (RCC->APB1RSTR |= (RCC_APB1RSTR_TIM6RST))
#define __HAL_RCC_TIM6_IS_CLK_DISABLED()     ((RCC->APB1ENR & (RCC_APB1ENR_TIM6EN)) == RESET)
#define __HAL_RCC_TIM6_IS_CLK_ENABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_TIM6EN)) != RESET)
#define __HAL_RCC_TIM6_RELEASE_RESET()   (RCC->APB1RSTR &= ~(RCC_APB1RSTR_TIM6RST))
#define __HAL_RCC_TIM7_CLK_DISABLE()   (RCC->APB1ENR &= ~(RCC_APB1ENR_TIM7EN))
#define __HAL_RCC_TIM7_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_TIM7EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_TIM7EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_TIM7_FORCE_RESET()     (RCC->APB1RSTR |= (RCC_APB1RSTR_TIM7RST))
#define __HAL_RCC_TIM7_IS_CLK_DISABLED()     ((RCC->APB1ENR & (RCC_APB1ENR_TIM7EN)) == RESET)
#define __HAL_RCC_TIM7_IS_CLK_ENABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_TIM7EN)) != RESET)
#define __HAL_RCC_TIM7_RELEASE_RESET()   (RCC->APB1RSTR &= ~(RCC_APB1RSTR_TIM7RST))
#define __HAL_RCC_TSC_CLK_DISABLE()          (RCC->AHBENR &= ~(RCC_AHBENR_TSCEN))
#define __HAL_RCC_TSC_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->AHBENR, RCC_AHBENR_TSCEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->AHBENR, RCC_AHBENR_TSCEN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_TSC_FORCE_RESET()     (RCC->AHBRSTR |= (RCC_AHBRSTR_TSCRST))
#define __HAL_RCC_TSC_IS_CLK_DISABLED()      ((RCC->AHBENR & (RCC_AHBENR_TSCEN)) == RESET)
#define __HAL_RCC_TSC_IS_CLK_ENABLED()       ((RCC->AHBENR & (RCC_AHBENR_TSCEN)) != RESET)
#define __HAL_RCC_TSC_RELEASE_RESET()   (RCC->AHBRSTR &= ~(RCC_AHBRSTR_TSCRST))
#define __HAL_RCC_USART2_CLK_DISABLE() (RCC->APB1ENR &= ~(RCC_APB1ENR_USART2EN))
#define __HAL_RCC_USART2_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_USART2EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_USART2EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_USART2_CONFIG(__USART2CLKSOURCE__) \
                  MODIFY_REG(RCC->CFGR3, RCC_CFGR3_USART2SW, (uint32_t)(__USART2CLKSOURCE__))
#define __HAL_RCC_USART2_FORCE_RESET()   (RCC->APB1RSTR |= (RCC_APB1RSTR_USART2RST))
#define __HAL_RCC_USART2_IS_CLK_DISABLED()   ((RCC->APB1ENR & (RCC_APB1ENR_USART2EN)) == RESET)
#define __HAL_RCC_USART2_IS_CLK_ENABLED()    ((RCC->APB1ENR & (RCC_APB1ENR_USART2EN)) != RESET)
#define __HAL_RCC_USART2_RELEASE_RESET() (RCC->APB1RSTR &= ~(RCC_APB1RSTR_USART2RST))
#define __HAL_RCC_USART3_CLK_DISABLE() (RCC->APB1ENR &= ~(RCC_APB1ENR_USART3EN))
#define __HAL_RCC_USART3_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_USART3EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_USART3EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_USART3_CONFIG(__USART3CLKSOURCE__) \
                  MODIFY_REG(RCC->CFGR3, RCC_CFGR3_USART3SW, (uint32_t)(__USART3CLKSOURCE__))
#define __HAL_RCC_USART3_FORCE_RESET()   (RCC->APB1RSTR |= (RCC_APB1RSTR_USART3RST))
#define __HAL_RCC_USART3_IS_CLK_DISABLED()   ((RCC->APB1ENR & (RCC_APB1ENR_USART3EN)) == RESET)
#define __HAL_RCC_USART3_IS_CLK_ENABLED()    ((RCC->APB1ENR & (RCC_APB1ENR_USART3EN)) != RESET)
#define __HAL_RCC_USART3_RELEASE_RESET() (RCC->APB1RSTR &= ~(RCC_APB1RSTR_USART3RST))
#define __HAL_RCC_USART4_CLK_DISABLE() (RCC->APB1ENR &= ~(RCC_APB1ENR_USART4EN))
#define __HAL_RCC_USART4_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_USART4EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_USART4EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_USART4_FORCE_RESET()   (RCC->APB1RSTR |= (RCC_APB1RSTR_USART4RST))
#define __HAL_RCC_USART4_IS_CLK_DISABLED()   ((RCC->APB1ENR & (RCC_APB1ENR_USART4EN)) == RESET)
#define __HAL_RCC_USART4_IS_CLK_ENABLED()    ((RCC->APB1ENR & (RCC_APB1ENR_USART4EN)) != RESET)
#define __HAL_RCC_USART4_RELEASE_RESET() (RCC->APB1RSTR &= ~(RCC_APB1RSTR_USART4RST))
#define __HAL_RCC_USART5_CLK_DISABLE()      (RCC->APB1ENR &= ~(RCC_APB1ENR_USART5EN))
#define __HAL_RCC_USART5_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_USART5EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_USART5EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_USART5_FORCE_RESET()    (RCC->APB1RSTR |= (RCC_APB1RSTR_USART5RST))
#define __HAL_RCC_USART5_IS_CLK_DISABLED()   ((RCC->APB1ENR & (RCC_APB1ENR_USART5EN)) == RESET)
#define __HAL_RCC_USART5_IS_CLK_ENABLED()    ((RCC->APB1ENR & (RCC_APB1ENR_USART5EN)) != RESET)
#define __HAL_RCC_USART5_RELEASE_RESET()  (RCC->APB1RSTR &= ~(RCC_APB1RSTR_USART5RST))
#define __HAL_RCC_USART6_CLK_DISABLE()      (RCC->APB2ENR &= ~(RCC_APB2ENR_USART6EN))
#define __HAL_RCC_USART6_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB2ENR, RCC_APB2ENR_USART6EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_USART6EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_USART6_FORCE_RESET()    (RCC->APB2RSTR |= (RCC_APB2RSTR_USART6RST))
#define __HAL_RCC_USART6_IS_CLK_DISABLED()   ((RCC->APB2ENR & (RCC_APB2ENR_USART6EN)) == RESET)
#define __HAL_RCC_USART6_IS_CLK_ENABLED()    ((RCC->APB2ENR & (RCC_APB2ENR_USART6EN)) != RESET)
#define __HAL_RCC_USART6_RELEASE_RESET()  (RCC->APB2RSTR &= ~(RCC_APB2RSTR_USART6RST))
#define __HAL_RCC_USART7_CLK_DISABLE()      (RCC->APB2ENR &= ~(RCC_APB2ENR_USART7EN))
#define __HAL_RCC_USART7_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB2ENR, RCC_APB2ENR_USART7EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_USART7EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_USART7_FORCE_RESET()    (RCC->APB2RSTR |= (RCC_APB2RSTR_USART7RST))
#define __HAL_RCC_USART7_IS_CLK_DISABLED()   ((RCC->APB2ENR & (RCC_APB2ENR_USART7EN)) == RESET)
#define __HAL_RCC_USART7_IS_CLK_ENABLED()    ((RCC->APB2ENR & (RCC_APB2ENR_USART7EN)) != RESET)
#define __HAL_RCC_USART7_RELEASE_RESET()  (RCC->APB2RSTR &= ~(RCC_APB2RSTR_USART7RST))
#define __HAL_RCC_USART8_CLK_DISABLE()      (RCC->APB2ENR &= ~(RCC_APB2ENR_USART8EN))
#define __HAL_RCC_USART8_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB2ENR, RCC_APB2ENR_USART8EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_USART8EN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_USART8_FORCE_RESET()    (RCC->APB2RSTR |= (RCC_APB2RSTR_USART8RST))
#define __HAL_RCC_USART8_IS_CLK_DISABLED()   ((RCC->APB2ENR & (RCC_APB2ENR_USART8EN)) == RESET)
#define __HAL_RCC_USART8_IS_CLK_ENABLED()    ((RCC->APB2ENR & (RCC_APB2ENR_USART8EN)) != RESET)
#define __HAL_RCC_USART8_RELEASE_RESET()  (RCC->APB2RSTR &= ~(RCC_APB2RSTR_USART8RST))
#define __HAL_RCC_USB_CLK_DISABLE()    (RCC->APB1ENR &= ~(RCC_APB1ENR_USBEN))
#define __HAL_RCC_USB_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_USBEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_USBEN);\
                                        UNUSED(tmpreg); \
                                      } while(0U)
#define __HAL_RCC_USB_CONFIG(__USBCLKSOURCE__) \
                  MODIFY_REG(RCC->CFGR3, RCC_CFGR3_USBSW, (uint32_t)(__USBCLKSOURCE__))
#define __HAL_RCC_USB_FORCE_RESET()      (RCC->APB1RSTR |= (RCC_APB1RSTR_USBRST))
#define __HAL_RCC_USB_IS_CLK_DISABLED()      ((RCC->APB1ENR & (RCC_APB1ENR_USBEN)) == RESET)
#define __HAL_RCC_USB_IS_CLK_ENABLED()       ((RCC->APB1ENR & (RCC_APB1ENR_USBEN)) != RESET)
#define __HAL_RCC_USB_RELEASE_RESET()    (RCC->APB1RSTR &= ~(RCC_APB1RSTR_USBRST))
