  __IO uint8_t  AU_SIZE;                 /*!< Carries information about the card's allocation unit size  */
  uint32_t                     CID[4];           /*!< SD card identification number table            */
  __IO uint8_t  CID_CRC;         /*!< CID CRC               */
  uint32_t                     CSD[4];           /*!< SD card specific data table                    */
  __IO uint8_t  CSDStruct;            /*!< CSD structure                         */
  __IO uint8_t  CSD_CRC;              /*!< CSD CRC                               */
  uint32_t            CardBlockSize;  /*!< Card block size                        */
  uint64_t            CardCapacity;   /*!< Card capacity                          */
  __IO uint16_t CardComdClasses;      /*!< Card command classes                  */
  uint32_t                     CardType;         /*!< SD card type                                   */
  uint8_t             CardType;       /*!< SD card type                           */
  __IO uint8_t  ContentProtectAppli;  /*!< Content protection application        */
  __IO uint8_t  CopyFlag;             /*!< Copy flag (OTP)                       */
  __IO uint8_t  DAT_BUS_WIDTH;           /*!< Shows the currently defined data bus width                 */
  __IO uint8_t  DSRImpl;              /*!< DSR implemented                       */
  __IO uint32_t DeviceSize;           /*!< Device Size                           */
  __IO uint8_t  DeviceSizeMul;        /*!< Device size multiplier                */
  __IO uint32_t                DmaTransferCplt;  /*!< SD DMA transfer complete flag                  */
  __IO uint8_t  ECC;                  /*!< ECC code                              */
  __IO uint8_t  ERASE_OFFSET;            /*!< Carries information about the erase offset                 */
  __IO uint16_t ERASE_SIZE;              /*!< Determines the number of AUs to be erased in one operation */
  __IO uint8_t  ERASE_TIMEOUT;           /*!< Determines the timeout for any number of AU erase          */
  __IO uint8_t  EraseGrMul;           /*!< Erase group size multiplier           */
  __IO uint8_t  EraseGrSize;          /*!< Erase group size                      */
  __IO uint8_t  FileFormat;           /*!< File format                           */
  __IO uint8_t  FileFormatGrouop;     /*!< File format group                     */
  SD_InitTypeDef               Init;             /*!< SD required parameters                         */
  SD_TypeDef                   *Instance;        /*!< SDIO register base address                     */
  HAL_LockTypeDef              Lock;             /*!< SD locking object                              */
  __IO uint8_t  ManDeflECC;           /*!< Manufacturer default ECC              */
  __IO uint16_t ManufactDate;    /*!< Manufacturing Date    */
  __IO uint8_t  ManufacturerID;  /*!< Manufacturer ID       */
  __IO uint8_t  MaxBusClkFrec;        /*!< Max. bus clock frequency              */
  __IO uint8_t  MaxRdCurrentVDDMax;   /*!< Max. read current @ VDD max           */
  __IO uint8_t  MaxRdCurrentVDDMin;   /*!< Max. read current @ VDD min           */
  __IO uint8_t  MaxWrBlockLen;        /*!< Max. write data block length          */
  __IO uint8_t  MaxWrCurrentVDDMax;   /*!< Max. write current @ VDD max          */
  __IO uint8_t  MaxWrCurrentVDDMin;   /*!< Max. write current @ VDD min          */
  __IO uint8_t  NSAC;                 /*!< Data read access time 2 in CLK cycles */
  __IO uint16_t OEM_AppliID;     /*!< OEM/Application ID    */
  __IO uint8_t  PERFORMANCE_MOVE;        /*!< Carries information about the card's performance move      */
  __IO uint8_t  PartBlockRead;        /*!< Partial blocks for read allowed       */
  __IO uint8_t  PermWrProtect;        /*!< Permanent write protection            */
  __IO uint32_t ProdName1;       /*!< Product Name part1    */
  __IO uint8_t  ProdName2;       /*!< Product Name part2    */
  __IO uint8_t  ProdRev;         /*!< Product Revision      */
  __IO uint32_t ProdSN;          /*!< Product Serial Number */
  uint16_t            RCA;            /*!< SD relative card address               */
  uint32_t                     RCA;              /*!< SD relative card address                       */
  __IO uint8_t  RdBlockLen;           /*!< Max. read data block length           */
  __IO uint8_t  RdBlockMisalign;      /*!< Read block misalignment               */
  __IO uint8_t  Reserved1;            /*!< Reserved                              */
  __IO uint8_t  Reserved1;       /*!< Reserved1             */
  __IO uint8_t  Reserved2;            /*!< Reserved                              */
  __IO uint8_t  Reserved2;       /*!< Always 1              */
  __IO uint8_t  Reserved3;            /*!< Reserved                              */
  __IO uint8_t  Reserved4;            /*!< Always 1                              */
  __IO uint16_t SD_CARD_TYPE;            /*!< Carries information about card type                        */
  HAL_SD_CIDTypedef   SD_cid;         /*!< SD card identification number register */
  HAL_SD_CSDTypedef   SD_csd;         /*!< SD card specific data register         */
  __IO uint8_t  SECURED_MODE;            /*!< Card is in secured mode of operation                       */
  __IO uint32_t SIZE_OF_PROTECTED_AREA;  /*!< Carries information about the capacity of protected area   */
  __IO uint8_t  SPEED_CLASS;             /*!< Carries information about the speed class of the card      */
  __IO uint32_t                SdOperation;      /*!< SD transfer operation (read/write)             */
  __IO uint32_t                SdTransferCplt;   /*!< SD transfer complete flag in non blocking mode */
  __IO uint32_t                SdTransferErr;    /*!< SD transfer error flag in non blocking mode    */
  __IO uint8_t  SysSpecVersion;       /*!< System specification version          */
  __IO uint8_t  TAAC;                 /*!< Data read access time 1               */
  __IO uint8_t  TempWrProtect;        /*!< Temporary write protection            */
  __IO uint8_t  WrBlockMisalign;      /*!< Write block misalignment              */
  __IO uint8_t  WrProtectGrEnable;    /*!< Write protect group enable            */
  __IO uint8_t  WrProtectGrSize;      /*!< Write protect group size              */
  __IO uint8_t  WrSpeedFact;          /*!< Write speed factor                    */
  __IO uint8_t  WriteBlockPaPartial;  /*!< Partial blocks for write allowed      */
  DMA_HandleTypeDef            *hdmarx;          /*!< SD Rx DMA handle parameters                    */
  DMA_HandleTypeDef            *hdmatx;          /*!< SD Tx DMA handle parameters                    */
