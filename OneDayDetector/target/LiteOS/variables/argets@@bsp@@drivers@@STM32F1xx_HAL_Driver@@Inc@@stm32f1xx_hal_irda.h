  uint32_t BaudRate;                  /*!< This member configures the IRDA communication baud rate.
  __IO uint32_t  ErrorCode;        /*!< IRDA Error code                    */
  IRDA_InitTypeDef            Init;             /*!< IRDA communication parameters      */
  USART_TypeDef               *Instance;        /*!< USART registers base address       */
  uint32_t IrDAMode;                  /*!< Specifies the IrDA mode
  HAL_LockTypeDef             Lock;             /*!< Locking object                     */
  uint32_t Mode;                      /*!< Specifies wether the Receive or Transmit mode is enabled or disabled.
  uint32_t Parity;                    /*!< Specifies the parity mode.
  uint8_t  Prescaler;                 /*!< Specifies the Prescaler value prescaler value to be programmed 
  uint16_t                    RxXferCount;      /*!< IRDA Rx Transfer Counter           */  
  uint16_t                    RxXferSize;       /*!< IRDA Rx Transfer size              */
  __IO HAL_IRDA_StateTypeDef  State;            /*!< IRDA communication state           */
  uint16_t                    TxXferCount;      /*!< IRDA Tx Transfer Counter           */
  uint16_t                    TxXferSize;       /*!< IRDA Tx Transfer size              */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  DMA_HandleTypeDef           *hdmarx;          /*!< IRDA Rx DMA Handle parameters      */
  DMA_HandleTypeDef           *hdmatx;          /*!< IRDA Tx DMA Handle parameters      */
  uint8_t                     *pRxBuffPtr;      /*!< Pointer to IRDA Rx transfer Buffer */
  uint8_t                     *pTxBuffPtr;      /*!< Pointer to IRDA Tx transfer Buffer */
