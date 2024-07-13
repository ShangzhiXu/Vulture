  void (* AbortCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsc);         /*!< SMARTCARD Abort Complete Callback          */
  void (* AbortReceiveCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsc);  /*!< SMARTCARD Abort Receive Complete Callback  */
  void (* AbortTransmitCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsc); /*!< SMARTCARD Abort Transmit Complete Callback */
  uint32_t BaudRate;                  /*!< This member configures the SmartCard communication baud rate.
  uint32_t CLKLastBit;                /*!< Specifies whether the clock pulse corresponding to the last transmitted
  uint32_t CLKPhase;                  /*!< Specifies the clock transition on which the bit capture is made.
  uint32_t CLKPolarity;               /*!< Specifies the steady state of the serial clock.
  void (* ErrorCallback)(struct __SMARTCARD_HandleTypeDef *hsc);             /*!< SMARTCARD Error Callback                   */
  __IO uint32_t                    ErrorCode;        /*!< SmartCard Error code */
  uint32_t GuardTime;                 /*!< Specifies the SmartCard Guard Time value in terms of number of baud clocks */
  SMARTCARD_InitTypeDef            Init;             /*!< SmartCard communication parameters */
  USART_TypeDef                    *Instance;        /*!< USART registers base address */
  HAL_LockTypeDef                  Lock;             /*!< Locking object */
  uint32_t Mode;                      /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
  void (* MspDeInitCallback)(struct __SMARTCARD_HandleTypeDef *hsc);         /*!< SMARTCARD Msp DeInit callback              */
  void (* MspInitCallback)(struct __SMARTCARD_HandleTypeDef *hsc);           /*!< SMARTCARD Msp Init callback                */
  uint32_t NACKState;                 /*!< Specifies the SmartCard NACK Transmission state.
  uint32_t Parity;                    /*!< Specifies the parity mode.
  uint32_t Prescaler;                 /*!< Specifies the SmartCard Prescaler value used for dividing the system clock
  void (* RxCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsc);            /*!< SMARTCARD Rx Complete Callback             */
  __IO HAL_SMARTCARD_StateTypeDef  RxState;          /*!< SmartCard state information related to Rx operations.
  __IO uint16_t                    RxXferCount;      /*!< SmartCard Rx Transfer Counter */
  uint16_t                         RxXferSize;       /*!< SmartCard Rx Transfer size */
  uint32_t StopBits;                  /*!< Specifies the number of stop bits transmitted.
  void (* TxCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsc);            /*!< SMARTCARD Tx Complete Callback             */
  __IO uint16_t                    TxXferCount;      /*!< SmartCard Tx Transfer Counter */
  uint16_t                         TxXferSize;       /*!< SmartCard Tx Transfer size */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  __IO HAL_SMARTCARD_StateTypeDef  gState;           /*!< SmartCard state information related to global Handle management
  DMA_HandleTypeDef                *hdmarx;          /*!< SmartCard Rx DMA Handle parameters */
  DMA_HandleTypeDef                *hdmatx;          /*!< SmartCard Tx DMA Handle parameters */
  uint8_t                          *pRxBuffPtr;      /*!< Pointer to SmartCard Rx transfer Buffer */
  uint8_t                          *pTxBuffPtr;      /*!< Pointer to SmartCard Tx transfer Buffer */
