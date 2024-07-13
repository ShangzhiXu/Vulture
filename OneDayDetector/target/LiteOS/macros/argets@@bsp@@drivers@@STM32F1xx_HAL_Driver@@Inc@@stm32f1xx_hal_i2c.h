#define I2C_10BIT_ADDRESS(__ADDRESS__)           ((uint8_t)((uint16_t)((__ADDRESS__) & (uint16_t)(0x00FF))))
#define I2C_10BIT_HEADER_READ(__ADDRESS__)       ((uint8_t)((uint16_t)((uint16_t)(((uint16_t)((__ADDRESS__) & (uint16_t)(0x0300))) >> 7) | (uint16_t)(0xF1))))
#define I2C_10BIT_HEADER_WRITE(__ADDRESS__)      ((uint8_t)((uint16_t)((uint16_t)(((uint16_t)((__ADDRESS__) & (uint16_t)(0x0300))) >> 7) | (uint16_t)(0xF0))))
#define I2C_7BIT_ADD_READ(__ADDRESS__)           ((uint8_t)((__ADDRESS__) | I2C_OAR1_ADD0))
#define I2C_7BIT_ADD_WRITE(__ADDRESS__)          ((uint8_t)((__ADDRESS__) & (~I2C_OAR1_ADD0)))
#define I2C_FREQ_RANGE(__PCLK__)                 ((__PCLK__)/1000000)
#define I2C_MEM_ADD_LSB(__ADDRESS__)             ((uint8_t)((uint16_t)((__ADDRESS__) & (uint16_t)(0x00FF))))
#define I2C_MEM_ADD_MSB(__ADDRESS__)             ((uint8_t)((uint16_t)(((uint16_t)((__ADDRESS__) & (uint16_t)(0xFF00))) >> 8)))
#define I2C_RISE_TIME(__FREQRANGE__, __SPEED__)  (((__SPEED__) <= I2C_STANDARD_MODE_MAX_CLK) ? ((__FREQRANGE__) + 1) : ((((__FREQRANGE__) * 300) / 1000) + 1))
#define I2C_SPEED(__PCLK__, __SPEED__, __DUTYCYCLE__)      (((__SPEED__) <= 100000)? (I2C_SPEED_STANDARD((__PCLK__), (__SPEED__))) : \
                                                                  ((I2C_SPEED_FAST((__PCLK__), (__SPEED__), (__DUTYCYCLE__)) & I2C_CCR_CCR) == 0)? 1 : \
                                                                  ((I2C_SPEED_FAST((__PCLK__), (__SPEED__), (__DUTYCYCLE__))) | I2C_CCR_FS))
#define I2C_SPEED_FAST(__PCLK__, __SPEED__, __DUTYCYCLE__) (((__DUTYCYCLE__) == I2C_DUTYCYCLE_2)? ((__PCLK__) / ((__SPEED__) * 3)) : (((__PCLK__) / ((__SPEED__) * 25)) | I2C_DUTYCYCLE_16_9))
#define I2C_SPEED_STANDARD(__PCLK__, __SPEED__)            (((((__PCLK__)/((__SPEED__) << 1)) & I2C_CCR_CCR) < 4)? 4:((__PCLK__) / ((__SPEED__) << 1)))
#define IS_I2C_ADDRESSING_MODE(ADDRESS) (((ADDRESS) == I2C_ADDRESSINGMODE_7BIT) || \
                                         ((ADDRESS) == I2C_ADDRESSINGMODE_10BIT))
#define IS_I2C_CLOCK_SPEED(SPEED) (((SPEED) > 0) && ((SPEED) <= I2C_FAST_MODE_MAX_CLK))
#define IS_I2C_DUAL_ADDRESS(ADDRESS) (((ADDRESS) == I2C_DUALADDRESS_DISABLE) || \
                                      ((ADDRESS) == I2C_DUALADDRESS_ENABLE))
#define IS_I2C_DUTY_CYCLE(CYCLE) (((CYCLE) == I2C_DUTYCYCLE_2) || \
                                  ((CYCLE) == I2C_DUTYCYCLE_16_9))
#define IS_I2C_GENERAL_CALL(CALL) (((CALL) == I2C_GENERALCALL_DISABLE) || \
                                   ((CALL) == I2C_GENERALCALL_ENABLE))
#define IS_I2C_MEMADD_SIZE(SIZE) (((SIZE) == I2C_MEMADD_SIZE_8BIT) || \
                                  ((SIZE) == I2C_MEMADD_SIZE_16BIT))
#define IS_I2C_NO_STRETCH(STRETCH) (((STRETCH) == I2C_NOSTRETCH_DISABLE) || \
                                    ((STRETCH) == I2C_NOSTRETCH_ENABLE))
#define IS_I2C_OWN_ADDRESS1(ADDRESS1) (((ADDRESS1) & (uint32_t)(0xFFFFFC00)) == 0)
#define IS_I2C_OWN_ADDRESS2(ADDRESS2) (((ADDRESS2) & (uint32_t)(0xFFFFFF01)) == 0)
#define __HAL_I2C_CLEAR_ADDRFLAG(__HANDLE__) \
 do{                                         \
    __IO uint32_t tmpreg;                    \
    tmpreg = (__HANDLE__)->Instance->SR1;    \
    tmpreg = (__HANDLE__)->Instance->SR2;    \
    UNUSED(tmpreg);                          \
}while(0)
#define __HAL_I2C_CLEAR_FLAG(__HANDLE__, __FLAG__)  (__HANDLE__)->Instance->SR1 = (((__HANDLE__)->Instance->SR1) & (~((__FLAG__) & I2C_FLAG_MASK)))
#define __HAL_I2C_CLEAR_STOPFLAG(__HANDLE__)               \
do{                                                        \
    __IO uint32_t tmpreg;                                  \
    tmpreg = (__HANDLE__)->Instance->SR1;                  \
    tmpreg = (__HANDLE__)->Instance->CR1 |= I2C_CR1_PE;    \
    UNUSED(tmpreg);                                        \
}while(0)  
#define __HAL_I2C_DISABLE(__HANDLE__)                            (CLEAR_BIT((__HANDLE__)->Instance->CR1, I2C_CR1_PE))
#define __HAL_I2C_DISABLE_IT(__HANDLE__, __INTERRUPT__)  (CLEAR_BIT((__HANDLE__)->Instance->CR2, (__INTERRUPT__)))
#define __HAL_I2C_ENABLE(__HANDLE__)                             (SET_BIT((__HANDLE__)->Instance->CR1,  I2C_CR1_PE))
#define __HAL_I2C_ENABLE_IT(__HANDLE__, __INTERRUPT__)   (SET_BIT((__HANDLE__)->Instance->CR2, (__INTERRUPT__)))
#define __HAL_I2C_GET_FLAG(__HANDLE__, __FLAG__) ((((uint8_t)((__FLAG__) >> 16)) == 0x01)?((((__HANDLE__)->Instance->SR1) & ((__FLAG__) & I2C_FLAG_MASK)) == ((__FLAG__) & I2C_FLAG_MASK)): \
                                                 ((((__HANDLE__)->Instance->SR2) & ((__FLAG__) & I2C_FLAG_MASK)) == ((__FLAG__) & I2C_FLAG_MASK)))
#define __HAL_I2C_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->CR2 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_I2C_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_I2C_STATE_RESET)
