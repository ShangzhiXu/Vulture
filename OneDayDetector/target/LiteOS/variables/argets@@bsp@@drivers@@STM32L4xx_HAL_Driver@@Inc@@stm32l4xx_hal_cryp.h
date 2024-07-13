  uint32_t ChainingMode;   /*!< AES chaining mode. 
      uint32_t                 CrypInCount;      /*!< Input data size in bytes or, after suspension, the remaining 
      uint32_t                 CrypOutCount;     /*!< Output data size in bytes */
  uint32_t DataType;       /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit string.
    __IO uint32_t              ErrorCode;        /*!< CRYP peripheral error code */
  uint32_t GCMCMACPhase;   /*!< Indicates the processing phase of the Galois Counter Mode (GCM), 
  uint8_t* Header;         /*!< Header used in GCM/GMAC, CMAC (when applicable) and CCM (when applicable) modes */
  uint64_t HeaderSize;     /*!< Header size in bytes */
      CRYP_InitTypeDef         Init;             /*!< CRYP initialization parameters */
      AES_TypeDef              *Instance;        /*!< Register base address        */
  uint32_t KeySize;        /*!< 128 or 256-bit key length. 
  uint32_t KeyWriteFlag;   /*!< Allows to bypass or not key write-up before decryption. 
      HAL_LockTypeDef          Lock;             /*!< CRYP locking object */
  uint32_t OperatingMode;  /*!< AES operating mode. 
      HAL_PhaseTypeDef         Phase;            /*!< CRYP peripheral processing phase for GCM, GMAC, CMAC (when applicable)
   __IO  HAL_CRYP_STATETypeDef State;            /*!< CRYP peripheral state */
     HAL_SuspendTypeDef        SuspendRequest;   /*!< CRYP peripheral suspension request flag */     
      DMA_HandleTypeDef        *hdmain;          /*!< CRYP peripheral Input DMA handle parameters */
      DMA_HandleTypeDef        *hdmaout;         /*!< CRYP peripheral Output DMA handle parameters */
      uint8_t                  *pCrypInBuffPtr;  /*!< Pointer to CRYP processing (encryption, decryption,...) input buffer */
      uint8_t                  *pCrypOutBuffPtr; /*!< Pointer to CRYP processing (encryption, decryption,...) output buffer */
  uint8_t* pInitVect;      /*!< Initialization Vector used for CTR, CBC, GCM/GMAC, CMAC (when applicable) 
  uint8_t* pKey;           /*!< Encryption/Decryption Key */
