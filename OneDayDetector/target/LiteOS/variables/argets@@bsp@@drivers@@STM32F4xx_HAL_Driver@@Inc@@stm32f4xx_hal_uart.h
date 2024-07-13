  void (* AbortCpltCallback)(struct __UART_HandleTypeDef *huart);         /*!< UART Abort Complete Callback          */
  void (* AbortReceiveCpltCallback)(struct __UART_HandleTypeDef *huart);  /*!< UART Abort Receive Complete Callback  */
  void (* AbortTransmitCpltCallback)(struct __UART_HandleTypeDef *huart); /*!< UART Abort Transmit Complete Callback */
  uint32_t BaudRate;                  /*!< This member configures the UART communication baud rate.
  void (* ErrorCallback)(struct __UART_HandleTypeDef *huart);             /*!< UART Error Callback                   */
  __IO uint32_t                 ErrorCode;        /*!< UART Error code                    */
  uint32_t HwFlowCtl;                 /*!< Specifies whether the hardware flow control mode is enabled or disabled.
  UART_InitTypeDef              Init;             /*!< UART communication parameters      */
  USART_TypeDef                 *Instance;        /*!< UART registers base address        */
  HAL_LockTypeDef               Lock;             /*!< Locking object                     */
  uint32_t Mode;                      /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
  void (* MspDeInitCallback)(struct __UART_HandleTypeDef *huart);         /*!< UART Msp DeInit callback              */
  void (* MspInitCallback)(struct __UART_HandleTypeDef *huart);           /*!< UART Msp Init callback                */
  uint32_t OverSampling;              /*!< Specifies whether the Over sampling 8 is enabled or disabled, to achieve higher speed (up to fPCLK/8).
  uint32_t Parity;                    /*!< Specifies the parity mode.
  void (* RxCpltCallback)(struct __UART_HandleTypeDef *huart);            /*!< UART Rx Complete Callback             */
  void (* RxHalfCpltCallback)(struct __UART_HandleTypeDef *huart);        /*!< UART Rx Half Complete Callback        */
  __IO HAL_UART_StateTypeDef    RxState;          /*!< UART state information related to Rx operations.
  __IO uint16_t                 RxXferCount;      /*!< UART Rx Transfer Counter           */
  uint16_t                      RxXferSize;       /*!< UART Rx Transfer size              */
  uint32_t StopBits;                  /*!< Specifies the number of stop bits transmitted.
  void (* TxCpltCallback)(struct __UART_HandleTypeDef *huart);            /*!< UART Tx Complete Callback             */
  void (* TxHalfCpltCallback)(struct __UART_HandleTypeDef *huart);        /*!< UART Tx Half Complete Callback        */
  __IO uint16_t                 TxXferCount;      /*!< UART Tx Transfer Counter           */
  uint16_t                      TxXferSize;       /*!< UART Tx Transfer size              */
  void (* WakeupCallback)(struct __UART_HandleTypeDef *huart);            /*!< UART Wakeup Callback                  */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  __IO HAL_UART_StateTypeDef    gState;           /*!< UART state information related to global Handle management
  DMA_HandleTypeDef             *hdmarx;          /*!< UART Rx DMA Handle parameters      */
  DMA_HandleTypeDef             *hdmatx;          /*!< UART Tx DMA Handle parameters      */
  uint8_t                       *pRxBuffPtr;      /*!< Pointer to UART Rx transfer Buffer */
  uint8_t                       *pTxBuffPtr;      /*!< Pointer to UART Tx transfer Buffer */
