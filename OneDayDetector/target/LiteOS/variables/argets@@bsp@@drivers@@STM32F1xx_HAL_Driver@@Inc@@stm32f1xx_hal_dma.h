  uint32_t Direction;                 /*!< Specifies if the data will be transferred from memory to peripheral, 
  __IO uint32_t         ErrorCode;                                                    /*!< DMA Error code                         */
  DMA_InitTypeDef       Init;                            /*!< DMA communication parameters           */ 
  DMA_Channel_TypeDef   *Instance;                       /*!< Register base address                  */
  HAL_LockTypeDef       Lock;                            /*!< DMA locking object                     */  
  uint32_t MemDataAlignment;          /*!< Specifies the Memory data width.
  uint32_t MemInc;                    /*!< Specifies whether the memory address register should be incremented or not.
  uint32_t Mode;                      /*!< Specifies the operation mode of the DMAy Channelx.
  void                  *Parent;                                                      /*!< Parent object state                    */  
  uint32_t PeriphDataAlignment;       /*!< Specifies the Peripheral data width.
  uint32_t PeriphInc;                 /*!< Specifies whether the Peripheral address register should be incremented or not.
  uint32_t Priority;                   /*!< Specifies the software priority for the DMAy Channelx.
  HAL_DMA_StateTypeDef  State;                           /*!< DMA transfer state                     */
  void                  (* XferCpltCallback)( struct __DMA_HandleTypeDef * hdma);     /*!< DMA transfer complete callback         */
  void                  (* XferErrorCallback)( struct __DMA_HandleTypeDef * hdma);    /*!< DMA transfer error callback            */
  void                  (* XferHalfCpltCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA Half transfer complete callback    */
