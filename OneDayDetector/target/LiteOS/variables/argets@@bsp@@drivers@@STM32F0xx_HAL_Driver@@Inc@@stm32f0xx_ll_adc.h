  uint32_t Clock;                       /*!< Set ADC instance clock source and prescaler.
  uint32_t ContinuousMode;              /*!< Set ADC continuous conversion mode on ADC group regular, whether ADC conversions are performed in single mode (one conversion per trigger) or in continuous mode (after the first trigger, following conversions launched successively automatically).
  uint32_t DMATransfer;                 /*!< Set ADC group regular conversion data transfer: no transfer or transfer by DMA, and DMA requests mode.
  uint32_t DataAlignment;               /*!< Set ADC conversion data alignment.
  uint32_t LowPowerMode;                /*!< Set ADC low power mode.
  uint32_t Overrun;                     /*!< Set ADC group regular behavior in case of overrun:
  uint32_t Resolution;                  /*!< Set ADC resolution.
  uint32_t SequencerDiscont;            /*!< Set ADC group regular sequencer discontinuous mode: sequence subdivided and scan conversions interrupted every selected number of ranks.
  uint32_t TriggerSource;               /*!< Set ADC group regular conversion trigger source: internal (SW start) or from external IP (timer event, external interrupt line).
