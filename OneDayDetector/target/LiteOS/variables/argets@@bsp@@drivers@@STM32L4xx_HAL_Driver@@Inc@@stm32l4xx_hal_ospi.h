  uint32_t AccessTime;           /* It indicates the number of cycles for the device acces time.
  uint32_t Address;                   /* It contains the address to be sent to the device.
  uint32_t Address;          /* It contains the address to be sent tot he device.
  uint32_t AddressDtrMode;            /* It enables or not the DTR mode for the address phase.
  uint32_t AddressMode;               /* It indicates the mode of the address.
  uint32_t AddressSize;               /* It indicates the size of the address.
  uint32_t AddressSize;      /* It indicates the size of the address.
  uint32_t AddressSpace;     /* It indicates the address space accessed by the command.
  uint32_t AlternateBytes;            /* It contains the alternate bytes to be sent to the device.
  uint32_t AlternateBytesDtrMode;     /* It enables or not the DTR mode for the alternate bytes phase.
  uint32_t AlternateBytesMode;        /* It indicates the mode of the alternate bytes.
  uint32_t AlternateBytesSize;        /* It indicates the size of the alternate bytes.
  uint32_t AutomaticStop;      /* Specifies if automatic polling is stopped after a match.
  uint32_t ChipSelectBoundary;        /* It enables the transaction boundary feature and 
  uint32_t ChipSelectHighTime;        /* It defines the minimun number of clocks which the chip select 
  uint32_t ClkPort;                /* It indicates which port of the OSPI IO Manager is used for the CLK pins.
  uint32_t ClockMode;                 /* It indicates the level of clock when the chip select is released.
  uint32_t ClockPrescaler;            /* It specifies the prescaler factor used for generating 
  uint32_t DQSMode;                   /* It enables or not the data strobe management.
  uint32_t DQSMode;          /* It enables or not the data strobe management.
  uint32_t DQSPort;                /* It indicates which port of the OSPI IO Manager is used for the DQS pin.
  uint32_t DataDtrMode;               /* It enables or not the DTR mode for the data phase.
  uint32_t DataMode;                  /* It indicates the mode of the data.
  uint32_t DelayHoldQuarterCycle;     /* It allows to hold to 1/4 cycle the data. 
  uint32_t DeviceSize;                /* It defines the size of the external device connected to the OSPI, 
  uint32_t DualQuad;                  /* It enables or not the dual-quad mode which allow to access up to 
  uint32_t DummyCycles;               /* It indicates the number of dummy cycles inserted before data phase.
  __IO uint32_t              ErrorCode;     /* Error code in case of HAL driver internal error  */
  uint32_t FifoThreshold;             /* This is the threshold used byt the IP to generate the interrupt 
  uint32_t FlashId;                   /* It indicates which external device is selected for this command (it 
  uint32_t FreeRunningClock;          /* It enables or not the free running clock.
  uint32_t IOHighPort;             /* It indicates which port of the OSPI IO Manager is used for the IO[7:4] pins.
  uint32_t IOLowPort;              /* It indicates which port of the OSPI IO Manager is used for the IO[3:0] pins.
  OSPI_InitTypeDef           Init;          /* OSPI initialization parameters                   */
  OCTOSPI_TypeDef            *Instance;     /* OSPI registers base address                      */
  uint32_t Instruction;               /* It contains the instruction to be sent to the device.
  uint32_t InstructionDtrMode;        /* It enables or not the DTR mode for the instruction phase.
  uint32_t InstructionMode;           /* It indicates the mode of the instruction.
  uint32_t InstructionSize;           /* It indicates the size of the instruction.
  uint32_t Interval;           /* Specifies the number of clock cycles between two read during automatic polling phases.
  uint32_t LatencyMode;          /* It configures the latency mode.
  uint32_t Mask;               /* Specifies the mask to be applied to the status bytes received. 
  uint32_t Match;              /* Specifies the value to be compared with the masked status register to get a match.
  uint32_t MatchMode;          /* Specifies the method used for determining a match.
  uint32_t MemoryType;                /* It indicates the external device type connected to the OSPI.
  uint32_t NCSPort;                /* It indicates which port of the OSPI IO Manager is used for the NCS pin.
  uint32_t NbData;                    /* It indicates the number of data transferred with this command. 
  uint32_t NbData;           /* It indicates the number of data transferred with this command.
  uint32_t OperationType;             /* It indicates if the configuration applies to the common regsiters or 
  uint32_t RWRecoveryTime;       /* It indicates the number of cycles for the device read write recovery time.
  uint32_t SIOOMode;                  /* It enables or not the SIOO mode.
  uint32_t SampleShifting;            /* It allows to delay to 1/2 cycle the data sampling in order 
  __IO uint32_t              State;         /* Internal state of the OSPI HAL driver            */
  uint32_t TimeOutActivation;  /* Specifies if the timeout counter is enabled to release the chip select. 
  uint32_t TimeOutPeriod;      /* Specifies the number of clock to wait when the FIFO is full before to release the chip select.
  uint32_t                   Timeout;       /* Timeout used for the OSPI external device access */
  uint32_t WrapSize;                  /* It indicates the wrap-size corresponding the external device configuration.
  uint32_t WriteZeroLatency;     /* It enables or not the latency for the write access.
  __IO uint32_t              XferCount;     /* Counter of data transferred                      */
  __IO uint32_t              XferSize;      /* Number of data to transfer                       */
  DMA_HandleTypeDef          *hdma;         /* Handle of the DMA channel used for the transfer  */
  uint8_t                    *pBuffPtr;     /* Address of the OSPI buffer for transfer          */
