  void (* AbortCpltCallback)              (struct __MMC_HandleTypeDef *hmmc);
  uint32_t BlockNbr;                     /*!< Specifies the Card Capacity in blocks           */
  uint32_t BlockSize;                    /*!< Specifies one block size in bytes               */
  uint32_t                     CID[4];           /*!< MMC card identification number table */
  __IO uint8_t  CID_CRC;         /*!< CID CRC               */
  uint32_t                     CSD[4];           /*!< MMC card specific data table         */
  __IO uint8_t  CSDStruct;            /*!< CSD structure                         */
  __IO uint8_t  CSD_CRC;              /*!< CSD CRC                               */
  __IO uint16_t CardComdClasses;      /*!< Card command classes                  */
  uint32_t CardType;                     /*!< Specifies the card Type                         */
  uint32_t Class;                        /*!< Specifies the class of the card class           */
  __IO uint8_t  ContentProtectAppli;  /*!< Content protection application        */
  __IO uint32_t                Context;          /*!< MMC transfer context                 */
  __IO uint8_t  CopyFlag;             /*!< Copy flag (OTP)                       */
  __IO uint8_t  DSRImpl;              /*!< DSR implemented                       */
  __IO uint32_t DeviceSize;           /*!< Device Size                           */
  __IO uint8_t  DeviceSizeMul;        /*!< Device size multiplier                */
  __IO uint8_t  ECC;                  /*!< ECC code                              */
  __IO uint8_t  EraseGrMul;           /*!< Erase group size multiplier           */
  __IO uint8_t  EraseGrSize;          /*!< Erase group size                      */
  void (* ErrorCallback)                  (struct __MMC_HandleTypeDef *hmmc);
  __IO uint32_t                ErrorCode;        /*!< MMC Card Error codes                 */  
  __IO uint8_t  FileFormat;           /*!< File format                           */
  __IO uint8_t  FileFormatGrouop;     /*!< File format group                     */
  MMC_InitTypeDef               Init;             /*!< MMC required parameters              */
  MMC_TypeDef                   *Instance;        /*!< MMC registers base address           */
  HAL_LockTypeDef              Lock;             /*!< MMC locking object                   */
  uint32_t LogBlockNbr;                  /*!< Specifies the Card logical Capacity in blocks   */
  uint32_t LogBlockSize;                 /*!< Specifies logical block size in bytes           */
  __IO uint8_t  ManDeflECC;           /*!< Manufacturer default ECC              */
  __IO uint16_t ManufactDate;    /*!< Manufacturing Date    */
  __IO uint8_t  ManufacturerID;  /*!< Manufacturer ID       */
  __IO uint8_t  MaxBusClkFrec;        /*!< Max. bus clock frequency              */
  __IO uint8_t  MaxRdCurrentVDDMax;   /*!< Max. read current @ VDD max           */
  __IO uint8_t  MaxRdCurrentVDDMin;   /*!< Max. read current @ VDD min           */
  __IO uint8_t  MaxWrBlockLen;        /*!< Max. write data block length          */
  __IO uint8_t  MaxWrCurrentVDDMax;   /*!< Max. write current @ VDD max          */
  __IO uint8_t  MaxWrCurrentVDDMin;   /*!< Max. write current @ VDD min          */
  HAL_MMC_CardInfoTypeDef       MmcCard;           /*!< MMC Card information                 */
  void (* MspDeInitCallback)              (struct __MMC_HandleTypeDef *hmmc);
  void (* MspInitCallback)                (struct __MMC_HandleTypeDef *hmmc);
  __IO uint8_t  NSAC;                 /*!< Data read access time 2 in CLK cycles */
  __IO uint16_t OEM_AppliID;     /*!< OEM/Application ID    */
  __IO uint8_t  PartBlockRead;        /*!< Partial blocks for read allowed       */
  __IO uint8_t  PermWrProtect;        /*!< Permanent write protection            */
  __IO uint32_t ProdName1;       /*!< Product Name part1    */
  __IO uint8_t  ProdName2;       /*!< Product Name part2    */
  __IO uint8_t  ProdRev;         /*!< Product Revision      */
  __IO uint32_t ProdSN;          /*!< Product Serial Number */
  __IO uint8_t  RdBlockLen;           /*!< Max. read data block length           */
  __IO uint8_t  RdBlockMisalign;      /*!< Read block misalignment               */
  uint32_t RelCardAdd;                   /*!< Specifies the Relative Card Address             */
  __IO uint8_t  Reserved1;            /*!< Reserved                              */
  __IO uint8_t  Reserved1;       /*!< Reserved1             */
  __IO uint8_t  Reserved2;            /*!< Reserved                              */
  __IO uint8_t  Reserved2;       /*!< Always 1              */
  __IO uint8_t  Reserved3;            /*!< Reserved                              */
  __IO uint8_t  Reserved4;            /*!< Always 1                              */
  void (* RxCpltCallback)                 (struct __MMC_HandleTypeDef *hmmc);
  uint32_t                     RxXferSize;       /*!< MMC Rx Transfer size                 */
  __IO HAL_MMC_StateTypeDef     State;            /*!< MMC card State                       */
  __IO uint8_t  SysSpecVersion;       /*!< System specification version          */
  __IO uint8_t  TAAC;                 /*!< Data read access time 1               */
  __IO uint8_t  TempWrProtect;        /*!< Temporary write protection            */
  void (* TxCpltCallback)                 (struct __MMC_HandleTypeDef *hmmc);
  uint32_t                     TxXferSize;       /*!< MMC Tx Transfer size                 */
  __IO uint8_t  WrBlockMisalign;      /*!< Write block misalignment              */
  __IO uint8_t  WrProtectGrEnable;    /*!< Write protect group enable            */
  __IO uint8_t  WrProtectGrSize;      /*!< Write protect group size              */
  __IO uint8_t  WrSpeedFact;          /*!< Write speed factor                    */
  __IO uint8_t  WriteBlockPaPartial;  /*!< Partial blocks for write allowed      */
  DMA_HandleTypeDef            *hdmarx;          /*!< MMC Rx DMA handle parameters         */
  DMA_HandleTypeDef            *hdmatx;          /*!< MMC Tx DMA handle parameters         */
  uint32_t                     *pRxBuffPtr;      /*!< Pointer to MMC Rx transfer Buffer    */
  uint32_t                     *pTxBuffPtr;      /*!< Pointer to MMC Tx transfer Buffer    */
