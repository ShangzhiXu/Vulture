  FSMC_NORSRAM_EXTENDED_TypeDef  *Extended;  /*!< Extended mode register base address          */
  FSMC_NORSRAM_InitTypeDef       Init;       /*!< SRAM device control configuration parameters */
  FSMC_NORSRAM_TypeDef           *Instance;  /*!< Register base address                        */ 
  HAL_LockTypeDef               Lock;       /*!< SRAM locking object                          */ 
  __IO HAL_SRAM_StateTypeDef    State;      /*!< SRAM device access state                     */
  DMA_HandleTypeDef             *hdma;      /*!< Pointer DMA handler                          */
