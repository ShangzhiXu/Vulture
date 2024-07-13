  uint32_t DataType;    /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit data.
  FlagStatus                 DigestCalculationDisable;  /*!< Digest calculation phase skip (MDMAT bit control) for multi-buffers DMA-based HMAC computation */
  uint32_t                   HashBuffSize;     /*!< Size of buffer to be processed */
  __IO uint32_t              HashITCounter;    /*!< Counter of issued interrupts */
  __IO uint32_t              HashInCount;      /*!< Counter of inputted data */
  __IO uint32_t              HashKeyCount;     /*!< Counter for Key inputted data (HMAC only) */
  HASH_InitTypeDef           Init;             /*!< HASH required parameters */
  uint32_t KeySize;     /*!< The key size is used only in HMAC operation. */
  HAL_LockTypeDef            Lock;             /*!< Locking object */
  __IO uint32_t              NbWordsAlreadyPushed;      /*!< Numbers of words already pushed in FIFO before inputting new block */          
  HAL_HASH_PhaseTypeDef      Phase;            /*!< HASH peripheral phase   */
  __IO HAL_HASH_StateTypeDef State;            /*!< HASH peripheral state */
  HAL_StatusTypeDef          Status;           /*!< HASH peripheral status   */
  HAL_HASH_SuspendTypeDef    SuspendRequest;   /*!< HASH peripheral suspension request flag */        
  DMA_HandleTypeDef          *hdmain;          /*!< HASH In DMA Handle parameters */
  uint8_t                    *pHashInBuffPtr;  /*!< Pointer to input buffer */
  uint8_t                    *pHashKeyBuffPtr; /*!< Pointer to key buffer (HMAC only) */
  uint8_t                    *pHashMsgBuffPtr; /*!< Pointer to message buffer (HMAC only) */             
  uint8_t                    *pHashOutBuffPtr; /*!< Pointer to output buffer (digest) */
  uint8_t* pKey;        /*!< The key is used only in HMAC operation. */
