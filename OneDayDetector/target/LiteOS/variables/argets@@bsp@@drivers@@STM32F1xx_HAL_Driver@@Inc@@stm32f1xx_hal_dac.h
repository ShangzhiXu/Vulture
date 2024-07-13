  uint32_t DAC_OutputBuffer;  /*!< Specifies whether the DAC channel output buffer is enabled or disabled.
  uint32_t DAC_Trigger;       /*!< Specifies the external trigger for the selected DAC channel.
  DMA_HandleTypeDef           *DMA_Handle1;  /*!< Pointer DMA handler for channel 1 */
  DMA_HandleTypeDef           *DMA_Handle2;  /*!< Pointer DMA handler for channel 2 */ 
  __IO uint32_t               ErrorCode;     /*!< DAC Error code                    */
  DAC_TypeDef                 *Instance;     /*!< Register base address             */
  HAL_LockTypeDef             Lock;          /*!< DAC locking object                */
  __IO HAL_DAC_StateTypeDef   State;         /*!< DAC communication state           */
