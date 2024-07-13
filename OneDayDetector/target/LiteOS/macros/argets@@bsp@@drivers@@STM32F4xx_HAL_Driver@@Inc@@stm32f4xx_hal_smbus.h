#define IS_SMBUS_ADDRESSING_MODE(ADDRESS)          (((ADDRESS) == SMBUS_ADDRESSINGMODE_7BIT) || \
                                                    ((ADDRESS) == SMBUS_ADDRESSINGMODE_10BIT))
#define IS_SMBUS_ANALOG_FILTER(FILTER)             (((FILTER) == SMBUS_ANALOGFILTER_ENABLE) || \
                                                    ((FILTER) == SMBUS_ANALOGFILTER_DISABLE))
#define IS_SMBUS_CLOCK_SPEED(SPEED)                (((SPEED) > 0U) && ((SPEED) <= 100000U))
#define IS_SMBUS_DIGITAL_FILTER(FILTER)            ((FILTER) <= 0x0000000FU)
#define IS_SMBUS_DUAL_ADDRESS(ADDRESS)             (((ADDRESS) == SMBUS_DUALADDRESS_DISABLE) || \
                                                    ((ADDRESS) == SMBUS_DUALADDRESS_ENABLE))
#define IS_SMBUS_GENERAL_CALL(CALL)                (((CALL) == SMBUS_GENERALCALL_DISABLE)    || \
                                                    ((CALL) == SMBUS_GENERALCALL_ENABLE))
#define IS_SMBUS_NO_STRETCH(STRETCH)               (((STRETCH) == SMBUS_NOSTRETCH_DISABLE)   || \
                                                    ((STRETCH) == SMBUS_NOSTRETCH_ENABLE))
#define IS_SMBUS_OWN_ADDRESS1(ADDRESS1)            (((ADDRESS1) & 0xFFFFFC00U) == 0U)
#define IS_SMBUS_OWN_ADDRESS2(ADDRESS2)            (((ADDRESS2) & 0xFFFFFF01U) == 0U)
#define IS_SMBUS_PEC(PEC)                          (((PEC) == SMBUS_PEC_DISABLE) || \
                                                     ((PEC) == SMBUS_PEC_ENABLE))
#define IS_SMBUS_PERIPHERAL_MODE(MODE)             (((MODE) == SMBUS_PERIPHERAL_MODE_SMBUS_HOST)      || \
                                                    ((MODE) == SMBUS_PERIPHERAL_MODE_SMBUS_SLAVE)     || \
                                                    ((MODE) == SMBUS_PERIPHERAL_MODE_SMBUS_SLAVE_ARP))
#define IS_SMBUS_TRANSFER_OPTIONS_REQUEST(REQUEST) (((REQUEST) == SMBUS_FIRST_FRAME)                   || \
                                                    ((REQUEST) == SMBUS_NEXT_FRAME)                    || \
                                                    ((REQUEST) == SMBUS_FIRST_AND_LAST_FRAME_NO_PEC)   || \
                                                    ((REQUEST) == SMBUS_LAST_FRAME_NO_PEC)             || \
                                                    ((REQUEST) == SMBUS_FIRST_AND_LAST_FRAME_WITH_PEC) || \
                                                    ((REQUEST) == SMBUS_LAST_FRAME_WITH_PEC))
#define SMBUS_10BIT_ADDRESS(__ADDRESS__)           ((uint8_t)((uint16_t)((__ADDRESS__) & (uint16_t)0x00FF)))
#define SMBUS_10BIT_HEADER_READ(__ADDRESS__)       ((uint8_t)((uint16_t)((uint16_t)(((uint16_t)((__ADDRESS__) & (uint16_t)0x0300)) >> 7) | (uint16_t)(0x00F1))))
#define SMBUS_10BIT_HEADER_WRITE(__ADDRESS__)      ((uint8_t)((uint16_t)((uint16_t)(((uint16_t)((__ADDRESS__) & (uint16_t)0x0300)) >> 7) | (uint16_t)0x00F0)))
#define SMBUS_7BIT_ADD_READ(__ADDRESS__)           ((uint8_t)((__ADDRESS__) | I2C_OAR1_ADD0))
#define SMBUS_7BIT_ADD_WRITE(__ADDRESS__)          ((uint8_t)((__ADDRESS__) & (~I2C_OAR1_ADD0)))
#define SMBUS_FREQRANGE(__PCLK__)                  ((__PCLK__)/1000000U)
#define SMBUS_GET_PEC_MODE(__HANDLE__)             ((__HANDLE__)->Instance->CR1 & I2C_CR1_ENPEC)
#define SMBUS_GET_PEC_VALUE(__HANDLE__)             ((__HANDLE__)->XferPEC)
#define SMBUS_RISE_TIME(__FREQRANGE__)             ( ((__FREQRANGE__) + 1U))
#define SMBUS_SPEED_STANDARD(__PCLK__, __SPEED__)  (((((__PCLK__)/((__SPEED__) << 1U)) & I2C_CCR_CCR) < 4U)? 4U:((__PCLK__) / ((__SPEED__) << 1U)))
#define __HAL_SMBUS_CLEAR_ADDRFLAG(__HANDLE__)    \
  do{                                           \
    __IO uint32_t tmpreg = 0x00U;               \
    tmpreg = (__HANDLE__)->Instance->SR1;       \
    tmpreg = (__HANDLE__)->Instance->SR2;       \
    UNUSED(tmpreg);                             \
  } while(0)
#define __HAL_SMBUS_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->SR1 = ~((__FLAG__) & SMBUS_FLAG_MASK))
#define __HAL_SMBUS_CLEAR_STOPFLAG(__HANDLE__)    \
  do{                                           \
    __IO uint32_t tmpreg = 0x00U;               \
    tmpreg = (__HANDLE__)->Instance->SR1;       \
    (__HANDLE__)->Instance->CR1 |= I2C_CR1_PE;  \
    UNUSED(tmpreg);                             \
  } while(0)
#define __HAL_SMBUS_DISABLE(__HANDLE__)          ((__HANDLE__)->Instance->CR1 &=  ~I2C_CR1_PE)
#define __HAL_SMBUS_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((__HANDLE__)->Instance->CR2 &= (~(__INTERRUPT__)))
#define __HAL_SMBUS_ENABLE(__HANDLE__)           ((__HANDLE__)->Instance->CR1 |=  I2C_CR1_PE)
#define __HAL_SMBUS_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->CR2 |= (__INTERRUPT__))
#define __HAL_SMBUS_GENERATE_NACK(__HANDLE__)    (CLEAR_BIT((__HANDLE__)->Instance->CR1, I2C_CR1_ACK))
#define __HAL_SMBUS_GET_FLAG(__HANDLE__, __FLAG__) ((((uint8_t)((__FLAG__) >> 16U)) == 0x01U)?((((__HANDLE__)->Instance->SR1) & ((__FLAG__) & SMBUS_FLAG_MASK)) == ((__FLAG__) & SMBUS_FLAG_MASK)): \
                                                 ((((__HANDLE__)->Instance->SR2) & ((__FLAG__) & SMBUS_FLAG_MASK)) == ((__FLAG__) & SMBUS_FLAG_MASK)))
#define __HAL_SMBUS_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->CR2 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_SMBUS_RESET_HANDLE_STATE(__HANDLE__)          do{                                                  \
                                                                (__HANDLE__)->State = HAL_SMBUS_STATE_RESET;     \
                                                                (__HANDLE__)->MspInitCallback = NULL;            \
                                                                (__HANDLE__)->MspDeInitCallback = NULL;          \
                                                              } while(0)
#define __HAL_SMBUS_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SMBUS_STATE_RESET)
