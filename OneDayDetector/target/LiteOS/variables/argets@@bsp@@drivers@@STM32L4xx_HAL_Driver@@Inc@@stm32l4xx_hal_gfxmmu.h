  FunctionalState Activation;     /*!< Interrupts enable/disable */
  uint32_t                    BlocksPerLine; /*!< Number of blocks of 16 bytes per line.
  uint32_t Buf0Address; /*!< Physical address of buffer 0. */
  uint32_t Buf1Address; /*!< Physical address of buffer 1. */
  uint32_t Buf2Address; /*!< Physical address of buffer 2. */
  uint32_t Buf3Address; /*!< Physical address of buffer 3. */
  GFXMMU_BuffersTypeDef       Buffers;       /*!< Physical buffers addresses. */
  uint32_t                    DefaultValue;  /*!< Value returned when virtual memory location not physically mapped. */
  __IO uint32_t           ErrorCode; /*!< GFXMMU error code */
  uint32_t FirstVisibleBlock; /*!< First visible block on this line.
  GFXMMU_InitTypeDef      Init;      /*!< GFXMMU init parameters */
  GFXMMU_TypeDef          *Instance; /*!< GFXMMU instance */
  GFXMMU_InterruptsTypeDef    Interrupts;    /*!< Interrupts parameters. */
  uint32_t LastVisibleBlock;  /*!< Last visible block on this line.
  uint32_t LineNumber;        /*!< LUT line number.
  int32_t  LineOffset;        /*!< Offset of block 0 of the current line in physical buffer.
  uint32_t LineStatus;        /*!< LUT line enable/disable.
  HAL_GFXMMU_StateTypeDef State;     /*!< GFXMMU state */
  uint32_t        UsedInterrupts; /*!< Interrupts used.
