  uint32_t Channel;                /*!< Specifies the channel to configure into ADC regular group.
  uint32_t Channel;           /*!< Selects which ADC channel to monitor by analog watchdog.
  uint32_t ClockPrescaler;        /*!< Select ADC clock source (synchronous clock derived from APB clock or asynchronous clock derived from ADC dedicated HSI RC oscillator 14MHz) and clock prescaler.
  FunctionalState ContinuousConvMode;    /*!< Specifies whether the conversion is performed in single mode (one conversion) or continuous mode for regular group,
  void (* ConvCpltCallback)(struct __ADC_HandleTypeDef *hadc);              /*!< ADC conversion complete callback */
  void (* ConvHalfCpltCallback)(struct __ADC_HandleTypeDef *hadc);          /*!< ADC conversion DMA half-transfer callback */
  FunctionalState DMAContinuousRequests; /*!< Specifies whether the DMA requests are performed in one shot mode (DMA transfer stop when number of conversions is reached)
  DMA_HandleTypeDef             *DMA_Handle;            /*!< Pointer DMA Handler */
  uint32_t DataAlign;             /*!< Specifies whether the ADC data  alignment is left or right.  
  FunctionalState DiscontinuousConvMode; /*!< Specifies whether the conversions sequence of regular group is performed in Complete-sequence/Discontinuous-sequence (main sequence subdivided in successive parts).
  uint32_t EOCSelection;          /*!< Specifies what EOC (End Of Conversion) flag is used for conversion by polling and interruption: end of conversion of each rank or complete sequence.
  void (* ErrorCallback)(struct __ADC_HandleTypeDef *hadc);                 /*!< ADC error callback */
  __IO uint32_t                 ErrorCode;              /*!< ADC Error code */
  uint32_t ExternalTrigConv;      /*!< Selects the external event used to trigger the conversion start of regular group.
  uint32_t ExternalTrigConvEdge;  /*!< Selects the external trigger edge of regular group.
  uint32_t HighThreshold;     /*!< Configures the ADC analog watchdog High threshold value.
  FunctionalState ITMode;     /*!< Specifies whether the analog watchdog is configured in interrupt or polling mode.
  ADC_InitTypeDef               Init;                   /*!< ADC required parameters */
  ADC_TypeDef                   *Instance;              /*!< Register base address */
  void (* LevelOutOfWindowCallback)(struct __ADC_HandleTypeDef *hadc);      /*!< ADC analog watchdog 1 callback */
  HAL_LockTypeDef               Lock;                   /*!< ADC locking object */
  FunctionalState LowPowerAutoPowerOff;  /*!< Selects the auto-off mode: the ADC automatically powers-off after a conversion and automatically wakes-up when a new conversion is triggered (with startup time between trigger and start of sampling).
  FunctionalState LowPowerAutoWait;      /*!< Selects the dynamic low power Auto Delay: new conversion start only when the previous
  uint32_t LowThreshold;      /*!< Configures the ADC analog watchdog High threshold value.
  void (* MspDeInitCallback)(struct __ADC_HandleTypeDef *hadc);             /*!< ADC Msp DeInit callback */
  void (* MspInitCallback)(struct __ADC_HandleTypeDef *hadc);               /*!< ADC Msp Init callback */
  uint32_t Overrun;               /*!< Select the behaviour in case of overrun: data preserved or overwritten 
  uint32_t Rank;                   /*!< Add or remove the channel from ADC regular group sequencer. 
  uint32_t Resolution;            /*!< Configures the ADC resolution. 
  uint32_t SamplingTime;           /*!< Sampling time value to be set for the selected channel.
  uint32_t SamplingTimeCommon;    /*!< Sampling time value to be set for the selected channel.
  uint32_t ScanConvMode;          /*!< Configures the sequencer of regular group.
  __IO uint32_t                 State;                  /*!< ADC communication state (bitmap of ADC states) */
  uint32_t WatchdogMode;      /*!< Configures the ADC analog watchdog mode: single/all/none channels.
