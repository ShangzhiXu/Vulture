#define I2SxEXT(__INSTANCE__) ((__INSTANCE__) == (SPI2)? (SPI_TypeDef *)(I2S2ext_BASE): (SPI_TypeDef *)(I2S3ext_BASE))
#define __HAL_I2SEXT_CLEAR_OVRFLAG(__HANDLE__) do{                                                 \
                                                   __IO uint32_t tmpreg_ovr = 0x00U;                \
                                                   tmpreg_ovr = I2SxEXT((__HANDLE__)->Instance)->DR;\
                                                   tmpreg_ovr = I2SxEXT((__HANDLE__)->Instance)->SR;\
                                                   UNUSED(tmpreg_ovr);                              \
                                                  }while(0U)
#define __HAL_I2SEXT_CLEAR_UDRFLAG(__HANDLE__) do{                                                 \
                                                   __IO uint32_t tmpreg_udr = 0x00U;                \
                                                   tmpreg_udr = I2SxEXT((__HANDLE__)->Instance)->SR;\
                                                   UNUSED(tmpreg_udr);                              \
                                                  }while(0U)
#define __HAL_I2SEXT_DISABLE(__HANDLE__) (I2SxEXT((__HANDLE__)->Instance)->I2SCFGR &= ~SPI_I2SCFGR_I2SE)
#define __HAL_I2SEXT_DISABLE_IT(__HANDLE__, __INTERRUPT__) (I2SxEXT((__HANDLE__)->Instance)->CR2 &= ~(__INTERRUPT__))
#define __HAL_I2SEXT_ENABLE(__HANDLE__) (I2SxEXT((__HANDLE__)->Instance)->I2SCFGR |= SPI_I2SCFGR_I2SE)
#define __HAL_I2SEXT_ENABLE_IT(__HANDLE__, __INTERRUPT__) (I2SxEXT((__HANDLE__)->Instance)->CR2 |= (__INTERRUPT__))
#define __HAL_I2SEXT_FLUSH_RX_DR(__HANDLE__) do{                                                    \
                                                   __IO uint32_t tmpreg_dr = 0x00U;                 \
                                                   tmpreg_dr = I2SxEXT((__HANDLE__)->Instance)->DR; \
                                                   tmpreg_dr = ((__HANDLE__)->Instance->DR);        \
                                                   UNUSED(tmpreg_dr);                               \
                                                  }while(0U)
#define __HAL_I2SEXT_GET_FLAG(__HANDLE__, __FLAG__) (((I2SxEXT((__HANDLE__)->Instance)->SR) & (__FLAG__)) == (__FLAG__))
#define __HAL_I2SEXT_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) (((I2SxEXT((__HANDLE__)->Instance)->CR2\
                                                                 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
