  uint32_t BaudRatePrescaler;  /*!< Specifies the Baud Rate prescaler value which will be
  uint32_t CLKPhase;           /*!< Specifies the clock active edge for the bit capture.
  uint32_t CLKPolarity;        /*!< Specifies the serial clock steady state.
  uint32_t CRCCalculation;     /*!< Specifies if the CRC calculation is enabled or not.
  uint32_t CRCPolynomial;      /*!< Specifies the polynomial used for the CRC calculation.
  uint32_t DataSize;           /*!< Specifies the SPI data size.
  uint32_t Direction;          /*!< Specifies the SPI Directional mode state.
  __IO uint32_t  ErrorCode;    /*!< SPI Error code */
  uint32_t FirstBit;           /*!< Specifies whether data transfers start from MSB or LSB bit.
  SPI_InitTypeDef            Init;         /*!< SPI communication parameters */
  SPI_TypeDef                *Instance;    /*!< SPI registers base address */
  HAL_LockTypeDef            Lock;         /*!< SPI locking object */
  uint32_t Mode;               /*!< Specifies the SPI operating mode.
  uint32_t NSS;                /*!< Specifies whether the NSS signal is managed by
  void                       (*RxISR)(struct __SPI_HandleTypeDef * hspi); /*!< function pointer on Rx ISR */
  uint16_t                   RxXferCount;  /*!< SPI Rx Transfer Counter */
  uint16_t                   RxXferSize;   /*!< SPI Rx transfer size */
  __IO HAL_SPI_StateTypeDef  State;        /*!< SPI communication state */
  uint32_t TIMode;             /*!< Specifies if the TI mode is enabled or not.
  void                       (*TxISR)(struct __SPI_HandleTypeDef * hspi); /*!< function pointer on Tx ISR */
  uint16_t                   TxXferCount;  /*!< SPI Tx Transfer Counter */
  uint16_t                   TxXferSize;   /*!< SPI Tx transfer size */
  DMA_HandleTypeDef          *hdmarx;      /*!< SPI Rx DMA handle parameters */
  DMA_HandleTypeDef          *hdmatx;      /*!< SPI Tx DMA handle parameters */
  uint8_t                    *pRxBuffPtr;  /*!< Pointer to SPI Rx transfer Buffer */
  uint8_t                    *pTxBuffPtr;  /*!< Pointer to SPI Tx transfer Buffer */
