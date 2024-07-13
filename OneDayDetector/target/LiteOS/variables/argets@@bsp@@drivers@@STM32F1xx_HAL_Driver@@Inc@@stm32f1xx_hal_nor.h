  uint16_t CFI_1;
  uint16_t CFI_2;
  uint16_t CFI_3;
  uint16_t CFI_4;
  uint16_t Device_Code1;
  uint16_t Device_Code2;
  uint16_t Device_Code3;       /*!< Defines the device's codes used to identify the memory. 
  FSMC_NORSRAM_EXTENDED_TypeDef *Extended;    /*!< Extended mode register base address          */
  FSMC_NORSRAM_InitTypeDef      Init;         /*!< NOR device control configuration parameters  */
  FSMC_NORSRAM_TypeDef          *Instance;    /*!< Register base address                        */ 
  HAL_LockTypeDef               Lock;         /*!< NOR locking object                           */ 
  uint16_t Manufacturer_Code;  /*!< Defines the device's manufacturer code used to identify the memory       */
  __IO HAL_NOR_StateTypeDef     State;        /*!< NOR device access state                      */
