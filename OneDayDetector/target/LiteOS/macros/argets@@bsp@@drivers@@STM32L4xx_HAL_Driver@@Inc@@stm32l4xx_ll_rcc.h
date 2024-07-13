#define LL_RCC_ReadReg(__REG__) READ_REG(RCC->__REG__)
#define LL_RCC_WriteReg(__REG__, __VALUE__) WRITE_REG(RCC->__REG__, (__VALUE__))
#define __LL_RCC_CALC_HCLK_FREQ(__SYSCLKFREQ__, __AHBPRESCALER__) ((__SYSCLKFREQ__) >> AHBPrescTable[((__AHBPRESCALER__) & RCC_CFGR_HPRE) >>  RCC_CFGR_HPRE_Pos])
#define __LL_RCC_CALC_MSI_FREQ(__MSISEL__, __MSIRANGE__)   (((__MSISEL__) == LL_RCC_MSIRANGESEL_STANDBY) ? \
                           (MSIRangeTable[(__MSIRANGE__) >> 8U]) : \
                           (MSIRangeTable[(__MSIRANGE__) >> 4U]))
#define __LL_RCC_CALC_PCLK1_FREQ(__HCLKFREQ__, __APB1PRESCALER__) ((__HCLKFREQ__) >> APBPrescTable[(__APB1PRESCALER__) >>  RCC_CFGR_PPRE1_Pos])
#define __LL_RCC_CALC_PCLK2_FREQ(__HCLKFREQ__, __APB2PRESCALER__) ((__HCLKFREQ__) >> APBPrescTable[(__APB2PRESCALER__) >>  RCC_CFGR_PPRE2_Pos])
#define __LL_RCC_CALC_PLLCLK_48M_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLQ__) ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLN__) / \
                   ((((__PLLQ__) >> RCC_PLLCFGR_PLLQ_Pos) + 1U) << 1U))
#define __LL_RCC_CALC_PLLCLK_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLR__) ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLN__) / \
                   ((((__PLLR__) >> RCC_PLLCFGR_PLLR_Pos) + 1U) * 2U))
#define __LL_RCC_CALC_PLLCLK_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLP__) ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLN__) / \
                   ((__PLLP__) >> RCC_PLLCFGR_PLLPDIV_Pos))
#define __LL_RCC_CALC_PLLCLK_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLP__) ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLN__) / \
                   (((__PLLP__) == LL_RCC_PLLP_DIV_7) ? 7U : 17U))
#define __LL_RCC_CALC_PLLSAI1_48M_FREQ(__INPUTFREQ__, __PLLSAI1M__, __PLLSAI1N__, __PLLSAI1Q__) \
                   ((__INPUTFREQ__) / ((((__PLLSAI1M__) >> RCC_PLLSAI1CFGR_PLLSAI1M_Pos) + 1U)) * (__PLLSAI1N__) / \
                    ((((__PLLSAI1Q__) >> RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) + 1U) << 1U))
#define __LL_RCC_CALC_PLLSAI1_48M_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAI1N__, __PLLSAI1Q__) \
                   ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLSAI1N__) / \
                    ((((__PLLSAI1Q__) >> RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) + 1U) << 1U))
#define __LL_RCC_CALC_PLLSAI1_ADC_FREQ(__INPUTFREQ__, __PLLSAI1M__, __PLLSAI1N__, __PLLSAI1R__) \
                   ((__INPUTFREQ__) / ((((__PLLSAI1M__) >> RCC_PLLSAI1CFGR_PLLSAI1M_Pos) + 1U)) * (__PLLSAI1N__) / \
                    ((((__PLLSAI1R__) >> RCC_PLLSAI1CFGR_PLLSAI1R_Pos) + 1U) << 1U))
#define __LL_RCC_CALC_PLLSAI1_ADC_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAI1N__, __PLLSAI1R__) \
                   ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLSAI1N__) / \
                    ((((__PLLSAI1R__) >> RCC_PLLSAI1CFGR_PLLSAI1R_Pos) + 1U) << 1U))
#define __LL_RCC_CALC_PLLSAI1_SAI_FREQ(__INPUTFREQ__, __PLLSAI1M__, __PLLSAI1N__, __PLLSAI1P__) \
                   ((__INPUTFREQ__) / ((((__PLLSAI1M__) >> RCC_PLLSAI1CFGR_PLLSAI1M_Pos) + 1U)) * (__PLLSAI1N__) / \
                    ((__PLLSAI1P__) >> RCC_PLLSAI1CFGR_PLLSAI1PDIV_Pos))
#define __LL_RCC_CALC_PLLSAI1_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAI1N__, __PLLSAI1P__) \
                   ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLSAI1N__) / \
                    ((__PLLSAI1P__) >> RCC_PLLSAI1CFGR_PLLSAI1PDIV_Pos))
#define __LL_RCC_CALC_PLLSAI1_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAI1N__, __PLLSAI1P__) \
                   ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLSAI1N__) / \
                    (((__PLLSAI1P__) == LL_RCC_PLLSAI1P_DIV_7) ? 7U : 17U))
#define __LL_RCC_CALC_PLLSAI2_ADC_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAI2N__, __PLLSAI2R__) \
                   ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLSAI2N__) / \
                    ((((__PLLSAI2R__) >> RCC_PLLSAI2CFGR_PLLSAI2R_Pos ) + 1U) << 1U))
#define __LL_RCC_CALC_PLLSAI2_DSI_FREQ(__INPUTFREQ__, __PLLSAI2M__, __PLLSAI2N__, __PLLSAI2Q__) \
                   ((__INPUTFREQ__) / ((((__PLLSAI2M__) >> RCC_PLLSAI2CFGR_PLLSAI2M_Pos) + 1U)) * (__PLLSAI2N__) / \
                    ((((__PLLSAI2Q__) >> RCC_PLLSAI2CFGR_PLLSAI2Q_Pos) + 1U) << 1U))
#define __LL_RCC_CALC_PLLSAI2_LTDC_FREQ(__INPUTFREQ__, __PLLSAI2M__, __PLLSAI2N__, __PLLSAI2R__, __PLLSAI2DIVR__) \
                   (((__INPUTFREQ__) / (((__PLLSAI2M__)>> RCC_PLLSAI2CFGR_PLLSAI2M_Pos) + 1U)) * (__PLLSAI2N__) / \
                    (((((__PLLSAI2R__) >> RCC_PLLSAI2CFGR_PLLSAI2R_Pos ) + 1U) << 1U) * (aRCC_PLLSAI2DIVRPrescTable[(__PLLSAI2DIVR__) >> RCC_CCIPR2_PLLSAI2DIVR_Pos])))
#define __LL_RCC_CALC_PLLSAI2_SAI_FREQ(__INPUTFREQ__, __PLLSAI2M__, __PLLSAI2N__, __PLLSAI2P__) \
                   ((__INPUTFREQ__) / ((((__PLLSAI2M__) >> RCC_PLLSAI2CFGR_PLLSAI2M_Pos) + 1U)) * (__PLLSAI2N__) / \
                    ((__PLLSAI2P__) >> RCC_PLLSAI2CFGR_PLLSAI2PDIV_Pos))
#define __LL_RCC_CALC_PLLSAI2_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAI2N__, __PLLSAI2P__) \
                   ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1U)) * (__PLLSAI2N__) / \
                    ((__PLLSAI2P__) >> RCC_PLLSAI2CFGR_PLLSAI2PDIV_Pos))
#define __LL_RCC_CALC_PLLSAI2_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAI2N__, __PLLSAI2P__) \
                   ((__INPUTFREQ__) / ((((__PLLM__)>> RCC_PLLCFGR_PLLM_Pos) + 1)) * (__PLLSAI2N__) / \
                    (((__PLLSAI2P__) == LL_RCC_PLLSAI2P_DIV_7) ? 7U : 17U))
