  FunctionalState AutoInjectedConv;              /*!< Enables or disables the selected ADC automatic injected group conversion after regular one
  uint32_t DMAAccessMode;     /*!< Configures the Direct memory access mode for multi ADC mode.
  uint32_t ExternalTrigInjecConv;                /*!< Selects the external event used to trigger the conversion start of injected group.
  uint32_t ExternalTrigInjecConvEdge;            /*!< Selects the external trigger edge of injected group.
  uint32_t InjectedChannel;                      /*!< Selection of ADC channel to configure
  FunctionalState InjectedDiscontinuousConvMode; /*!< Specifies whether the conversions sequence of injected group is performed in Complete-sequence/Discontinuous-sequence (main sequence subdivided in successive parts).
  uint32_t InjectedNbrOfConversion;              /*!< Specifies the number of ranks that will be converted within the injected group sequencer.
  uint32_t InjectedOffset;                       /*!< Defines the offset to be subtracted from the raw converted data (for channels set on injected group only).
  uint32_t InjectedRank;                         /*!< Rank in the injected group sequencer
  uint32_t InjectedSamplingTime;                 /*!< Sampling time value to be set for the selected channel.
  uint32_t Mode;              /*!< Configures the ADC to operate in independent or multi mode. 
  uint32_t TwoSamplingDelay;  /*!< Configures the Delay between 2 sampling phases.
