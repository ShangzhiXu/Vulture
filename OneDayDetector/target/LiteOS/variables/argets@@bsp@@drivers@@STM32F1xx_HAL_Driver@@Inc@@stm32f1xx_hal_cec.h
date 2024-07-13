  uint32_t                ErrorCode;      /*!< For errors handling purposes, copy of ESR register in case error is reported */
  CEC_InitTypeDef         Init;           /*!< CEC communication parameters */
  uint8_t  InitiatorAddress; /*!< Initiator address (source logical address, sent in each header) 
  CEC_TypeDef             *Instance;      /*!< CEC registers base address */
  HAL_LockTypeDef         Lock;           /*!< Locking object */
  uint32_t PeriodErrorFree; /*!< Configures the CEC Bit Period Error Mode. 
  uint16_t                RxXferSize;     /*!< CEC Rx Transfer size, 0: header received only */
  HAL_CEC_StateTypeDef    State;          /*!< CEC communication state */
  uint32_t TimingErrorFree; /*!< Configures the CEC Bit Timing Error Mode. 
  uint16_t                TxXferCount;    /*!< CEC Tx Transfer Counter */
  uint8_t                 *pRxBuffPtr;    /*!< Pointer to CEC Rx transfer Buffer */
  uint8_t                 *pTxBuffPtr;    /*!< Pointer to CEC Tx transfer Buffer */
