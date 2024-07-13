  FunctionalState EventEnable;    /*!< Specifies if an event shall be generated once the RequestNumber is reached.
  uint32_t Polarity;       /*!< Specifies the polarity of the signal on which the request is generated.
  uint32_t RequestNumber;  /*!< Specifies the number of DMA request that will be generated after a signal event
  uint32_t RequestNumber; /*!< Specifies the number of DMA request that will be authorized after a sync event
 uint32_t SignalID;      /*!< Specifies the ID of the signal used for DMAMUX request generator
  FunctionalState SyncEnable;  /*!< Specifies if the synchronization shall be enabled or disabled
  uint32_t SyncPolarity;  /*!< Specifies the polarity of the signal on which the DMA request is synchronized.
  uint32_t SyncSignalID;  /*!< Specifies the synchronization signal gating the DMA request in periodic mode.
