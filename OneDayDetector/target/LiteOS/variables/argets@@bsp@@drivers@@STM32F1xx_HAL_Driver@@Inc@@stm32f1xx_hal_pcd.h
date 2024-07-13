  PCD_EPTypeDef           IN_ep[15];   /*!< IN endpoint parameters              */
  PCD_InitTypeDef         Init;        /*!< PCD required parameters             */
  PCD_TypeDef             *Instance;   /*!< Register base address               */
  HAL_LockTypeDef         Lock;        /*!< PCD peripheral status               */
  PCD_EPTypeDef           OUT_ep[15];  /*!< OUT endpoint parameters             */
  uint32_t                Setup[12];   /*!< Setup packet buffer                 */
  __IO PCD_StateTypeDef   State;       /*!< PCD communication state             */
  __IO uint8_t            USB_Address; /*!< USB Address: not used by USB OTG FS */  
  void                    *pData;      /*!< Pointer to upper stack Handler      */
