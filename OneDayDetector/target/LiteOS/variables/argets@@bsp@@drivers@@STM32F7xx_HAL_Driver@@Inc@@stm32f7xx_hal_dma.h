  uint32_t Channel;              /*!< Specifies the channel used for the specified stream. 
  uint32_t Direction;            /*!< Specifies if the data will be transferred from memory to peripheral, 
 __IO uint32_t               ErrorCode;                                                    /*!< DMA Error code                          */
  uint32_t FIFOMode;             /*!< Specifies if the FIFO mode or Direct mode will be used for the specified stream.
  uint32_t FIFOThreshold;        /*!< Specifies the FIFO threshold level.
  DMA_InitTypeDef            Init;                                                         /*!< DMA communication parameters           */ 
  DMA_Stream_TypeDef         *Instance;                                                    /*!< Register base address                  */
  HAL_LockTypeDef            Lock;                                                         /*!< DMA locking object                     */  
  uint32_t MemBurst;             /*!< Specifies the Burst transfer configuration for the memory transfers. 
  uint32_t MemDataAlignment;     /*!< Specifies the Memory data width.
  uint32_t MemInc;               /*!< Specifies whether the memory address register should be incremented or not.
  uint32_t Mode;                 /*!< Specifies the operation mode of the DMAy Streamx.
  void                       *Parent;                                                      /*!< Parent object state                    */ 
  uint32_t PeriphBurst;          /*!< Specifies the Burst transfer configuration for the peripheral transfers. 
  uint32_t PeriphDataAlignment;  /*!< Specifies the Peripheral data width.
  uint32_t PeriphInc;            /*!< Specifies whether the Peripheral address register should be incremented or not.
  uint32_t Priority;             /*!< Specifies the software priority for the DMAy Streamx.
  __IO HAL_DMA_StateTypeDef  State;                                                        /*!< DMA transfer state                     */
 uint32_t                    StreamBaseAddress;                                            /*!< DMA Stream Base Address                */
 uint32_t                    StreamIndex;                                                  /*!< DMA Stream Index                       */
  void                       (* XferAbortCallback)( struct __DMA_HandleTypeDef * hdma);    /*!< DMA transfer Abort callback            */  
  void                       (* XferCpltCallback)( struct __DMA_HandleTypeDef * hdma);     /*!< DMA transfer complete callback         */
  void                       (* XferErrorCallback)( struct __DMA_HandleTypeDef * hdma);    /*!< DMA transfer error callback            */
  void                       (* XferHalfCpltCallback)( struct __DMA_HandleTypeDef * hdma); /*!< DMA Half transfer complete callback    */
  void                       (* XferM1CpltCallback)( struct __DMA_HandleTypeDef * hdma);   /*!< DMA transfer complete Memory1 callback */
  void                       (* XferM1HalfCpltCallback)( struct __DMA_HandleTypeDef * hdma);   /*!< DMA transfer Half complete Memory1 callback */
