#define I2C_CHECK_FLAG(__ISR__, __FLAG__)         ((((__ISR__) & ((__FLAG__) & I2C_FLAG_MASK)) == ((__FLAG__) & I2C_FLAG_MASK)) ? SET : RESET)
#define I2C_CHECK_IT_SOURCE(__CR1__, __IT__)      ((((__CR1__) & (__IT__)) == (__IT__)) ? SET : RESET)
#define I2C_GENERATE_START(__ADDMODE__,__ADDRESS__) (((__ADDMODE__) == I2C_ADDRESSINGMODE_7BIT) ? (uint32_t)((((uint32_t)(__ADDRESS__) & (I2C_CR2_SADD)) | (I2C_CR2_START) | (I2C_CR2_AUTOEND)) & (~I2C_CR2_RD_WRN)) : \
                                                          (uint32_t)((((uint32_t)(__ADDRESS__) & (I2C_CR2_SADD)) | (I2C_CR2_ADD10) | (I2C_CR2_START)) & (~I2C_CR2_RD_WRN)))
#define I2C_GET_ADDR_MATCH(__HANDLE__)            ((uint16_t)(((__HANDLE__)->Instance->ISR & I2C_ISR_ADDCODE) >> 16U))
#define I2C_GET_DIR(__HANDLE__)                   ((uint8_t)(((__HANDLE__)->Instance->ISR & I2C_ISR_DIR) >> 16U))
#define I2C_GET_OWN_ADDRESS1(__HANDLE__)          ((uint16_t)((__HANDLE__)->Instance->OAR1 & I2C_OAR1_OA1))
#define I2C_GET_OWN_ADDRESS2(__HANDLE__)          ((uint16_t)((__HANDLE__)->Instance->OAR2 & I2C_OAR2_OA2))
#define I2C_GET_STOP_MODE(__HANDLE__)             ((__HANDLE__)->Instance->CR2 & I2C_CR2_AUTOEND)
#define I2C_MEM_ADD_LSB(__ADDRESS__)              ((uint8_t)((uint16_t)((__ADDRESS__) & (uint16_t)(0x00FFU))))
#define I2C_MEM_ADD_MSB(__ADDRESS__)              ((uint8_t)((uint16_t)(((uint16_t)((__ADDRESS__) & (uint16_t)(0xFF00U))) >> 8U)))
#define I2C_RESET_CR2(__HANDLE__)                 ((__HANDLE__)->Instance->CR2 &= (uint32_t)~((uint32_t)(I2C_CR2_SADD | I2C_CR2_HEAD10R | I2C_CR2_NBYTES | I2C_CR2_RELOAD | I2C_CR2_RD_WRN)))
#define IS_I2C_ADDRESSING_MODE(MODE)    (((MODE) == I2C_ADDRESSINGMODE_7BIT) || \
                                         ((MODE) == I2C_ADDRESSINGMODE_10BIT))
#define IS_I2C_DUAL_ADDRESS(ADDRESS)    (((ADDRESS) == I2C_DUALADDRESS_DISABLE) || \
                                         ((ADDRESS) == I2C_DUALADDRESS_ENABLE))
#define IS_I2C_GENERAL_CALL(CALL)       (((CALL) == I2C_GENERALCALL_DISABLE) || \
                                         ((CALL) == I2C_GENERALCALL_ENABLE))
#define IS_I2C_MEMADD_SIZE(SIZE)        (((SIZE) == I2C_MEMADD_SIZE_8BIT) || \
                                         ((SIZE) == I2C_MEMADD_SIZE_16BIT))
#define IS_I2C_NO_STRETCH(STRETCH)      (((STRETCH) == I2C_NOSTRETCH_DISABLE) || \
                                         ((STRETCH) == I2C_NOSTRETCH_ENABLE))
#define IS_I2C_OWN_ADDRESS1(ADDRESS1)             ((ADDRESS1) <= 0x000003FFU)
#define IS_I2C_OWN_ADDRESS2(ADDRESS2)             ((ADDRESS2) <= (uint16_t)0x00FFU)
#define IS_I2C_OWN_ADDRESS2_MASK(MASK)  (((MASK) == I2C_OA2_NOMASK)  || \
                                         ((MASK) == I2C_OA2_MASK01) || \
                                         ((MASK) == I2C_OA2_MASK02) || \
                                         ((MASK) == I2C_OA2_MASK03) || \
                                         ((MASK) == I2C_OA2_MASK04) || \
                                         ((MASK) == I2C_OA2_MASK05) || \
                                         ((MASK) == I2C_OA2_MASK06) || \
                                         ((MASK) == I2C_OA2_MASK07))
#define IS_I2C_TRANSFER_OPTIONS_REQUEST(REQUEST)  (((REQUEST) == I2C_FIRST_FRAME)          || \
                                                   ((REQUEST) == I2C_FIRST_AND_NEXT_FRAME) || \
                                                   ((REQUEST) == I2C_NEXT_FRAME)           || \
                                                   ((REQUEST) == I2C_FIRST_AND_LAST_FRAME) || \
                                                   ((REQUEST) == I2C_LAST_FRAME)           || \
                                                   ((REQUEST) == I2C_LAST_FRAME_NO_STOP)   || \
                                                   IS_I2C_TRANSFER_OTHER_OPTIONS_REQUEST(REQUEST))
#define IS_I2C_TRANSFER_OTHER_OPTIONS_REQUEST(REQUEST) (((REQUEST) == I2C_OTHER_FRAME)     || \
                                                        ((REQUEST) == I2C_OTHER_AND_LAST_FRAME))
#define IS_TRANSFER_MODE(MODE)          (((MODE) == I2C_RELOAD_MODE)   || \
                                         ((MODE) == I2C_AUTOEND_MODE) || \
                                         ((MODE) == I2C_SOFTEND_MODE))
#define IS_TRANSFER_REQUEST(REQUEST)    (((REQUEST) == I2C_GENERATE_STOP)        || \
                                         ((REQUEST) == I2C_GENERATE_START_READ)  || \
                                         ((REQUEST) == I2C_GENERATE_START_WRITE) || \
                                         ((REQUEST) == I2C_NO_STARTSTOP))
#define __HAL_I2C_CLEAR_FLAG(__HANDLE__, __FLAG__) (((__FLAG__) == I2C_FLAG_TXE) ? ((__HANDLE__)->Instance->ISR |= (__FLAG__)) \
                                                                                 : ((__HANDLE__)->Instance->ICR = (__FLAG__)))
#define __HAL_I2C_DISABLE(__HANDLE__)                           (CLEAR_BIT((__HANDLE__)->Instance->CR1, I2C_CR1_PE))
#define __HAL_I2C_DISABLE_IT(__HANDLE__, __INTERRUPT__)         ((__HANDLE__)->Instance->CR1 &= (~(__INTERRUPT__)))
#define __HAL_I2C_ENABLE(__HANDLE__)                            (SET_BIT((__HANDLE__)->Instance->CR1,  I2C_CR1_PE))
#define __HAL_I2C_ENABLE_IT(__HANDLE__, __INTERRUPT__)          ((__HANDLE__)->Instance->CR1 |= (__INTERRUPT__))
#define __HAL_I2C_GENERATE_NACK(__HANDLE__)                     (SET_BIT((__HANDLE__)->Instance->CR2, I2C_CR2_NACK))
#define __HAL_I2C_GET_FLAG(__HANDLE__, __FLAG__) (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) == (__FLAG__)) ? SET : RESET)
#define __HAL_I2C_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)      ((((__HANDLE__)->Instance->CR1 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_I2C_RESET_HANDLE_STATE(__HANDLE__)                do{                                                   \
                                                                    (__HANDLE__)->State = HAL_I2C_STATE_RESET;       \
                                                                    (__HANDLE__)->MspInitCallback = NULL;            \
                                                                    (__HANDLE__)->MspDeInitCallback = NULL;          \
                                                                  } while(0)
#define __HAL_I2C_RESET_HANDLE_STATE(__HANDLE__)                ((__HANDLE__)->State = HAL_I2C_STATE_RESET)
