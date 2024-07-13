  void (* AbortCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard);         /*!< SMARTCARD Abort Complete Callback          */
  void (* AbortReceiveCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard);  /*!< SMARTCARD Abort Receive Complete Callback  */
  void (* AbortTransmitCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard); /*!< SMARTCARD Abort Transmit Complete Callback */
  uint32_t AdvFeatureInit;            /*!< Specifies which advanced SMARTCARD features is initialized. Several
  SMARTCARD_AdvFeatureInitTypeDef   AdvancedInit;          /*!< SmartCard advanced features initialization parameters */
  uint8_t AutoRetryCount;             /*!< Specifies the SmartCard auto-retry count (number of retries in
  uint32_t BaudRate;                  /*!< Configures the SmartCard communication baud rate.
  uint8_t BlockLength;                /*!< Specifies the SmartCard Block Length in T=1 Reception mode.
  uint16_t CLKLastBit;                /*!< Specifies whether the clock pulse corresponding to the last transmitted
  uint16_t CLKPhase;                  /*!< Specifies the clock transition on which the bit capture is made.
  uint16_t CLKPolarity;               /*!< Specifies the steady state of the serial clock.
  uint32_t DMADisableonRxError;       /*!< Specifies whether the DMA is disabled in case of reception error.
  uint32_t DataInvert;                /*!< Specifies whether data are inverted (positive/direct logic
  void (* ErrorCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard);             /*!< SMARTCARD Error Callback                   */
  __IO uint32_t                     ErrorCode;             /*!< SmartCard Error code                                  */
  uint8_t  GuardTime;                 /*!< Specifies the SmartCard Guard Time applied after stop bits. */
  SMARTCARD_InitTypeDef             Init;                  /*!< SmartCard communication parameters                    */
  USART_TypeDef                     *Instance;             /*!< USART registers base address                          */
  HAL_LockTypeDef                   Lock;                  /*!< Locking object                                        */
  uint32_t MSBFirst;                  /*!< Specifies whether MSB is sent first on UART line.
  uint16_t Mode;                      /*!< Specifies whether the Receive or Transmit mode is enabled or disabled.
  void (* MspDeInitCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard);         /*!< SMARTCARD Msp DeInit callback              */
  void (* MspInitCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard);           /*!< SMARTCARD Msp Init callback                */
  uint16_t NACKEnable;                /*!< Specifies whether the SmartCard NACK transmission is enabled
  uint16_t OneBitSampling;            /*!< Specifies whether a single sample or three samples' majority vote is selected.
  uint32_t OverrunDisable;            /*!< Specifies whether the reception overrun detection is disabled.
  uint16_t Parity;                    /*!< Specifies the parity mode.
  uint8_t  Prescaler;                 /*!< Specifies the SmartCard Prescaler.
  void (* RxCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard);            /*!< SMARTCARD Rx Complete Callback             */
  void (*RxISR)(struct __SMARTCARD_HandleTypeDef *huart);  /*!< Function pointer on Rx IRQ handler                    */
  uint32_t RxPinLevelInvert;          /*!< Specifies whether the RX pin active level is inverted.
  __IO HAL_SMARTCARD_StateTypeDef   RxState;               /*!< SmartCard state information related to Rx operations.
  __IO uint16_t                     RxXferCount;           /*!< SmartCard Rx Transfer Counter                         */
  uint16_t                          RxXferSize;            /*!< SmartCard Rx Transfer size                            */
  uint32_t StopBits;                  /*!< Specifies the number of stop bits.
  uint32_t Swap;                      /*!< Specifies whether TX and RX pins are swapped.
  uint32_t TimeOutEnable;             /*!< Specifies whether the receiver timeout is enabled.
  uint32_t TimeOutValue;              /*!< Specifies the receiver time out value in number of baud blocks:
  uint16_t TxCompletionIndication;     /*!< Specifies which transmission completion indication is used: before (when
  void (* TxCpltCallback)(struct __SMARTCARD_HandleTypeDef *hsmartcard);            /*!< SMARTCARD Tx Complete Callback             */
  void (*TxISR)(struct __SMARTCARD_HandleTypeDef *huart);  /*!< Function pointer on Tx IRQ handler                    */
  uint32_t TxPinLevelInvert;          /*!< Specifies whether the TX pin active level is inverted.
  __IO uint16_t                     TxXferCount;           /*!< SmartCard Tx Transfer Counter                         */
  uint16_t                          TxXferSize;            /*!< SmartCard Tx Transfer size                            */
  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
  __IO HAL_SMARTCARD_StateTypeDef   gState;                /*!< SmartCard state information related to global Handle management
  DMA_HandleTypeDef                 *hdmarx;               /*!< SmartCard Rx DMA Handle parameters                    */
  DMA_HandleTypeDef                 *hdmatx;               /*!< SmartCard Tx DMA Handle parameters                    */
  uint8_t                           *pRxBuffPtr;           /*!< Pointer to SmartCard Rx transfer Buffer               */
  uint8_t                           *pTxBuffPtr;           /*!< Pointer to SmartCard Tx transfer Buffer               */
