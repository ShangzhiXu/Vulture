#define IS_CEC_ADDRESS(__ADDRESS__) ((__ADDRESS__) <= 0xF)    
#define IS_CEC_BIT_PERIOD_ERROR_MODE(MODE) (((MODE) == CEC_BIT_PERIOD_ERROR_MODE_STANDARD) || \
                                        ((MODE) == CEC_BIT_PERIOD_ERROR_MODE_FLEXIBLE))
#define IS_CEC_BIT_TIMING_ERROR_MODE(MODE) (((MODE) == CEC_BIT_TIMING_ERROR_MODE_STANDARD) || \
                                        ((MODE) == CEC_BIT_TIMING_ERROR_MODE_ERRORFREE))
#define IS_CEC_MSGSIZE(__SIZE__) ((__SIZE__) <= 0xF)   
#define IS_CEC_OAR_ADDRESS(__ADDRESS__) ((__ADDRESS__) <= 0xF)  
#define __HAL_CEC_CLEAR_FLAG(__HANDLE__, __FLAG__)                                                                  \
                          do {                                                                                      \
                            uint32_t tmp = 0x0;                                                                     \
                            tmp = (__HANDLE__)->Instance->CSR & 0x2;                                                \
                            (__HANDLE__)->Instance->CSR &= (uint32_t)(((~(uint32_t)(__FLAG__)) & 0xFFFFFFFC) | tmp);\
                          } while(0)
#define __HAL_CEC_CLEAR_OAR(__HANDLE__)   CLEAR_BIT((__HANDLE__)->Instance->OAR, CEC_OAR_OA)
#define __HAL_CEC_DISABLE(__HANDLE__) CLEAR_BIT((__HANDLE__)->Instance->CFGR, CEC_CFGR_PE)
#define __HAL_CEC_DISABLE_IT(__HANDLE__, __INTERRUPT__) CLEAR_BIT((__HANDLE__)->Instance->CFGR, (__INTERRUPT__))
#define __HAL_CEC_ENABLE(__HANDLE__) SET_BIT((__HANDLE__)->Instance->CFGR, CEC_CFGR_PE)
#define __HAL_CEC_ENABLE_IT(__HANDLE__, __INTERRUPT__) SET_BIT((__HANDLE__)->Instance->CFGR, (__INTERRUPT__))
#define __HAL_CEC_FIRST_BYTE_TX_SET(__HANDLE__) SET_BIT((__HANDLE__)->Instance->CSR, CEC_CSR_TSOM)
#define __HAL_CEC_GET_FLAG(__HANDLE__, __INTERRUPT__) READ_BIT((__HANDLE__)->Instance->CSR,(__INTERRUPT__)) 
#define __HAL_CEC_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) READ_BIT((__HANDLE__)->Instance->CFGR, (__INTERRUPT__))
#define __HAL_CEC_GET_TRANSMISSION_END_FLAG(__HANDLE__) READ_BIT((__HANDLE__)->Instance->CSR, CEC_CSR_TEOM)
#define __HAL_CEC_GET_TRANSMISSION_START_FLAG(__HANDLE__) READ_BIT((__HANDLE__)->Instance->CSR, CEC_CSR_TSOM)
#define __HAL_CEC_LAST_BYTE_TX_SET(__HANDLE__) SET_BIT((__HANDLE__)->Instance->CSR, CEC_CSR_TEOM)
#define __HAL_CEC_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_CEC_STATE_RESET)
#define __HAL_CEC_SET_OAR(__HANDLE__,__ADDRESS__) MODIFY_REG((__HANDLE__)->Instance->OAR, CEC_OAR_OA, (__ADDRESS__));
