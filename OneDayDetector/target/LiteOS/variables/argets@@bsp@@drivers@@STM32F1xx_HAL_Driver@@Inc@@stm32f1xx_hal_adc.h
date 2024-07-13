  uint32_t Channel;                /*!< Specifies the channel to configure into ADC regular group.
  uint32_t Channel;           /*!< Selects which ADC channel to monitor by analog watchdog.
  uint32_t ContinuousConvMode;    /*!< Specifies whether the conversion is performed in single mode (one conversion) or continuous mode for regular group,
  DMA_HandleTypeDef             *DMA_Handle;            /*!< Pointer DMA Handler */
  uint32_t DataAlign;             /*!< Specifies ADC data alignment to right (MSB on register bit 11 and LSB on register bit 0) (default setting)
  uint32_t DiscontinuousConvMode; /*!< Specifies whether the conversions sequence of regular group is performed in Complete-sequence/Discontinuous-sequence (main sequence subdivided in successive parts).
  __IO uint32_t                 ErrorCode;              /*!< ADC Error code */
  uint32_t ExternalTrigConv;      /*!< Selects the external event used to trigger the conversion start of regular group.
  uint32_t HighThreshold;     /*!< Configures the ADC analog watchdog High threshold value.
  uint32_t ITMode;            /*!< Specifies whether the analog watchdog is configured in interrupt or polling mode.
  ADC_InitTypeDef               Init;                   /*!< ADC required parameters */
  ADC_TypeDef                   *Instance;              /*!< Register base address */
  HAL_LockTypeDef               Lock;                   /*!< ADC locking object */
  uint32_t LowThreshold;      /*!< Configures the ADC analog watchdog High threshold value.
  uint32_t NbrOfConversion;       /*!< Specifies the number of ranks that will be converted within the regular group sequencer.
  uint32_t NbrOfDiscConversion;   /*!< Specifies the number of discontinuous conversions in which the  main sequence of regular group (parameter NbrOfConversion) will be subdivided.
  uint32_t Rank;                   /*!< Specifies the rank in the regular group sequencer 
  uint32_t SamplingTime;           /*!< Sampling time value to be set for the selected channel.
  uint32_t ScanConvMode;          /*!< Configures the sequencer of regular and injected groups.
  __IO uint32_t                 State;                  /*!< ADC communication state (bitmap of ADC states) */
  uint32_t WatchdogMode;      /*!< Configures the ADC analog watchdog mode: single/all channels, regular/injected group.
  uint32_t WatchdogNumber;    /*!< Reserved for future use, can be set to 0 */
