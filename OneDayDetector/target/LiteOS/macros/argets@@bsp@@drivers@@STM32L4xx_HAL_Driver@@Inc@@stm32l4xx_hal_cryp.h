#define IS_CRYP_AES(__MODE__) (((__MODE__) == CRYP_AES_DISABLE) || \
                               ((__MODE__) == CRYP_AES_ENABLE)) 
#define IS_CRYP_ALGOMODE(__ALGOMODE__) (((__ALGOMODE__) == CRYP_ALGOMODE_ENCRYPT)        || \
                                        ((__ALGOMODE__) == CRYP_ALGOMODE_KEYDERIVATION)  || \
                                        ((__ALGOMODE__) == CRYP_ALGOMODE_DECRYPT)        || \
                                        ((__ALGOMODE__) == CRYP_ALGOMODE_TAG_GENERATION) || \
                                        ((__ALGOMODE__) == CRYP_ALGOMODE_KEYDERIVATION_DECRYPT))  
#define IS_CRYP_CHAINMODE(__CHAINMODE__) (((__CHAINMODE__) == CRYP_CHAINMODE_AES_ECB)     || \
                                         ((__CHAINMODE__) == CRYP_CHAINMODE_AES_CBC)      || \
                                         ((__CHAINMODE__) == CRYP_CHAINMODE_AES_CTR)      || \
                                         ((__CHAINMODE__) == CRYP_CHAINMODE_AES_GCM_GMAC) || \
                                         ((__CHAINMODE__) == CRYP_CHAINMODE_AES_CCM))   
#define IS_CRYP_CHAINMODE(__CHAINMODE__) (((__CHAINMODE__) == CRYP_CHAINMODE_AES_ECB)     || \
                                         ((__CHAINMODE__) == CRYP_CHAINMODE_AES_CBC)      || \
                                         ((__CHAINMODE__) == CRYP_CHAINMODE_AES_CTR)      || \
                                         ((__CHAINMODE__) == CRYP_CHAINMODE_AES_GCM_GMAC) || \
                                         ((__CHAINMODE__) == CRYP_CHAINMODE_AES_CMAC))    
#define IS_CRYP_DATATYPE(__DATATYPE__) (((__DATATYPE__) == CRYP_DATATYPE_32B) || \
                                        ((__DATATYPE__) == CRYP_DATATYPE_16B) || \
                                        ((__DATATYPE__) == CRYP_DATATYPE_8B)  || \
                                        ((__DATATYPE__) == CRYP_DATATYPE_1B))
#define IS_CRYP_DMAIN(__MODE__) (((__MODE__) == CRYP_DMAIN_DISABLE) || \
                                 ((__MODE__) == CRYP_DMAIN_ENABLE)) 
#define IS_CRYP_DMAOUT(__MODE__) (((__MODE__) == CRYP_DMAOUT_DISABLE) || \
                                  ((__MODE__) == CRYP_DMAOUT_ENABLE)) 
#define IS_CRYP_GCMCMAC_PHASE(__PHASE__) (((__PHASE__) == CRYP_INIT_PHASE)    || \
                                          ((__PHASE__) == CRYP_HEADER_PHASE)  || \
                                          ((__PHASE__) == CRYP_PAYLOAD_PHASE) || \
                                          ((__PHASE__) == CRYP_FINAL_PHASE))
#define IS_CRYP_KEYSIZE(__KEYSIZE__)  (((__KEYSIZE__) == CRYP_KEYSIZE_128B)  || \
                                       ((__KEYSIZE__) == CRYP_KEYSIZE_256B))
#define IS_CRYP_WRITE(__WRITE__)   (((__WRITE__) == CRYP_KEY_WRITE_ENABLE)      || \
                                    ((__WRITE__) == CRYP_KEY_WRITE_DISABLE))
#define __HAL_CRYP_CLEAR_FLAG(__HANDLE__, __FLAG__) SET_BIT((__HANDLE__)->Instance->CR, (__FLAG__))
#define __HAL_CRYP_CLEAR_IT(__HANDLE__, __INTERRUPT__) SET_BIT((__HANDLE__)->Instance->CR, (__INTERRUPT__))
#define __HAL_CRYP_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR &=  ~AES_CR_EN)
#define __HAL_CRYP_DISABLE_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->CR) &= ~(__INTERRUPT__))
#define __HAL_CRYP_ENABLE(__HANDLE__)  ((__HANDLE__)->Instance->CR |=  AES_CR_EN)
#define __HAL_CRYP_ENABLE_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->CR) |= (__INTERRUPT__))
#define __HAL_CRYP_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_CRYP_GET_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->SR & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_CRYP_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->CR & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_CRYP_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_CRYP_STATE_RESET)
#define __HAL_CRYP_SET_CHAININGMODE(__HANDLE__, __CHAINING_MODE__) MODIFY_REG((__HANDLE__)->Instance->CR, AES_CR_CHMOD, (__CHAINING_MODE__))  
#define __HAL_CRYP_SET_OPERATINGMODE(__HANDLE__, __OPERATING_MODE__) MODIFY_REG((__HANDLE__)->Instance->CR, AES_CR_MODE, (__OPERATING_MODE__))  
