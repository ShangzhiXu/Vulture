  uint32_t AudioFreq;           /*!< Specifies the frequency selected for the I2S communication.
  uint32_t CPOL;                /*!< Specifies the idle state of the I2S clock.
  uint32_t DataFormat;          /*!< Specifies the data format for the I2S communication.
  void (* ErrorCallback)(struct __I2S_HandleTypeDef *hi2s);              /*!< I2S Error callback                 */
  __IO uint32_t              ErrorCode;    /*!< I2S Error code
  I2S_InitTypeDef            Init;         /*!< I2S communication parameters */
  SPI_TypeDef                *Instance;    /*!< I2S registers base address */
  __IO HAL_LockTypeDef       Lock;         /*!< I2S locking object */
  uint32_t MCLKOutput;          /*!< Specifies whether the I2S MCLK output is enabled or not.
  uint32_t Mode;                /*!< Specifies the I2S operating mode.
  void (* MspDeInitCallback)(struct __I2S_HandleTypeDef *hi2s);          /*!< I2S Msp DeInit callback            */
  void (* MspInitCallback)(struct __I2S_HandleTypeDef *hi2s);            /*!< I2S Msp Init callback              */
  void (* RxCpltCallback)(struct __I2S_HandleTypeDef *hi2s);             /*!< I2S Rx Completed callback          */
  void (* RxHalfCpltCallback)(struct __I2S_HandleTypeDef *hi2s);         /*!< I2S Rx Half Completed callback     */
  __IO uint16_t              RxXferCount;  /*!< I2S Rx transfer counter
  __IO uint16_t              RxXferSize;   /*!< I2S Rx transfer size */
  uint32_t Standard;            /*!< Specifies the standard used for the I2S communication.
  __IO HAL_I2S_StateTypeDef  State;        /*!< I2S communication state */
  void (* TxCpltCallback)(struct __I2S_HandleTypeDef *hi2s);             /*!< I2S Tx Completed callback          */
  void (* TxHalfCpltCallback)(struct __I2S_HandleTypeDef *hi2s);         /*!< I2S Tx Half Completed callback     */
  __IO uint16_t              TxXferCount;  /*!< I2S Tx transfer Counter */
  __IO uint16_t              TxXferSize;   /*!< I2S Tx transfer size */
  DMA_HandleTypeDef          *hdmarx;      /*!< I2S Rx DMA handle parameters */
  DMA_HandleTypeDef          *hdmatx;      /*!< I2S Tx DMA handle parameters */
  uint16_t                   *pRxBuffPtr;  /*!< Pointer to I2S Rx transfer buffer */
  uint16_t                   *pTxBuffPtr;  /*!< Pointer to I2S Tx transfer buffer */
