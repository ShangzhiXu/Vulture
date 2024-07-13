  uint32_t BaudRate;                  /*!< This member configures the Usart communication baud rate.
  uint32_t CLKLastBit;                /*!< Specifies whether the clock pulse corresponding to the last transmitted
  uint32_t CLKPhase;                  /*!< Specifies the clock transition on which the bit capture is made.
  uint32_t CLKPolarity;               /*!< Specifies the steady state of the serial clock.
  uint32_t ClockPrescaler;            /*!< Specifies the prescaler value used to divide the USART clock source.
  __IO uint32_t                 ErrorCode;               /*!< USART Error code                    */
  uint32_t                      FifoMode;                /*!< Specifies if the FIFO mode is being used.
  USART_InitTypeDef             Init;                    /*!< USART communication parameters      */
  USART_TypeDef                 *Instance;               /*!<  USART registers base address        */
  HAL_LockTypeDef               Lock;                    /*!<  Locking object                      */
  uint16_t                      Mask;                    /*!< USART Rx RDR register mask          */
  uint32_t Mode;                      /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
  uint16_t                      NbRxDataToProcess;       /*!< Number of data to process during RX ISR execution */
  uint16_t                      NbTxDataToProcess;       /*!< Number of data to process during TX ISR execution */
  uint32_t Parity;                   /*!< Specifies the parity mode.
  void (*RxISR)(struct __USART_HandleTypeDef *husart);   /*!< Function pointer on Rx IRQ handler   */
  __IO uint16_t                 RxXferCount;             /*!< USART Rx Transfer Counter           */
  uint16_t                      RxXferSize;              /*!< USART Rx Transfer size              */
  uint32_t                      SlaveMode;               /*!< Specifies if the UART SPI Slave mode is being used.
  __IO HAL_USART_StateTypeDef   State;                   /*!< USART communication state           */
  uint32_t StopBits;                  /*!< Specifies the number of stop bits transmitted.
  void (*TxISR)(struct __USART_HandleTypeDef *husart);   /*!< Function pointer on Tx IRQ handler   */
  __IO uint16_t                 TxXferCount;             /*!< USART Tx Transfer Counter           */
  uint16_t                      TxXferSize;              /*!< USART Tx Transfer size              */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  DMA_HandleTypeDef             *hdmarx;                 /*!< USART Rx DMA Handle parameters      */
  DMA_HandleTypeDef             *hdmatx;                 /*!< USART Tx DMA Handle parameters      */
  uint8_t                       *pRxBuffPtr;             /*!< Pointer to USART Rx transfer Buffer */
  uint8_t                       *pTxBuffPtr;             /*!< Pointer to USART Tx transfer Buffer */
