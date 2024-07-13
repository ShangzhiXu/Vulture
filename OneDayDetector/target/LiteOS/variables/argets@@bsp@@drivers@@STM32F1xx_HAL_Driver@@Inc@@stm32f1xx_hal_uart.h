  uint32_t BaudRate;                  /*!< This member configures the UART communication baud rate.
  __IO uint32_t                 ErrorCode;        /*!< UART Error code                    */
  uint32_t HwFlowCtl;                 /*!< Specifies wether the hardware flow control mode is enabled
  UART_InitTypeDef              Init;             /*!< UART communication parameters      */
  USART_TypeDef                 *Instance;        /*!< UART registers base address        */
  HAL_LockTypeDef               Lock;             /*!< Locking object                     */
  uint32_t Mode;                      /*!< Specifies wether the Receive or Transmit mode is enabled or disabled.
  uint32_t OverSampling;              /*!< Specifies whether the Over sampling 8 is enabled or disabled, to achieve higher speed (up to fPCLK/8).
  uint32_t Parity;                    /*!< Specifies the parity mode.
  uint16_t                      RxXferCount;      /*!< UART Rx Transfer Counter           */  
  uint16_t                      RxXferSize;       /*!< UART Rx Transfer size              */
  __IO HAL_UART_StateTypeDef    State;            /*!< UART communication state           */
  uint32_t StopBits;                  /*!< Specifies the number of stop bits transmitted.
  uint16_t                      TxXferCount;      /*!< UART Tx Transfer Counter           */
  uint16_t                      TxXferSize;       /*!< UART Tx Transfer size              */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  DMA_HandleTypeDef             *hdmarx;          /*!< UART Rx DMA Handle parameters      */
  DMA_HandleTypeDef             *hdmatx;          /*!< UART Tx DMA Handle parameters      */
  uint8_t                       *pRxBuffPtr;      /*!< Pointer to UART Rx transfer Buffer */
  uint8_t                       *pTxBuffPtr;      /*!< Pointer to UART Tx transfer Buffer */
