  IWDG_InitTypeDef             Init;       /*!< IWDG required parameters */
  IWDG_TypeDef                 *Instance;  /*!< Register base address    */ 
  HAL_LockTypeDef              Lock;       /*!< IWDG Locking object      */
  uint32_t Prescaler;  /*!< Select the prescaler of the IWDG.  
  uint32_t Reload;     /*!< Specifies the IWDG down-counter reload value. 
  __IO HAL_IWDG_StateTypeDef   State;      /*!< IWDG communication state */
