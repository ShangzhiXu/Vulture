#define IS_RCC_CLOCKTYPE(__CLK__)  ((1U <= (__CLK__)) && ((__CLK__) <= 15U))
#define IS_RCC_HCLK(__HCLK__) (((__HCLK__) == RCC_SYSCLK_DIV1)   || ((__HCLK__) == RCC_SYSCLK_DIV2)   || \
                               ((__HCLK__) == RCC_SYSCLK_DIV4)   || ((__HCLK__) == RCC_SYSCLK_DIV8)   || \
                               ((__HCLK__) == RCC_SYSCLK_DIV16)  || ((__HCLK__) == RCC_SYSCLK_DIV64)  || \
                               ((__HCLK__) == RCC_SYSCLK_DIV128) || ((__HCLK__) == RCC_SYSCLK_DIV256) || \
                               ((__HCLK__) == RCC_SYSCLK_DIV512))
#define IS_RCC_HSE(__HSE__)  (((__HSE__) == RCC_HSE_OFF) || ((__HSE__) == RCC_HSE_ON) || \
                              ((__HSE__) == RCC_HSE_BYPASS))
#define IS_RCC_HSI(__HSI__)  (((__HSI__) == RCC_HSI_OFF) || ((__HSI__) == RCC_HSI_ON))
#define IS_RCC_HSI48(__HSI48__)  (((__HSI48__) == RCC_HSI48_OFF) || ((__HSI48__) == RCC_HSI48_ON))
#define IS_RCC_HSI_CALIBRATION_VALUE(__VALUE__) ((__VALUE__) <= (RCC_ICSCR_HSITRIM >> RCC_ICSCR_HSITRIM_Pos))
#define IS_RCC_LSE(__LSE__)  (((__LSE__) == RCC_LSE_OFF) || ((__LSE__) == RCC_LSE_ON) || \
                              ((__LSE__) == RCC_LSE_BYPASS))
#define IS_RCC_LSE_DRIVE(__DRIVE__) (((__DRIVE__) == RCC_LSEDRIVE_LOW)        || \
                                     ((__DRIVE__) == RCC_LSEDRIVE_MEDIUMLOW)  || \
                                     ((__DRIVE__) == RCC_LSEDRIVE_MEDIUMHIGH) || \
                                     ((__DRIVE__) == RCC_LSEDRIVE_HIGH))
#define IS_RCC_LSI(__LSI__)  (((__LSI__) == RCC_LSI_OFF) || ((__LSI__) == RCC_LSI_ON))
#define IS_RCC_MCO(__MCOX__) ((__MCOX__) == RCC_MCO1)
#define IS_RCC_MCO1SOURCE(__SOURCE__) (((__SOURCE__) == RCC_MCO1SOURCE_NOCLOCK) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_SYSCLK) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_MSI) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_HSI) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_HSE) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_PLLCLK) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_LSI) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_LSE) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_HSI48))
#define IS_RCC_MCO1SOURCE(__SOURCE__) (((__SOURCE__) == RCC_MCO1SOURCE_NOCLOCK) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_SYSCLK) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_MSI) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_HSI) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_HSE) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_PLLCLK) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_LSI) || \
                                       ((__SOURCE__) == RCC_MCO1SOURCE_LSE))
#define IS_RCC_MCODIV(__DIV__) (((__DIV__) == RCC_MCODIV_1) || ((__DIV__) == RCC_MCODIV_2) || \
                                ((__DIV__) == RCC_MCODIV_4) || ((__DIV__) == RCC_MCODIV_8) || \
                                ((__DIV__) == RCC_MCODIV_16))
#define IS_RCC_MSI(__MSI__)  (((__MSI__) == RCC_MSI_OFF) || ((__MSI__) == RCC_MSI_ON))
#define IS_RCC_MSICALIBRATION_VALUE(__VALUE__) ((__VALUE__) <= 255U)
#define IS_RCC_MSI_CLOCK_RANGE(__RANGE__) (((__RANGE__) == RCC_MSIRANGE_0)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_1)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_2)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_3)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_4)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_5)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_6)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_7)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_8)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_9)  || \
                                           ((__RANGE__) == RCC_MSIRANGE_10) || \
                                           ((__RANGE__) == RCC_MSIRANGE_11))
#define IS_RCC_MSI_STANDBY_CLOCK_RANGE(__RANGE__) (((__RANGE__) == RCC_MSIRANGE_4)  || \
                                                   ((__RANGE__) == RCC_MSIRANGE_5)  || \
                                                   ((__RANGE__) == RCC_MSIRANGE_6)  || \
                                                   ((__RANGE__) == RCC_MSIRANGE_7))
#define IS_RCC_OSCILLATORTYPE(__OSCILLATOR__) (((__OSCILLATOR__) == RCC_OSCILLATORTYPE_NONE)                               || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_HSE)   == RCC_OSCILLATORTYPE_HSE)   || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_HSI)   == RCC_OSCILLATORTYPE_HSI)   || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_HSI48) == RCC_OSCILLATORTYPE_HSI48) || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_MSI)   == RCC_OSCILLATORTYPE_MSI)   || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_LSI)   == RCC_OSCILLATORTYPE_LSI)   || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_LSE)   == RCC_OSCILLATORTYPE_LSE))
#define IS_RCC_OSCILLATORTYPE(__OSCILLATOR__) (((__OSCILLATOR__) == RCC_OSCILLATORTYPE_NONE)                           || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_HSE) == RCC_OSCILLATORTYPE_HSE) || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_HSI) == RCC_OSCILLATORTYPE_HSI) || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_MSI) == RCC_OSCILLATORTYPE_MSI) || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_LSI) == RCC_OSCILLATORTYPE_LSI) || \
                                               (((__OSCILLATOR__) & RCC_OSCILLATORTYPE_LSE) == RCC_OSCILLATORTYPE_LSE))
#define IS_RCC_PCLK(__PCLK__) (((__PCLK__) == RCC_HCLK_DIV1) || ((__PCLK__) == RCC_HCLK_DIV2) || \
                               ((__PCLK__) == RCC_HCLK_DIV4) || ((__PCLK__) == RCC_HCLK_DIV8) || \
                               ((__PCLK__) == RCC_HCLK_DIV16))
#define IS_RCC_PLL(__PLL__) (((__PLL__) == RCC_PLL_NONE) ||((__PLL__) == RCC_PLL_OFF) || \
                             ((__PLL__) == RCC_PLL_ON))
#define IS_RCC_PLLM_VALUE(__VALUE__) ((1U <= (__VALUE__)) && ((__VALUE__) <= 16U))
#define IS_RCC_PLLM_VALUE(__VALUE__) ((1U <= (__VALUE__)) && ((__VALUE__) <= 8U))
#define IS_RCC_PLLN_VALUE(__VALUE__) ((8U <= (__VALUE__)) && ((__VALUE__) <= 86U))
#define IS_RCC_PLLP_VALUE(__VALUE__) (((__VALUE__) >= 2U) && ((__VALUE__) <= 31U))
#define IS_RCC_PLLP_VALUE(__VALUE__) (((__VALUE__) == 7U) || ((__VALUE__) == 17U))
#define IS_RCC_PLLQ_VALUE(__VALUE__) (((__VALUE__) == 2U) || ((__VALUE__) == 4U) || \
                                      ((__VALUE__) == 6U) || ((__VALUE__) == 8U))
#define IS_RCC_PLLR_VALUE(__VALUE__) (((__VALUE__) == 2U) || ((__VALUE__) == 4U) || \
                                      ((__VALUE__) == 6U) || ((__VALUE__) == 8U))
#define IS_RCC_PLLSAI1CLOCKOUT_VALUE(__VALUE__) (((((__VALUE__) & RCC_PLLSAI1_SAI1CLK) == RCC_PLLSAI1_SAI1CLK)  || \
                                                  (((__VALUE__) & RCC_PLLSAI1_48M2CLK) == RCC_PLLSAI1_48M2CLK)  || \
                                                  (((__VALUE__) & RCC_PLLSAI1_ADC1CLK) == RCC_PLLSAI1_ADC1CLK)) && \
                                                 (((__VALUE__) & ~(RCC_PLLSAI1_SAI1CLK|RCC_PLLSAI1_48M2CLK|RCC_PLLSAI1_ADC1CLK)) == 0U))
#define IS_RCC_PLLSAI2CLOCKOUT_VALUE(__VALUE__) (((((__VALUE__) & RCC_PLLSAI2_SAI2CLK) == RCC_PLLSAI2_SAI2CLK)  || \
                                                  (((__VALUE__) & RCC_PLLSAI2_ADC2CLK) == RCC_PLLSAI2_ADC2CLK)) && \
                                                 (((__VALUE__) & ~(RCC_PLLSAI2_SAI2CLK|RCC_PLLSAI2_ADC2CLK)) == 0U))
#define IS_RCC_PLLSAI2CLOCKOUT_VALUE(__VALUE__) (((((__VALUE__) & RCC_PLLSAI2_SAI2CLK) == RCC_PLLSAI2_SAI2CLK)  || \
                                                  (((__VALUE__) & RCC_PLLSAI2_DSICLK)  == RCC_PLLSAI2_DSICLK)   || \
                                                  (((__VALUE__) & RCC_PLLSAI2_LTDCCLK) == RCC_PLLSAI2_LTDCCLK)) && \
                                                 (((__VALUE__) & ~(RCC_PLLSAI2_SAI2CLK|RCC_PLLSAI2_DSICLK|RCC_PLLSAI2_LTDCCLK)) == 0U))
#define IS_RCC_PLLSOURCE(__SOURCE__) (((__SOURCE__) == RCC_PLLSOURCE_NONE) || \
                                      ((__SOURCE__) == RCC_PLLSOURCE_MSI)  || \
                                      ((__SOURCE__) == RCC_PLLSOURCE_HSI)  || \
                                      ((__SOURCE__) == RCC_PLLSOURCE_HSE))
#define IS_RCC_RTCCLKSOURCE(__SOURCE__) (((__SOURCE__) == RCC_RTCCLKSOURCE_NONE)   || \
                                         ((__SOURCE__) == RCC_RTCCLKSOURCE_LSE)    || \
                                         ((__SOURCE__) == RCC_RTCCLKSOURCE_LSI)    || \
                                         ((__SOURCE__) == RCC_RTCCLKSOURCE_HSE_DIV32))
#define IS_RCC_STOP_WAKEUPCLOCK(__SOURCE__) (((__SOURCE__) == RCC_STOP_WAKEUPCLOCK_MSI) || \
                                             ((__SOURCE__) == RCC_STOP_WAKEUPCLOCK_HSI))
#define IS_RCC_SYSCLKSOURCE(__SOURCE__) (((__SOURCE__) == RCC_SYSCLKSOURCE_MSI) || \
                                         ((__SOURCE__) == RCC_SYSCLKSOURCE_HSI) || \
                                         ((__SOURCE__) == RCC_SYSCLKSOURCE_HSE) || \
                                         ((__SOURCE__) == RCC_SYSCLKSOURCE_PLLCLK))
#define __HAL_RCC_ADC_CLK_DISABLE()            CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_ADCEN)
#define __HAL_RCC_ADC_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_ADCEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_ADCEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_ADC_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_ADCSMEN)
#define __HAL_RCC_ADC_CLK_SLEEP_ENABLE()       SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_ADCSMEN)
#define __HAL_RCC_ADC_FORCE_RESET()            SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_ADCRST)
#define __HAL_RCC_ADC_IS_CLK_DISABLED()        (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_ADCEN) == RESET)
#define __HAL_RCC_ADC_IS_CLK_ENABLED()         (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_ADCEN) != RESET)
#define __HAL_RCC_ADC_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_ADCSMEN) == RESET)
#define __HAL_RCC_ADC_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_ADCSMEN) != RESET)
#define __HAL_RCC_ADC_RELEASE_RESET()          CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_ADCRST)
#define __HAL_RCC_AES_CLK_DISABLE()            CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_AESEN);
#define __HAL_RCC_AES_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_AESEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_AESEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_AES_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_AESSMEN)
#define __HAL_RCC_AES_CLK_SLEEP_ENABLE()       SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_AESSMEN)
#define __HAL_RCC_AES_FORCE_RESET()            SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_AESRST)
#define __HAL_RCC_AES_IS_CLK_DISABLED()        (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_AESEN) == RESET)
#define __HAL_RCC_AES_IS_CLK_ENABLED()         (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_AESEN) != RESET)
#define __HAL_RCC_AES_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_AESSMEN) == RESET)
#define __HAL_RCC_AES_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_AESSMEN) != RESET)
#define __HAL_RCC_AES_RELEASE_RESET()          CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_AESRST)
#define __HAL_RCC_AHB1_FORCE_RESET()           WRITE_REG(RCC->AHB1RSTR, 0xFFFFFFFFU)
#define __HAL_RCC_AHB1_RELEASE_RESET()         WRITE_REG(RCC->AHB1RSTR, 0x00000000U)
#define __HAL_RCC_AHB2_FORCE_RESET()           WRITE_REG(RCC->AHB2RSTR, 0xFFFFFFFFU)
#define __HAL_RCC_AHB2_RELEASE_RESET()         WRITE_REG(RCC->AHB2RSTR, 0x00000000U)
#define __HAL_RCC_AHB3_FORCE_RESET()           WRITE_REG(RCC->AHB3RSTR, 0xFFFFFFFFU)
#define __HAL_RCC_AHB3_RELEASE_RESET()         WRITE_REG(RCC->AHB3RSTR, 0x00000000U)
#define __HAL_RCC_APB1_FORCE_RESET()           WRITE_REG(RCC->APB1RSTR1, 0xFFFFFFFFU)
#define __HAL_RCC_APB1_RELEASE_RESET()         WRITE_REG(RCC->APB1RSTR1, 0x00000000U)
#define __HAL_RCC_APB2_FORCE_RESET()           WRITE_REG(RCC->APB2RSTR, 0xFFFFFFFFU)
#define __HAL_RCC_APB2_RELEASE_RESET()         WRITE_REG(RCC->APB2RSTR, 0x00000000U)
#define __HAL_RCC_BACKUPRESET_FORCE()   SET_BIT(RCC->BDCR, RCC_BDCR_BDRST)
#define __HAL_RCC_BACKUPRESET_RELEASE() CLEAR_BIT(RCC->BDCR, RCC_BDCR_BDRST)
#define __HAL_RCC_CAN1_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN1EN)
#define __HAL_RCC_CAN1_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_CAN1_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CAN1SMEN)
#define __HAL_RCC_CAN1_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CAN1SMEN)
#define __HAL_RCC_CAN1_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_CAN1RST)
#define __HAL_RCC_CAN1_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN1EN) == RESET)
#define __HAL_RCC_CAN1_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN1EN) != RESET)
#define __HAL_RCC_CAN1_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CAN1SMEN) == RESET)
#define __HAL_RCC_CAN1_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CAN1SMEN) != RESET)
#define __HAL_RCC_CAN1_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_CAN1RST)
#define __HAL_RCC_CAN2_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN2EN)
#define __HAL_RCC_CAN2_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_CAN2_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CAN2SMEN)
#define __HAL_RCC_CAN2_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CAN2SMEN)
#define __HAL_RCC_CAN2_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_CAN2RST)
#define __HAL_RCC_CAN2_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN2EN) == RESET)
#define __HAL_RCC_CAN2_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CAN2EN) != RESET)
#define __HAL_RCC_CAN2_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CAN2SMEN) == RESET)
#define __HAL_RCC_CAN2_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CAN2SMEN) != RESET)
#define __HAL_RCC_CAN2_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_CAN2RST)
#define __HAL_RCC_CLEAR_IT(__INTERRUPT__) WRITE_REG(RCC->CICR, (__INTERRUPT__))
#define __HAL_RCC_CLEAR_RESET_FLAGS() SET_BIT(RCC->CSR, RCC_CSR_RMVF)
#define __HAL_RCC_CRC_CLK_DISABLE()            CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN)
#define __HAL_RCC_CRC_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_CRC_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_CRCSMEN)
#define __HAL_RCC_CRC_CLK_SLEEP_ENABLE()       SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_CRCSMEN)
#define __HAL_RCC_CRC_FORCE_RESET()            SET_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_CRCRST)
#define __HAL_RCC_CRC_IS_CLK_DISABLED()        (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN) == RESET)
#define __HAL_RCC_CRC_IS_CLK_ENABLED()         (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN) != RESET)
#define __HAL_RCC_CRC_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_CRCSMEN) == RESET)
#define __HAL_RCC_CRC_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_CRCSMEN) != RESET)
#define __HAL_RCC_CRC_RELEASE_RESET()          CLEAR_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_CRCRST)
#define __HAL_RCC_CRS_CLK_DISABLE()            CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CRSEN);
#define __HAL_RCC_CRS_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CRSEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CRSEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_CRS_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CRSSMEN)
#define __HAL_RCC_CRS_CLK_SLEEP_ENABLE()       SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CRSSMEN)
#define __HAL_RCC_CRS_FORCE_RESET()            SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_CRSRST)
#define __HAL_RCC_CRS_IS_CLK_DISABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CRSEN) == RESET)
#define __HAL_RCC_CRS_IS_CLK_ENABLED()         (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_CRSEN) != RESET)
#define __HAL_RCC_CRS_IS_CLK_SLEEP_DISABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CRSSMEN) == RESET)
#define __HAL_RCC_CRS_IS_CLK_SLEEP_ENABLED()       (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_CRSSMEN) != RESET)
#define __HAL_RCC_CRS_RELEASE_RESET()          CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_CRSRST)
#define __HAL_RCC_DAC1_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_DAC1EN)
#define __HAL_RCC_DAC1_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_DAC1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_DAC1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_DAC1_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_DAC1SMEN)
#define __HAL_RCC_DAC1_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_DAC1SMEN)
#define __HAL_RCC_DAC1_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_DAC1RST)
#define __HAL_RCC_DAC1_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_DAC1EN) == RESET)
#define __HAL_RCC_DAC1_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_DAC1EN) != RESET)
#define __HAL_RCC_DAC1_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_DAC1SMEN) == RESET)
#define __HAL_RCC_DAC1_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_DAC1SMEN) != RESET)
#define __HAL_RCC_DAC1_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_DAC1RST)
#define __HAL_RCC_DCMI_CLK_DISABLE()           CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_DCMIEN)
#define __HAL_RCC_DCMI_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_DCMIEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_DCMIEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_DCMI_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_DCMISMEN)
#define __HAL_RCC_DCMI_CLK_SLEEP_ENABLE()      SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_DCMISMEN)
#define __HAL_RCC_DCMI_FORCE_RESET()           SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_DCMIRST)
#define __HAL_RCC_DCMI_IS_CLK_DISABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_DCMIEN) == RESET)
#define __HAL_RCC_DCMI_IS_CLK_ENABLED()        (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_DCMIEN) != RESET)
#define __HAL_RCC_DCMI_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_DCMISMEN) == RESET)
#define __HAL_RCC_DCMI_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_DCMISMEN) != RESET)
#define __HAL_RCC_DCMI_RELEASE_RESET()         CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_DCMIRST)
#define __HAL_RCC_DFSDM1_CLK_DISABLE()         CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_DFSDM1EN)
#define __HAL_RCC_DFSDM1_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_DFSDM1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_DFSDM1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_DFSDM1_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_DFSDM1SMEN)
#define __HAL_RCC_DFSDM1_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_DFSDM1SMEN)
#define __HAL_RCC_DFSDM1_FORCE_RESET()         SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_DFSDM1RST)
#define __HAL_RCC_DFSDM1_IS_CLK_DISABLED()     (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_DFSDM1EN) == RESET)
#define __HAL_RCC_DFSDM1_IS_CLK_ENABLED()      (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_DFSDM1EN) != RESET)
#define __HAL_RCC_DFSDM1_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_DFSDM1SMEN) == RESET)
#define __HAL_RCC_DFSDM1_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_DFSDM1SMEN) != RESET)
#define __HAL_RCC_DFSDM1_RELEASE_RESET()       CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_DFSDM1RST)
#define __HAL_RCC_DISABLE_IT(__INTERRUPT__) CLEAR_BIT(RCC->CIER, (__INTERRUPT__))
#define __HAL_RCC_DMA1_CLK_DISABLE()           CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN)
#define __HAL_RCC_DMA1_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_DMA1_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA1SMEN)
#define __HAL_RCC_DMA1_CLK_SLEEP_ENABLE()      SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA1SMEN)
#define __HAL_RCC_DMA1_FORCE_RESET()           SET_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_DMA1RST)
#define __HAL_RCC_DMA1_IS_CLK_DISABLED()       (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN) == RESET)
#define __HAL_RCC_DMA1_IS_CLK_ENABLED()        (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN) != RESET)
#define __HAL_RCC_DMA1_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA1SMEN) == RESET)
#define __HAL_RCC_DMA1_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA1SMEN) != RESET)
#define __HAL_RCC_DMA1_RELEASE_RESET()         CLEAR_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_DMA1RST)
#define __HAL_RCC_DMA2D_CLK_DISABLE()          CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2DEN)
#define __HAL_RCC_DMA2D_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2DEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2DEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_DMA2D_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA2DSMEN)
#define __HAL_RCC_DMA2D_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA2DSMEN)
#define __HAL_RCC_DMA2D_FORCE_RESET()          SET_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_DMA2DRST)
#define __HAL_RCC_DMA2D_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2DEN) == RESET)
#define __HAL_RCC_DMA2D_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2DEN) != RESET)
#define __HAL_RCC_DMA2D_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA2DSMEN) == RESET)
#define __HAL_RCC_DMA2D_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA2DSMEN) != RESET)
#define __HAL_RCC_DMA2D_RELEASE_RESET()        CLEAR_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_DMA2DRST)
#define __HAL_RCC_DMA2_CLK_DISABLE()           CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2EN)
#define __HAL_RCC_DMA2_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_DMA2_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA2SMEN)
#define __HAL_RCC_DMA2_CLK_SLEEP_ENABLE()      SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA2SMEN)
#define __HAL_RCC_DMA2_FORCE_RESET()           SET_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_DMA2RST)
#define __HAL_RCC_DMA2_IS_CLK_DISABLED()       (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2EN) == RESET)
#define __HAL_RCC_DMA2_IS_CLK_ENABLED()        (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA2EN) != RESET)
#define __HAL_RCC_DMA2_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA2SMEN) == RESET)
#define __HAL_RCC_DMA2_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMA2SMEN) != RESET)
#define __HAL_RCC_DMA2_RELEASE_RESET()         CLEAR_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_DMA2RST)
#define __HAL_RCC_DMAMUX1_CLK_DISABLE()        CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMAMUX1EN)
#define __HAL_RCC_DMAMUX1_CLK_ENABLE()         do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMAMUX1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMAMUX1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_DMAMUX1_CLK_SLEEP_DISABLE()  CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMAMUX1SMEN)
#define __HAL_RCC_DMAMUX1_CLK_SLEEP_ENABLE()   SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMAMUX1SMEN)
#define __HAL_RCC_DMAMUX1_FORCE_RESET()        SET_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_DMAMUX1RST)
#define __HAL_RCC_DMAMUX1_IS_CLK_DISABLED()    (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMAMUX1EN) == RESET)
#define __HAL_RCC_DMAMUX1_IS_CLK_ENABLED()     (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMAMUX1EN) != RESET)
#define __HAL_RCC_DMAMUX1_IS_CLK_SLEEP_DISABLED() (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMAMUX1SMEN) == RESET)
#define __HAL_RCC_DMAMUX1_IS_CLK_SLEEP_ENABLED() (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_DMAMUX1SMEN) != RESET)
#define __HAL_RCC_DMAMUX1_RELEASE_RESET()      CLEAR_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_DMAMUX1RST)
#define __HAL_RCC_DSI_CLK_DISABLE()            CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_DSIEN)
#define __HAL_RCC_DSI_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_DSIEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_DSIEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_DSI_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_DSISMEN)
#define __HAL_RCC_DSI_CLK_SLEEP_ENABLE()       SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_DSISMEN)
#define __HAL_RCC_DSI_FORCE_RESET()            SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_DSIRST)
#define __HAL_RCC_DSI_IS_CLK_DISABLED()        (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_DSIEN) == RESET)
#define __HAL_RCC_DSI_IS_CLK_ENABLED()         (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_DSIEN) != RESET)
#define __HAL_RCC_DSI_IS_CLK_SLEEP_DISABLED()      (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_DSISMEN) == RESET)
#define __HAL_RCC_DSI_IS_CLK_SLEEP_ENABLED()       (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_DSISMEN) != RESET)
#define __HAL_RCC_DSI_RELEASE_RESET()          CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_DSIRST)
#define __HAL_RCC_ENABLE_IT(__INTERRUPT__) SET_BIT(RCC->CIER, (__INTERRUPT__))
#define __HAL_RCC_FIREWALL_CLK_ENABLE()        do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_FWEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_FWEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_FIREWALL_IS_CLK_ENABLED()    (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_FWEN) != RESET)
#define __HAL_RCC_FLASH_CLK_DISABLE()          CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_FLASHEN)
#define __HAL_RCC_FLASH_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_FLASHEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_FLASHEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_FLASH_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_FLASHSMEN)
#define __HAL_RCC_FLASH_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_FLASHSMEN)
#define __HAL_RCC_FLASH_FORCE_RESET()          SET_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_FLASHRST)
#define __HAL_RCC_FLASH_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_FLASHEN) == RESET)
#define __HAL_RCC_FLASH_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_FLASHEN) != RESET)
#define __HAL_RCC_FLASH_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_FLASHSMEN) == RESET)
#define __HAL_RCC_FLASH_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_FLASHSMEN) != RESET)
#define __HAL_RCC_FLASH_RELEASE_RESET()        CLEAR_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_FLASHRST)
#define __HAL_RCC_FMC_CLK_DISABLE()            CLEAR_BIT(RCC->AHB3ENR, RCC_AHB3ENR_FMCEN)
#define __HAL_RCC_FMC_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB3ENR, RCC_AHB3ENR_FMCEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB3ENR, RCC_AHB3ENR_FMCEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_FMC_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_FMCSMEN)
#define __HAL_RCC_FMC_CLK_SLEEP_ENABLE()       SET_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_FMCSMEN)
#define __HAL_RCC_FMC_FORCE_RESET()            SET_BIT(RCC->AHB3RSTR, RCC_AHB3RSTR_FMCRST)
#define __HAL_RCC_FMC_IS_CLK_DISABLED()        (READ_BIT(RCC->AHB3ENR, RCC_AHB3ENR_FMCEN) == RESET)
#define __HAL_RCC_FMC_IS_CLK_ENABLED()         (READ_BIT(RCC->AHB3ENR, RCC_AHB3ENR_FMCEN) != RESET)
#define __HAL_RCC_FMC_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_FMCSMEN) == RESET)
#define __HAL_RCC_FMC_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_FMCSMEN) != RESET)
#define __HAL_RCC_FMC_RELEASE_RESET()          CLEAR_BIT(RCC->AHB3RSTR, RCC_AHB3RSTR_FMCRST)
#define __HAL_RCC_GET_FLAG(__FLAG__) (((((((__FLAG__) >> 5U) == 1U) ? RCC->CR :                    \
                                        ((((__FLAG__) >> 5U) == 4U) ? RCC->CRRCR :                 \
                                        ((((__FLAG__) >> 5U) == 2U) ? RCC->BDCR :                  \
                                        ((((__FLAG__) >> 5U) == 3U) ? RCC->CSR : RCC->CIFR)))) &   \
                                          (1U << ((__FLAG__) & RCC_FLAG_MASK))) != RESET) ? 1U : 0U)
#define __HAL_RCC_GET_FLAG(__FLAG__) (((((((__FLAG__) >> 5U) == 1U) ? RCC->CR :                    \
                                        ((((__FLAG__) >> 5U) == 2U) ? RCC->BDCR :                  \
                                        ((((__FLAG__) >> 5U) == 3U) ? RCC->CSR : RCC->CIFR))) &    \
                                          (1U << ((__FLAG__) & RCC_FLAG_MASK))) != RESET) ? 1U : 0U)
#define __HAL_RCC_GET_IT(__INTERRUPT__) (READ_BIT(RCC->CIFR, (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_RCC_GET_MSI_RANGE()                                              \
                  ((READ_BIT(RCC->CR, RCC_CR_MSIRGSEL) != RESET) ?             \
                   READ_BIT(RCC->CR, RCC_CR_MSIRANGE) :                        \
                   READ_BIT(RCC->CSR, RCC_CSR_MSISRANGE) >> 4U)
#define __HAL_RCC_GET_PLLCLKOUT_CONFIG(__PLLCLOCKOUT__)  READ_BIT(RCC->PLLCFGR, (__PLLCLOCKOUT__))
#define __HAL_RCC_GET_PLL_OSCSOURCE() (READ_BIT(RCC->PLLCFGR, RCC_PLLCFGR_PLLSRC))
#define  __HAL_RCC_GET_RTC_SOURCE() (READ_BIT(RCC->BDCR, RCC_BDCR_RTCSEL))
#define __HAL_RCC_GET_SYSCLK_SOURCE() (READ_BIT(RCC->CFGR, RCC_CFGR_SWS))
#define __HAL_RCC_GFXMMU_CLK_DISABLE()         CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GFXMMUEN)
#define __HAL_RCC_GFXMMU_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GFXMMUEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GFXMMUEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GFXMMU_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_GFXMMUSMEN)
#define __HAL_RCC_GFXMMU_CLK_SLEEP_ENABLE()    SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_GFXMMUSMEN)
#define __HAL_RCC_GFXMMU_FORCE_RESET()         SET_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_GFXMMURST)
#define __HAL_RCC_GFXMMU_IS_CLK_DISABLED()     (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GFXMMUEN) == RESET)
#define __HAL_RCC_GFXMMU_IS_CLK_ENABLED()      (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GFXMMUEN) != RESET)
#define __HAL_RCC_GFXMMU_IS_CLK_SLEEP_DISABLED() (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_GFXMMUSMEN) == RESET)
#define __HAL_RCC_GFXMMU_IS_CLK_SLEEP_ENABLED()  (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_GFXMMUSMEN) != RESET)
#define __HAL_RCC_GFXMMU_RELEASE_RESET()       CLEAR_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_GFXMMURST)
#define __HAL_RCC_GPIOA_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOAEN)
#define __HAL_RCC_GPIOA_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOAEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOAEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOA_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOASMEN)
#define __HAL_RCC_GPIOA_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOASMEN)
#define __HAL_RCC_GPIOA_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOARST)
#define __HAL_RCC_GPIOA_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOAEN) == RESET)
#define __HAL_RCC_GPIOA_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOAEN) != RESET)
#define __HAL_RCC_GPIOA_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOASMEN) == RESET)
#define __HAL_RCC_GPIOA_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOASMEN) != RESET)
#define __HAL_RCC_GPIOA_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOARST)
#define __HAL_RCC_GPIOB_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOBEN)
#define __HAL_RCC_GPIOB_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOBEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOBEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOB_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOBSMEN)
#define __HAL_RCC_GPIOB_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOBSMEN)
#define __HAL_RCC_GPIOB_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOBRST)
#define __HAL_RCC_GPIOB_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOBEN) == RESET)
#define __HAL_RCC_GPIOB_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOBEN) != RESET)
#define __HAL_RCC_GPIOB_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOBSMEN) == RESET)
#define __HAL_RCC_GPIOB_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOBSMEN) != RESET)
#define __HAL_RCC_GPIOB_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOBRST)
#define __HAL_RCC_GPIOC_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOCEN)
#define __HAL_RCC_GPIOC_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOCEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOCEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOC_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOCSMEN)
#define __HAL_RCC_GPIOC_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOCSMEN)
#define __HAL_RCC_GPIOC_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOCRST)
#define __HAL_RCC_GPIOC_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOCEN) == RESET)
#define __HAL_RCC_GPIOC_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOCEN) != RESET)
#define __HAL_RCC_GPIOC_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOCSMEN) == RESET)
#define __HAL_RCC_GPIOC_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOCSMEN) != RESET)
#define __HAL_RCC_GPIOC_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOCRST)
#define __HAL_RCC_GPIOD_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIODEN)
#define __HAL_RCC_GPIOD_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIODEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIODEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOD_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIODSMEN)
#define __HAL_RCC_GPIOD_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIODSMEN)
#define __HAL_RCC_GPIOD_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIODRST)
#define __HAL_RCC_GPIOD_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIODEN) == RESET)
#define __HAL_RCC_GPIOD_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIODEN) != RESET)
#define __HAL_RCC_GPIOD_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIODSMEN) == RESET)
#define __HAL_RCC_GPIOD_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIODSMEN) != RESET)
#define __HAL_RCC_GPIOD_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIODRST)
#define __HAL_RCC_GPIOE_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOEEN)
#define __HAL_RCC_GPIOE_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOEEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOEEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOE_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOESMEN)
#define __HAL_RCC_GPIOE_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOESMEN)
#define __HAL_RCC_GPIOE_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOERST)
#define __HAL_RCC_GPIOE_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOEEN) == RESET)
#define __HAL_RCC_GPIOE_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOEEN) != RESET)
#define __HAL_RCC_GPIOE_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOESMEN) == RESET)
#define __HAL_RCC_GPIOE_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOESMEN) != RESET)
#define __HAL_RCC_GPIOE_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOERST)
#define __HAL_RCC_GPIOF_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOFEN)
#define __HAL_RCC_GPIOF_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOFEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOFEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOF_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOFSMEN)
#define __HAL_RCC_GPIOF_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOFSMEN)
#define __HAL_RCC_GPIOF_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOFRST)
#define __HAL_RCC_GPIOF_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOFEN) == RESET)
#define __HAL_RCC_GPIOF_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOFEN) != RESET)
#define __HAL_RCC_GPIOF_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOFSMEN) == RESET)
#define __HAL_RCC_GPIOF_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOFSMEN) != RESET)
#define __HAL_RCC_GPIOF_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOFRST)
#define __HAL_RCC_GPIOG_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOGEN)
#define __HAL_RCC_GPIOG_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOGEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOGEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOG_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOGSMEN)
#define __HAL_RCC_GPIOG_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOGSMEN)
#define __HAL_RCC_GPIOG_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOGRST)
#define __HAL_RCC_GPIOG_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOGEN) == RESET)
#define __HAL_RCC_GPIOG_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOGEN) != RESET)
#define __HAL_RCC_GPIOG_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOGSMEN) == RESET)
#define __HAL_RCC_GPIOG_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOGSMEN) != RESET)
#define __HAL_RCC_GPIOG_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOGRST)
#define __HAL_RCC_GPIOH_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOHEN)
#define __HAL_RCC_GPIOH_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOHEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOHEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOH_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOHSMEN)
#define __HAL_RCC_GPIOH_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOHSMEN)
#define __HAL_RCC_GPIOH_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOHRST)
#define __HAL_RCC_GPIOH_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOHEN) == RESET)
#define __HAL_RCC_GPIOH_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOHEN) != RESET)
#define __HAL_RCC_GPIOH_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOHSMEN) == RESET)
#define __HAL_RCC_GPIOH_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOHSMEN) != RESET)
#define __HAL_RCC_GPIOH_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOHRST)
#define __HAL_RCC_GPIOI_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOIEN)
#define __HAL_RCC_GPIOI_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOIEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOIEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_GPIOI_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOISMEN)
#define __HAL_RCC_GPIOI_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOISMEN)
#define __HAL_RCC_GPIOI_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOIRST)
#define __HAL_RCC_GPIOI_IS_CLK_DISABLED()      (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOIEN) == RESET)
#define __HAL_RCC_GPIOI_IS_CLK_ENABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_GPIOIEN) != RESET)
#define __HAL_RCC_GPIOI_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOISMEN) == RESET)
#define __HAL_RCC_GPIOI_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_GPIOISMEN) != RESET)
#define __HAL_RCC_GPIOI_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_GPIOIRST)
#define __HAL_RCC_HASH_CLK_DISABLE()           CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_HASHEN)
#define __HAL_RCC_HASH_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_HASHEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_HASHEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_HASH_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_HASHSMEN)
#define __HAL_RCC_HASH_CLK_SLEEP_ENABLE()      SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_HASHSMEN)
#define __HAL_RCC_HASH_FORCE_RESET()           SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_HASHRST)
#define __HAL_RCC_HASH_IS_CLK_DISABLED()       (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_HASHEN) == RESET)
#define __HAL_RCC_HASH_IS_CLK_ENABLED()        (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_HASHEN) != RESET)
#define __HAL_RCC_HASH_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_HASHSMEN) == RESET)
#define __HAL_RCC_HASH_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_HASHSMEN) != RESET)
#define __HAL_RCC_HASH_RELEASE_RESET()         CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_HASHRST)
#define __HAL_RCC_HSE_CONFIG(__STATE__)                      \
                    do {                                     \
                      if((__STATE__) == RCC_HSE_ON)          \
                      {                                      \
                        SET_BIT(RCC->CR, RCC_CR_HSEON);      \
                      }                                      \
                      else if((__STATE__) == RCC_HSE_BYPASS) \
                      {                                      \
                        SET_BIT(RCC->CR, RCC_CR_HSEBYP);     \
                        SET_BIT(RCC->CR, RCC_CR_HSEON);      \
                      }                                      \
                      else                                   \
                      {                                      \
                        CLEAR_BIT(RCC->CR, RCC_CR_HSEON);    \
                        CLEAR_BIT(RCC->CR, RCC_CR_HSEBYP);   \
                      }                                      \
                    } while(0)
#define __HAL_RCC_HSI48_DISABLE() CLEAR_BIT(RCC->CRRCR, RCC_CRRCR_HSI48ON)
#define __HAL_RCC_HSI48_ENABLE()  SET_BIT(RCC->CRRCR, RCC_CRRCR_HSI48ON)
#define __HAL_RCC_HSIAUTOMATIC_START_DISABLE()  CLEAR_BIT(RCC->CR, RCC_CR_HSIASFS)
#define __HAL_RCC_HSIAUTOMATIC_START_ENABLE()   SET_BIT(RCC->CR, RCC_CR_HSIASFS)
#define __HAL_RCC_HSISTOP_DISABLE()    CLEAR_BIT(RCC->CR, RCC_CR_HSIKERON)
#define __HAL_RCC_HSISTOP_ENABLE()     SET_BIT(RCC->CR, RCC_CR_HSIKERON)
#define __HAL_RCC_HSI_CALIBRATIONVALUE_ADJUST(__HSICALIBRATIONVALUE__) \
                  MODIFY_REG(RCC->ICSCR, RCC_ICSCR_HSITRIM, (__HSICALIBRATIONVALUE__) << RCC_ICSCR_HSITRIM_Pos)
#define __HAL_RCC_HSI_DISABLE() CLEAR_BIT(RCC->CR, RCC_CR_HSION)
#define __HAL_RCC_HSI_ENABLE()  SET_BIT(RCC->CR, RCC_CR_HSION)
#define __HAL_RCC_I2C1_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C1EN)
#define __HAL_RCC_I2C1_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_I2C1_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C1SMEN)
#define __HAL_RCC_I2C1_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C1SMEN)
#define __HAL_RCC_I2C1_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_I2C1RST)
#define __HAL_RCC_I2C1_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C1EN) == RESET)
#define __HAL_RCC_I2C1_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C1EN) != RESET)
#define __HAL_RCC_I2C1_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C1SMEN) == RESET)
#define __HAL_RCC_I2C1_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C1SMEN) != RESET)
#define __HAL_RCC_I2C1_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_I2C1RST)
#define __HAL_RCC_I2C2_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C2EN)
#define __HAL_RCC_I2C2_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_I2C2_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C2SMEN)
#define __HAL_RCC_I2C2_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C2SMEN)
#define __HAL_RCC_I2C2_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_I2C2RST)
#define __HAL_RCC_I2C2_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C2EN) == RESET)
#define __HAL_RCC_I2C2_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C2EN) != RESET)
#define __HAL_RCC_I2C2_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C2SMEN) == RESET)
#define __HAL_RCC_I2C2_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C2SMEN) != RESET)
#define __HAL_RCC_I2C2_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_I2C2RST)
#define __HAL_RCC_I2C3_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C3EN)
#define __HAL_RCC_I2C3_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C3EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C3EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_I2C3_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C3SMEN)
#define __HAL_RCC_I2C3_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C3SMEN)
#define __HAL_RCC_I2C3_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_I2C3RST)
#define __HAL_RCC_I2C3_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C3EN) == RESET)
#define __HAL_RCC_I2C3_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_I2C3EN) != RESET)
#define __HAL_RCC_I2C3_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C3SMEN) == RESET)
#define __HAL_RCC_I2C3_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_I2C3SMEN) != RESET)
#define __HAL_RCC_I2C3_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_I2C3RST)
#define __HAL_RCC_I2C4_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR2, RCC_APB1ENR2_I2C4EN)
#define __HAL_RCC_I2C4_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR2, RCC_APB1ENR2_I2C4EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_I2C4EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_I2C4_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_I2C4SMEN)
#define __HAL_RCC_I2C4_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_I2C4SMEN)
#define __HAL_RCC_I2C4_FORCE_RESET()           SET_BIT(RCC->APB1RSTR2, RCC_APB1RSTR2_I2C4RST)
#define __HAL_RCC_I2C4_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_I2C4EN) == RESET)
#define __HAL_RCC_I2C4_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_I2C4EN) != RESET)
#define __HAL_RCC_I2C4_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_I2C4SMEN) == RESET)
#define __HAL_RCC_I2C4_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_I2C4SMEN) != RESET)
#define __HAL_RCC_I2C4_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR2, RCC_APB1RSTR2_I2C4RST)
#define __HAL_RCC_LCD_CLK_DISABLE()            CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LCDEN);
#define __HAL_RCC_LCD_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LCDEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LCDEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_LCD_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_LCDSMEN)
#define __HAL_RCC_LCD_CLK_SLEEP_ENABLE()       SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_LCDSMEN)
#define __HAL_RCC_LCD_FORCE_RESET()            SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_LCDRST)
#define __HAL_RCC_LCD_IS_CLK_DISABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LCDEN) == RESET)
#define __HAL_RCC_LCD_IS_CLK_ENABLED()         (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LCDEN) != RESET)
#define __HAL_RCC_LCD_IS_CLK_SLEEP_DISABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_LCDSMEN) == RESET)
#define __HAL_RCC_LCD_IS_CLK_SLEEP_ENABLED()       (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_LCDSMEN) != RESET)
#define __HAL_RCC_LCD_RELEASE_RESET()          CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_LCDRST)
#define __HAL_RCC_LPTIM1_CLK_DISABLE()         CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LPTIM1EN)
#define __HAL_RCC_LPTIM1_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LPTIM1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LPTIM1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_LPTIM1_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_LPTIM1SMEN)
#define __HAL_RCC_LPTIM1_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_LPTIM1SMEN)
#define __HAL_RCC_LPTIM1_FORCE_RESET()         SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_LPTIM1RST)
#define __HAL_RCC_LPTIM1_IS_CLK_DISABLED()     (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LPTIM1EN) == RESET)
#define __HAL_RCC_LPTIM1_IS_CLK_ENABLED()      (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_LPTIM1EN) != RESET)
#define __HAL_RCC_LPTIM1_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_LPTIM1SMEN) == RESET)
#define __HAL_RCC_LPTIM1_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_LPTIM1SMEN) != RESET)
#define __HAL_RCC_LPTIM1_RELEASE_RESET()       CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_LPTIM1RST)
#define __HAL_RCC_LPTIM2_CLK_DISABLE()         CLEAR_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPTIM2EN)
#define __HAL_RCC_LPTIM2_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPTIM2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPTIM2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_LPTIM2_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_LPTIM2SMEN)
#define __HAL_RCC_LPTIM2_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_LPTIM2SMEN)
#define __HAL_RCC_LPTIM2_FORCE_RESET()         SET_BIT(RCC->APB1RSTR2, RCC_APB1RSTR2_LPTIM2RST)
#define __HAL_RCC_LPTIM2_IS_CLK_DISABLED()     (READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPTIM2EN) == RESET)
#define __HAL_RCC_LPTIM2_IS_CLK_ENABLED()      (READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPTIM2EN) != RESET)
#define __HAL_RCC_LPTIM2_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_LPTIM2SMEN) == RESET)
#define __HAL_RCC_LPTIM2_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_LPTIM2SMEN) != RESET)
#define __HAL_RCC_LPTIM2_RELEASE_RESET()       CLEAR_BIT(RCC->APB1RSTR2, RCC_APB1RSTR2_LPTIM2RST)
#define __HAL_RCC_LPUART1_CLK_DISABLE()        CLEAR_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPUART1EN)
#define __HAL_RCC_LPUART1_CLK_ENABLE()         do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPUART1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPUART1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_LPUART1_CLK_SLEEP_DISABLE()  CLEAR_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_LPUART1SMEN)
#define __HAL_RCC_LPUART1_CLK_SLEEP_ENABLE()   SET_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_LPUART1SMEN)
#define __HAL_RCC_LPUART1_FORCE_RESET()        SET_BIT(RCC->APB1RSTR2, RCC_APB1RSTR2_LPUART1RST)
#define __HAL_RCC_LPUART1_IS_CLK_DISABLED()    (READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPUART1EN) == RESET)
#define __HAL_RCC_LPUART1_IS_CLK_ENABLED()     (READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_LPUART1EN) != RESET)
#define __HAL_RCC_LPUART1_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_LPUART1SMEN) == RESET)
#define __HAL_RCC_LPUART1_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_LPUART1SMEN) != RESET)
#define __HAL_RCC_LPUART1_RELEASE_RESET()      CLEAR_BIT(RCC->APB1RSTR2, RCC_APB1RSTR2_LPUART1RST)
#define __HAL_RCC_LSEDRIVE_CONFIG(__LSEDRIVE__) \
                  MODIFY_REG(RCC->BDCR, RCC_BDCR_LSEDRV, (__LSEDRIVE__))
#define __HAL_RCC_LSE_CONFIG(__STATE__)                        \
                    do {                                       \
                      if((__STATE__) == RCC_LSE_ON)            \
                      {                                        \
                        SET_BIT(RCC->BDCR, RCC_BDCR_LSEON);    \
                      }                                        \
                      else if((__STATE__) == RCC_LSE_BYPASS)   \
                      {                                        \
                        SET_BIT(RCC->BDCR, RCC_BDCR_LSEBYP);   \
                        SET_BIT(RCC->BDCR, RCC_BDCR_LSEON);    \
                      }                                        \
                      else                                     \
                      {                                        \
                        CLEAR_BIT(RCC->BDCR, RCC_BDCR_LSEON);  \
                        CLEAR_BIT(RCC->BDCR, RCC_BDCR_LSEBYP); \
                      }                                        \
                    } while(0)
#define __HAL_RCC_LSI_DISABLE()        CLEAR_BIT(RCC->CSR, RCC_CSR_LSION)
#define __HAL_RCC_LSI_ENABLE()         SET_BIT(RCC->CSR, RCC_CSR_LSION)
#define __HAL_RCC_LTDC_CLK_DISABLE()           CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_LTDCEN)
#define __HAL_RCC_LTDC_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_LTDCEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_LTDCEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_LTDC_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_LTDCSMEN)
#define __HAL_RCC_LTDC_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_LTDCSMEN)
#define __HAL_RCC_LTDC_FORCE_RESET()           SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_LTDCRST)
#define __HAL_RCC_LTDC_IS_CLK_DISABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_LTDCEN) == RESET)
#define __HAL_RCC_LTDC_IS_CLK_ENABLED()        (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_LTDCEN) != RESET)
#define __HAL_RCC_LTDC_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_LTDCSMEN) == RESET)
#define __HAL_RCC_LTDC_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_LTDCSMEN) != RESET)
#define __HAL_RCC_LTDC_RELEASE_RESET()         CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_LTDCRST)
#define __HAL_RCC_MCO1_CONFIG(__MCOCLKSOURCE__, __MCODIV__) \
                 MODIFY_REG(RCC->CFGR, (RCC_CFGR_MCOSEL | RCC_CFGR_MCOPRE), ((__MCOCLKSOURCE__) | (__MCODIV__)))
#define __HAL_RCC_MSI_CALIBRATIONVALUE_ADJUST(__MSICALIBRATIONVALUE__) \
                  MODIFY_REG(RCC->ICSCR, RCC_ICSCR_MSITRIM, (__MSICALIBRATIONVALUE__) << RCC_ICSCR_MSITRIM_Pos)
#define __HAL_RCC_MSI_DISABLE() CLEAR_BIT(RCC->CR, RCC_CR_MSION)
#define __HAL_RCC_MSI_ENABLE()  SET_BIT(RCC->CR, RCC_CR_MSION)
#define __HAL_RCC_MSI_RANGE_CONFIG(__MSIRANGEVALUE__) \
                  do {                                                         \
                    SET_BIT(RCC->CR, RCC_CR_MSIRGSEL);                         \
                    MODIFY_REG(RCC->CR, RCC_CR_MSIRANGE, (__MSIRANGEVALUE__)); \
                  } while(0)
#define __HAL_RCC_MSI_STANDBY_RANGE_CONFIG(__MSIRANGEVALUE__) \
                  MODIFY_REG(RCC->CSR, RCC_CSR_MSISRANGE, (__MSIRANGEVALUE__) << 4U)
#define __HAL_RCC_OPAMP_CLK_DISABLE()          CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_OPAMPEN)
#define __HAL_RCC_OPAMP_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_OPAMPEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_OPAMPEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_OPAMP_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_OPAMPSMEN)
#define __HAL_RCC_OPAMP_CLK_SLEEP_ENABLE()     SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_OPAMPSMEN)
#define __HAL_RCC_OPAMP_FORCE_RESET()          SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_OPAMPRST)
#define __HAL_RCC_OPAMP_IS_CLK_DISABLED()      (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_OPAMPEN) == RESET)
#define __HAL_RCC_OPAMP_IS_CLK_ENABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_OPAMPEN) != RESET)
#define __HAL_RCC_OPAMP_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_OPAMPSMEN) == RESET)
#define __HAL_RCC_OPAMP_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_OPAMPSMEN) != RESET)
#define __HAL_RCC_OPAMP_RELEASE_RESET()        CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_OPAMPRST)
#define __HAL_RCC_OSPI1_CLK_DISABLE()          CLEAR_BIT(RCC->AHB3ENR, RCC_AHB3ENR_OSPI1EN)
#define __HAL_RCC_OSPI1_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB3ENR, RCC_AHB3ENR_OSPI1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB3ENR, RCC_AHB3ENR_OSPI1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_OSPI1_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_OSPI1SMEN)
#define __HAL_RCC_OSPI1_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_OSPI1SMEN)
#define __HAL_RCC_OSPI1_FORCE_RESET()          SET_BIT(RCC->AHB3RSTR, RCC_AHB3RSTR_OSPI1RST)
#define __HAL_RCC_OSPI1_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_OSPI1SMEN) == RESET)
#define __HAL_RCC_OSPI1_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_OSPI1SMEN) != RESET)
#define __HAL_RCC_OSPI1_RELEASE_RESET()        CLEAR_BIT(RCC->AHB3RSTR, RCC_AHB3RSTR_OSPI1RST)
#define __HAL_RCC_OSPI2_CLK_DISABLE()          CLEAR_BIT(RCC->AHB3ENR, RCC_AHB3ENR_OSPI2EN)
#define __HAL_RCC_OSPI2_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB3ENR, RCC_AHB3ENR_OSPI2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB3ENR, RCC_AHB3ENR_OSPI2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_OSPI2_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_OSPI2SMEN)
#define __HAL_RCC_OSPI2_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_OSPI2SMEN)
#define __HAL_RCC_OSPI2_FORCE_RESET()          SET_BIT(RCC->AHB3RSTR, RCC_AHB3RSTR_OSPI2RST)
#define __HAL_RCC_OSPI2_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_OSPI2SMEN) == RESET)
#define __HAL_RCC_OSPI2_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_OSPI2SMEN) != RESET)
#define __HAL_RCC_OSPI2_RELEASE_RESET()        CLEAR_BIT(RCC->AHB3RSTR, RCC_AHB3RSTR_OSPI2RST)
#define __HAL_RCC_OSPIM_CLK_DISABLE()          CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_OSPIMEN)
#define __HAL_RCC_OSPIM_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_OSPIMEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_OSPIMEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_OSPIM_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_OSPIMSMEN)
#define __HAL_RCC_OSPIM_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_OSPIMSMEN)
#define __HAL_RCC_OSPIM_FORCE_RESET()          SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_OSPIMRST)
#define __HAL_RCC_OSPIM_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_OSPIMSMEN) == RESET)
#define __HAL_RCC_OSPIM_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_OSPIMSMEN) != RESET)
#define __HAL_RCC_OSPIM_RELEASE_RESET()        CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_OSPIMRST)
#define __HAL_RCC_PLLCLKOUT_DISABLE(__PLLCLOCKOUT__)  CLEAR_BIT(RCC->PLLCFGR, (__PLLCLOCKOUT__))
#define __HAL_RCC_PLLCLKOUT_ENABLE(__PLLCLOCKOUT__)   SET_BIT(RCC->PLLCFGR, (__PLLCLOCKOUT__))
#define __HAL_RCC_PLL_CONFIG(__PLLSOURCE__, __PLLM__, __PLLN__, __PLLP__, __PLLQ__,__PLLR__ ) \
                  (RCC->PLLCFGR = (uint32_t)(((__PLLM__) - 1U) << 4U) | (uint32_t)((__PLLN__) << 8U) | \
                   (__PLLSOURCE__) | (uint32_t)((((__PLLQ__) >> 1U) - 1U) << 21U) | (uint32_t)((((__PLLR__) >> 1U) - 1U) << 25U) | \
                   ((uint32_t)(__PLLP__) << 27U))
#define __HAL_RCC_PLL_CONFIG(__PLLSOURCE__, __PLLM__, __PLLN__, __PLLP__, __PLLQ__,__PLLR__ ) \
                  (RCC->PLLCFGR = (uint32_t)(((__PLLM__) - 1U) << 4U) | (uint32_t)((__PLLN__) << 8U) | \
                   (uint32_t)(((__PLLP__) >> 4U ) << 17U) | \
                   (__PLLSOURCE__) | (uint32_t)((((__PLLQ__) >> 1U) - 1U) << 21U) | (uint32_t)((((__PLLR__) >> 1U) - 1U) << 25U))
#define __HAL_RCC_PLL_DISABLE()        CLEAR_BIT(RCC->CR, RCC_CR_PLLON)
#define __HAL_RCC_PLL_ENABLE()         SET_BIT(RCC->CR, RCC_CR_PLLON)
#define __HAL_RCC_PLL_PLLM_CONFIG(__PLLM__) \
                  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLM, ((__PLLM__) - 1) << 4U)
#define __HAL_RCC_PLL_PLLSOURCE_CONFIG(__PLLSOURCE__) \
                  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLSRC, (__PLLSOURCE__))
#define __HAL_RCC_PWR_CLK_DISABLE()            CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_PWREN)
#define __HAL_RCC_PWR_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_PWREN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_PWREN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_PWR_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_PWRSMEN)
#define __HAL_RCC_PWR_CLK_SLEEP_ENABLE()       SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_PWRSMEN)
#define __HAL_RCC_PWR_FORCE_RESET()            SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_PWRRST)
#define __HAL_RCC_PWR_IS_CLK_DISABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_PWREN) == RESET)
#define __HAL_RCC_PWR_IS_CLK_ENABLED()         (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_PWREN) != RESET)
#define __HAL_RCC_PWR_IS_CLK_SLEEP_DISABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_PWRSMEN) == RESET)
#define __HAL_RCC_PWR_IS_CLK_SLEEP_ENABLED()       (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_PWRSMEN) != RESET)
#define __HAL_RCC_PWR_RELEASE_RESET()          CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_PWRRST)
#define __HAL_RCC_QSPI_CLK_DISABLE()           CLEAR_BIT(RCC->AHB3ENR, RCC_AHB3ENR_QSPIEN)
#define __HAL_RCC_QSPI_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB3ENR, RCC_AHB3ENR_QSPIEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB3ENR, RCC_AHB3ENR_QSPIEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_QSPI_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_QSPISMEN)
#define __HAL_RCC_QSPI_CLK_SLEEP_ENABLE()      SET_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_QSPISMEN)
#define __HAL_RCC_QSPI_FORCE_RESET()           SET_BIT(RCC->AHB3RSTR, RCC_AHB3RSTR_QSPIRST)
#define __HAL_RCC_QSPI_IS_CLK_DISABLED()       (READ_BIT(RCC->AHB3ENR, RCC_AHB3ENR_QSPIEN) == RESET)
#define __HAL_RCC_QSPI_IS_CLK_ENABLED()        (READ_BIT(RCC->AHB3ENR, RCC_AHB3ENR_QSPIEN) != RESET)
#define __HAL_RCC_QSPI_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_QSPISMEN) == RESET)
#define __HAL_RCC_QSPI_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->AHB3SMENR, RCC_AHB3SMENR_QSPISMEN) != RESET)
#define __HAL_RCC_QSPI_RELEASE_RESET()         CLEAR_BIT(RCC->AHB3RSTR, RCC_AHB3RSTR_QSPIRST)
#define __HAL_RCC_RNG_CLK_DISABLE()            CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_RNGEN)
#define __HAL_RCC_RNG_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_RNGEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_RNGEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_RNG_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_RNGSMEN)
#define __HAL_RCC_RNG_CLK_SLEEP_ENABLE()       SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_RNGSMEN)
#define __HAL_RCC_RNG_FORCE_RESET()            SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_RNGRST)
#define __HAL_RCC_RNG_IS_CLK_DISABLED()        (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_RNGEN) == RESET)
#define __HAL_RCC_RNG_IS_CLK_ENABLED()         (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_RNGEN) != RESET)
#define __HAL_RCC_RNG_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_RNGSMEN) == RESET)
#define __HAL_RCC_RNG_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_RNGSMEN) != RESET)
#define __HAL_RCC_RNG_RELEASE_RESET()          CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_RNGRST)
#define __HAL_RCC_RTCAPB_CLK_DISABLE()         CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_RTCAPBEN);
#define __HAL_RCC_RTCAPB_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_RTCAPBEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_RTCAPBEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_RTCAPB_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_RTCAPBSMEN)
#define __HAL_RCC_RTCAPB_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_RTCAPBSMEN)
#define __HAL_RCC_RTCAPB_IS_CLK_DISABLED()     (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_RTCAPBEN) == RESET)
#define __HAL_RCC_RTCAPB_IS_CLK_ENABLED()      (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_RTCAPBEN) != RESET)
#define __HAL_RCC_RTCAPB_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_RTCAPBSMEN) == RESET)
#define __HAL_RCC_RTCAPB_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_RTCAPBSMEN) != RESET)
#define __HAL_RCC_RTC_CONFIG(__RTC_CLKSOURCE__)  \
                  MODIFY_REG( RCC->BDCR, RCC_BDCR_RTCSEL, (__RTC_CLKSOURCE__))
#define __HAL_RCC_RTC_DISABLE()        CLEAR_BIT(RCC->BDCR, RCC_BDCR_RTCEN)
#define __HAL_RCC_RTC_ENABLE()         SET_BIT(RCC->BDCR, RCC_BDCR_RTCEN)
#define __HAL_RCC_SAI1_CLK_DISABLE()           CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI1EN)
#define __HAL_RCC_SAI1_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SAI1_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SAI1SMEN)
#define __HAL_RCC_SAI1_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SAI1SMEN)
#define __HAL_RCC_SAI1_FORCE_RESET()           SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SAI1RST)
#define __HAL_RCC_SAI1_IS_CLK_DISABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI1EN) == RESET)
#define __HAL_RCC_SAI1_IS_CLK_ENABLED()        (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI1EN) != RESET)
#define __HAL_RCC_SAI1_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SAI1SMEN) == RESET)
#define __HAL_RCC_SAI1_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SAI1SMEN) != RESET)
#define __HAL_RCC_SAI1_RELEASE_RESET()         CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SAI1RST)
#define __HAL_RCC_SAI2_CLK_DISABLE()           CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI2EN)
#define __HAL_RCC_SAI2_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SAI2_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SAI2SMEN)
#define __HAL_RCC_SAI2_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SAI2SMEN)
#define __HAL_RCC_SAI2_FORCE_RESET()           SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SAI2RST)
#define __HAL_RCC_SAI2_IS_CLK_DISABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI2EN) == RESET)
#define __HAL_RCC_SAI2_IS_CLK_ENABLED()        (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SAI2EN) != RESET)
#define __HAL_RCC_SAI2_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SAI2SMEN) == RESET)
#define __HAL_RCC_SAI2_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SAI2SMEN) != RESET)
#define __HAL_RCC_SAI2_RELEASE_RESET()         CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SAI2RST)
#define __HAL_RCC_SDMMC1_CLK_DISABLE()         CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_SDMMC1EN)
#define __HAL_RCC_SDMMC1_CLK_DISABLE()         CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_SDMMC1EN)
#define __HAL_RCC_SDMMC1_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_SDMMC1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SDMMC1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SDMMC1_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_SDMMC1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_SDMMC1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SDMMC1_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SDMMC1SMEN)
#define __HAL_RCC_SDMMC1_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SDMMC1SMEN)
#define __HAL_RCC_SDMMC1_CLK_SLEEP_ENABLE()    SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SDMMC1SMEN)
#define __HAL_RCC_SDMMC1_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SDMMC1SMEN)
#define __HAL_RCC_SDMMC1_FORCE_RESET()         SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_SDMMC1RST)
#define __HAL_RCC_SDMMC1_FORCE_RESET()         SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SDMMC1RST)
#define __HAL_RCC_SDMMC1_IS_CLK_DISABLED()     (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SDMMC1EN) == RESET)
#define __HAL_RCC_SDMMC1_IS_CLK_ENABLED()      (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SDMMC1EN) != RESET)
#define __HAL_RCC_SDMMC1_IS_CLK_SLEEP_DISABLED() (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SDMMC1SMEN) == RESET)
#define __HAL_RCC_SDMMC1_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SDMMC1SMEN) == RESET)
#define __HAL_RCC_SDMMC1_IS_CLK_SLEEP_ENABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SDMMC1SMEN) != RESET)
#define __HAL_RCC_SDMMC1_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SDMMC1SMEN) != RESET)
#define __HAL_RCC_SDMMC1_RELEASE_RESET()       CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_SDMMC1RST)
#define __HAL_RCC_SDMMC1_RELEASE_RESET()       CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SDMMC1RST)
#define __HAL_RCC_SPI1_CLK_DISABLE()           CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_SPI1EN)
#define __HAL_RCC_SPI1_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_SPI1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SPI1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SPI1_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SPI1SMEN)
#define __HAL_RCC_SPI1_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SPI1SMEN)
#define __HAL_RCC_SPI1_FORCE_RESET()           SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SPI1RST)
#define __HAL_RCC_SPI1_IS_CLK_DISABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SPI1EN) == RESET)
#define __HAL_RCC_SPI1_IS_CLK_ENABLED()        (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SPI1EN) != RESET)
#define __HAL_RCC_SPI1_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SPI1SMEN) == RESET)
#define __HAL_RCC_SPI1_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SPI1SMEN) != RESET)
#define __HAL_RCC_SPI1_RELEASE_RESET()         CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SPI1RST)
#define __HAL_RCC_SPI2_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI2EN)
#define __HAL_RCC_SPI2_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SPI2_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_SPI2SMEN)
#define __HAL_RCC_SPI2_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_SPI2SMEN)
#define __HAL_RCC_SPI2_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_SPI2RST)
#define __HAL_RCC_SPI2_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI2EN) == RESET)
#define __HAL_RCC_SPI2_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI2EN) != RESET)
#define __HAL_RCC_SPI2_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_SPI2SMEN) == RESET)
#define __HAL_RCC_SPI2_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_SPI2SMEN) != RESET)
#define __HAL_RCC_SPI2_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_SPI2RST)
#define __HAL_RCC_SPI3_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI3EN)
#define __HAL_RCC_SPI3_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI3EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI3EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SPI3_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_SPI3SMEN)
#define __HAL_RCC_SPI3_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_SPI3SMEN)
#define __HAL_RCC_SPI3_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_SPI3RST)
#define __HAL_RCC_SPI3_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI3EN) == RESET)
#define __HAL_RCC_SPI3_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_SPI3EN) != RESET)
#define __HAL_RCC_SPI3_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_SPI3SMEN) == RESET)
#define __HAL_RCC_SPI3_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_SPI3SMEN) != RESET)
#define __HAL_RCC_SPI3_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_SPI3RST)
#define __HAL_RCC_SRAM1_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_SRAM1SMEN)
#define __HAL_RCC_SRAM1_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_SRAM1SMEN)
#define __HAL_RCC_SRAM1_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_SRAM1SMEN) == RESET)
#define __HAL_RCC_SRAM1_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_SRAM1SMEN) != RESET)
#define __HAL_RCC_SRAM2_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SRAM2SMEN)
#define __HAL_RCC_SRAM2_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SRAM2SMEN)
#define __HAL_RCC_SRAM2_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SRAM2SMEN) == RESET)
#define __HAL_RCC_SRAM2_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SRAM2SMEN) != RESET)
#define __HAL_RCC_SRAM3_CLK_SLEEP_ENABLE()     SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SRAM3SMEN)
#define __HAL_RCC_SRAM3_IS_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SRAM3SMEN)
#define __HAL_RCC_SRAM3_IS_CLK_SLEEP_DISABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SRAM3SMEN) == RESET)
#define __HAL_RCC_SRAM3_IS_CLK_SLEEP_ENABLED()   (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_SRAM3SMEN) != RESET)
#define __HAL_RCC_SWPMI1_CLK_DISABLE()         CLEAR_BIT(RCC->APB1ENR2, RCC_APB1ENR2_SWPMI1EN)
#define __HAL_RCC_SWPMI1_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR2, RCC_APB1ENR2_SWPMI1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_SWPMI1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SWPMI1_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_SWPMI1SMEN)
#define __HAL_RCC_SWPMI1_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_SWPMI1SMEN)
#define __HAL_RCC_SWPMI1_FORCE_RESET()         SET_BIT(RCC->APB1RSTR2, RCC_APB1RSTR2_SWPMI1RST)
#define __HAL_RCC_SWPMI1_IS_CLK_DISABLED()     (READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_SWPMI1EN) == RESET)
#define __HAL_RCC_SWPMI1_IS_CLK_ENABLED()      (READ_BIT(RCC->APB1ENR2, RCC_APB1ENR2_SWPMI1EN) != RESET)
#define __HAL_RCC_SWPMI1_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_SWPMI1SMEN) == RESET)
#define __HAL_RCC_SWPMI1_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB1SMENR2, RCC_APB1SMENR2_SWPMI1SMEN) != RESET)
#define __HAL_RCC_SWPMI1_RELEASE_RESET()       CLEAR_BIT(RCC->APB1RSTR2, RCC_APB1RSTR2_SWPMI1RST)
#define __HAL_RCC_SYSCFG_CLK_DISABLE()         CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN)
#define __HAL_RCC_SYSCFG_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_SYSCFG_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SYSCFGSMEN)
#define __HAL_RCC_SYSCFG_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SYSCFGSMEN)
#define __HAL_RCC_SYSCFG_FORCE_RESET()         SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SYSCFGRST)
#define __HAL_RCC_SYSCFG_IS_CLK_DISABLED()     (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN) == RESET)
#define __HAL_RCC_SYSCFG_IS_CLK_ENABLED()      (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN) != RESET)
#define __HAL_RCC_SYSCFG_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SYSCFGSMEN) == RESET)
#define __HAL_RCC_SYSCFG_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_SYSCFGSMEN) != RESET)
#define __HAL_RCC_SYSCFG_RELEASE_RESET()       CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_SYSCFGRST)
#define __HAL_RCC_SYSCLK_CONFIG(__SYSCLKSOURCE__) \
                  MODIFY_REG(RCC->CFGR, RCC_CFGR_SW, (__SYSCLKSOURCE__))
#define __HAL_RCC_TIM15_CLK_DISABLE()          CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM15EN)
#define __HAL_RCC_TIM15_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM15EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM15EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM15_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM15SMEN)
#define __HAL_RCC_TIM15_CLK_SLEEP_ENABLE()     SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM15SMEN)
#define __HAL_RCC_TIM15_FORCE_RESET()          SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM15RST)
#define __HAL_RCC_TIM15_IS_CLK_DISABLED()      (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM15EN) == RESET)
#define __HAL_RCC_TIM15_IS_CLK_ENABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM15EN) != RESET)
#define __HAL_RCC_TIM15_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM15SMEN) == RESET)
#define __HAL_RCC_TIM15_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM15SMEN) != RESET)
#define __HAL_RCC_TIM15_RELEASE_RESET()        CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM15RST)
#define __HAL_RCC_TIM16_CLK_DISABLE()          CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM16EN)
#define __HAL_RCC_TIM16_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM16EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM16EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM16_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM16SMEN)
#define __HAL_RCC_TIM16_CLK_SLEEP_ENABLE()     SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM16SMEN)
#define __HAL_RCC_TIM16_FORCE_RESET()          SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM16RST)
#define __HAL_RCC_TIM16_IS_CLK_DISABLED()      (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM16EN) == RESET)
#define __HAL_RCC_TIM16_IS_CLK_ENABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM16EN) != RESET)
#define __HAL_RCC_TIM16_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM16SMEN) == RESET)
#define __HAL_RCC_TIM16_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM16SMEN) != RESET)
#define __HAL_RCC_TIM16_RELEASE_RESET()        CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM16RST)
#define __HAL_RCC_TIM17_CLK_DISABLE()          CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM17EN)
#define __HAL_RCC_TIM17_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM17EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM17EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM17_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM17SMEN)
#define __HAL_RCC_TIM17_CLK_SLEEP_ENABLE()     SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM17SMEN)
#define __HAL_RCC_TIM17_FORCE_RESET()          SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM17RST)
#define __HAL_RCC_TIM17_IS_CLK_DISABLED()      (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM17EN) == RESET)
#define __HAL_RCC_TIM17_IS_CLK_ENABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM17EN) != RESET)
#define __HAL_RCC_TIM17_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM17SMEN) == RESET)
#define __HAL_RCC_TIM17_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM17SMEN) != RESET)
#define __HAL_RCC_TIM17_RELEASE_RESET()        CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM17RST)
#define __HAL_RCC_TIM1_CLK_DISABLE()           CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM1EN)
#define __HAL_RCC_TIM1_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM1_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM1SMEN)
#define __HAL_RCC_TIM1_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM1SMEN)
#define __HAL_RCC_TIM1_FORCE_RESET()           SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM1RST)
#define __HAL_RCC_TIM1_IS_CLK_DISABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM1EN) == RESET)
#define __HAL_RCC_TIM1_IS_CLK_ENABLED()        (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM1EN) != RESET)
#define __HAL_RCC_TIM1_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM1SMEN) == RESET)
#define __HAL_RCC_TIM1_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM1SMEN) != RESET)
#define __HAL_RCC_TIM1_RELEASE_RESET()         CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM1RST)
#define __HAL_RCC_TIM2_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM2EN)
#define __HAL_RCC_TIM2_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM2_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM2SMEN)
#define __HAL_RCC_TIM2_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM2SMEN)
#define __HAL_RCC_TIM2_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM2RST)
#define __HAL_RCC_TIM2_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM2EN) == RESET)
#define __HAL_RCC_TIM2_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM2EN) != RESET)
#define __HAL_RCC_TIM2_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM2SMEN) == RESET)
#define __HAL_RCC_TIM2_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM2SMEN) != RESET)
#define __HAL_RCC_TIM2_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM2RST)
#define __HAL_RCC_TIM3_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM3EN)
#define __HAL_RCC_TIM3_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM3EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM3EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM3_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM3SMEN)
#define __HAL_RCC_TIM3_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM3SMEN)
#define __HAL_RCC_TIM3_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM3RST)
#define __HAL_RCC_TIM3_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM3EN) == RESET)
#define __HAL_RCC_TIM3_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM3EN) != RESET)
#define __HAL_RCC_TIM3_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM3SMEN) == RESET)
#define __HAL_RCC_TIM3_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM3SMEN) != RESET)
#define __HAL_RCC_TIM3_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM3RST)
#define __HAL_RCC_TIM4_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM4EN)
#define __HAL_RCC_TIM4_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM4EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM4EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM4_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM4SMEN)
#define __HAL_RCC_TIM4_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM4SMEN)
#define __HAL_RCC_TIM4_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM4RST)
#define __HAL_RCC_TIM4_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM4EN) == RESET)
#define __HAL_RCC_TIM4_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM4EN) != RESET)
#define __HAL_RCC_TIM4_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM4SMEN) == RESET)
#define __HAL_RCC_TIM4_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM4SMEN) != RESET)
#define __HAL_RCC_TIM4_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM4RST)
#define __HAL_RCC_TIM5_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM5EN)
#define __HAL_RCC_TIM5_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM5EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM5EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM5_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM5SMEN)
#define __HAL_RCC_TIM5_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM5SMEN)
#define __HAL_RCC_TIM5_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM5RST)
#define __HAL_RCC_TIM5_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM5EN) == RESET)
#define __HAL_RCC_TIM5_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM5EN) != RESET)
#define __HAL_RCC_TIM5_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM5SMEN) == RESET)
#define __HAL_RCC_TIM5_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM5SMEN) != RESET)
#define __HAL_RCC_TIM5_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM5RST)
#define __HAL_RCC_TIM6_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM6EN)
#define __HAL_RCC_TIM6_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM6EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM6EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM6_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM6SMEN)
#define __HAL_RCC_TIM6_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM6SMEN)
#define __HAL_RCC_TIM6_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM6RST)
#define __HAL_RCC_TIM6_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM6EN) == RESET)
#define __HAL_RCC_TIM6_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM6EN) != RESET)
#define __HAL_RCC_TIM6_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM6SMEN) == RESET)
#define __HAL_RCC_TIM6_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM6SMEN) != RESET)
#define __HAL_RCC_TIM6_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM6RST)
#define __HAL_RCC_TIM7_CLK_DISABLE()           CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM7EN)
#define __HAL_RCC_TIM7_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM7EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM7EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM7_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM7SMEN)
#define __HAL_RCC_TIM7_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM7SMEN)
#define __HAL_RCC_TIM7_FORCE_RESET()           SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM7RST)
#define __HAL_RCC_TIM7_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM7EN) == RESET)
#define __HAL_RCC_TIM7_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_TIM7EN) != RESET)
#define __HAL_RCC_TIM7_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM7SMEN) == RESET)
#define __HAL_RCC_TIM7_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_TIM7SMEN) != RESET)
#define __HAL_RCC_TIM7_RELEASE_RESET()         CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_TIM7RST)
#define __HAL_RCC_TIM8_CLK_DISABLE()           CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM8EN)
#define __HAL_RCC_TIM8_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM8EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM8EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TIM8_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM8SMEN)
#define __HAL_RCC_TIM8_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM8SMEN)
#define __HAL_RCC_TIM8_FORCE_RESET()           SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM8RST)
#define __HAL_RCC_TIM8_IS_CLK_DISABLED()       (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM8EN) == RESET)
#define __HAL_RCC_TIM8_IS_CLK_ENABLED()        (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_TIM8EN) != RESET)
#define __HAL_RCC_TIM8_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM8SMEN) == RESET)
#define __HAL_RCC_TIM8_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_TIM8SMEN) != RESET)
#define __HAL_RCC_TIM8_RELEASE_RESET()         CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_TIM8RST)
#define __HAL_RCC_TSC_CLK_DISABLE()            CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_TSCEN)
#define __HAL_RCC_TSC_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_TSCEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_TSCEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_TSC_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_TSCSMEN)
#define __HAL_RCC_TSC_CLK_SLEEP_ENABLE()       SET_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_TSCSMEN)
#define __HAL_RCC_TSC_FORCE_RESET()            SET_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_TSCRST)
#define __HAL_RCC_TSC_IS_CLK_DISABLED()        (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_TSCEN) == RESET)
#define __HAL_RCC_TSC_IS_CLK_ENABLED()         (READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_TSCEN) != RESET)
#define __HAL_RCC_TSC_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_TSCSMEN) == RESET)
#define __HAL_RCC_TSC_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->AHB1SMENR, RCC_AHB1SMENR_TSCSMEN) != RESET)
#define __HAL_RCC_TSC_RELEASE_RESET()          CLEAR_BIT(RCC->AHB1RSTR, RCC_AHB1RSTR_TSCRST)
#define __HAL_RCC_UART4_CLK_DISABLE()          CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART4EN)
#define __HAL_RCC_UART4_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART4EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART4EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_UART4_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_UART4SMEN)
#define __HAL_RCC_UART4_CLK_SLEEP_ENABLE()     SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_UART4SMEN)
#define __HAL_RCC_UART4_FORCE_RESET()          SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_UART4RST)
#define __HAL_RCC_UART4_IS_CLK_DISABLED()      (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART4EN) == RESET)
#define __HAL_RCC_UART4_IS_CLK_ENABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART4EN) != RESET)
#define __HAL_RCC_UART4_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_UART4SMEN) == RESET)
#define __HAL_RCC_UART4_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_UART4SMEN) != RESET)
#define __HAL_RCC_UART4_RELEASE_RESET()        CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_UART4RST)
#define __HAL_RCC_UART5_CLK_DISABLE()          CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART5EN)
#define __HAL_RCC_UART5_CLK_ENABLE()           do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART5EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART5EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_UART5_CLK_SLEEP_DISABLE()    CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_UART5SMEN)
#define __HAL_RCC_UART5_CLK_SLEEP_ENABLE()     SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_UART5SMEN)
#define __HAL_RCC_UART5_FORCE_RESET()          SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_UART5RST)
#define __HAL_RCC_UART5_IS_CLK_DISABLED()      (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART5EN) == RESET)
#define __HAL_RCC_UART5_IS_CLK_ENABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_UART5EN) != RESET)
#define __HAL_RCC_UART5_IS_CLK_SLEEP_DISABLED()    (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_UART5SMEN) == RESET)
#define __HAL_RCC_UART5_IS_CLK_SLEEP_ENABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_UART5SMEN) != RESET)
#define __HAL_RCC_UART5_RELEASE_RESET()        CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_UART5RST)
#define __HAL_RCC_USART1_CLK_DISABLE()         CLEAR_BIT(RCC->APB2ENR, RCC_APB2ENR_USART1EN)
#define __HAL_RCC_USART1_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB2ENR, RCC_APB2ENR_USART1EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_USART1EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_USART1_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB2SMENR, RCC_APB2SMENR_USART1SMEN)
#define __HAL_RCC_USART1_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB2SMENR, RCC_APB2SMENR_USART1SMEN)
#define __HAL_RCC_USART1_FORCE_RESET()         SET_BIT(RCC->APB2RSTR, RCC_APB2RSTR_USART1RST)
#define __HAL_RCC_USART1_IS_CLK_DISABLED()     (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_USART1EN) == RESET)
#define __HAL_RCC_USART1_IS_CLK_ENABLED()      (READ_BIT(RCC->APB2ENR, RCC_APB2ENR_USART1EN) != RESET)
#define __HAL_RCC_USART1_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_USART1SMEN) == RESET)
#define __HAL_RCC_USART1_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB2SMENR, RCC_APB2SMENR_USART1SMEN) != RESET)
#define __HAL_RCC_USART1_RELEASE_RESET()       CLEAR_BIT(RCC->APB2RSTR, RCC_APB2RSTR_USART1RST)
#define __HAL_RCC_USART2_CLK_DISABLE()         CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART2EN)
#define __HAL_RCC_USART2_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART2EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART2EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_USART2_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USART2SMEN)
#define __HAL_RCC_USART2_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USART2SMEN)
#define __HAL_RCC_USART2_FORCE_RESET()         SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_USART2RST)
#define __HAL_RCC_USART2_IS_CLK_DISABLED()     (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART2EN) == RESET)
#define __HAL_RCC_USART2_IS_CLK_ENABLED()      (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART2EN) != RESET)
#define __HAL_RCC_USART2_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USART2SMEN) == RESET)
#define __HAL_RCC_USART2_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USART2SMEN) != RESET)
#define __HAL_RCC_USART2_RELEASE_RESET()       CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_USART2RST)
#define __HAL_RCC_USART3_CLK_DISABLE()         CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART3EN)
#define __HAL_RCC_USART3_CLK_ENABLE()          do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART3EN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART3EN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_USART3_CLK_SLEEP_DISABLE()   CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USART3SMEN)
#define __HAL_RCC_USART3_CLK_SLEEP_ENABLE()    SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USART3SMEN)
#define __HAL_RCC_USART3_FORCE_RESET()         SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_USART3RST)
#define __HAL_RCC_USART3_IS_CLK_DISABLED()     (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART3EN) == RESET)
#define __HAL_RCC_USART3_IS_CLK_ENABLED()      (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USART3EN) != RESET)
#define __HAL_RCC_USART3_IS_CLK_SLEEP_DISABLED()   (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USART3SMEN) == RESET)
#define __HAL_RCC_USART3_IS_CLK_SLEEP_ENABLED()    (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USART3SMEN) != RESET)
#define __HAL_RCC_USART3_RELEASE_RESET()       CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_USART3RST)
#define __HAL_RCC_USB_CLK_DISABLE()            CLEAR_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USBFSEN);
#define __HAL_RCC_USB_CLK_ENABLE()             do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USBFSEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USBFSEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_USB_CLK_SLEEP_DISABLE()      CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USBFSSMEN)
#define __HAL_RCC_USB_CLK_SLEEP_ENABLE()       SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USBFSSMEN)
#define __HAL_RCC_USB_FORCE_RESET()            SET_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_USBFSRST)
#define __HAL_RCC_USB_IS_CLK_DISABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USBFSEN) == RESET)
#define __HAL_RCC_USB_IS_CLK_ENABLED()         (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_USBFSEN) != RESET)
#define __HAL_RCC_USB_IS_CLK_SLEEP_DISABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USBFSSMEN) == RESET)
#define __HAL_RCC_USB_IS_CLK_SLEEP_ENABLED()       (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_USBFSSMEN) != RESET)
#define __HAL_RCC_USB_OTG_FS_CLK_DISABLE()     CLEAR_BIT(RCC->AHB2ENR, RCC_AHB2ENR_OTGFSEN);
#define __HAL_RCC_USB_OTG_FS_CLK_ENABLE()      do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->AHB2ENR, RCC_AHB2ENR_OTGFSEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_OTGFSEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_USB_OTG_FS_CLK_SLEEP_DISABLE() CLEAR_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_OTGFSSMEN)
#define __HAL_RCC_USB_OTG_FS_CLK_SLEEP_ENABLE()  SET_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_OTGFSSMEN)
#define __HAL_RCC_USB_OTG_FS_FORCE_RESET()     SET_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_OTGFSRST)
#define __HAL_RCC_USB_OTG_FS_IS_CLK_DISABLED() (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_OTGFSEN) == RESET)
#define __HAL_RCC_USB_OTG_FS_IS_CLK_ENABLED()  (READ_BIT(RCC->AHB2ENR, RCC_AHB2ENR_OTGFSEN) != RESET)
#define __HAL_RCC_USB_OTG_FS_IS_CLK_SLEEP_DISABLED() (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_OTGFSSMEN) == RESET)
#define __HAL_RCC_USB_OTG_FS_IS_CLK_SLEEP_ENABLED()  (READ_BIT(RCC->AHB2SMENR, RCC_AHB2SMENR_OTGFSSMEN) != RESET)
#define __HAL_RCC_USB_OTG_FS_RELEASE_RESET()   CLEAR_BIT(RCC->AHB2RSTR, RCC_AHB2RSTR_OTGFSRST)
#define __HAL_RCC_USB_RELEASE_RESET()          CLEAR_BIT(RCC->APB1RSTR1, RCC_APB1RSTR1_USBFSRST)
#define __HAL_RCC_WAKEUPSTOP_CLK_CONFIG(__STOPWUCLK__) \
                  MODIFY_REG(RCC->CFGR, RCC_CFGR_STOPWUCK, (__STOPWUCLK__))
#define __HAL_RCC_WWDG_CLK_ENABLE()            do { \
                                                 __IO uint32_t tmpreg; \
                                                 SET_BIT(RCC->APB1ENR1, RCC_APB1ENR1_WWDGEN); \
                                                 /* Delay after an RCC peripheral clock enabling */ \
                                                 tmpreg = READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_WWDGEN); \
                                                 UNUSED(tmpreg); \
                                               } while(0)
#define __HAL_RCC_WWDG_CLK_SLEEP_DISABLE()     CLEAR_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_WWDGSMEN)
#define __HAL_RCC_WWDG_CLK_SLEEP_ENABLE()      SET_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_WWDGSMEN)
#define __HAL_RCC_WWDG_IS_CLK_DISABLED()       (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_WWDGEN) == RESET)
#define __HAL_RCC_WWDG_IS_CLK_ENABLED()        (READ_BIT(RCC->APB1ENR1, RCC_APB1ENR1_WWDGEN) != RESET)
#define __HAL_RCC_WWDG_IS_CLK_SLEEP_DISABLED()     (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_WWDGSMEN) == RESET)
#define __HAL_RCC_WWDG_IS_CLK_SLEEP_ENABLED()      (READ_BIT(RCC->APB1SMENR1, RCC_APB1SMENR1_WWDGSMEN) != RESET)
