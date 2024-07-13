  uint32_t Direction;              /*!< Specifies if the data will be transferred from memory to peripheral,
  uint32_t MemoryOrM2MDstAddress;  /*!< Specifies the memory base address for DMA transfer
  uint32_t MemoryOrM2MDstDataSize; /*!< Specifies the Memory data size alignment or Destination data size alignment (byte, half word, word)
  uint32_t MemoryOrM2MDstIncMode;  /*!< Specifies whether the Memory address or Destination address in case of memory to memory transfer direction
  uint32_t Mode;                   /*!< Specifies the normal or circular operation mode.
  uint32_t NbData;                 /*!< Specifies the number of data to transfer, in data unit.
  uint32_t PeriphOrM2MSrcAddress;  /*!< Specifies the peripheral base address for DMA transfer
  uint32_t PeriphOrM2MSrcDataSize; /*!< Specifies the Peripheral data size alignment or Source data size alignment (byte, half word, word)
  uint32_t PeriphOrM2MSrcIncMode;  /*!< Specifies whether the Peripheral address or Source address in case of memory to memory transfer direction
  uint32_t PeriphRequest;          /*!< Specifies the peripheral request.
  uint32_t Priority;               /*!< Specifies the channel priority level.
