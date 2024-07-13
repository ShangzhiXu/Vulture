  uint32_t BREErrorBitGen;               /*!< Set BREGEN bit @ref CEC_BREErrorBitGen : specifies whether or not an Error-Bit is generated on the
  uint32_t BRERxStop;                    /*!< Set BRESTP bit @ref CEC_BRERxStop : specifies whether or not a Bit Rising Error stops the reception.
  uint32_t BroadcastMsgNoErrorBitGen;    /*!< Set BRDNOGEN bit @ref CEC_BroadCastMsgErrorBitGen : allows to avoid an Error-Bit generation on the CEC line
  void (* ErrorCallback)(struct __CEC_HandleTypeDef *hcec);                                 /*!< CEC error callback */
  uint32_t                ErrorCode;      /*!< For errors handling purposes, copy of ISR register
  CEC_InitTypeDef         Init;           /*!< CEC communication parameters */
  CEC_TypeDef             *Instance;      /*!< CEC registers base address */
  uint32_t LBPEErrorBitGen;              /*!< Set LBPEGEN bit @ref CEC_LBPEErrorBitGen : specifies whether or not an Error-Bit is generated on the
  uint32_t ListenMode;                   /*!< Set LSTN bit @ref CEC_Listening_Mode : specifies device listening mode. It can take two values:
  HAL_LockTypeDef         Lock;           /*!< Locking object */
  void (* MspDeInitCallback)(struct __CEC_HandleTypeDef *hcec);             /*!< CEC Msp DeInit callback            */
  void (* MspInitCallback)(struct __CEC_HandleTypeDef *hcec);               /*!< CEC Msp Init callback              */
  uint16_t  OwnAddress;                 /*!< Own addresses configuration
  uint8_t  *RxBuffer;                    /*!< CEC Rx buffer pointeur */
  void (* RxCpltCallback)(struct __CEC_HandleTypeDef *hcec,
                          uint32_t RxFrameSize);          /*!< CEC Rx Transfer completed callback */
  HAL_CEC_StateTypeDef    RxState;        /*!< CEC state information related to Rx operations.
  uint16_t                RxXferSize;     /*!< CEC Rx Transfer size, 0: header received only */
  uint32_t SignalFreeTime;               /*!< Set SFT field, specifies the Signal Free Time.
  uint32_t SignalFreeTimeOption;         /*!< Set SFTOP bit @ref CEC_SFT_Option : specifies when SFT timer starts.
  uint32_t Tolerance;                    /*!< Set RXTOL bit, specifies the tolerance accepted on the received waveforms,
  void (* TxCpltCallback)(struct __CEC_HandleTypeDef
                          *hcec);                                /*!< CEC Tx Transfer completed callback */
  uint16_t                TxXferCount;    /*!< CEC Tx Transfer Counter */
  HAL_CEC_StateTypeDef    gState;         /*!< CEC state information related to global Handle management
  uint8_t                 *pTxBuffPtr;    /*!< Pointer to CEC Tx transfer Buffer */
