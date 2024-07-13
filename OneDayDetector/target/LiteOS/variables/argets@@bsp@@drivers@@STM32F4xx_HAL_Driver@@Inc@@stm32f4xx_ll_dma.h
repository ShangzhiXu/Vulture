  uint32_t Channel;                /*!< Specifies the peripheral channel.
  uint32_t Direction;              /*!< Specifies if the data will be transferred from memory to peripheral,
  uint32_t FIFOMode;               /*!< Specifies if the FIFO mode or Direct mode will be used for the specified stream.
  uint32_t FIFOThreshold;          /*!< Specifies the FIFO threshold level.
  uint32_t MemBurst;               /*!< Specifies the Burst transfer configuration for the memory transfers. 
  uint32_t MemoryOrM2MDstAddress;  /*!< Specifies the memory base address for DMA transfer
  uint32_t MemoryOrM2MDstDataSize; /*!< Specifies the Memory data size alignment or Destination data size alignment (byte, half word, word)
  uint32_t MemoryOrM2MDstIncMode;  /*!< Specifies whether the Memory address or Destination address in case of memory to memory transfer direction
  uint32_t Mode;                   /*!< Specifies the normal or circular operation mode.
  uint32_t NbData;                 /*!< Specifies the number of data to transfer, in data unit.
  uint32_t PeriphBurst;            /*!< Specifies the Burst transfer configuration for the peripheral transfers. 
  uint32_t PeriphOrM2MSrcAddress;  /*!< Specifies the peripheral base address for DMA transfer
  uint32_t PeriphOrM2MSrcDataSize; /*!< Specifies the Peripheral data size alignment or Source data size alignment (byte, half word, word)
  uint32_t PeriphOrM2MSrcIncMode;  /*!< Specifies whether the Peripheral address or Source address in case of memory to memory transfer direction
  uint32_t Priority;               /*!< Specifies the channel priority level.
