  uint32_t Algorithm;                  /*!<  DES/ TDES Algorithm ECB/CBC
  FunctionalState                   AutoKeyDerivation;   /*!< Used only in TinyAES to allows to bypass or not key write-up before decryption.
  uint32_t *B0;                       /*!< B0 is first authentication block used only  in AES CCM mode */
  __IO uint16_t                     CrypHeaderCount;   /*!< Counter of header data */
  __IO uint16_t                     CrypInCount;      /*!< Counter of input data */
  __IO uint16_t                     CrypOutCount;     /*!< Counter of output data */
  uint32_t DataType;                   /*!< 32-bit data, 16-bit data, 8-bit data or 1-bit string.
  uint32_t DataWidthUnit;              /*!< Data With Unit, this parameter can be value of @ref CRYP_Data_Width_Unit*/
  void (*ErrorCallback)(struct __CRYP_HandleTypeDef *hcryp);       /*!< CRYP Error callback */
  __IO uint32_t                     ErrorCode;        /*!< CRYP peripheral error code */
  uint32_t *Header;                    /*!< used only in AES GCM and CCM Algorithm for authentication,
  uint32_t HeaderSize;                /*!< The size of header buffer in word  */
  void (*InCpltCallback)(struct __CRYP_HandleTypeDef *hcryp);      /*!< CRYP Input FIFO transfer completed callback  */
  CRYP_ConfigTypeDef                Init;             /*!< CRYP required parameters */
  CRYP_TypeDef                      *Instance;            /*!< CRYP registers base address */
  uint32_t                          KeyIVConfig;      /*!< CRYP peripheral Key and IV configuration flag, used when
  uint32_t KeyIVConfigSkip;            /*!< CRYP peripheral Key and IV configuration skip, to config Key and Initialization
  uint32_t KeySize;                    /*!< Used only in AES mode : 128, 192 or 256 bit key length in CRYP1.
  HAL_LockTypeDef                   Lock;             /*!< CRYP locking object */
  void (* MspDeInitCallback)(struct __CRYP_HandleTypeDef *hcryp);  /*!< CRYP Msp DeInit callback  */
  void (* MspInitCallback)(struct __CRYP_HandleTypeDef *hcryp);    /*!< CRYP Msp Init callback  */
  void (*OutCpltCallback)(struct __CRYP_HandleTypeDef *hcryp);     /*!< CRYP Output FIFO transfer completed callback */
  uint32_t                          Phase;            /*!< CRYP peripheral phase */
  uint16_t                          Size;           /*!< length of input data in word */
  uint32_t                          SizesSum;         /*!< Sum of successive payloads lengths (in bytes), stored
  __IO  HAL_CRYP_STATETypeDef       State;            /*!< CRYP peripheral state */
  DMA_HandleTypeDef                 *hdmain;          /*!< CRYP In DMA handle parameters */
  DMA_HandleTypeDef                 *hdmaout;         /*!< CRYP Out DMA handle parameters */
  uint32_t                          *pCrypInBuffPtr;  /*!< Pointer to CRYP processing (encryption, decryption,...) buffer */
  uint32_t                          *pCrypOutBuffPtr; /*!< Pointer to CRYP processing (encryption, decryption,...) buffer */
  uint32_t *pInitVect;                 /*!< The initialization vector used also as initialization
  uint32_t *pKey;                      /*!< The key used for encryption/decryption */
