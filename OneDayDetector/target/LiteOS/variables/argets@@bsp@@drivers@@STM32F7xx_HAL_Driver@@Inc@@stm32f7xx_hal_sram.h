  void  (* DmaXferCpltCallback)    ( DMA_HandleTypeDef * hdma);               /*!< SRAM DMA Xfer Complete callback     */
  void  (* DmaXferErrorCallback)   ( DMA_HandleTypeDef * hdma);               /*!< SRAM DMA Xfer Error callback        */
  FMC_NORSRAM_EXTENDED_TypeDef  *Extended;  /*!< Extended mode register base address          */
  FMC_NORSRAM_InitTypeDef       Init;       /*!< SRAM device control configuration parameters */
  FMC_NORSRAM_TypeDef           *Instance;  /*!< Register base address                        */ 
  HAL_LockTypeDef               Lock;       /*!< SRAM locking object                          */ 
  void  (* MspDeInitCallback)      ( struct __SRAM_HandleTypeDef * hsram);    /*!< SRAM Msp DeInit callback            */
  void  (* MspInitCallback)        ( struct __SRAM_HandleTypeDef * hsram);    /*!< SRAM Msp Init callback              */
  __IO HAL_SRAM_StateTypeDef    State;      /*!< SRAM device access state                     */
  DMA_HandleTypeDef             *hdma;      /*!< Pointer DMA handler                          */
