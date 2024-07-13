  void  (* DmaXferCpltCallback)    ( DMA_HandleTypeDef * hdma);                 /*!< SDRAM DMA Xfer Complete callback     */
  void  (* DmaXferErrorCallback)   ( DMA_HandleTypeDef * hdma);                 /*!< SDRAM DMA Xfer Error callback        */
  FMC_SDRAM_InitTypeDef         Init;       /*!< SDRAM device configuration parameters */
  FMC_SDRAM_TypeDef             *Instance;  /*!< Register base address                 */
  HAL_LockTypeDef               Lock;       /*!< SDRAM locking object                  */ 
  void  (* MspDeInitCallback)      ( struct __SDRAM_HandleTypeDef * hsdram);    /*!< SDRAM Msp DeInit callback            */
  void  (* MspInitCallback)        ( struct __SDRAM_HandleTypeDef * hsdram);    /*!< SDRAM Msp Init callback              */
  void  (* RefreshErrorCallback)   ( struct __SDRAM_HandleTypeDef * hsdram);    /*!< SDRAM Refresh Error callback         */
  __IO HAL_SDRAM_StateTypeDef   State;      /*!< SDRAM access state                    */
  DMA_HandleTypeDef             *hdma;      /*!< Pointer DMA handler                   */
