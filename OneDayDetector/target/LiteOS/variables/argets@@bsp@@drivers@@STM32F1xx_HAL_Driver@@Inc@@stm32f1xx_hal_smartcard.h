  uint32_t BaudRate;                  /*!< This member configures the SmartCard communication baud rate.
  uint32_t CLKLastBit;                /*!< Specifies whether the clock pulse corresponding to the last transmitted
  uint32_t CLKPhase;                  /*!< Specifies the clock transition on which the bit capture is made.
  uint32_t CLKPolarity;               /*!< Specifies the steady state of the serial clock.
  __IO uint32_t  ErrorCode;        /*!< SmartCard Error code */
  uint32_t GuardTime;                 /*!< Specifies the SmartCard Guard Time value in terms of number of baud clocks */
  SMARTCARD_InitTypeDef            Init;             /*!< SmartCard communication parameters */
  USART_TypeDef                    *Instance;        /*!< USART registers base address */
  HAL_LockTypeDef                  Lock;             /*!< Locking object */
  uint32_t Mode;                      /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
  uint32_t NACKState;                 /*!< Specifies the SmartCard NACK Transmission state
  uint32_t Parity;                    /*!< Specifies the parity mode.
  uint32_t Prescaler;                 /*!< Specifies the SmartCard Prescaler value used for dividing the system clock 
  uint16_t                         RxXferCount;      /*!< SmartCard Rx Transfer Counter */
  uint16_t                         RxXferSize;       /*!< SmartCard Rx Transfer size */
  __IO HAL_SMARTCARD_StateTypeDef  State;            /*!< SmartCard communication state */
  uint32_t StopBits;                  /*!< Specifies the number of stop bits transmitted.
  uint16_t                         TxXferCount;      /*!< SmartCard Tx Transfer Counter */
  uint16_t                         TxXferSize;       /*!< SmartCard Tx Transfer size */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  DMA_HandleTypeDef                *hdmarx;          /*!< SmartCard Rx DMA Handle parameters */
  DMA_HandleTypeDef                *hdmatx;          /*!< SmartCard Tx DMA Handle parameters */
  uint8_t                          *pRxBuffPtr;      /*!< Pointer to SmartCard Rx transfer Buffer */
  uint8_t                          *pTxBuffPtr;      /*!< Pointer to SmartCard Tx transfer Buffer */
