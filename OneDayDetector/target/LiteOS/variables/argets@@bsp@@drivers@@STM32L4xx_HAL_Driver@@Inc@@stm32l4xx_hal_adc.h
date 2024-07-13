  uint32_t Channel;                /*!< Specify the channel to configure into ADC regular group.
  uint32_t Channel;           /*!< Select which ADC channel to monitor by analog watchdog.
  uint32_t ChannelCount;                 /*!< Number of channels in the injected sequence */
  uint32_t ClockPrescaler;        /*!< Select ADC clock source (synchronous clock derived from APB clock or asynchronous clock derived from system clock or PLL (Refer to reference manual for list of clocks available)) and clock prescaler.
  uint32_t ContextQueue;                 /*!< Injected channel configuration context: build-up over each 
  uint32_t ContinuousConvMode;    /*!< Specify whether the conversion is performed in single mode (one conversion) or continuous mode for ADC group regular,
  uint32_t DFSDMConfig;           /*!< Specify whether ADC conversion data is sent directly to DFSDM.
  uint32_t DMAContinuousRequests; /*!< Specify whether the DMA requests are performed in one shot mode (DMA transfer stops when number of conversions is reached)
  DMA_HandleTypeDef             *DMA_Handle;            /*!< Pointer DMA Handler */
  uint32_t DataAlign;             /*!< Specify ADC data alignment in conversion data register (right or left).
  uint32_t DiscontinuousConvMode; /*!< Specify whether the conversions sequence of ADC group regular is performed in Complete-sequence/Discontinuous-sequence
  uint32_t EOCSelection;          /*!< Specify which EOC (End Of Conversion) flag is used for conversion by polling and interruption: end of unitary conversion or end of sequence conversions.
  __IO uint32_t                 ErrorCode;              /*!< ADC Error code */
  uint32_t ExternalTrigConv;      /*!< Select the external event source used to trigger ADC group regular conversion start.
  uint32_t ExternalTrigConvEdge;  /*!< Select the external event edge used to trigger ADC group regular conversion start.
  uint32_t HighThreshold;     /*!< Configure the ADC analog watchdog High threshold value.
  uint32_t ITMode;            /*!< Specify whether the analog watchdog is configured in interrupt or polling mode.
  ADC_InitTypeDef               Init;                   /*!< ADC initialization parameters and regular conversions setting */
  ADC_InjectionConfigTypeDef    InjectionConfig ;       /*!< ADC injected channel configuration build-up structure */
  ADC_TypeDef                   *Instance;              /*!< Register base address */
  HAL_LockTypeDef               Lock;                   /*!< ADC locking object */
  uint32_t LowPowerAutoWait;      /*!< Select the dynamic low power Auto Delay: new conversion start only when the previous
  uint32_t LowThreshold;      /*!< Configures the ADC analog watchdog Low threshold value.
  uint32_t NbrOfConversion;       /*!< Specify the number of ranks that will be converted within the regular group sequencer.
  uint32_t NbrOfDiscConversion;   /*!< Specifies the number of discontinuous conversions in which the main sequence of ADC group regular (parameter NbrOfConversion) will be subdivided.
  uint32_t Offset;                 /*!< Define the offset to be subtracted from the raw converted data.
  uint32_t OffsetNumber;           /*!< Select the offset number
  uint32_t Overrun;               /*!< Select the behavior in case of overrun: data overwritten or preserved (default).
  ADC_OversamplingTypeDef Oversampling;   /*!< Specify the Oversampling parameters.
  uint32_t OversamplingMode;              /*!< Specify whether the oversampling feature is enabled or disabled.
  uint32_t OversamplingStopReset;         /*!< Selects the regular oversampling mode.
  uint32_t Rank;                   /*!< Specify the rank in the regular group sequencer.
  uint32_t Ratio;                         /*!< Configures the oversampling ratio.
  uint32_t Resolution;            /*!< Configure the ADC resolution. 
  uint32_t RightBitShift;                 /*!< Configures the division coefficient for the Oversampler.
  uint32_t SamplingTime;           /*!< Sampling time value to be set for the selected channel.
  uint32_t ScanConvMode;          /*!< Configure the sequencer of ADC groups regular and injected.
  uint32_t SingleDiff;             /*!< Select single-ended or differential input.
  __IO uint32_t                 State;                  /*!< ADC communication state (bitmap of ADC states) */
  uint32_t TriggeredMode;                 /*!< Selects the regular triggered oversampling mode.
  uint32_t WatchdogMode;      /*!< Configure the ADC analog watchdog mode: single/all/none channels.
  uint32_t WatchdogNumber;    /*!< Select which ADC analog watchdog is monitoring the selected channel.
