  uint32_t BaudRate;                  /*!< This member configures the IRDA communication baud rate.
  uint32_t ClockPrescaler;            /*!< Specifies the prescaler value used to divide the IRDA clock source.
  uint32_t                 ErrorCode;        /*!< IRDA Error code                    */
  IRDA_InitTypeDef         Init;             /*!< IRDA communication parameters      */
  USART_TypeDef            *Instance;        /*!< USART registers base address       */
  HAL_LockTypeDef          Lock;             /*!< Locking object                     */
  uint16_t                 Mask;             /*!< USART RX RDR register mask         */
  uint32_t Mode;                      /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
  uint32_t Parity;                    /*!< Specifies the parity mode.
  uint16_t PowerMode;                 /*!< Specifies the IRDA power mode.
  uint8_t  Prescaler;                 /*!< Specifies the Prescaler value for dividing the UART/USART source clock
  __IO HAL_IRDA_StateTypeDef    RxState;     /*!< IRDA state information related to Rx operations.
  __IO uint16_t            RxXferCount;      /*!< IRDA Rx Transfer Counter           */
  uint16_t                 RxXferSize;       /*!< IRDA Rx Transfer size              */
  __IO uint16_t            TxXferCount;      /*!< IRDA Tx Transfer Counter           */
  uint16_t                 TxXferSize;       /*!< IRDA Tx Transfer size              */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  __IO HAL_IRDA_StateTypeDef    gState;      /*!< IRDA state information related to global Handle management 
  DMA_HandleTypeDef        *hdmarx;          /*!< IRDA Rx DMA Handle parameters      */
  DMA_HandleTypeDef        *hdmatx;          /*!< IRDA Tx DMA Handle parameters      */
  uint8_t                  *pRxBuffPtr;      /*!< Pointer to IRDA Rx transfer Buffer */
  uint8_t                  *pTxBuffPtr;      /*!< Pointer to IRDA Tx transfer Buffer */
