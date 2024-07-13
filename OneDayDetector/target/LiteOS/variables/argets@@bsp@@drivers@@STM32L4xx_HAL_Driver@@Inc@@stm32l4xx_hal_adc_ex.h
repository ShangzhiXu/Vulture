  uint32_t AutoInjectedConv;              /*!< Enables or disables the selected ADC group injected automatic conversion after regular one
  uint32_t DMAAccessMode;     /*!< Configures the DMA mode for multimode ADC:
  uint32_t ExternalTrigInjecConv;         /*!< Selects the external event used to trigger the conversion start of injected group.
  uint32_t ExternalTrigInjecConvEdge;     /*!< Selects the external trigger edge of injected group.
  ADC_InjOversamplingTypeDef  InjecOversampling; /*!< Specifies the Oversampling parameters.
  uint32_t InjecOversamplingMode;                 /*!< Specifies whether the oversampling feature is enabled or disabled.
  uint32_t InjectedChannel;               /*!< Specifies the channel to configure into ADC group injected.
  uint32_t InjectedDiscontinuousConvMode; /*!< Specifies whether the conversions sequence of ADC group injected is performed in Complete-sequence/Discontinuous-sequence
  uint32_t InjectedNbrOfConversion;       /*!< Specifies the number of ranks that will be converted within the ADC group injected sequencer.
  uint32_t InjectedOffset;                /*!< Defines the offset to be subtracted from the raw converted data.
  uint32_t InjectedOffsetNumber;          /*!< Selects the offset number.
  uint32_t InjectedRank;                  /*!< Specifies the rank in the ADC group injected sequencer.
  uint32_t InjectedSamplingTime;          /*!< Sampling time value to be set for the selected channel.
  uint32_t InjectedSingleDiff;            /*!< Selection of single-ended or differential input.
  uint32_t Mode;              /*!< Configures the ADC to operate in independent or multimode. 
  uint32_t QueueInjectedContext;          /*!< Specifies whether the context queue feature is enabled.
  uint32_t Ratio;                         /*!< Configures the oversampling ratio.
  uint32_t RightBitShift;                 /*!< Configures the division coefficient for the Oversampler.
  uint32_t TwoSamplingDelay;  /*!< Configures the Delay between 2 sampling phases.
