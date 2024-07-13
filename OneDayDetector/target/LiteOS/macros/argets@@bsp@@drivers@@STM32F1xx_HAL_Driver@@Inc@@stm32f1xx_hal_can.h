#define IS_CAN_BANKNUMBER(BANKNUMBER) ((BANKNUMBER) <= 28)
#define IS_CAN_BS1(BS1) ((BS1) <= CAN_BS1_16TQ)
#define IS_CAN_BS2(BS2) ((BS2) <= CAN_BS2_8TQ)
#define IS_CAN_DLC(DLC)       ((DLC) <= ((uint8_t)0x08))
#define IS_CAN_EXTID(EXTID)   ((EXTID) <= ((uint32_t)0x1FFFFFFF))
#define IS_CAN_FIFO(FIFO) (((FIFO) == CAN_FIFO0) || ((FIFO) == CAN_FIFO1))
#define IS_CAN_FILTER_FIFO(FIFO) (((FIFO) == CAN_FILTER_FIFO0) || \
                                  ((FIFO) == CAN_FILTER_FIFO1))
#define IS_CAN_FILTER_MODE(MODE) (((MODE) == CAN_FILTERMODE_IDMASK) || \
                                  ((MODE) == CAN_FILTERMODE_IDLIST))
#define IS_CAN_FILTER_SCALE(SCALE) (((SCALE) == CAN_FILTERSCALE_16BIT) || \
                                    ((SCALE) == CAN_FILTERSCALE_32BIT))
#define IS_CAN_IDTYPE(IDTYPE)  (((IDTYPE) == CAN_ID_STD) || \
                                ((IDTYPE) == CAN_ID_EXT))
#define IS_CAN_MODE(MODE) (((MODE) == CAN_MODE_NORMAL) || \
                           ((MODE) == CAN_MODE_LOOPBACK)|| \
                           ((MODE) == CAN_MODE_SILENT) || \
                           ((MODE) == CAN_MODE_SILENT_LOOPBACK))
#define IS_CAN_PRESCALER(PRESCALER) (((PRESCALER) >= 1) && ((PRESCALER) <= 1024))
#define IS_CAN_RTR(RTR) (((RTR) == CAN_RTR_DATA) || ((RTR) == CAN_RTR_REMOTE))
#define IS_CAN_SJW(SJW) (((SJW) == CAN_SJW_1TQ) || ((SJW) == CAN_SJW_2TQ)|| \
                         ((SJW) == CAN_SJW_3TQ) || ((SJW) == CAN_SJW_4TQ))
#define IS_CAN_STDID(STDID)   ((STDID) <= ((uint32_t)0x7FF))
#define IS_CAN_TRANSMITMAILBOX(TRANSMITMAILBOX) ((TRANSMITMAILBOX) <= ((uint8_t)0x02))
#define __HAL_CAN_CANCEL_TRANSMIT(__HANDLE__, __TRANSMITMAILBOX__)\
(((__TRANSMITMAILBOX__) == CAN_TXMAILBOX_0)? ((__HANDLE__)->Instance->TSR |= CAN_TSR_ABRQ0) :\
 ((__TRANSMITMAILBOX__) == CAN_TXMAILBOX_1)? ((__HANDLE__)->Instance->TSR |= CAN_TSR_ABRQ1) :\
 ((__HANDLE__)->Instance->TSR |= CAN_TSR_ABRQ2))
#define __HAL_CAN_CLEAR_FLAG(__HANDLE__, __FLAG__) \
((((__FLAG__) >> 8U) == TSR_REGISTER_INDEX) ? (((__HANDLE__)->Instance->TSR)  = (1U << ((__FLAG__) & CAN_FLAG_MASK))): \
 (((__FLAG__) >> 8U) == RF0R_REGISTER_INDEX)? (((__HANDLE__)->Instance->RF0R) = (1U << ((__FLAG__) & CAN_FLAG_MASK))): \
 (((__FLAG__) >> 8U) == RF1R_REGISTER_INDEX)? (((__HANDLE__)->Instance->RF1R) = (1U << ((__FLAG__) & CAN_FLAG_MASK))): \
 (((__FLAG__) >> 8U) == MSR_REGISTER_INDEX) ? (((__HANDLE__)->Instance->MSR)  = (1U << ((__FLAG__) & CAN_FLAG_MASK))): 0)
#define __HAL_CAN_DBG_FREEZE(__HANDLE__, __NEWSTATE__) (((__NEWSTATE__) == ENABLE)? \
((__HANDLE__)->Instance->MCR |= CAN_MCR_DBF) : ((__HANDLE__)->Instance->MCR &= ~CAN_MCR_DBF)) 
#define __HAL_CAN_DISABLE_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->IER) &= ~(__INTERRUPT__))
#define __HAL_CAN_ENABLE_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->IER) |= (__INTERRUPT__))
#define __HAL_CAN_FIFO_RELEASE(__HANDLE__, __FIFONUMBER__) (((__FIFONUMBER__) == CAN_FIFO0)? \
((__HANDLE__)->Instance->RF0R |= CAN_RF0R_RFOM0) : ((__HANDLE__)->Instance->RF1R |= CAN_RF1R_RFOM1)) 
#define __HAL_CAN_GET_FLAG(__HANDLE__, __FLAG__) \
((((__FLAG__) >> 8) == 5)? ((((__HANDLE__)->Instance->TSR) & (1U << ((__FLAG__) & CAN_FLAG_MASK))) == (1U << ((__FLAG__) & CAN_FLAG_MASK))): \
 (((__FLAG__) >> 8) == 2)? ((((__HANDLE__)->Instance->RF0R) & (1U << ((__FLAG__) & CAN_FLAG_MASK))) == (1U << ((__FLAG__) & CAN_FLAG_MASK))): \
 (((__FLAG__) >> 8) == 4)? ((((__HANDLE__)->Instance->RF1R) & (1U << ((__FLAG__) & CAN_FLAG_MASK))) == (1U << ((__FLAG__) & CAN_FLAG_MASK))): \
 (((__FLAG__) >> 8) == 1)? ((((__HANDLE__)->Instance->MSR) & (1U << ((__FLAG__) & CAN_FLAG_MASK))) == (1U << ((__FLAG__) & CAN_FLAG_MASK))): \
 ((((__HANDLE__)->Instance->ESR) & (1U << ((__FLAG__) & CAN_FLAG_MASK))) == (1U << ((__FLAG__) & CAN_FLAG_MASK))))
#define __HAL_CAN_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->IER & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_CAN_MSG_PENDING(__HANDLE__, __FIFONUMBER__) (((__FIFONUMBER__) == CAN_FIFO0)? \
((uint8_t)((__HANDLE__)->Instance->RF0R&(uint32_t)0x03)) : ((uint8_t)((__HANDLE__)->Instance->RF1R&(uint32_t)0x03)))
#define __HAL_CAN_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_CAN_STATE_RESET)
#define __HAL_CAN_TRANSMIT_STATUS(__HANDLE__, __TRANSMITMAILBOX__)\
(((__TRANSMITMAILBOX__) == CAN_TXMAILBOX_0)? ((((__HANDLE__)->Instance->TSR) & (CAN_TSR_RQCP0 | CAN_TSR_TXOK0 | CAN_TSR_TME0)) == (CAN_TSR_RQCP0 | CAN_TSR_TXOK0 | CAN_TSR_TME0)) :\
 ((__TRANSMITMAILBOX__) == CAN_TXMAILBOX_1)? ((((__HANDLE__)->Instance->TSR) & (CAN_TSR_RQCP1 | CAN_TSR_TXOK1 | CAN_TSR_TME1)) == (CAN_TSR_RQCP1 | CAN_TSR_TXOK1 | CAN_TSR_TME1)) :\
 ((((__HANDLE__)->Instance->TSR) & (CAN_TSR_RQCP2 | CAN_TSR_TXOK2 | CAN_TSR_TME2)) == (CAN_TSR_RQCP2 | CAN_TSR_TXOK2 | CAN_TSR_TME2)))
