  void (* ConvCpltCallbackCh1)            (struct __DAC_HandleTypeDef *hdac);
  void (* ConvCpltCallbackCh2)            (struct __DAC_HandleTypeDef* hdac);
  void (* ConvHalfCpltCallbackCh1)        (struct __DAC_HandleTypeDef *hdac);
  void (* ConvHalfCpltCallbackCh2)        (struct __DAC_HandleTypeDef* hdac);
  uint32_t DAC_OutputBuffer;  /*!< Specifies whether the DAC channel output buffer is enabled or disabled.
  uint32_t DAC_Trigger;       /*!< Specifies the external trigger for the selected DAC channel.
  void (* DMAUnderrunCallbackCh1)         (struct __DAC_HandleTypeDef *hdac);
  void (* DMAUnderrunCallbackCh2)         (struct __DAC_HandleTypeDef* hdac); 
  DMA_HandleTypeDef           *DMA_Handle1;  /*!< Pointer DMA handler for channel 1 */
  DMA_HandleTypeDef           *DMA_Handle2;  /*!< Pointer DMA handler for channel 2 */ 
  void (* ErrorCallbackCh1)               (struct __DAC_HandleTypeDef *hdac);
  void (* ErrorCallbackCh2)               (struct __DAC_HandleTypeDef* hdac);
  __IO uint32_t               ErrorCode;     /*!< DAC Error code                    */
  DAC_TypeDef                 *Instance;     /*!< Register base address             */
  HAL_LockTypeDef             Lock;          /*!< DAC locking object                */
  void (* MspDeInitCallback )             (struct __DAC_HandleTypeDef *hdac); 
  void (* MspInitCallback)                (struct __DAC_HandleTypeDef *hdac);
  __IO HAL_DAC_StateTypeDef   State;         /*!< DAC communication state           */
