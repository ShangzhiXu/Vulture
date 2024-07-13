  uint32_t AcquisitionMode;         /*!< Acquisition mode
  uint32_t CTPulseHighLength;       /*!< Charge-transfer high pulse length 
  uint32_t CTPulseLowLength;        /*!< Charge-transfer low pulse length
  uint32_t ChannelIOs;              /*!< Channel IOs mask */
  uint32_t ChannelIOs;  /*!< Channel IOs mask */
  uint32_t IODefaultMode;           /*!< IO default mode
  TSC_InitTypeDef           Init;      /*!< Initialization parameters */
  TSC_TypeDef               *Instance; /*!< Register base address */
  HAL_LockTypeDef           Lock;      /*!< Lock feature */
  uint32_t MaxCountInterrupt;       /*!< Max count interrupt activation
  uint32_t MaxCountValue;           /*!< Max count value
  uint32_t PulseGeneratorPrescaler; /*!< Pulse generator prescaler
  uint32_t SamplingIOs;             /*!< Sampling IOs mask */
  uint32_t SamplingIOs; /*!< Sampling IOs mask */
  uint32_t ShieldIOs;               /*!< Shield IOs mask */
  uint32_t ShieldIOs;   /*!< Shield IOs mask */
  uint32_t SpreadSpectrum;          /*!< Spread spectrum activation
  uint32_t SpreadSpectrumDeviation; /*!< Spread spectrum deviation
  uint32_t SpreadSpectrumPrescaler; /*!< Spread spectrum prescaler
  __IO HAL_TSC_StateTypeDef State;     /*!< Peripheral state */
  uint32_t SynchroPinPolarity;      /*!< Synchro pin polarity
