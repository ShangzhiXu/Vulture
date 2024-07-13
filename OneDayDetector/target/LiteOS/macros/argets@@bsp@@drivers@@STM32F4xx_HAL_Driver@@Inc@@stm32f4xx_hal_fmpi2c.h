#define FMPI2C_CHECK_FLAG(__ISR__, __FLAG__)         ((((__ISR__) & ((__FLAG__) & FMPI2C_FLAG_MASK)) == ((__FLAG__) & FMPI2C_FLAG_MASK)) ? SET : RESET)
#define FMPI2C_CHECK_IT_SOURCE(__CR1__, __IT__)      ((((__CR1__) & (__IT__)) == (__IT__)) ? SET : RESET)
#define FMPI2C_GENERATE_START(__ADDMODE__,__ADDRESS__) (((__ADDMODE__) == FMPI2C_ADDRESSINGMODE_7BIT) ? (uint32_t)((((uint32_t)(__ADDRESS__) & (FMPI2C_CR2_SADD)) | (FMPI2C_CR2_START) | (FMPI2C_CR2_AUTOEND)) & (~FMPI2C_CR2_RD_WRN)) : \
                                                          (uint32_t)((((uint32_t)(__ADDRESS__) & (FMPI2C_CR2_SADD)) | (FMPI2C_CR2_ADD10) | (FMPI2C_CR2_START)) & (~FMPI2C_CR2_RD_WRN)))
#define FMPI2C_GET_ADDR_MATCH(__HANDLE__)            ((uint16_t)(((__HANDLE__)->Instance->ISR & FMPI2C_ISR_ADDCODE) >> 16U))
#define FMPI2C_GET_DIR(__HANDLE__)                   ((uint8_t)(((__HANDLE__)->Instance->ISR & FMPI2C_ISR_DIR) >> 16U))
#define FMPI2C_GET_OWN_ADDRESS1(__HANDLE__)          ((uint16_t)((__HANDLE__)->Instance->OAR1 & FMPI2C_OAR1_OA1))
#define FMPI2C_GET_OWN_ADDRESS2(__HANDLE__)          ((uint16_t)((__HANDLE__)->Instance->OAR2 & FMPI2C_OAR2_OA2))
#define FMPI2C_GET_STOP_MODE(__HANDLE__)             ((__HANDLE__)->Instance->CR2 & FMPI2C_CR2_AUTOEND)
#define FMPI2C_MEM_ADD_LSB(__ADDRESS__)              ((uint8_t)((uint16_t)((__ADDRESS__) & (uint16_t)(0x00FFU))))
#define FMPI2C_MEM_ADD_MSB(__ADDRESS__)              ((uint8_t)((uint16_t)(((uint16_t)((__ADDRESS__) & (uint16_t)(0xFF00U))) >> 8U)))
#define FMPI2C_RESET_CR2(__HANDLE__)                 ((__HANDLE__)->Instance->CR2 &= (uint32_t)~((uint32_t)(FMPI2C_CR2_SADD | FMPI2C_CR2_HEAD10R | FMPI2C_CR2_NBYTES | FMPI2C_CR2_RELOAD | FMPI2C_CR2_RD_WRN)))
#define IS_FMPI2C_ADDRESSING_MODE(MODE)    (((MODE) == FMPI2C_ADDRESSINGMODE_7BIT) || \
                                         ((MODE) == FMPI2C_ADDRESSINGMODE_10BIT))
#define IS_FMPI2C_DUAL_ADDRESS(ADDRESS)    (((ADDRESS) == FMPI2C_DUALADDRESS_DISABLE) || \
                                         ((ADDRESS) == FMPI2C_DUALADDRESS_ENABLE))
#define IS_FMPI2C_GENERAL_CALL(CALL)       (((CALL) == FMPI2C_GENERALCALL_DISABLE) || \
                                         ((CALL) == FMPI2C_GENERALCALL_ENABLE))
#define IS_FMPI2C_MEMADD_SIZE(SIZE)        (((SIZE) == FMPI2C_MEMADD_SIZE_8BIT) || \
                                         ((SIZE) == FMPI2C_MEMADD_SIZE_16BIT))
#define IS_FMPI2C_NO_STRETCH(STRETCH)      (((STRETCH) == FMPI2C_NOSTRETCH_DISABLE) || \
                                         ((STRETCH) == FMPI2C_NOSTRETCH_ENABLE))
#define IS_FMPI2C_OWN_ADDRESS1(ADDRESS1)             ((ADDRESS1) <= 0x000003FFU)
#define IS_FMPI2C_OWN_ADDRESS2(ADDRESS2)             ((ADDRESS2) <= (uint16_t)0x00FFU)
#define IS_FMPI2C_OWN_ADDRESS2_MASK(MASK)  (((MASK) == FMPI2C_OA2_NOMASK)  || \
                                         ((MASK) == FMPI2C_OA2_MASK01) || \
                                         ((MASK) == FMPI2C_OA2_MASK02) || \
                                         ((MASK) == FMPI2C_OA2_MASK03) || \
                                         ((MASK) == FMPI2C_OA2_MASK04) || \
                                         ((MASK) == FMPI2C_OA2_MASK05) || \
                                         ((MASK) == FMPI2C_OA2_MASK06) || \
                                         ((MASK) == FMPI2C_OA2_MASK07))
#define IS_FMPI2C_TRANSFER_OPTIONS_REQUEST(REQUEST)  (((REQUEST) == FMPI2C_FIRST_FRAME)          || \
                                                   ((REQUEST) == FMPI2C_FIRST_AND_NEXT_FRAME) || \
                                                   ((REQUEST) == FMPI2C_NEXT_FRAME)           || \
                                                   ((REQUEST) == FMPI2C_FIRST_AND_LAST_FRAME) || \
                                                   ((REQUEST) == FMPI2C_LAST_FRAME)           || \
                                                   ((REQUEST) == FMPI2C_LAST_FRAME_NO_STOP)   || \
                                                   IS_FMPI2C_TRANSFER_OTHER_OPTIONS_REQUEST(REQUEST))
#define IS_FMPI2C_TRANSFER_OTHER_OPTIONS_REQUEST(REQUEST) (((REQUEST) == FMPI2C_OTHER_FRAME)     || \
                                                        ((REQUEST) == FMPI2C_OTHER_AND_LAST_FRAME))
#define IS_TRANSFER_MODE(MODE)          (((MODE) == FMPI2C_RELOAD_MODE)   || \
                                         ((MODE) == FMPI2C_AUTOEND_MODE) || \
                                         ((MODE) == FMPI2C_SOFTEND_MODE))
#define IS_TRANSFER_REQUEST(REQUEST)    (((REQUEST) == FMPI2C_GENERATE_STOP)        || \
                                         ((REQUEST) == FMPI2C_GENERATE_START_READ)  || \
                                         ((REQUEST) == FMPI2C_GENERATE_START_WRITE) || \
                                         ((REQUEST) == FMPI2C_NO_STARTSTOP))
#define __HAL_FMPI2C_CLEAR_FLAG(__HANDLE__, __FLAG__) (((__FLAG__) == FMPI2C_FLAG_TXE) ? ((__HANDLE__)->Instance->ISR |= (__FLAG__)) \
                                                                                 : ((__HANDLE__)->Instance->ICR = (__FLAG__)))
#define __HAL_FMPI2C_DISABLE(__HANDLE__)                           (CLEAR_BIT((__HANDLE__)->Instance->CR1, FMPI2C_CR1_PE))
#define __HAL_FMPI2C_DISABLE_IT(__HANDLE__, __INTERRUPT__)         ((__HANDLE__)->Instance->CR1 &= (~(__INTERRUPT__)))
#define __HAL_FMPI2C_ENABLE(__HANDLE__)                            (SET_BIT((__HANDLE__)->Instance->CR1,  FMPI2C_CR1_PE))
#define __HAL_FMPI2C_ENABLE_IT(__HANDLE__, __INTERRUPT__)          ((__HANDLE__)->Instance->CR1 |= (__INTERRUPT__))
#define __HAL_FMPI2C_GENERATE_NACK(__HANDLE__)                     (SET_BIT((__HANDLE__)->Instance->CR2, FMPI2C_CR2_NACK))
#define __HAL_FMPI2C_GET_FLAG(__HANDLE__, __FLAG__) (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) == (__FLAG__)) ? SET : RESET)
#define __HAL_FMPI2C_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)      ((((__HANDLE__)->Instance->CR1 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_FMPI2C_RESET_HANDLE_STATE(__HANDLE__)                do{                                                   \
                                                                    (__HANDLE__)->State = HAL_FMPI2C_STATE_RESET;       \
                                                                    (__HANDLE__)->MspInitCallback = NULL;            \
                                                                    (__HANDLE__)->MspDeInitCallback = NULL;          \
                                                                  } while(0)
#define __HAL_FMPI2C_RESET_HANDLE_STATE(__HANDLE__)                ((__HANDLE__)->State = HAL_FMPI2C_STATE_RESET)
