  uint32_t BitRate;                  /*!< Specifies the SWPMI Bitrate.
  __IO uint32_t                  ErrorCode;     /* SWPMI Error code                     */
  SWPMI_InitTypeDef              Init;          /* SWMPI communication parameters       */
  SWPMI_TypeDef                  *Instance;     /* SWPMI registers base address         */
  HAL_LockTypeDef                Lock;          /* SWPMI object                         */
  uint32_t RxBufferingMode;          /*!< Specifies the reception buffering mode.
  uint32_t                       RxXferCount;   /* SWPMI Rx Transfer Counter            */
  uint32_t                       RxXferSize;    /* SWPMI Rx Transfer size               */
  __IO HAL_SWPMI_StateTypeDef    State;         /* SWPMI communication state            */
  uint32_t TxBufferingMode;          /*!< Specifies the transmission buffering mode.
  uint32_t                       TxXferCount;   /* SWPMI Tx Transfer Counter            */
  uint32_t                       TxXferSize;    /* SWPMI Tx Transfer size               */
  uint32_t VoltageClass;             /*!< Specifies the SWP Voltage Class.
  DMA_HandleTypeDef              *hdmarx;       /* SWPMI Rx DMA Handle parameters       */
  DMA_HandleTypeDef              *hdmatx;       /* SWPMI Tx DMA Handle parameters       */
  uint32_t                       *pRxBuffPtr;   /* Pointer to SWPMI Rx transfer Buffer  */
  uint32_t                       *pTxBuffPtr;   /* Pointer to SWPMI Tx transfer Buffer  */
