#define IS_CEC_ADDRESS(__ADDRESS__) ((__ADDRESS__) <= 0xFU)
#define IS_CEC_BREERRORBITGEN(__ERRORBITGEN__) (((__ERRORBITGEN__) == CEC_BRE_ERRORBIT_NO_GENERATION) || \
                                                ((__ERRORBITGEN__) == CEC_BRE_ERRORBIT_GENERATION))
#define IS_CEC_BRERXSTOP(__BRERXSTOP__)   (((__BRERXSTOP__) == CEC_NO_RX_STOP_ON_BRE) || \
                                           ((__BRERXSTOP__) == CEC_RX_STOP_ON_BRE))
#define IS_CEC_BROADCASTERROR_NO_ERRORBIT_GENERATION(__ERRORBITGEN__) (((__ERRORBITGEN__) == CEC_BROADCASTERROR_ERRORBIT_GENERATION) || \
                                                                       ((__ERRORBITGEN__) == CEC_BROADCASTERROR_NO_ERRORBIT_GENERATION))
#define IS_CEC_LBPEERRORBITGEN(__ERRORBITGEN__) (((__ERRORBITGEN__) == CEC_LBPE_ERRORBIT_NO_GENERATION) || \
                                                 ((__ERRORBITGEN__) == CEC_LBPE_ERRORBIT_GENERATION))
#define IS_CEC_LISTENING_MODE(__MODE__)     (((__MODE__) == CEC_REDUCED_LISTENING_MODE) || \
                                             ((__MODE__) == CEC_FULL_LISTENING_MODE))
#define IS_CEC_MSGSIZE(__SIZE__) ((__SIZE__) <= 0x10U)
#define IS_CEC_OWN_ADDRESS(__ADDRESS__) ((__ADDRESS__) <= 0x7FFFU)
#define IS_CEC_SFTOP(__SFTOP__)          (((__SFTOP__) == CEC_SFT_START_ON_TXSOM) || \
                                          ((__SFTOP__) == CEC_SFT_START_ON_TX_RX_END))
#define IS_CEC_SIGNALFREETIME(__SFT__)     ((__SFT__) <= CEC_CFGR_SFT)
#define IS_CEC_TOLERANCE(__RXTOL__)        (((__RXTOL__) == CEC_STANDARD_TOLERANCE) || \
                                            ((__RXTOL__) == CEC_EXTENDED_TOLERANCE))
#define __HAL_CEC_CLEAR_FLAG(__HANDLE__, __FLAG__)         ((__HANDLE__)->Instance->ISR |= (__FLAG__))
#define __HAL_CEC_CLEAR_OAR(__HANDLE__)   CLEAR_BIT((__HANDLE__)->Instance->CFGR, CEC_CFGR_OAR)
#define __HAL_CEC_DISABLE(__HANDLE__)                  ((__HANDLE__)->Instance->CR &=  ~CEC_CR_CECEN)
#define __HAL_CEC_DISABLE_IT(__HANDLE__, __INTERRUPT__)    ((__HANDLE__)->Instance->IER &= (~(__INTERRUPT__)))
#define __HAL_CEC_ENABLE(__HANDLE__)                   ((__HANDLE__)->Instance->CR |=  CEC_CR_CECEN)
#define __HAL_CEC_ENABLE_IT(__HANDLE__, __INTERRUPT__)     ((__HANDLE__)->Instance->IER |= (__INTERRUPT__))
#define __HAL_CEC_FIRST_BYTE_TX_SET(__HANDLE__)        ((__HANDLE__)->Instance->CR |=  CEC_CR_TXSOM)
#define __HAL_CEC_GET_FLAG(__HANDLE__, __FLAG__)        ((__HANDLE__)->Instance->ISR & (__FLAG__))
#define __HAL_CEC_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->IER & (__INTERRUPT__))
#define __HAL_CEC_GET_TRANSMISSION_END_FLAG(__HANDLE__)   ((__HANDLE__)->Instance->CR & CEC_CR_TXEOM)
#define __HAL_CEC_GET_TRANSMISSION_START_FLAG(__HANDLE__) ((__HANDLE__)->Instance->CR & CEC_CR_TXSOM)
#define __HAL_CEC_LAST_BYTE_TX_SET(__HANDLE__)         ((__HANDLE__)->Instance->CR |=  CEC_CR_TXEOM)
#define __HAL_CEC_RESET_HANDLE_STATE(__HANDLE__) do{                                                   \
                                                       (__HANDLE__)->gState = HAL_CEC_STATE_RESET;     \
                                                       (__HANDLE__)->RxState = HAL_CEC_STATE_RESET;    \
                                                       (__HANDLE__)->MspInitCallback = NULL;           \
                                                       (__HANDLE__)->MspDeInitCallback = NULL;         \
                                                     } while(0)
#define __HAL_CEC_RESET_HANDLE_STATE(__HANDLE__) do{                                                   \
                                                       (__HANDLE__)->gState = HAL_CEC_STATE_RESET;     \
                                                       (__HANDLE__)->RxState = HAL_CEC_STATE_RESET;    \
                                                     } while(0)
#define __HAL_CEC_SET_OAR(__HANDLE__,__ADDRESS__)   SET_BIT((__HANDLE__)->Instance->CFGR, (__ADDRESS__)<< CEC_CFGR_OAR_LSB_POS)
