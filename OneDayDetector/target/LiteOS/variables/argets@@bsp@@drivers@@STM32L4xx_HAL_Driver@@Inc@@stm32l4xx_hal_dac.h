  uint32_t DAC_ConnectOnChipPeripheral ; /*!< Specifies whether the DAC output is connected or not to on chip peripheral .
  uint32_t DAC_HighFrequency;            /*!< Specifies the frequency interface mode 
  uint32_t DAC_HoldTime ;            /*!< Specifies the hold time for the selected channel
  uint32_t DAC_OutputBuffer;             /*!< Specifies whether the DAC channel output buffer is enabled or disabled.
  uint32_t DAC_RefreshTime ;         /*!< Specifies the refresh time for the selected channel
  uint32_t DAC_SampleAndHold;            /*!< Specifies whether the DAC mode.
  DAC_SampleAndHoldConfTypeDef  DAC_SampleAndHoldConfig;  /*!< Sample and Hold settings */ 
  uint32_t DAC_SampleTime ;          /*!< Specifies the Sample time for the selected channel.
  uint32_t DAC_Trigger;                  /*!< Specifies the external trigger for the selected DAC channel.
  uint32_t DAC_TrimmingValue;             /*!< Specifies the offset trimming value 
  uint32_t DAC_UserTrimming;             /*!< Specifies the trimming mode 
  DMA_HandleTypeDef           *DMA_Handle1;  /*!< Pointer DMA handler for channel 1 */
  DMA_HandleTypeDef           *DMA_Handle2;  /*!< Pointer DMA handler for channel 2 */ 
  __IO uint32_t               ErrorCode;     /*!< DAC Error code                    */
  DAC_TypeDef                 *Instance;     /*!< Register base address             */
  HAL_LockTypeDef             Lock;          /*!< DAC locking object                */
  __IO HAL_DAC_StateTypeDef   State;         /*!< DAC communication state           */
