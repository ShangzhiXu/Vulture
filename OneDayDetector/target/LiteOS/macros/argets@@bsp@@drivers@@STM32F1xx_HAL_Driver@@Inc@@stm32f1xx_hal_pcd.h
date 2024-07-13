#define PCD_CALC_BLK2(dwReg,wCount,wNBlocks) {\
    (wNBlocks) = (wCount) >> 1;\
    if(((wCount) & 0x1) != 0)\
    {                                                  \
      (wNBlocks)++;\
    }                                                  \
    *pdwReg = (uint16_t)((wNBlocks) << 10);\
  }/* PCD_CALC_BLK2 */
#define PCD_CALC_BLK32(dwReg,wCount,wNBlocks) {\
    (wNBlocks) = (wCount) >> 5;\
    if(((wCount) & 0x1f) == 0)\
    {                                                  \
      (wNBlocks)--;\
    }                                                  \
    *pdwReg = (uint16_t)((uint16_t)((wNBlocks) << 10) | 0x8000); \
  }/* PCD_CALC_BLK32 */
#define PCD_CLEAR_EP_DBUF(USBx, bEpNum)        PCD_CLEAR_EP_KIND((USBx), (bEpNum))
#define PCD_CLEAR_EP_KIND(USBx, bEpNum)  (PCD_SET_ENDPOINT((USBx), (bEpNum), \
                                (USB_EP_CTR_RX|USB_EP_CTR_TX|(PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPKIND_MASK))))
#define PCD_CLEAR_OUT_STATUS(USBx, bEpNum)     PCD_CLEAR_EP_KIND((USBx), (bEpNum))
#define PCD_CLEAR_RX_DTOG(USBx, bEpNum)  if((PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EP_DTOG_RX) != 0)\
                                         {                                                              \
                                           PCD_RX_DTOG((USBx), (bEpNum));                               \
                                         }
#define PCD_CLEAR_RX_EP_CTR(USBx, bEpNum)   (PCD_SET_ENDPOINT((USBx), (bEpNum),\
                                   PCD_GET_ENDPOINT((USBx), (bEpNum)) & 0x7FFF & USB_EPREG_MASK))
#define PCD_CLEAR_TX_DTOG(USBx, bEpNum)  if((PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EP_DTOG_TX) != 0)\
                                         {                                                              \
                                            PCD_TX_DTOG((USBx), (bEpNum));                              \
                                         }
#define PCD_CLEAR_TX_EP_CTR(USBx, bEpNum)   (PCD_SET_ENDPOINT((USBx), (bEpNum),\
                                   PCD_GET_ENDPOINT((USBx), (bEpNum)) & 0xFF7F & USB_EPREG_MASK))
#define PCD_EP_RX_ADDRESS(USBx, bEpNum) ((uint32_t *)(((USBx)->BTABLE+(bEpNum)*8+4)*2+  ((uint32_t)(USBx) + 0x400)))
#define PCD_EP_RX_CNT(USBx, bEpNum) ((uint32_t *)(((USBx)->BTABLE+(bEpNum)*8+6)*2+  ((uint32_t)(USBx) + 0x400)))
#define PCD_EP_TX_ADDRESS(USBx, bEpNum) ((uint32_t *)(((USBx)->BTABLE+(bEpNum)*8)*2+     ((uint32_t)(USBx) + 0x400)))
#define PCD_EP_TX_CNT(USBx, bEpNum) ((uint32_t *)(((USBx)->BTABLE+(bEpNum)*8+2)*2+  ((uint32_t)(USBx) + 0x400)))
#define PCD_FreeUserBuffer(USBx, bEpNum, bDir)\
{\
  if ((bDir) == PCD_EP_DBUF_OUT)\
  { /* OUT double buffered endpoint */\
    PCD_TX_DTOG((USBx), (bEpNum));\
  }\
  else if ((bDir) == PCD_EP_DBUF_IN)\
  { /* IN double buffered endpoint */\
    PCD_RX_DTOG((USBx), (bEpNum));\
  }\
}
#define PCD_GET_DB_DIR(USBx, bEpNum)\
{\
  if ((uint16_t)(*PCD_EP_RX_CNT((USBx), (bEpNum)) & 0xFC00) != 0)\
    return(PCD_EP_DBUF_OUT);\
  else if (((uint16_t)(*PCD_EP_TX_CNT((USBx), (bEpNum))) & 0x03FF) != 0)\
    return(PCD_EP_DBUF_IN);\
  else\
    return(PCD_EP_DBUF_ERR);\
}
#define PCD_GET_ENDPOINT(USBx, bEpNum)            (*(&(USBx)->EP0R + (bEpNum) * 2))
#define PCD_GET_EPTYPE(USBx, bEpNum) (PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EP_T_FIELD)
#define PCD_GET_EP_ADDRESS(USBx, bEpNum) ((uint8_t)(PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPADDR_FIELD))
#define PCD_GET_EP_DBUF0_ADDR(USBx, bEpNum)    (PCD_GET_EP_TX_ADDRESS((USBx), (bEpNum)))
#define PCD_GET_EP_DBUF0_CNT(USBx, bEpNum)     (PCD_GET_EP_TX_CNT((USBx), (bEpNum)))
#define PCD_GET_EP_DBUF1_ADDR(USBx, bEpNum)    (PCD_GET_EP_RX_ADDRESS((USBx), (bEpNum)))
#define PCD_GET_EP_DBUF1_CNT(USBx, bEpNum)     (PCD_GET_EP_RX_CNT((USBx), (bEpNum)))
#define PCD_GET_EP_RX_ADDRESS(USBx, bEpNum) ((uint16_t)*PCD_EP_RX_ADDRESS((USBx), (bEpNum)))
#define PCD_GET_EP_RX_CNT(USBx, bEpNum)        ((uint16_t)(*PCD_EP_RX_CNT((USBx), (bEpNum))) & 0x3ff)
#define PCD_GET_EP_RX_STALL_STATUS(USBx, bEpNum) (PCD_GET_EP_RX_STATUS((USBx), (bEpNum)) \
                                   == USB_EP_RX_STALL)
#define PCD_GET_EP_RX_STATUS(USBx, bEpNum)     ((uint16_t)PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPRX_STAT)
#define PCD_GET_EP_TX_ADDRESS(USBx, bEpNum) ((uint16_t)*PCD_EP_TX_ADDRESS((USBx), (bEpNum)))
#define PCD_GET_EP_TX_CNT(USBx, bEpNum)        ((uint16_t)(*PCD_EP_TX_CNT((USBx), (bEpNum))) & 0x3ff)
#define PCD_GET_EP_TX_STALL_STATUS(USBx, bEpNum) (PCD_GET_EP_TX_STATUS((USBx), (bEpNum)) \
                                   == USB_EP_TX_STALL)
#define PCD_GET_EP_TX_STATUS(USBx, bEpNum)     ((uint16_t)PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPTX_STAT)
#define PCD_RX_DTOG(USBx, bEpNum)    (PCD_SET_ENDPOINT((USBx), (bEpNum), \
                                   USB_EP_CTR_RX|USB_EP_CTR_TX|USB_EP_DTOG_RX | (PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPREG_MASK)))
#define PCD_SET_ENDPOINT(USBx, bEpNum,wRegValue)  (*(&(USBx)->EP0R + (bEpNum) * 2)= (uint16_t)(wRegValue))
#define PCD_SET_EPTYPE(USBx, bEpNum,wType) (PCD_SET_ENDPOINT((USBx), (bEpNum),\
                                  ((PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EP_T_MASK) | (wType) )))
#define PCD_SET_EP_ADDRESS(USBx, bEpNum,bAddr) PCD_SET_ENDPOINT((USBx), (bEpNum),\
    USB_EP_CTR_RX|USB_EP_CTR_TX|(PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPREG_MASK) | (bAddr))
#define PCD_SET_EP_CNT_RX_REG(dwReg,wCount)  {\
    uint16_t wNBlocks;\
    if((wCount) > 62)                                \
    {                                                \
      PCD_CALC_BLK32((dwReg),(wCount),wNBlocks);     \
    }                                                \
    else                                             \
    {                                                \
      PCD_CALC_BLK2((dwReg),(wCount),wNBlocks);      \
    }                                                \
  }/* PCD_SET_EP_CNT_RX_REG */
#define PCD_SET_EP_DBUF(USBx, bEpNum)          PCD_SET_EP_KIND((USBx), (bEpNum))
#define PCD_SET_EP_DBUF0_ADDR(USBx, bEpNum,wBuf0Addr) {PCD_SET_EP_TX_ADDRESS((USBx), (bEpNum), (wBuf0Addr));}
#define PCD_SET_EP_DBUF0_CNT(USBx, bEpNum, bDir, wCount)  { \
    if((bDir) == PCD_EP_DBUF_OUT)\
      /* OUT endpoint */ \
    {PCD_SET_EP_RX_DBUF0_CNT((USBx), (bEpNum),(wCount));} \
    else if((bDir) == PCD_EP_DBUF_IN)\
      /* IN endpoint */ \
      *PCD_EP_TX_CNT((USBx), (bEpNum)) = (uint32_t)(wCount);  \
  } /* SetEPDblBuf0Count*/
#define PCD_SET_EP_DBUF1_ADDR(USBx, bEpNum,wBuf1Addr) {PCD_SET_EP_RX_ADDRESS((USBx), (bEpNum), (wBuf1Addr));}
#define PCD_SET_EP_DBUF1_CNT(USBx, bEpNum, bDir, wCount)  { \
    if((bDir) == PCD_EP_DBUF_OUT)\
    {/* OUT endpoint */                                       \
      PCD_SET_EP_RX_CNT((USBx), (bEpNum),(wCount));           \
    }                                                         \
    else if((bDir) == PCD_EP_DBUF_IN)\
    {/* IN endpoint */                                        \
      *PCD_EP_TX_CNT((USBx), (bEpNum)) = (uint32_t)(wCount); \
    }                                                         \
  } /* SetEPDblBuf1Count */
#define PCD_SET_EP_DBUF_ADDR(USBx, bEpNum,wBuf0Addr,wBuf1Addr) { \
    PCD_SET_EP_DBUF0_ADDR((USBx), (bEpNum), (wBuf0Addr));\
    PCD_SET_EP_DBUF1_ADDR((USBx), (bEpNum), (wBuf1Addr));\
  } /* PCD_SET_EP_DBUF_ADDR */
#define PCD_SET_EP_DBUF_CNT(USBx, bEpNum, bDir, wCount) {\
    PCD_SET_EP_DBUF0_CNT((USBx), (bEpNum), (bDir), (wCount)); \
    PCD_SET_EP_DBUF1_CNT((USBx), (bEpNum), (bDir), (wCount)); \
  } /* PCD_SET_EP_DBUF_CNT  */
#define PCD_SET_EP_KIND(USBx, bEpNum)    (PCD_SET_ENDPOINT((USBx), (bEpNum), \
                                (USB_EP_CTR_RX|USB_EP_CTR_TX|((PCD_GET_ENDPOINT((USBx), (bEpNum)) | USB_EP_KIND) & USB_EPREG_MASK))))
#define PCD_SET_EP_RX_ADDRESS(USBx, bEpNum,wAddr) (*PCD_EP_RX_ADDRESS((USBx), (bEpNum)) = (((wAddr) >> 1) << 1))
#define PCD_SET_EP_RX_CNT(USBx, bEpNum,wCount) {\
    uint32_t *pdwReg = PCD_EP_RX_CNT((USBx), (bEpNum)); \
    PCD_SET_EP_CNT_RX_REG(pdwReg, (wCount));\
  }
#define PCD_SET_EP_RX_DBUF0_CNT(USBx, bEpNum,wCount) {\
    uint32_t *pdwReg = PCD_EP_TX_CNT((USBx), (bEpNum)); \
    PCD_SET_EP_CNT_RX_REG(pdwReg, (wCount));\
  }
#define PCD_SET_EP_RX_STATUS(USBx, bEpNum,wState) {\
    register uint16_t _wRegVal;   \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPRX_DTOGMASK;\
    /* toggle first bit ? */  \
    if((USB_EPRX_DTOG1 & (wState))!= 0) \
    {                                                                             \
      _wRegVal ^= USB_EPRX_DTOG1;  \
    }                                                                             \
    /* toggle second bit ? */  \
    if((USB_EPRX_DTOG2 & (wState))!= 0) \
    {                                                                             \
      _wRegVal ^= USB_EPRX_DTOG2;  \
    }                                                                             \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX|USB_EP_CTR_TX)); \
  } /* PCD_SET_EP_RX_STATUS */
#define PCD_SET_EP_RX_VALID(USBx, bEpNum)      (PCD_SET_EP_RX_STATUS((USBx), (bEpNum), USB_EP_RX_VALID))
#define PCD_SET_EP_TXRX_STATUS(USBx,bEpNum,wStaterx,wStatetx) {\
    register uint32_t _wRegVal;   \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & (USB_EPRX_DTOGMASK |USB_EPTX_STAT) ;\
    /* toggle first bit ? */  \
    if((USB_EPRX_DTOG1 & ((wStaterx)))!= 0) \
    {                                                                                    \
      _wRegVal ^= USB_EPRX_DTOG1;  \
    }                                                                                    \
    /* toggle second bit ? */  \
    if((USB_EPRX_DTOG2 & (wStaterx))!= 0) \
    {                                                                                    \
      _wRegVal ^= USB_EPRX_DTOG2;  \
    }                                                                                    \
    /* toggle first bit ? */     \
    if((USB_EPTX_DTOG1 & (wStatetx))!= 0)      \
    {                                                                                    \
      _wRegVal ^= USB_EPTX_DTOG1;        \
    }                                                                                    \
    /* toggle second bit ?  */         \
    if((USB_EPTX_DTOG2 & (wStatetx))!= 0)      \
    {                                                                                    \
      _wRegVal ^= USB_EPTX_DTOG2;        \
    }                                                                                    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), _wRegVal | USB_EP_CTR_RX|USB_EP_CTR_TX);    \
  } /* PCD_SET_EP_TXRX_STATUS */
#define PCD_SET_EP_TX_ADDRESS(USBx, bEpNum,wAddr) (*PCD_EP_TX_ADDRESS((USBx), (bEpNum)) = (((wAddr) >> 1) << 1))
#define PCD_SET_EP_TX_CNT(USBx, bEpNum,wCount) (*PCD_EP_TX_CNT((USBx), (bEpNum)) = (wCount))
#define PCD_SET_EP_TX_STATUS(USBx, bEpNum, wState) { register uint16_t _wRegVal;\
   \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPTX_DTOGMASK;\
   /* toggle first bit ? */     \
   if((USB_EPTX_DTOG1 & (wState))!= 0)\
   {                                                                            \
     _wRegVal ^= USB_EPTX_DTOG1;        \
   }                                                                            \
   /* toggle second bit ?  */         \
   if((USB_EPTX_DTOG2 & (wState))!= 0)      \
   {                                                                            \
     _wRegVal ^= USB_EPTX_DTOG2;        \
   }                                                                            \
   PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX|USB_EP_CTR_TX));\
  } /* PCD_SET_EP_TX_STATUS */
#define PCD_SET_EP_TX_VALID(USBx, bEpNum)      (PCD_SET_EP_TX_STATUS((USBx), (bEpNum), USB_EP_TX_VALID))
#define PCD_SET_OUT_STATUS(USBx, bEpNum)       PCD_SET_EP_KIND((USBx), (bEpNum))
#define PCD_TX_DTOG(USBx, bEpNum)    (PCD_SET_ENDPOINT((USBx), (bEpNum), \
                                   USB_EP_CTR_RX|USB_EP_CTR_TX|USB_EP_DTOG_TX | (PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPREG_MASK)))
#define __HAL_PCD_CLEAR_FLAG(__HANDLE__, __INTERRUPT__)               (((__HANDLE__)->Instance->GINTSTS) = (__INTERRUPT__))
#define __HAL_PCD_CLEAR_FLAG(__HANDLE__, __INTERRUPT__)               (((__HANDLE__)->Instance->ISTR) &= ~(__INTERRUPT__))
#define __HAL_PCD_DISABLE(__HANDLE__)                                 USB_DisableGlobalInt ((__HANDLE__)->Instance)
#define __HAL_PCD_DISABLE(__HANDLE__)                                 USB_DisableGlobalInt ((__HANDLE__)->Instance)
#define __HAL_PCD_ENABLE(__HANDLE__)                                  USB_EnableGlobalInt ((__HANDLE__)->Instance)
#define __HAL_PCD_ENABLE(__HANDLE__)                                  USB_EnableGlobalInt ((__HANDLE__)->Instance)
#define __HAL_PCD_GATE_PHYCLOCK(__HANDLE__)                           *(__IO uint32_t *)((uint32_t)((__HANDLE__)->Instance) + USB_OTG_PCGCCTL_BASE) |= USB_OTG_PCGCCTL_STOPCLK
#define __HAL_PCD_GET_FLAG(__HANDLE__, __INTERRUPT__)                 ((USB_ReadInterrupts((__HANDLE__)->Instance) & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_PCD_GET_FLAG(__HANDLE__, __INTERRUPT__)                 ((USB_ReadInterrupts((__HANDLE__)->Instance) & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_PCD_IS_INVALID_INTERRUPT(__HANDLE__)                    (USB_ReadInterrupts((__HANDLE__)->Instance) == 0)
#define __HAL_PCD_IS_PHY_SUSPENDED(__HANDLE__)                        ((*(__IO uint32_t *)((uint32_t)((__HANDLE__)->Instance) + USB_OTG_PCGCCTL_BASE))&0x10)
#define __HAL_PCD_UNGATE_PHYCLOCK(__HANDLE__)                         *(__IO uint32_t *)((uint32_t)((__HANDLE__)->Instance) + USB_OTG_PCGCCTL_BASE) &= \
                                                                      ~(USB_OTG_PCGCCTL_STOPCLK)
#define __HAL_USB_OTG_FS_WAKEUP_EXTI_CLEAR_FLAG()                     EXTI->PR = USB_OTG_FS_WAKEUP_EXTI_LINE
#define __HAL_USB_OTG_FS_WAKEUP_EXTI_DISABLE_IT()                     EXTI->IMR &= ~(USB_OTG_FS_WAKEUP_EXTI_LINE)
#define __HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_FALLING_EDGE()                \
                        do{                                               \
                            EXTI->FTSR |= (USB_OTG_FS_WAKEUP_EXTI_LINE);  \
                            EXTI->RTSR &= ~(USB_OTG_FS_WAKEUP_EXTI_LINE); \
                          } while(0)
#define __HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_IT()                      EXTI->IMR |= USB_OTG_FS_WAKEUP_EXTI_LINE
#define __HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_RISING_EDGE()                 \
                        do{                                               \
                            EXTI->FTSR &= ~(USB_OTG_FS_WAKEUP_EXTI_LINE); \
                            EXTI->RTSR |= USB_OTG_FS_WAKEUP_EXTI_LINE;    \
                          } while(0)
#define __HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_RISING_FALLING_EDGE()         \
                        do{                                               \
                            EXTI->RTSR &= ~(USB_OTG_FS_WAKEUP_EXTI_LINE); \
                            EXTI->FTSR &= ~(USB_OTG_FS_WAKEUP_EXTI_LINE); \
                            EXTI->RTSR |= USB_OTG_FS_WAKEUP_EXTI_LINE;    \
                            EXTI->FTSR |= USB_OTG_FS_WAKEUP_EXTI_LINE;    \
                          } while(0)
#define __HAL_USB_OTG_FS_WAKEUP_EXTI_GENERATE_SWIT()                  (EXTI->SWIER |= USB_OTG_FS_WAKEUP_EXTI_LINE)
#define __HAL_USB_OTG_FS_WAKEUP_EXTI_GET_FLAG()                       EXTI->PR & (USB_OTG_FS_WAKEUP_EXTI_LINE)
#define __HAL_USB_WAKEUP_EXTI_CLEAR_FLAG()                            EXTI->PR = USB_WAKEUP_EXTI_LINE
#define __HAL_USB_WAKEUP_EXTI_DISABLE_IT()                            EXTI->IMR &= ~(USB_WAKEUP_EXTI_LINE)
#define __HAL_USB_WAKEUP_EXTI_ENABLE_FALLING_EDGE()                \
                        do{                                        \
                            EXTI->FTSR |= (USB_WAKEUP_EXTI_LINE);  \
                            EXTI->RTSR &= ~(USB_WAKEUP_EXTI_LINE); \
                          } while(0)
#define __HAL_USB_WAKEUP_EXTI_ENABLE_IT()                             EXTI->IMR |= USB_WAKEUP_EXTI_LINE
#define __HAL_USB_WAKEUP_EXTI_ENABLE_RISING_EDGE()                 \
                        do{                                        \
                            EXTI->FTSR &= ~(USB_WAKEUP_EXTI_LINE); \
                            EXTI->RTSR |= USB_WAKEUP_EXTI_LINE;    \
                          } while(0)
#define __HAL_USB_WAKEUP_EXTI_ENABLE_RISING_FALLING_EDGE()         \
                        do{                                        \
                            EXTI->RTSR &= ~(USB_WAKEUP_EXTI_LINE); \
                            EXTI->FTSR &= ~(USB_WAKEUP_EXTI_LINE); \
                            EXTI->RTSR |= USB_WAKEUP_EXTI_LINE;    \
                            EXTI->FTSR |= USB_WAKEUP_EXTI_LINE;    \
                          } while(0)
#define __HAL_USB_WAKEUP_EXTI_GET_FLAG()                              EXTI->PR & (USB_WAKEUP_EXTI_LINE)
