  uint32_t Address;            /* Specifies the Address to be sent (Size from 1 to 4 bytes according AddressSize)
  uint32_t AddressMode;        /* Specifies the Address Mode
  uint32_t AddressSize;        /* Specifies the Address Size
  uint32_t AlternateByteMode;  /* Specifies the Alternate Bytes Mode
  uint32_t AlternateBytes;     /* Specifies the Alternate Bytes to be sent (Size from 1 to 4 bytes according AlternateBytesSize)
  uint32_t AlternateBytesSize; /* Specifies the Alternate Bytes Size
  uint32_t AutomaticStop;      /* Specifies if automatic polling is stopped after a match.
  uint32_t ChipSelectHighTime; /* Specifies the Chip Select High Time. ChipSelectHighTime+1 defines the minimum number 
  uint32_t ClockMode;          /* Specifies the Clock Mode. It indicates the level that clock takes between commands.
  uint32_t ClockPrescaler;     /* Specifies the prescaler factor for generating clock based on the AHB clock.
  uint32_t DataMode;           /* Specifies the Data Mode (used for dummy cycles and data phases)
  uint32_t DdrHoldHalfCycle;   /* Specifies the DDR hold half cycle. It delays the data output by one half of 
  uint32_t DdrMode;            /* Specifies the double data rate mode for address, alternate byte and data phase
  uint32_t DualFlash;          /* Specifies the Dual Flash Mode State
  uint32_t DummyCycles;        /* Specifies the Number of Dummy Cycles.
  __IO uint32_t              ErrorCode;        /* QSPI Error code                    */
  uint32_t FifoThreshold;      /* Specifies the threshold number of bytes in the FIFO (used only in indirect mode)
  uint32_t FlashID;            /* Specifies the Flash which will be used,
  uint32_t FlashSize;          /* Specifies the Flash Size. FlashSize+1 is effectively the number of address bits 
  QSPI_InitTypeDef           Init;             /* QSPI communication parameters      */
  QUADSPI_TypeDef            *Instance;        /* QSPI registers base address        */
  uint32_t Instruction;        /* Specifies the Instruction to be sent
  uint32_t InstructionMode;    /* Specifies the Instruction Mode
  uint32_t Interval;           /* Specifies the number of clock cycles between two read during automatic polling phases.
  __IO HAL_LockTypeDef       Lock;             /* Locking object                     */
  uint32_t Mask;               /* Specifies the mask to be applied to the status bytes received. 
  uint32_t Match;              /* Specifies the value to be compared with the masked status register to get a match.
  uint32_t MatchMode;          /* Specifies the method used for determining a match.
  uint32_t NbData;             /* Specifies the number of data to transfer. (This is the number of bytes)
  __IO uint32_t              RxXferCount;      /* QSPI Rx Transfer Counter           */
  __IO uint32_t              RxXferSize;       /* QSPI Rx Transfer size              */
  uint32_t SIOOMode;           /* Specifies the send instruction only once mode
  uint32_t SampleShifting;     /* Specifies the Sample Shift. The data is sampled 1/2 clock cycle delay later to 
  __IO HAL_QSPI_StateTypeDef State;            /* QSPI communication state           */
  uint32_t StatusBytesSize;    /* Specifies the size of the status bytes received.
  uint32_t TimeOutActivation;  /* Specifies if the timeout counter is enabled to release the chip select. 
  uint32_t TimeOutPeriod;      /* Specifies the number of clock to wait when the FIFO is full before to release the chip select.
  uint32_t                   Timeout;          /* Timeout for the QSPI memory access */ 
  __IO uint32_t              TxXferCount;      /* QSPI Tx Transfer Counter           */
  __IO uint32_t              TxXferSize;       /* QSPI Tx Transfer size              */
  DMA_HandleTypeDef          *hdma;            /* QSPI Rx/Tx DMA Handle parameters   */
  uint8_t                    *pRxBuffPtr;      /* Pointer to QSPI Rx transfer Buffer */
  uint8_t                    *pTxBuffPtr;      /* Pointer to QSPI Tx transfer Buffer */
