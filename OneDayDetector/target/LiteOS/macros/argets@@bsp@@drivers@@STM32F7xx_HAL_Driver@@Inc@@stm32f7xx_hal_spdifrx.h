#define IS_CHANNEL_STATUS_MASK(VAL)         (((VAL) == SPDIFRX_CHANNELSTATUS_ON) || \
                                            ((VAL) == SPDIFRX_CHANNELSTATUS_OFF))
#define IS_PARITY_ERROR_MASK(VAL)           (((VAL) == SPDIFRX_PARITYERRORMASK_OFF) || \
                                            ((VAL) == SPDIFRX_PARITYERRORMASK_ON))
#define IS_PREAMBLE_TYPE_MASK(VAL)          (((VAL) == SPDIFRX_PREAMBLETYPEMASK_ON) || \
                                            ((VAL) == SPDIFRX_PREAMBLETYPEMASK_OFF))
#define IS_SPDIFRX_CHANNEL(CHANNEL)         (((CHANNEL) == SPDIFRX_CHANNEL_A) || \
                                            ((CHANNEL) == SPDIFRX_CHANNEL_B))
#define IS_SPDIFRX_DATA_FORMAT(FORMAT)      (((FORMAT) == SPDIFRX_DATAFORMAT_LSB) || \
                                            ((FORMAT) == SPDIFRX_DATAFORMAT_MSB)  || \
                                            ((FORMAT) == SPDIFRX_DATAFORMAT_32BITS))
#define IS_SPDIFRX_INPUT_SELECT(INPUT)      (((INPUT) == SPDIFRX_INPUT_IN1) || \
                                            ((INPUT) == SPDIFRX_INPUT_IN2)  || \
                                            ((INPUT) == SPDIFRX_INPUT_IN3)  || \
                                            ((INPUT) == SPDIFRX_INPUT_IN0))
#define IS_SPDIFRX_MAX_RETRIES(RET)         (((RET) == SPDIFRX_MAXRETRIES_NONE) || \
                                            ((RET) == SPDIFRX_MAXRETRIES_3)     || \
                                            ((RET) == SPDIFRX_MAXRETRIES_15)    || \
                                            ((RET) == SPDIFRX_MAXRETRIES_63))
#define IS_SPDIFRX_WAIT_FOR_ACTIVITY(VAL)   (((VAL) == SPDIFRX_WAITFORACTIVITY_ON) || \
                                            ((VAL) == SPDIFRX_WAITFORACTIVITY_OFF))
#define IS_STEREO_MODE(MODE)                (((MODE) == SPDIFRX_STEREOMODE_DISABLE) || \
                                            ((MODE) == SPDIFRX_STEREOMODE_ENABLE))
#define IS_VALIDITY_MASK(VAL)               (((VAL) == SPDIFRX_VALIDITYMASK_OFF) || \
                                            ((VAL) == SPDIFRX_VALIDITYMASK_ON))
#define __HAL_SPDIFRX_CLEAR_IT(__HANDLE__, __IT_CLEAR__) ((__HANDLE__)->Instance->IFCR = (uint32_t)(__IT_CLEAR__))
#define __HAL_SPDIFRX_DISABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->IMR &= (uint16_t)(~(__INTERRUPT__)))
#define __HAL_SPDIFRX_ENABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->IMR |= (__INTERRUPT__))
#define __HAL_SPDIFRX_GET_FLAG(__HANDLE__, __FLAG__) (((((__HANDLE__)->Instance->SR) & (__FLAG__)) == (__FLAG__)) ? SET : RESET)
#define __HAL_SPDIFRX_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->IMR & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_SPDIFRX_IDLE(__HANDLE__) ((__HANDLE__)->Instance->CR &= SPDIFRX_STATE_IDLE)
#define __HAL_SPDIFRX_RCV(__HANDLE__) ((__HANDLE__)->Instance->CR |= SPDIFRX_STATE_RCV)
#define __HAL_SPDIFRX_RESET_HANDLE_STATE(__HANDLE__) do{\
                                                      (__HANDLE__)->State = HAL_SPDIFRX_STATE_RESET;\
                                                      (__HANDLE__)->MspInitCallback = NULL;\
                                                      (__HANDLE__)->MspDeInitCallback = NULL;\
                                                     }while(0)
#define __HAL_SPDIFRX_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SPDIFRX_STATE_RESET)
#define __HAL_SPDIFRX_SYNC(__HANDLE__) ((__HANDLE__)->Instance->CR |= SPDIFRX_STATE_SYNC)
