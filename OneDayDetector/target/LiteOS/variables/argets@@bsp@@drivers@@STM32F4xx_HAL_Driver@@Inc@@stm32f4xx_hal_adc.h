  uint32_t Channel;                /*!< Specifies the channel to configure into ADC regular group.
  uint32_t Channel;           /*!< Configures ADC channel for the analog watchdog. 
  uint32_t ClockPrescaler;               /*!< Select ADC clock prescaler. The clock is common for 
  FunctionalState ContinuousConvMode;    /*!< Specifies whether the conversion is performed in single mode (one conversion) or continuous mode for regular group,
  void (* ConvCpltCallback)(struct __ADC_HandleTypeDef *hadc);              /*!< ADC conversion complete callback */
  void (* ConvHalfCpltCallback)(struct __ADC_HandleTypeDef *hadc);          /*!< ADC conversion DMA half-transfer callback */
  FunctionalState DMAContinuousRequests; /*!< Specifies whether the DMA requests are performed in one shot mode (DMA transfer stop when number of conversions is reached)
  DMA_HandleTypeDef             *DMA_Handle;                 /*!< Pointer DMA Handler */
  uint32_t DataAlign;                    /*!< Specifies ADC data alignment to right (MSB on register bit 11 and LSB on register bit 0) (default setting)
  FunctionalState DiscontinuousConvMode; /*!< Specifies whether the conversions sequence of regular group is performed in Complete-sequence/Discontinuous-sequence (main sequence subdivided in successive parts).
  uint32_t EOCSelection;                 /*!< Specifies what EOC (End Of Conversion) flag is used for conversion by polling and interruption: end of conversion of each rank or complete sequence.
  void (* ErrorCallback)(struct __ADC_HandleTypeDef *hadc);                 /*!< ADC error callback */
  __IO uint32_t                 ErrorCode;                   /*!< ADC Error code */
  uint32_t ExternalTrigConv;             /*!< Selects the external event used to trigger the conversion start of regular group.
  uint32_t ExternalTrigConvEdge;         /*!< Selects the external trigger edge of regular group.
  uint32_t HighThreshold;     /*!< Configures the ADC analog watchdog High threshold value.
  FunctionalState ITMode;     /*!< Specifies whether the analog watchdog is configured
  ADC_InitTypeDef               Init;                        /*!< ADC required parameters */
  void (* InjectedConvCpltCallback)(struct __ADC_HandleTypeDef *hadc);      /*!< ADC group injected conversion complete callback */
  ADC_TypeDef                   *Instance;                   /*!< Register base address */
  void (* LevelOutOfWindowCallback)(struct __ADC_HandleTypeDef *hadc);      /*!< ADC analog watchdog 1 callback */
  HAL_LockTypeDef               Lock;                        /*!< ADC locking object */
  uint32_t LowThreshold;      /*!< Configures the ADC analog watchdog High threshold value.
  void (* MspDeInitCallback)(struct __ADC_HandleTypeDef *hadc);             /*!< ADC Msp DeInit callback */
  void (* MspInitCallback)(struct __ADC_HandleTypeDef *hadc);               /*!< ADC Msp Init callback */
  uint32_t NbrOfConversion;              /*!< Specifies the number of ranks that will be converted within the regular group sequencer.
  __IO uint32_t                 NbrOfCurrentConversionRank;  /*!< ADC number of current conversion rank */
  uint32_t NbrOfDiscConversion;          /*!< Specifies the number of discontinuous conversions in which the  main sequence of regular group (parameter NbrOfConversion) will be subdivided.
  uint32_t Offset;                 /*!< Reserved for future use, can be set to 0 */
  uint32_t Rank;                   /*!< Specifies the rank in the regular group sequencer.
  uint32_t Resolution;                   /*!< Configures the ADC resolution.
  uint32_t SamplingTime;           /*!< Sampling time value to be set for the selected channel.
  uint32_t ScanConvMode;                 /*!< Configures the sequencer of regular and injected groups.
  __IO uint32_t                 State;                       /*!< ADC communication state */
  uint32_t WatchdogMode;      /*!< Configures the ADC analog watchdog mode.
  uint32_t WatchdogNumber;    /*!< Reserved for future use, can be set to 0 */
