#define FMPSMBUS_CHECK_FLAG(__ISR__, __FLAG__)             ((((__ISR__) & ((__FLAG__) & FMPSMBUS_FLAG_MASK)) == ((__FLAG__) & FMPSMBUS_FLAG_MASK)) ? SET : RESET)
#define FMPSMBUS_CHECK_IT_SOURCE(__CR1__, __IT__)          ((((__CR1__) & (__IT__)) == (__IT__)) ? SET : RESET)
#define FMPSMBUS_GENERATE_START(__ADDMODE__,__ADDRESS__)     (((__ADDMODE__) == FMPSMBUS_ADDRESSINGMODE_7BIT) ? (uint32_t)((((uint32_t)(__ADDRESS__) & (FMPI2C_CR2_SADD)) | (FMPI2C_CR2_START) | (FMPI2C_CR2_AUTOEND)) & (~FMPI2C_CR2_RD_WRN)) : \
                                                                  (uint32_t)((((uint32_t)(__ADDRESS__) & (FMPI2C_CR2_SADD)) | (FMPI2C_CR2_ADD10) | (FMPI2C_CR2_START)) & (~FMPI2C_CR2_RD_WRN)))
#define FMPSMBUS_GET_ADDR_MATCH(__HANDLE__)                  (((__HANDLE__)->Instance->ISR & FMPI2C_ISR_ADDCODE) >> 17U)
#define FMPSMBUS_GET_ALERT_ENABLED(__HANDLE__)                ((__HANDLE__)->Instance->CR1 & FMPI2C_CR1_ALERTEN)
#define FMPSMBUS_GET_DIR(__HANDLE__)                         (((__HANDLE__)->Instance->ISR & FMPI2C_ISR_DIR) >> 16U)
#define FMPSMBUS_GET_PEC_MODE(__HANDLE__)                    ((__HANDLE__)->Instance->CR2 & FMPI2C_CR2_PECBYTE)
#define FMPSMBUS_GET_STOP_MODE(__HANDLE__)                   ((__HANDLE__)->Instance->CR2 & FMPI2C_CR2_AUTOEND)
#define FMPSMBUS_RESET_CR1(__HANDLE__)                       ((__HANDLE__)->Instance->CR1 &= (uint32_t)~((uint32_t)(FMPI2C_CR1_SMBHEN | FMPI2C_CR1_SMBDEN | FMPI2C_CR1_PECEN)))
#define FMPSMBUS_RESET_CR2(__HANDLE__)                       ((__HANDLE__)->Instance->CR2 &= (uint32_t)~((uint32_t)(FMPI2C_CR2_SADD | FMPI2C_CR2_HEAD10R | FMPI2C_CR2_NBYTES | FMPI2C_CR2_RELOAD | FMPI2C_CR2_RD_WRN)))
#define IS_FMPSMBUS_ADDRESSING_MODE(MODE)                  (((MODE) == FMPSMBUS_ADDRESSINGMODE_7BIT)  || \
                                                          ((MODE) == FMPSMBUS_ADDRESSINGMODE_10BIT))
#define IS_FMPSMBUS_ANALOG_FILTER(FILTER)                  (((FILTER) == FMPSMBUS_ANALOGFILTER_ENABLE) || \
                                                          ((FILTER) == FMPSMBUS_ANALOGFILTER_DISABLE))
#define IS_FMPSMBUS_DIGITAL_FILTER(FILTER)                 ((FILTER) <= 0x0000000FU)
#define IS_FMPSMBUS_DUAL_ADDRESS(ADDRESS)                  (((ADDRESS) == FMPSMBUS_DUALADDRESS_DISABLE) || \
                                                          ((ADDRESS) == FMPSMBUS_DUALADDRESS_ENABLE))
#define IS_FMPSMBUS_GENERAL_CALL(CALL)                     (((CALL) == FMPSMBUS_GENERALCALL_DISABLE) || \
                                                         ((CALL) == FMPSMBUS_GENERALCALL_ENABLE))
#define IS_FMPSMBUS_NO_STRETCH(STRETCH)                    (((STRETCH) == FMPSMBUS_NOSTRETCH_DISABLE) || \
                                                         ((STRETCH) == FMPSMBUS_NOSTRETCH_ENABLE))
#define IS_FMPSMBUS_OWN_ADDRESS1(ADDRESS1)                         ((ADDRESS1) <= 0x000003FFU)
#define IS_FMPSMBUS_OWN_ADDRESS2(ADDRESS2)                         ((ADDRESS2) <= (uint16_t)0x00FFU)
#define IS_FMPSMBUS_OWN_ADDRESS2_MASK(MASK)                (((MASK) == FMPSMBUS_OA2_NOMASK)    || \
                                                         ((MASK) == FMPSMBUS_OA2_MASK01)    || \
                                                         ((MASK) == FMPSMBUS_OA2_MASK02)    || \
                                                         ((MASK) == FMPSMBUS_OA2_MASK03)    || \
                                                         ((MASK) == FMPSMBUS_OA2_MASK04)    || \
                                                         ((MASK) == FMPSMBUS_OA2_MASK05)    || \
                                                         ((MASK) == FMPSMBUS_OA2_MASK06)    || \
                                                         ((MASK) == FMPSMBUS_OA2_MASK07))
#define IS_FMPSMBUS_PEC(PEC)                               (((PEC) == FMPSMBUS_PEC_DISABLE) || \
                                                          ((PEC) == FMPSMBUS_PEC_ENABLE))
#define IS_FMPSMBUS_PERIPHERAL_MODE(MODE)                  (((MODE) == FMPSMBUS_PERIPHERAL_MODE_FMPSMBUS_HOST)    || \
                                                          ((MODE) == FMPSMBUS_PERIPHERAL_MODE_FMPSMBUS_SLAVE)  || \
                                                          ((MODE) == FMPSMBUS_PERIPHERAL_MODE_FMPSMBUS_SLAVE_ARP))
#define IS_FMPSMBUS_TRANSFER_MODE(MODE)                    (((MODE) == FMPSMBUS_RELOAD_MODE)                           || \
                                                          ((MODE) == FMPSMBUS_AUTOEND_MODE)                         || \
                                                          ((MODE) == FMPSMBUS_SOFTEND_MODE)                         || \
                                                          ((MODE) == FMPSMBUS_SENDPEC_MODE)                         || \
                                                          ((MODE) == (FMPSMBUS_RELOAD_MODE | FMPSMBUS_SENDPEC_MODE))   || \
                                                          ((MODE) == (FMPSMBUS_AUTOEND_MODE | FMPSMBUS_SENDPEC_MODE))  || \
                                                          ((MODE) == (FMPSMBUS_AUTOEND_MODE | FMPSMBUS_RELOAD_MODE))   || \
                                                          ((MODE) == (FMPSMBUS_AUTOEND_MODE | FMPSMBUS_SENDPEC_MODE | FMPSMBUS_RELOAD_MODE )))
#define IS_FMPSMBUS_TRANSFER_OPTIONS_REQUEST(REQUEST)      (IS_FMPSMBUS_TRANSFER_OTHER_OPTIONS_REQUEST(REQUEST)       || \
                                                          ((REQUEST) == FMPSMBUS_FIRST_FRAME)                       || \
                                                          ((REQUEST) == FMPSMBUS_NEXT_FRAME)                        || \
                                                          ((REQUEST) == FMPSMBUS_FIRST_AND_LAST_FRAME_NO_PEC)       || \
                                                          ((REQUEST) == FMPSMBUS_LAST_FRAME_NO_PEC)                 || \
                                                          ((REQUEST) == FMPSMBUS_FIRST_AND_LAST_FRAME_WITH_PEC)     || \
                                                          ((REQUEST) == FMPSMBUS_LAST_FRAME_WITH_PEC))
#define IS_FMPSMBUS_TRANSFER_OTHER_OPTIONS_REQUEST(REQUEST) (((REQUEST) == FMPSMBUS_OTHER_FRAME_NO_PEC)                || \
                                                          ((REQUEST) == FMPSMBUS_OTHER_AND_LAST_FRAME_NO_PEC)       || \
                                                          ((REQUEST) == FMPSMBUS_OTHER_FRAME_WITH_PEC)              || \
                                                          ((REQUEST) == FMPSMBUS_OTHER_AND_LAST_FRAME_WITH_PEC))
#define IS_FMPSMBUS_TRANSFER_REQUEST(REQUEST)              (((REQUEST) == FMPSMBUS_GENERATE_STOP)              || \
                                                          ((REQUEST) == FMPSMBUS_GENERATE_START_READ)       || \
                                                          ((REQUEST) == FMPSMBUS_GENERATE_START_WRITE)      || \
                                                          ((REQUEST) == FMPSMBUS_NO_STARTSTOP))
#define __HAL_FMPSMBUS_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_FMPSMBUS_DISABLE(__HANDLE__)                 (CLEAR_BIT((__HANDLE__)->Instance->CR1, FMPI2C_CR1_PE))
#define __HAL_FMPSMBUS_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((__HANDLE__)->Instance->CR1 &= (~(__INTERRUPT__)))
#define __HAL_FMPSMBUS_ENABLE(__HANDLE__)                  (SET_BIT((__HANDLE__)->Instance->CR1, FMPI2C_CR1_PE))
#define __HAL_FMPSMBUS_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->CR1 |= (__INTERRUPT__))
#define __HAL_FMPSMBUS_GENERATE_NACK(__HANDLE__)           (SET_BIT((__HANDLE__)->Instance->CR2, FMPI2C_CR2_NACK))
#define __HAL_FMPSMBUS_GET_FLAG(__HANDLE__, __FLAG__) (((((__HANDLE__)->Instance->ISR) & ((__FLAG__) & FMPSMBUS_FLAG_MASK)) == ((__FLAG__) & FMPSMBUS_FLAG_MASK)) ? SET : RESET)
#define __HAL_FMPSMBUS_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->CR1 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_FMPSMBUS_RESET_HANDLE_STATE(__HANDLE__)           do{                                                   \
                                                                (__HANDLE__)->State = HAL_FMPSMBUS_STATE_RESET;       \
                                                                (__HANDLE__)->MspInitCallback = NULL;            \
                                                                (__HANDLE__)->MspDeInitCallback = NULL;          \
                                                             } while(0)
#define __HAL_FMPSMBUS_RESET_HANDLE_STATE(__HANDLE__)         ((__HANDLE__)->State = HAL_FMPSMBUS_STATE_RESET)
