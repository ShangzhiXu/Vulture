  void (* AbortCpltCallback)(struct __USART_HandleTypeDef *husart);         /*!< USART Abort Complete Callback          */
  uint32_t BaudRate;                  /*!< This member configures the Usart communication baud rate.
  uint32_t CLKLastBit;                /*!< Specifies whether the clock pulse corresponding to the last transmitted
  uint32_t CLKPhase;                  /*!< Specifies the clock transition on which the bit capture is made.
  uint32_t CLKPolarity;               /*!< Specifies the steady state of the serial clock.
  void (* ErrorCallback)(struct __USART_HandleTypeDef *husart);             /*!< USART Error Callback                   */
  __IO uint32_t                 ErrorCode;               /*!< USART Error code                    */
  USART_InitTypeDef             Init;                    /*!< USART communication parameters      */
  USART_TypeDef                 *Instance;               /*!< USART registers base address        */
  HAL_LockTypeDef               Lock;                    /*!< Locking object                      */
  uint16_t                      Mask;                    /*!< USART Rx RDR register mask          */
  uint32_t Mode;                      /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
  void (* MspDeInitCallback)(struct __USART_HandleTypeDef *husart);         /*!< USART Msp DeInit callback              */
  void (* MspInitCallback)(struct __USART_HandleTypeDef *husart);           /*!< USART Msp Init callback                */
  uint32_t Parity;                   /*!< Specifies the parity mode.
  void (* RxCpltCallback)(struct __USART_HandleTypeDef *husart);            /*!< USART Rx Complete Callback             */
  void (* RxHalfCpltCallback)(struct __USART_HandleTypeDef *husart);        /*!< USART Rx Half Complete Callback        */
  void (*RxISR)(struct __USART_HandleTypeDef *husart);   /*!< Function pointer on Rx IRQ handler  */
  __IO uint16_t                 RxXferCount;             /*!< USART Rx Transfer Counter           */
  uint16_t                      RxXferSize;              /*!< USART Rx Transfer size              */
  __IO HAL_USART_StateTypeDef   State;                   /*!< USART communication state           */
  uint32_t StopBits;                  /*!< Specifies the number of stop bits transmitted.
  void (* TxCpltCallback)(struct __USART_HandleTypeDef *husart);            /*!< USART Tx Complete Callback             */
  void (* TxHalfCpltCallback)(struct __USART_HandleTypeDef *husart);        /*!< USART Tx Half Complete Callback        */
  void (*TxISR)(struct __USART_HandleTypeDef *husart);   /*!< Function pointer on Tx IRQ handler  */
  void (* TxRxCpltCallback)(struct __USART_HandleTypeDef *husart);          /*!< USART Tx Rx Complete Callback          */
  __IO uint16_t                 TxXferCount;             /*!< USART Tx Transfer Counter           */
  uint16_t                      TxXferSize;              /*!< USART Tx Transfer size              */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  DMA_HandleTypeDef             *hdmarx;                 /*!< USART Rx DMA Handle parameters      */
  DMA_HandleTypeDef             *hdmatx;                 /*!< USART Tx DMA Handle parameters      */
  uint8_t                       *pRxBuffPtr;             /*!< Pointer to USART Rx transfer Buffer */
  uint8_t                       *pTxBuffPtr;             /*!< Pointer to USART Tx transfer Buffer */
