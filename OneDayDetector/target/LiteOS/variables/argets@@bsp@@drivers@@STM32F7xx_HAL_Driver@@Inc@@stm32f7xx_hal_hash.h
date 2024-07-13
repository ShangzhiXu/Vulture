  uint32_t DataType;    /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit data.
  void    (* DgstCpltCallback)( struct __HASH_HandleTypeDef * hhash);  /*!< HASH digest computation completion callback */
  FlagStatus                 DigestCalculationDisable;  /*!< Digest calculation phase skip (MDMAT bit control) for multi-buffers DMA-based HMAC computation */
  void    (* ErrorCallback)( struct __HASH_HandleTypeDef * hhash);     /*!< HASH error callback */
  __IO  uint32_t             ErrorCode;        /*!< HASH Error code */
  uint32_t                   HashBuffSize;     /*!< Size of buffer to be processed */
  __IO uint32_t              HashITCounter;    /*!< Counter of issued interrupts */
  __IO uint32_t              HashInCount;      /*!< Counter of inputted data */
  __IO uint32_t              HashKeyCount;     /*!< Counter for Key inputted data (HMAC only) */
  void    (* InCpltCallback)( struct __HASH_HandleTypeDef * hhash);    /*!< HASH input completion callback */
  HASH_InitTypeDef           Init;             /*!< HASH required parameters */
  uint32_t KeySize;     /*!< The key size is used only in HMAC operation. */
  HAL_LockTypeDef            Lock;             /*!< Locking object */
  void    (* MspDeInitCallback)( struct __HASH_HandleTypeDef * hhash); /*!< HASH Msp DeInit callback */
  void    (* MspInitCallback)( struct __HASH_HandleTypeDef * hhash);   /*!< HASH Msp Init callback */
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
