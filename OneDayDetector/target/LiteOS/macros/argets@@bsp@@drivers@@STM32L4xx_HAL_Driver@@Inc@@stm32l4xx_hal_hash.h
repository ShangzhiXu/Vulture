#define HASH_DIGEST_LENGTH() ((READ_BIT(HASH->CR, HASH_CR_ALGO) == HASH_ALGOSELECTION_SHA1)   ?  20 : \
                             ((READ_BIT(HASH->CR, HASH_CR_ALGO) == HASH_ALGOSELECTION_SHA224) ?  28 : \
                             ((READ_BIT(HASH->CR, HASH_CR_ALGO) == HASH_ALGOSELECTION_SHA256) ?  32 : 16 ) ) )
#define HASH_NBW_PUSHED() ((READ_BIT(HASH->CR, HASH_CR_NBW)) >> 8)  
#define IS_HASH_DATATYPE(__DATATYPE__) (((__DATATYPE__) == HASH_DATATYPE_32B)|| \
                                        ((__DATATYPE__) == HASH_DATATYPE_16B)|| \
                                        ((__DATATYPE__) == HASH_DATATYPE_8B) || \
                                        ((__DATATYPE__) == HASH_DATATYPE_1B))  
#define IS_HASH_DMA_MULTIBUFFER_SIZE(__SIZE__)  ((READ_BIT(HASH->CR, HASH_CR_MDMAT) == RESET) || (((__SIZE__) % 4) == 0))  
#define IS_HASH_POLLING_MULTIBUFFER_SIZE(__SIZE__)  (((__SIZE__) % 4) == 0)
#define IS_HASH_PROCESSING(__HANDLE__)  ((__HANDLE__)->Phase == HAL_HASH_PHASE_PROCESS)
#define IS_HMAC_DMA_MULTIBUFFER_SIZE(__HANDLE__,__SIZE__)  ((((__HANDLE__)->DigestCalculationDisable) == RESET) || (((__SIZE__) % 4) == 0))                                                                                                                                                      
#define IS_HMAC_PROCESSING(__HANDLE__)  (((__HANDLE__)->Phase == HAL_HASH_PHASE_HMAC_STEP_1) || \
                                         ((__HANDLE__)->Phase == HAL_HASH_PHASE_HMAC_STEP_2) || \
                                         ((__HANDLE__)->Phase == HAL_HASH_PHASE_HMAC_STEP_3))
#define __HAL_HASH_CLEAR_FLAG(__FLAG__) CLEAR_BIT(HASH->SR, (__FLAG__))
#define __HAL_HASH_DISABLE_IT(__INTERRUPT__)   CLEAR_BIT(HASH->IMR, (__INTERRUPT__))
#define __HAL_HASH_ENABLE_IT(__INTERRUPT__)   SET_BIT(HASH->IMR, (__INTERRUPT__))
#define __HAL_HASH_GET_FLAG(__FLAG__)  (((__FLAG__) > 8U)  ?                    \
                                       ((HASH->CR & (__FLAG__)) == (__FLAG__)) :\
                                       ((HASH->SR & (__FLAG__)) == (__FLAG__)) )
#define __HAL_HASH_INIT()       SET_BIT(HASH->CR, HASH_CR_INIT)     
#define __HAL_HASH_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_HASH_STATE_RESET)
#define __HAL_HASH_RESET_HANDLE_STATUS(__HANDLE__) ((__HANDLE__)->Status = HAL_OK)
#define __HAL_HASH_RESET_MDMAT()        CLEAR_BIT(HASH->CR, HASH_CR_MDMAT)
#define __HAL_HASH_SET_MDMAT()          SET_BIT(HASH->CR, HASH_CR_MDMAT) 
#define  __HAL_HASH_SET_NBVALIDBITS(__SIZE__)    MODIFY_REG(HASH->STR, HASH_STR_NBLW, 8 * ((__SIZE__) % 4))                                             
#define __HAL_HASH_START_DIGEST()       SET_BIT(HASH->STR, HASH_STR_DCAL)
