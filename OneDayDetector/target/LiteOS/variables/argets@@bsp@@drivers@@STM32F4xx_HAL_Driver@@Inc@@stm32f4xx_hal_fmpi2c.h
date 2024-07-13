  void (* AbortCpltCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);              /*!< FMPI2C Abort callback                        */
  void (* AddrCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c, uint8_t TransferDirection, uint16_t AddrMatchCode);  /*!< FMPI2C Slave Address Match callback */
  __IO uint32_t              AddrEventCount; /*!< FMPI2C Address Event counter                 */
  uint32_t AddressingMode;      /*!< Specifies if 7-bit or 10-bit addressing mode is selected.
  uint32_t DualAddressMode;     /*!< Specifies if dual addressing mode is selected.
  void (* ErrorCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);                  /*!< FMPI2C Error callback                        */
  __IO uint32_t              ErrorCode;      /*!< FMPI2C Error code                            */
  uint32_t GeneralCallMode;     /*!< Specifies if general call mode is selected.
  FMPI2C_InitTypeDef            Init;           /*!< FMPI2C communication parameters              */
  FMPI2C_TypeDef                *Instance;      /*!< FMPI2C registers base address                */
  void (* ListenCpltCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);             /*!< FMPI2C Listen Complete callback              */
  HAL_LockTypeDef            Lock;           /*!< FMPI2C locking object                        */
  void (* MasterRxCpltCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);           /*!< FMPI2C Master Rx Transfer completed callback */
  void (* MasterTxCpltCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);           /*!< FMPI2C Master Tx Transfer completed callback */
  void (* MemRxCpltCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);              /*!< FMPI2C Memory Rx Transfer completed callback */
  void (* MemTxCpltCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);              /*!< FMPI2C Memory Tx Transfer completed callback */
  __IO HAL_FMPI2C_ModeTypeDef   Mode;           /*!< FMPI2C communication mode                    */
  void (* MspDeInitCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);              /*!< FMPI2C Msp DeInit callback                   */
  void (* MspInitCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);                /*!< FMPI2C Msp Init callback                     */
  uint32_t NoStretchMode;       /*!< Specifies if nostretch mode is selected.
  uint32_t OwnAddress1;         /*!< Specifies the first device own address.
  uint32_t OwnAddress2;         /*!< Specifies the second device own address if dual addressing mode is selected
  uint32_t OwnAddress2Masks;    /*!< Specifies the acknowledge mask address second device own address if dual addressing mode is selected
  __IO uint32_t              PreviousState;  /*!< FMPI2C communication Previous state          */
  void (* SlaveRxCpltCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);            /*!< FMPI2C Slave Rx Transfer completed callback  */
  void (* SlaveTxCpltCallback)(struct __FMPI2C_HandleTypeDef *hfmpi2c);            /*!< FMPI2C Slave Tx Transfer completed callback  */
  __IO HAL_FMPI2C_StateTypeDef  State;          /*!< FMPI2C communication state                   */
  uint32_t Timing;              /*!< Specifies the FMPI2C_TIMINGR_register value.
  __IO uint16_t              XferCount;      /*!< FMPI2C transfer counter                      */
  HAL_StatusTypeDef(*XferISR)(struct __FMPI2C_HandleTypeDef *hfmpi2c, uint32_t ITFlags, uint32_t ITSources);  /*!< FMPI2C transfer IRQ handler function pointer */
  __IO uint32_t              XferOptions;    /*!< FMPI2C sequantial transfer options, this parameter can
  uint16_t                   XferSize;       /*!< FMPI2C transfer size                         */
  DMA_HandleTypeDef          *hdmarx;        /*!< FMPI2C Rx DMA handle parameters              */
  DMA_HandleTypeDef          *hdmatx;        /*!< FMPI2C Tx DMA handle parameters              */
  uint8_t                    *pBuffPtr;      /*!< Pointer to FMPI2C transfer buffer            */
