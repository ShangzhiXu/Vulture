  uint32_t ChannelSelection;         /*!< Specifies whether the control flow will take the channel status from channel A or B.
  uint32_t ChannelStatusMask;        /*!< Specifies whether the channel status and user bits are copied or not into the received frame.
  uint32_t ChannelStatusMask;        /*!< Specifies whether the channel status and user bits are copied or not into the received frame.
  __IO uint16_t              CsXferCount;  /* SPDIFRX Rx transfer counter
  __IO uint16_t              CsXferSize;   /* SPDIFRX Rx transfer size */
  void (*CxCpltCallback)(struct __SPDIFRX_HandleTypeDef *hspdif);       /*!< SPDIFRX Control flow completed callback */
  void (*CxHalfCpltCallback)(struct __SPDIFRX_HandleTypeDef *hspdif);   /*!< SPDIFRX Control flow half completed callback */
  uint32_t DataFormat;               /*!< Specifies the Data samples format (LSB, MSB, ...).
  uint32_t DataFormat;               /*!< Specifies the Data samples format (LSB, MSB, ...).
  void (*ErrorCallback)(struct __SPDIFRX_HandleTypeDef *hspdif);        /*!< SPDIFRX error callback */
  __IO uint32_t  ErrorCode;                /* SPDIFRX Error code */
  SPDIFRX_InitTypeDef        Init;         /* SPDIFRX communication parameters */
  uint32_t InputSelection;           /*!< Specifies the SPDIF input selection.
  SPDIFRX_TypeDef            *Instance;    /* SPDIFRX registers base address */
  __IO HAL_LockTypeDef       Lock;         /* SPDIFRX locking object */
  void (* MspDeInitCallback)( struct __SPDIFRX_HandleTypeDef * hspdif); /*!< SPDIFRX Msp DeInit callback  */
  void (* MspInitCallback)( struct __SPDIFRX_HandleTypeDef * hspdif);   /*!< SPDIFRX Msp Init callback  */
  uint32_t ParityErrorMask;          /*!< Specifies whether the parity error bit is copied or not into the received frame.
  uint32_t ParityErrorMask;          /*!< Specifies whether the parity error bit is copied or not into the received frame.
  uint32_t PreambleTypeMask;          /*!< Specifies whether The preamble type bits are copied or not into the received frame.
  uint32_t PreambleTypeMask;          /*!< Specifies whether The preamble type bits are copied or not into the received frame.
  uint32_t Retries;                  /*!< Specifies the Maximum allowed re-tries during synchronization phase.
  void (*RxCpltCallback)(struct __SPDIFRX_HandleTypeDef *hspdif);       /*!< SPDIFRX Data flow completed callback */
  void (*RxHalfCpltCallback)(struct __SPDIFRX_HandleTypeDef *hspdif);   /*!< SPDIFRX Data flow half completed callback */
  __IO uint16_t              RxXferCount;  /* SPDIFRX Rx transfer counter
  __IO uint16_t              RxXferSize;   /* SPDIFRX Rx transfer size */
  __IO HAL_SPDIFRX_StateTypeDef  State;    /* SPDIFRX communication state */
  uint32_t StereoMode;               /*!< Specifies whether the peripheral is in stereo or mono mode.
  uint32_t StereoMode;               /*!< Specifies whether the peripheral is in stereo or mono mode.
  uint32_t ValidityBitMask;          /*!< Specifies whether the validity bit is copied or not into the received frame.
  uint32_t ValidityBitMask;          /*!< Specifies whether the validity bit is copied or not into the received frame.
  uint32_t WaitForActivity;          /*!< Specifies the wait for activity on SPDIF selected input.
  DMA_HandleTypeDef          *hdmaCsRx;    /* SPDIFRX EC60958_channel_status and user_information DMA handle parameters */
  DMA_HandleTypeDef          *hdmaDrRx;    /* SPDIFRX Rx DMA handle parameters */
  uint32_t                   *pCsBuffPtr;  /* Pointer to SPDIFRX Cx transfer buffer */
  uint32_t                   *pRxBuffPtr;  /* Pointer to SPDIFRX Rx transfer buffer */
