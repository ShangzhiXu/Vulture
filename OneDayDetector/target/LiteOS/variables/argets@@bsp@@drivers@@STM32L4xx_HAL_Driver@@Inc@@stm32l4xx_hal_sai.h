  FunctionalState Activation;  /*!< Enable/disable PDM interface */
  uint32_t ActiveFrameLength;  /*!< Specifies the Frame synchronization active level length.
  uint32_t AudioFrequency;      /*!< Specifies the audio frequency sampling.
  uint32_t AudioMode;           /*!< Specifies the SAI Block audio Mode.
  uint32_t        ClockEnable; /*!< Specifies which clock must be enabled.
  uint32_t ClockStrobing;   /*!< Specifies the SAI Block clock strobing edge sensitivity.
  uint32_t CompandingMode;      /*!< Specifies the companding mode type.
  uint32_t DataSize;        /*!< Specifies the SAI Block data size.
  __IO uint32_t             ErrorCode;    /*!< SAI Error code */
  uint32_t FIFOThreshold;       /*!< Specifies SAI Block FIFO threshold.
  uint32_t FSDefinition;       /*!< Specifies the Frame synchronization definition.
  uint32_t FSOffset;           /*!< Specifies the Frame synchronization Offset.
  uint32_t FSPolarity;         /*!< Specifies the Frame synchronization Polarity.
  uint32_t FirstBit;        /*!< Specifies whether data transfers start from MSB or LSB bit.
  uint32_t FirstBitOffset;  /*!< Specifies the position of first data transfer bit in the slot.
  SAI_FrameInitTypeDef      FrameInit;    /*!< SAI Frame configuration parameters */
  uint32_t FrameLength;        /*!< Specifies the Frame length, the number of SCK clocks for each audio frame.
  SAI_InitTypeDef           Init;         /*!< SAI communication parameters */
  SAI_Block_TypeDef         *Instance;    /*!< SAI Blockx registers base address */
  void (*InterruptServiceRoutine)(struct __SAI_HandleTypeDef *hsai); /* function pointer for IRQ handler */
  HAL_LockTypeDef           Lock;         /*!< SAI locking object */
  uint32_t MckOverSampling;     /*!< Specifies the master clock oversampling.
  uint32_t Mckdiv;              /*!< Specifies the master clock divider, the parameter will be used if for
  uint32_t        MicPairsNbr; /*!< Specifies the number of microphone pairs used.
  uint32_t MonoStereoMode;      /*!< Specifies if the mono or stereo mode is selected.
  uint32_t NoDivider;           /*!< Specifies whether master clock will be divided or not.
  uint32_t OutputDrive;         /*!< Specifies when SAI Block outputs are driven.
  SAI_PdmInitTypeDef PdmInit;   /*!< Specifies the PDM configuration. */
  uint32_t Protocol;        /*!< Specifies the SAI Block protocol.
  uint32_t SlotActive;      /*!< Specifies the slots in audio frame that will be activated.
  SAI_SlotInitTypeDef       SlotInit;     /*!< SAI Slot configuration parameters */
  uint32_t SlotNumber;      /*!< Specifies the number of slot in the audio frame.
  uint32_t SlotSize;        /*!< Specifies the Slot Size.
  __IO HAL_SAI_StateTypeDef State;        /*!< SAI communication state */
  uint32_t Synchro;             /*!< Specifies SAI Block synchronization
  uint32_t SynchroExt;          /*!< Specifies SAI external output synchronization, this setup is common
  uint32_t TriState;            /*!< Specifies the companding mode type.
  uint16_t                  XferCount;    /*!< SAI transfer counter */
  uint16_t                  XferSize;     /*!< SAI transfer size */
  DMA_HandleTypeDef         *hdmarx;      /*!< SAI Rx DMA handle parameters */
  DMA_HandleTypeDef         *hdmatx;      /*!< SAI Tx DMA handle parameters */
  SAIcallback               mutecallback; /*!< SAI mute callback */
  uint8_t                  *pBuffPtr;     /*!< Pointer to SAI transfer Buffer */
