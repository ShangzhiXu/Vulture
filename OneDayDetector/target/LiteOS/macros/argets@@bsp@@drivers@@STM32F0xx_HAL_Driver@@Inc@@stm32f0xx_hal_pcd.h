#define PCD_CALC_BLK2(pdwReg, wCount, wNBlocks) do { \
    (wNBlocks) = (wCount) >> 1; \
    if (((wCount) & 0x1U) != 0U) \
    { \
      (wNBlocks)++; \
    } \
    *(pdwReg) = (uint16_t)((wNBlocks) << 10); \
  } while(0) /* PCD_CALC_BLK2 */
#define PCD_CALC_BLK32(pdwReg, wCount, wNBlocks) do { \
    (wNBlocks) = (wCount) >> 5; \
    if (((wCount) & 0x1fU) == 0U) \
    { \
      (wNBlocks)--; \
    } \
    *(pdwReg) = (uint16_t)(((wNBlocks) << 10) | USB_CNTRX_BLSIZE); \
  } while(0) /* PCD_CALC_BLK32 */
#define PCD_CLEAR_EP_DBUF(USBx, bEpNum)        PCD_CLEAR_EP_KIND((USBx), (bEpNum))
#define PCD_CLEAR_EP_KIND(USBx, bEpNum) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPKIND_MASK; \
    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX | USB_EP_CTR_TX)); \
  } while(0) /* PCD_CLEAR_EP_KIND */
#define PCD_CLEAR_OUT_STATUS(USBx, bEpNum)     PCD_CLEAR_EP_KIND((USBx), (bEpNum))
#define PCD_CLEAR_RX_DTOG(USBx, bEpNum) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)); \
    \
    if ((_wRegVal & USB_EP_DTOG_RX) != 0U)\
    { \
      PCD_RX_DTOG((USBx), (bEpNum)); \
    } \
  } while(0) /* PCD_CLEAR_RX_DTOG */
#define PCD_CLEAR_RX_EP_CTR(USBx, bEpNum) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & (0x7FFFU & USB_EPREG_MASK); \
    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_TX)); \
  } while(0) /* PCD_CLEAR_RX_EP_CTR */
#define PCD_CLEAR_TX_DTOG(USBx, bEpNum) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)); \
    \
    if ((_wRegVal & USB_EP_DTOG_TX) != 0U)\
    { \
      PCD_TX_DTOG((USBx), (bEpNum)); \
    } \
  } while(0) /* PCD_CLEAR_TX_DTOG */
#define PCD_CLEAR_TX_EP_CTR(USBx, bEpNum) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & (0xFF7FU & USB_EPREG_MASK); \
    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX)); \
  } while(0) /* PCD_CLEAR_TX_EP_CTR */
#define PCD_EP_RX_CNT(USBx, bEpNum) ((uint16_t *)((((uint32_t)(USBx)->BTABLE + ((uint32_t)(bEpNum) * 8U) + 6U) * PMA_ACCESS) + ((uint32_t)(USBx) + 0x400U)))
#define PCD_EP_TX_CNT(USBx, bEpNum) ((uint16_t *)((((uint32_t)(USBx)->BTABLE + ((uint32_t)(bEpNum) * 8U) + 2U) * PMA_ACCESS) + ((uint32_t)(USBx) + 0x400U)))
#define PCD_FreeUserBuffer(USBx, bEpNum, bDir) do { \
  if ((bDir) == 0U) \
  { \
    /* OUT double buffered endpoint */ \
    PCD_TX_DTOG((USBx), (bEpNum)); \
  } \
  else if ((bDir) == 1U) \
  { \
    /* IN double buffered endpoint */ \
    PCD_RX_DTOG((USBx), (bEpNum)); \
  } \
} while(0)
#define PCD_GET_ENDPOINT(USBx, bEpNum)            (*(__IO uint16_t *)(&(USBx)->EP0R + ((bEpNum) * 2U)))
#define PCD_GET_EPTYPE(USBx, bEpNum) (PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EP_T_FIELD)
#define PCD_GET_EP_ADDRESS(USBx, bEpNum) ((uint8_t)(PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPADDR_FIELD))
#define PCD_GET_EP_DBUF0_ADDR(USBx, bEpNum)    (PCD_GET_EP_TX_ADDRESS((USBx), (bEpNum)))
#define PCD_GET_EP_DBUF0_CNT(USBx, bEpNum)     (PCD_GET_EP_TX_CNT((USBx), (bEpNum)))
#define PCD_GET_EP_DBUF1_ADDR(USBx, bEpNum)    (PCD_GET_EP_RX_ADDRESS((USBx), (bEpNum)))
#define PCD_GET_EP_DBUF1_CNT(USBx, bEpNum)     (PCD_GET_EP_RX_CNT((USBx), (bEpNum)))
#define PCD_GET_EP_RX_ADDRESS(USBx, bEpNum) ((uint16_t)*PCD_EP_RX_ADDRESS((USBx), (bEpNum)))
#define PCD_GET_EP_RX_CNT(USBx, bEpNum)        ((uint32_t)(*PCD_EP_RX_CNT((USBx), (bEpNum))) & 0x3ffU)
#define PCD_GET_EP_RX_STALL_STATUS(USBx, bEpNum) (PCD_GET_EP_RX_STATUS((USBx), (bEpNum)) \
                                   == USB_EP_RX_STALL)
#define PCD_GET_EP_RX_STATUS(USBx, bEpNum)     ((uint16_t)PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPRX_STAT)
#define PCD_GET_EP_TX_ADDRESS(USBx, bEpNum) ((uint16_t)*PCD_EP_TX_ADDRESS((USBx), (bEpNum)))
#define PCD_GET_EP_TX_CNT(USBx, bEpNum)        ((uint32_t)(*PCD_EP_TX_CNT((USBx), (bEpNum))) & 0x3ffU)
#define PCD_GET_EP_TX_STALL_STATUS(USBx, bEpNum) (PCD_GET_EP_TX_STATUS((USBx), (bEpNum)) \
                                   == USB_EP_TX_STALL)
#define PCD_GET_EP_TX_STATUS(USBx, bEpNum)     ((uint16_t)PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPTX_STAT)
#define PCD_RX_DTOG(USBx, bEpNum) do { \
    register uint16_t _wEPVal; \
    \
    _wEPVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPREG_MASK; \
    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wEPVal | USB_EP_CTR_RX | USB_EP_CTR_TX | USB_EP_DTOG_RX)); \
  } while(0) /* PCD_RX_DTOG */
#define PCD_SET_ENDPOINT(USBx, bEpNum, wRegValue)  (*(__IO uint16_t *)(&(USBx)->EP0R + ((bEpNum) * 2U)) = (uint16_t)(wRegValue))
#define PCD_SET_EPTYPE(USBx, bEpNum, wType) (PCD_SET_ENDPOINT((USBx), (bEpNum), \
                                             ((PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EP_T_MASK) | (wType) | USB_EP_CTR_TX | USB_EP_CTR_RX)))
#define PCD_SET_EP_ADDRESS(USBx, bEpNum, bAddr) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = (PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPREG_MASK) | (bAddr); \
    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX | USB_EP_CTR_TX)); \
  } while(0) /* PCD_SET_EP_ADDRESS */
#define PCD_SET_EP_CNT_RX_REG(pdwReg, wCount)  do { \
    uint32_t wNBlocks; \
    if ((wCount) == 0U) \
    { \
      *(pdwReg) &= (uint16_t)~USB_CNTRX_NBLK_MSK; \
      *(pdwReg) |= USB_CNTRX_BLSIZE; \
    } \
    else if((wCount) <= 62U) \
    { \
      PCD_CALC_BLK2((pdwReg), (wCount), wNBlocks); \
    } \
    else \
    { \
      PCD_CALC_BLK32((pdwReg),(wCount), wNBlocks); \
    } \
  } while(0) /* PCD_SET_EP_CNT_RX_REG */
#define PCD_SET_EP_DBUF(USBx, bEpNum)          PCD_SET_EP_KIND((USBx), (bEpNum))
#define PCD_SET_EP_DBUF0_ADDR(USBx, bEpNum, wBuf0Addr) do { \
    PCD_SET_EP_TX_ADDRESS((USBx), (bEpNum), (wBuf0Addr)); \
  } while(0) /* PCD_SET_EP_DBUF0_ADDR */
#define PCD_SET_EP_DBUF0_CNT(USBx, bEpNum, bDir, wCount) do { \
    if ((bDir) == 0U) \
      /* OUT endpoint */ \
    { \
      PCD_SET_EP_RX_DBUF0_CNT((USBx), (bEpNum), (wCount)); \
    } \
    else \
    { \
      if ((bDir) == 1U) \
      { \
        /* IN endpoint */ \
        PCD_SET_EP_TX_CNT((USBx), (bEpNum), (wCount)); \
      } \
    } \
  } while(0) /* SetEPDblBuf0Count*/
#define PCD_SET_EP_DBUF1_ADDR(USBx, bEpNum, wBuf1Addr) do { \
    PCD_SET_EP_RX_ADDRESS((USBx), (bEpNum), (wBuf1Addr)); \
  } while(0) /* PCD_SET_EP_DBUF1_ADDR */
#define PCD_SET_EP_DBUF1_CNT(USBx, bEpNum, bDir, wCount) do { \
    register uint32_t _wBase = (uint32_t)(USBx); \
    uint16_t *_wEPRegVal; \
    \
    if ((bDir) == 0U) \
    { \
      /* OUT endpoint */ \
      PCD_SET_EP_RX_CNT((USBx), (bEpNum), (wCount)); \
    } \
    else \
    { \
      if ((bDir) == 1U) \
      { \
        /* IN endpoint */ \
        _wBase += (uint32_t)(USBx)->BTABLE; \
        _wEPRegVal = (uint16_t *)(_wBase + 0x400U + ((((uint32_t)(bEpNum) * 8U) + 6U) * PMA_ACCESS)); \
        *_wEPRegVal = (uint16_t)(wCount); \
      } \
    } \
  } while(0) /* SetEPDblBuf1Count */
#define PCD_SET_EP_DBUF_ADDR(USBx, bEpNum, wBuf0Addr, wBuf1Addr) do { \
    PCD_SET_EP_DBUF0_ADDR((USBx), (bEpNum), (wBuf0Addr)); \
    PCD_SET_EP_DBUF1_ADDR((USBx), (bEpNum), (wBuf1Addr)); \
  } while(0) /* PCD_SET_EP_DBUF_ADDR */
#define PCD_SET_EP_DBUF_CNT(USBx, bEpNum, bDir, wCount) do { \
    PCD_SET_EP_DBUF0_CNT((USBx), (bEpNum), (bDir), (wCount)); \
    PCD_SET_EP_DBUF1_CNT((USBx), (bEpNum), (bDir), (wCount)); \
  } while(0) /* PCD_SET_EP_DBUF_CNT  */
#define PCD_SET_EP_KIND(USBx, bEpNum) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPREG_MASK; \
    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX | USB_EP_CTR_TX | USB_EP_KIND)); \
  } while(0) /* PCD_SET_EP_KIND */
#define PCD_SET_EP_RX_ADDRESS(USBx, bEpNum, wAddr) do { \
  register uint16_t *_wRegVal; \
  register uint32_t _wRegBase = (uint32_t)USBx; \
  \
  _wRegBase += (uint32_t)(USBx)->BTABLE; \
  _wRegVal = (uint16_t *)(_wRegBase + 0x400U + ((((uint32_t)(bEpNum) * 8U) + 4U) * PMA_ACCESS)); \
  *_wRegVal = ((wAddr) >> 1) << 1; \
} while(0) /* PCD_SET_EP_RX_ADDRESS */
#define PCD_SET_EP_RX_CNT(USBx, bEpNum, wCount) do { \
    register uint32_t _wRegBase = (uint32_t)(USBx); \
    uint16_t *_wRegVal; \
    \
    _wRegBase += (uint32_t)(USBx)->BTABLE; \
    _wRegVal = (uint16_t *)(_wRegBase + 0x400U + ((((uint32_t)(bEpNum) * 8U) + 6U) * PMA_ACCESS)); \
    PCD_SET_EP_CNT_RX_REG(_wRegVal, (wCount)); \
} while(0)
#define PCD_SET_EP_RX_DBUF0_CNT(USBx, bEpNum, wCount) do { \
     register uint32_t _wRegBase = (uint32_t)(USBx); \
     uint16_t *pdwReg; \
     \
    _wRegBase += (uint32_t)(USBx)->BTABLE; \
    pdwReg = (uint16_t *)(_wRegBase + 0x400U + ((((uint32_t)(bEpNum) * 8U) + 2U) * PMA_ACCESS)); \
    PCD_SET_EP_CNT_RX_REG(pdwReg, (wCount)); \
  } while(0)
#define PCD_SET_EP_RX_STATUS(USBx, bEpNum,wState) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPRX_DTOGMASK; \
    /* toggle first bit ? */ \
    if ((USB_EPRX_DTOG1 & (wState))!= 0U) \
    { \
       _wRegVal ^= USB_EPRX_DTOG1; \
    } \
    /* toggle second bit ? */ \
    if ((USB_EPRX_DTOG2 & (wState))!= 0U) \
    { \
       _wRegVal ^= USB_EPRX_DTOG2; \
    } \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX | USB_EP_CTR_TX)); \
  } while(0) /* PCD_SET_EP_RX_STATUS */
#define PCD_SET_EP_RX_VALID(USBx, bEpNum)      (PCD_SET_EP_RX_STATUS((USBx), (bEpNum), USB_EP_RX_VALID))
#define PCD_SET_EP_TXRX_STATUS(USBx, bEpNum, wStaterx, wStatetx) do { \
    register uint16_t _wRegVal; \
    \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & (USB_EPRX_DTOGMASK | USB_EPTX_STAT); \
    /* toggle first bit ? */ \
    if ((USB_EPRX_DTOG1 & (wStaterx))!= 0U) \
    { \
      _wRegVal ^= USB_EPRX_DTOG1; \
    } \
    /* toggle second bit ? */ \
    if ((USB_EPRX_DTOG2 & (wStaterx))!= 0U) \
    { \
      _wRegVal ^= USB_EPRX_DTOG2; \
    } \
    /* toggle first bit ? */ \
    if ((USB_EPTX_DTOG1 & (wStatetx))!= 0U) \
    { \
      _wRegVal ^= USB_EPTX_DTOG1; \
    } \
    /* toggle second bit ?  */ \
    if ((USB_EPTX_DTOG2 & (wStatetx))!= 0U) \
    { \
      _wRegVal ^= USB_EPTX_DTOG2; \
    } \
    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX | USB_EP_CTR_TX)); \
  } while(0) /* PCD_SET_EP_TXRX_STATUS */
#define PCD_SET_EP_TX_ADDRESS(USBx, bEpNum, wAddr) do { \
  register uint16_t *_wRegVal; \
  register uint32_t _wRegBase = (uint32_t)USBx; \
  \
  _wRegBase += (uint32_t)(USBx)->BTABLE; \
  _wRegVal = (uint16_t *)(_wRegBase + 0x400U + (((uint32_t)(bEpNum) * 8U) * PMA_ACCESS)); \
  *_wRegVal = ((wAddr) >> 1) << 1; \
} while(0) /* PCD_SET_EP_TX_ADDRESS */
#define PCD_SET_EP_TX_CNT(USBx, bEpNum, wCount) do { \
    register uint32_t _wRegBase = (uint32_t)(USBx); \
    uint16_t *_wRegVal; \
    \
    _wRegBase += (uint32_t)(USBx)->BTABLE; \
    _wRegVal = (uint16_t *)(_wRegBase + 0x400U + ((((uint32_t)(bEpNum) * 8U) + 2U) * PMA_ACCESS)); \
    *_wRegVal = (uint16_t)(wCount); \
} while(0)
#define PCD_SET_EP_TX_STATUS(USBx, bEpNum, wState) do { \
   register uint16_t _wRegVal; \
   \
    _wRegVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPTX_DTOGMASK; \
   /* toggle first bit ? */ \
   if ((USB_EPTX_DTOG1 & (wState))!= 0U) \
   { \
      _wRegVal ^= USB_EPTX_DTOG1; \
   } \
   /* toggle second bit ?  */ \
   if ((USB_EPTX_DTOG2 & (wState))!= 0U) \
   { \
      _wRegVal ^= USB_EPTX_DTOG2; \
   } \
   PCD_SET_ENDPOINT((USBx), (bEpNum), (_wRegVal | USB_EP_CTR_RX | USB_EP_CTR_TX)); \
  } while(0) /* PCD_SET_EP_TX_STATUS */
#define PCD_SET_EP_TX_VALID(USBx, bEpNum)      (PCD_SET_EP_TX_STATUS((USBx), (bEpNum), USB_EP_TX_VALID))
#define PCD_SET_OUT_STATUS(USBx, bEpNum)       PCD_SET_EP_KIND((USBx), (bEpNum))
#define PCD_TX_DTOG(USBx, bEpNum) do { \
    register uint16_t _wEPVal; \
    \
    _wEPVal = PCD_GET_ENDPOINT((USBx), (bEpNum)) & USB_EPREG_MASK; \
    \
    PCD_SET_ENDPOINT((USBx), (bEpNum), (_wEPVal | USB_EP_CTR_RX | USB_EP_CTR_TX | USB_EP_DTOG_TX)); \
  } while(0) /* PCD_TX_DTOG */
#define __HAL_PCD_CLEAR_FLAG(__HANDLE__, __INTERRUPT__)               (((__HANDLE__)->Instance->ISTR) &= ~(__INTERRUPT__))
#define __HAL_PCD_DISABLE(__HANDLE__)                                 (void)USB_DisableGlobalInt ((__HANDLE__)->Instance)
#define __HAL_PCD_ENABLE(__HANDLE__)                                  (void)USB_EnableGlobalInt ((__HANDLE__)->Instance)
#define __HAL_PCD_GET_FLAG(__HANDLE__, __INTERRUPT__)                 ((USB_ReadInterrupts((__HANDLE__)->Instance) & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_USB_WAKEUP_EXTI_DISABLE_IT()                            EXTI->IMR &= ~(USB_WAKEUP_EXTI_LINE)
#define __HAL_USB_WAKEUP_EXTI_ENABLE_IT()                             EXTI->IMR |= USB_WAKEUP_EXTI_LINE
