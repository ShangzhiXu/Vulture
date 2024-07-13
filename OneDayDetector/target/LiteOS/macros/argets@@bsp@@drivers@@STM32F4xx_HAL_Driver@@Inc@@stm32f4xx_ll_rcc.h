#define LL_RCC_ReadReg(__REG__) READ_REG(RCC->__REG__)
#define LL_RCC_WriteReg(__REG__, __VALUE__) WRITE_REG(RCC->__REG__, (__VALUE__))
#define __LL_RCC_CALC_HCLK_FREQ(__SYSCLKFREQ__, __AHBPRESCALER__) ((__SYSCLKFREQ__) >> AHBPrescTable[((__AHBPRESCALER__) & RCC_CFGR_HPRE) >>  RCC_CFGR_HPRE_Pos])
#define __LL_RCC_CALC_PCLK1_FREQ(__HCLKFREQ__, __APB1PRESCALER__) ((__HCLKFREQ__) >> APBPrescTable[(__APB1PRESCALER__) >>  RCC_CFGR_PPRE1_Pos])
#define __LL_RCC_CALC_PCLK2_FREQ(__HCLKFREQ__, __APB2PRESCALER__) ((__HCLKFREQ__) >> APBPrescTable[(__APB2PRESCALER__) >>  RCC_CFGR_PPRE2_Pos])
#define __LL_RCC_CALC_PLLCLK_48M_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLQ__) ((__INPUTFREQ__) / (__PLLM__) * (__PLLN__) / \
                   ((__PLLQ__) >> RCC_PLLCFGR_PLLQ_Pos ))
#define __LL_RCC_CALC_PLLCLK_DSI_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLR__) ((__INPUTFREQ__) / (__PLLM__) * (__PLLN__) / \
                   ((__PLLR__) >> RCC_PLLCFGR_PLLR_Pos ))
#define __LL_RCC_CALC_PLLCLK_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLP__) ((__INPUTFREQ__) / (__PLLM__) * (__PLLN__) / \
                   ((((__PLLP__) >> RCC_PLLCFGR_PLLP_Pos ) + 1U) * 2U))
#define __LL_RCC_CALC_PLLCLK_I2S_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLR__) ((__INPUTFREQ__) / (__PLLM__) * (__PLLN__) / \
                   ((__PLLR__) >> RCC_PLLCFGR_PLLR_Pos ))
#define __LL_RCC_CALC_PLLCLK_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLR__, __PLLDIVR__) (((__INPUTFREQ__) / (__PLLM__) * (__PLLN__) / \
                   ((__PLLR__) >> RCC_PLLCFGR_PLLR_Pos )) / ((__PLLDIVR__) >> RCC_DCKCFGR_PLLDIVR_Pos ))
#define __LL_RCC_CALC_PLLCLK_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLR__) ((__INPUTFREQ__) / (__PLLM__) * (__PLLN__) / \
                   ((__PLLR__) >> RCC_PLLCFGR_PLLR_Pos ))
#define __LL_RCC_CALC_PLLCLK_SPDIFRX_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLR__) ((__INPUTFREQ__) / (__PLLM__) * (__PLLN__) / \
                   ((__PLLR__) >> RCC_PLLCFGR_PLLR_Pos ))
#define __LL_RCC_CALC_PLLI2S_48M_FREQ(__INPUTFREQ__, __PLLM__, __PLLI2SN__, __PLLI2SQ__) (((__INPUTFREQ__) / (__PLLM__)) * (__PLLI2SN__) / \
                   ((__PLLI2SQ__) >> RCC_PLLI2SCFGR_PLLI2SQ_Pos))
#define __LL_RCC_CALC_PLLI2S_I2S_FREQ(__INPUTFREQ__, __PLLM__, __PLLI2SN__, __PLLI2SR__) (((__INPUTFREQ__) / (__PLLM__)) * (__PLLI2SN__) / \
                   ((__PLLI2SR__) >> RCC_PLLI2SCFGR_PLLI2SR_Pos))
#define __LL_RCC_CALC_PLLI2S_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLI2SN__, __PLLI2SQ_R__, __PLLI2SDIVQ_R__) (((__INPUTFREQ__) / (__PLLM__)) * (__PLLI2SN__) / \
                   (((__PLLI2SQ_R__) >> RCC_PLLI2SCFGR_PLLI2SQ_Pos) * (((__PLLI2SDIVQ_R__) >> RCC_DCKCFGR_PLLI2SDIVQ_Pos) + 1U)))
#define __LL_RCC_CALC_PLLI2S_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLI2SN__, __PLLI2SQ_R__, __PLLI2SDIVQ_R__) (((__INPUTFREQ__) / (__PLLM__)) * (__PLLI2SN__) / \
                   (((__PLLI2SQ_R__) >> RCC_PLLI2SCFGR_PLLI2SR_Pos) * ((__PLLI2SDIVQ_R__) >> RCC_DCKCFGR_PLLI2SDIVR_Pos)))
#define __LL_RCC_CALC_PLLI2S_SPDIFRX_FREQ(__INPUTFREQ__, __PLLM__, __PLLI2SN__, __PLLI2SP__) (((__INPUTFREQ__) / (__PLLM__)) * (__PLLI2SN__) / \
                   ((((__PLLI2SP__) >> RCC_PLLI2SCFGR_PLLI2SP_Pos) + 1U) * 2U))
#define __LL_RCC_CALC_PLLRCLK_FREQ(__INPUTFREQ__, __PLLM__, __PLLN__, __PLLR__) ((__INPUTFREQ__) / (__PLLM__) * (__PLLN__) / \
                   ((__PLLR__) >> RCC_PLLCFGR_PLLR_Pos ))
#define __LL_RCC_CALC_PLLSAI_48M_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAIN__, __PLLSAIP__) (((__INPUTFREQ__) / (__PLLM__)) * (__PLLSAIN__) / \
                   ((((__PLLSAIP__) >> RCC_PLLSAICFGR_PLLSAIP_Pos) + 1U) * 2U))
#define __LL_RCC_CALC_PLLSAI_LTDC_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAIN__, __PLLSAIR__, __PLLSAIDIVR__) (((__INPUTFREQ__) / (__PLLM__)) * (__PLLSAIN__) / \
                   (((__PLLSAIR__) >> RCC_PLLSAICFGR_PLLSAIR_Pos) * (aRCC_PLLSAIDIVRPrescTable[(__PLLSAIDIVR__) >> RCC_DCKCFGR_PLLSAIDIVR_Pos])))
#define __LL_RCC_CALC_PLLSAI_SAI_FREQ(__INPUTFREQ__, __PLLM__, __PLLSAIN__, __PLLSAIQ__, __PLLSAIDIVQ__) (((__INPUTFREQ__) / (__PLLM__)) * (__PLLSAIN__) / \
                   (((__PLLSAIQ__) >> RCC_PLLSAICFGR_PLLSAIQ_Pos) * (((__PLLSAIDIVQ__) >> RCC_DCKCFGR_PLLSAIDIVQ_Pos) + 1U)))
