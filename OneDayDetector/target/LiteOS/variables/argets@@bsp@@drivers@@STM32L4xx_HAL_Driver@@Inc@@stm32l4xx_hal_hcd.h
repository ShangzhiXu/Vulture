  HCD_InitTypeDef           Init;       /*!< HCD required parameters  */
  HCD_TypeDef               *Instance;  /*!< Register base address    */ 
  HAL_LockTypeDef           Lock;       /*!< HCD peripheral status    */
  __IO HCD_StateTypeDef     State;      /*!< HCD communication state  */
  HCD_HCTypeDef             hc[15];     /*!< Host channels parameters */
  void                      *pData;     /*!< Pointer Stack Handler    */    
