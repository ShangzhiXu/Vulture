  uint32_t                BESL;
  PCD_EPTypeDef           IN_ep[15];    /*!< IN endpoint parameters             */
  PCD_InitTypeDef         Init;        /*!< PCD required parameters            */
  PCD_TypeDef             *Instance;   /*!< Register base address              */ 
  PCD_LPM_StateTypeDef    LPM_State;    /*!< LPM State                          */
  HAL_LockTypeDef         Lock;        /*!< PCD peripheral status              */
  PCD_EPTypeDef           OUT_ep[15];   /*!< OUT endpoint parameters            */ 
  uint32_t                Setup[12];   /*!< Setup packet buffer                */
  __IO PCD_StateTypeDef   State;       /*!< PCD communication state            */
  __IO uint8_t            USB_Address; /*!< USB Address: not used by USB OTG FS */  
  uint32_t battery_charging_active;     /*!< Enable or disable Battery charging.                                  
  uint32_t lpm_active;                  /*!< Enable or disable the Link Power Management .                                  
  void                    *pData;      /*!< Pointer to upper stack Handler     */    
