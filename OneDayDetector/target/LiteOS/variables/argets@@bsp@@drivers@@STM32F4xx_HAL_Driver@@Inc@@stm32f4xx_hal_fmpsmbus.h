  void (* AddrCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus, uint8_t TransferDirection, uint16_t AddrMatchCode);  /*!< FMPSMBUS Slave Address Match callback */
  uint32_t AddressingMode;         /*!< Specifies if 7-bit or 10-bit addressing mode for master is selected.
  uint32_t AnalogFilter;           /*!< Specifies if Analog Filter is enable or not.
  uint32_t DualAddressMode;        /*!< Specifies if dual addressing mode is selected.
  void (* ErrorCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus);                  /*!< FMPSMBUS Error callback                        */
  __IO uint32_t                ErrorCode;       /*!< FMPSMBUS Error code                   */
  uint32_t GeneralCallMode;        /*!< Specifies if general call mode is selected.
  FMPSMBUS_InitTypeDef            Init;            /*!< FMPSMBUS communication parameters     */
  FMPI2C_TypeDef                  *Instance;       /*!< FMPSMBUS registers base address       */
  void (* ListenCpltCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus);             /*!< FMPSMBUS Listen Complete callback              */
  HAL_LockTypeDef              Lock;            /*!< FMPSMBUS locking object               */
  void (* MasterRxCpltCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus);           /*!< FMPSMBUS Master Rx Transfer completed callback */
  void (* MasterTxCpltCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus);           /*!< FMPSMBUS Master Tx Transfer completed callback */
  void (* MspDeInitCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus);              /*!< FMPSMBUS Msp DeInit callback                   */
  void (* MspInitCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus);                /*!< FMPSMBUS Msp Init callback                     */
  uint32_t NoStretchMode;          /*!< Specifies if nostretch mode is selected.
  uint32_t OwnAddress1;            /*!< Specifies the first device own address.
  uint32_t OwnAddress2;            /*!< Specifies the second device own address if dual addressing mode is selected
  uint32_t OwnAddress2Masks;       /*!< Specifies the acknoledge mask address second device own address if dual addressing mode is selected
  uint32_t PacketErrorCheckMode;   /*!< Specifies if Packet Error Check mode is selected.
  uint32_t PeripheralMode;         /*!< Specifies which mode of Periphal is selected.
  __IO uint32_t                PreviousState;   /*!< FMPSMBUS communication Previous state */
  uint32_t SMBusTimeout;           /*!< Specifies the content of the 32 Bits FMPSMBUS_TIMEOUT_register value.
  void (* SlaveRxCpltCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus);            /*!< FMPSMBUS Slave Rx Transfer completed callback  */
  void (* SlaveTxCpltCallback)(struct __FMPSMBUS_HandleTypeDef *hfmpsmbus);            /*!< FMPSMBUS Slave Tx Transfer completed callback  */
  __IO uint32_t                State;           /*!< FMPSMBUS communication state          */
  uint32_t Timing;                 /*!< Specifies the FMPSMBUS_TIMINGR_register value.
  __IO uint16_t                XferCount;       /*!< FMPSMBUS transfer counter             */
  __IO uint32_t                XferOptions;     /*!< FMPSMBUS transfer options             */
  uint16_t                     XferSize;        /*!< FMPSMBUS transfer size                */
  uint8_t                      *pBuffPtr;       /*!< Pointer to FMPSMBUS transfer buffer   */
