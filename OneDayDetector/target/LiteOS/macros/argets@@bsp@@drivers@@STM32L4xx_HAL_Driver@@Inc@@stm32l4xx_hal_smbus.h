#define IS_SMBUS_ADDRESSING_MODE(MODE)                  (((MODE) == SMBUS_ADDRESSINGMODE_7BIT)  || \
                                                          ((MODE) == SMBUS_ADDRESSINGMODE_10BIT))
#define IS_SMBUS_ANALOG_FILTER(FILTER)                  (((FILTER) == SMBUS_ANALOGFILTER_ENABLE) || \
                                                          ((FILTER) == SMBUS_ANALOGFILTER_DISABLE))
#define IS_SMBUS_DIGITAL_FILTER(FILTER)                 ((FILTER) <= 0x0000000FU)
#define IS_SMBUS_DUAL_ADDRESS(ADDRESS)                  (((ADDRESS) == SMBUS_DUALADDRESS_DISABLE) || \
                                                          ((ADDRESS) == SMBUS_DUALADDRESS_ENABLE))
#define IS_SMBUS_GENERAL_CALL(CALL)                     (((CALL) == SMBUS_GENERALCALL_DISABLE) || \
                                                         ((CALL) == SMBUS_GENERALCALL_ENABLE))
#define IS_SMBUS_NO_STRETCH(STRETCH)                    (((STRETCH) == SMBUS_NOSTRETCH_DISABLE) || \
                                                         ((STRETCH) == SMBUS_NOSTRETCH_ENABLE))
#define IS_SMBUS_OWN_ADDRESS1(ADDRESS1)                         ((ADDRESS1) <= 0x000003FFU)
#define IS_SMBUS_OWN_ADDRESS2(ADDRESS2)                         ((ADDRESS2) <= (uint16_t)0x00FFU)
#define IS_SMBUS_OWN_ADDRESS2_MASK(MASK)                (((MASK) == SMBUS_OA2_NOMASK)    || \
                                                         ((MASK) == SMBUS_OA2_MASK01)    || \
                                                         ((MASK) == SMBUS_OA2_MASK02)    || \
                                                         ((MASK) == SMBUS_OA2_MASK03)    || \
                                                         ((MASK) == SMBUS_OA2_MASK04)    || \
                                                         ((MASK) == SMBUS_OA2_MASK05)    || \
                                                         ((MASK) == SMBUS_OA2_MASK06)    || \
                                                         ((MASK) == SMBUS_OA2_MASK07))
#define IS_SMBUS_PEC(PEC)                               (((PEC) == SMBUS_PEC_DISABLE) || \
                                                          ((PEC) == SMBUS_PEC_ENABLE))
#define IS_SMBUS_PERIPHERAL_MODE(MODE)                  (((MODE) == SMBUS_PERIPHERAL_MODE_SMBUS_HOST)    || \
                                                          ((MODE) == SMBUS_PERIPHERAL_MODE_SMBUS_SLAVE)  || \
                                                          ((MODE) == SMBUS_PERIPHERAL_MODE_SMBUS_SLAVE_ARP))
#define IS_SMBUS_TRANSFER_MODE(MODE)                    (((MODE) == SMBUS_RELOAD_MODE)                           || \
                                                          ((MODE) == SMBUS_AUTOEND_MODE)                         || \
                                                          ((MODE) == SMBUS_SOFTEND_MODE)                         || \
                                                          ((MODE) == SMBUS_SENDPEC_MODE)                         || \
                                                          ((MODE) == (SMBUS_RELOAD_MODE | SMBUS_SENDPEC_MODE))   || \
                                                          ((MODE) == (SMBUS_AUTOEND_MODE | SMBUS_SENDPEC_MODE))  || \
                                                          ((MODE) == (SMBUS_AUTOEND_MODE | SMBUS_RELOAD_MODE))   || \
                                                          ((MODE) == (SMBUS_AUTOEND_MODE | SMBUS_SENDPEC_MODE | SMBUS_RELOAD_MODE )))
#define IS_SMBUS_TRANSFER_OPTIONS_REQUEST(REQUEST)      (((REQUEST) == SMBUS_FIRST_FRAME)                        || \
                                                          ((REQUEST) == SMBUS_NEXT_FRAME)                        || \
                                                          ((REQUEST) == SMBUS_FIRST_AND_LAST_FRAME_NO_PEC)       || \
                                                          ((REQUEST) == SMBUS_LAST_FRAME_NO_PEC)                 || \
                                                          ((REQUEST) == SMBUS_FIRST_AND_LAST_FRAME_WITH_PEC)     || \
                                                          ((REQUEST) == SMBUS_LAST_FRAME_WITH_PEC)               || \
                                                          IS_SMBUS_TRANSFER_OTHER_OPTIONS_REQUEST(REQUEST))
#define IS_SMBUS_TRANSFER_OTHER_OPTIONS_REQUEST(REQUEST) (((REQUEST) == SMBUS_OTHER_FRAME_NO_PEC)                || \
                                                          ((REQUEST) == SMBUS_OTHER_AND_LAST_FRAME_NO_PEC)       || \
                                                          ((REQUEST) == SMBUS_OTHER_FRAME_WITH_PEC)              || \
                                                          ((REQUEST) == SMBUS_OTHER_AND_LAST_FRAME_WITH_PEC))
#define IS_SMBUS_TRANSFER_REQUEST(REQUEST)              (((REQUEST) == SMBUS_GENERATE_STOP)              || \
                                                          ((REQUEST) == SMBUS_GENERATE_START_READ)       || \
                                                          ((REQUEST) == SMBUS_GENERATE_START_WRITE)      || \
                                                          ((REQUEST) == SMBUS_NO_STARTSTOP))
#define SMBUS_CHECK_FLAG(__ISR__, __FLAG__)             ((((__ISR__) & ((__FLAG__) & SMBUS_FLAG_MASK)) == ((__FLAG__) & SMBUS_FLAG_MASK)))
#define SMBUS_GENERATE_START(__ADDMODE__,__ADDRESS__)     (((__ADDMODE__) == SMBUS_ADDRESSINGMODE_7BIT) ? (uint32_t)((((uint32_t)(__ADDRESS__) & (I2C_CR2_SADD)) | (I2C_CR2_START) | (I2C_CR2_AUTOEND)) & (~I2C_CR2_RD_WRN)) : \
                                                                  (uint32_t)((((uint32_t)(__ADDRESS__) & (I2C_CR2_SADD)) | (I2C_CR2_ADD10) | (I2C_CR2_START)) & (~I2C_CR2_RD_WRN)))
#define SMBUS_GET_ADDR_MATCH(__HANDLE__)                  (((__HANDLE__)->Instance->ISR & I2C_ISR_ADDCODE) >> 17U)
#define SMBUS_GET_ALERT_ENABLED(__HANDLE__)                ((__HANDLE__)->Instance->CR1 & I2C_CR1_ALERTEN)
#define SMBUS_GET_DIR(__HANDLE__)                         (((__HANDLE__)->Instance->ISR & I2C_ISR_DIR) >> 16U)
#define SMBUS_GET_ISR_REG(__HANDLE__)                   ((__HANDLE__)->Instance->ISR)
#define SMBUS_GET_PEC_MODE(__HANDLE__)                    ((__HANDLE__)->Instance->CR2 & I2C_CR2_PECBYTE)
#define SMBUS_GET_STOP_MODE(__HANDLE__)                   ((__HANDLE__)->Instance->CR2 & I2C_CR2_AUTOEND)
#define SMBUS_RESET_CR1(__HANDLE__)                       ((__HANDLE__)->Instance->CR1 &= (uint32_t)~((uint32_t)(I2C_CR1_SMBHEN | I2C_CR1_SMBDEN | I2C_CR1_PECEN)))
#define SMBUS_RESET_CR2(__HANDLE__)                       ((__HANDLE__)->Instance->CR2 &= (uint32_t)~((uint32_t)(I2C_CR2_SADD | I2C_CR2_HEAD10R | I2C_CR2_NBYTES | I2C_CR2_RELOAD | I2C_CR2_RD_WRN)))
#define __HAL_SMBUS_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_SMBUS_DISABLE(__HANDLE__)                 (CLEAR_BIT((__HANDLE__)->Instance->CR1, I2C_CR1_PE))
#define __HAL_SMBUS_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((__HANDLE__)->Instance->CR1 &= (~(__INTERRUPT__)))
#define __HAL_SMBUS_ENABLE(__HANDLE__)                  (SET_BIT((__HANDLE__)->Instance->CR1, I2C_CR1_PE))
#define __HAL_SMBUS_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->CR1 |= (__INTERRUPT__))
#define __HAL_SMBUS_GENERATE_NACK(__HANDLE__)           (SET_BIT((__HANDLE__)->Instance->CR2, I2C_CR2_NACK))
#define __HAL_SMBUS_GET_FLAG(__HANDLE__, __FLAG__) (((((__HANDLE__)->Instance->ISR) & ((__FLAG__) & SMBUS_FLAG_MASK)) == ((__FLAG__) & SMBUS_FLAG_MASK)))
#define __HAL_SMBUS_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->CR1 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_SMBUS_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SMBUS_STATE_RESET)
