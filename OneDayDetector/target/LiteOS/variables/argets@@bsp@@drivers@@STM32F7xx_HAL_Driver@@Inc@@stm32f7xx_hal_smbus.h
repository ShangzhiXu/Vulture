  void (* AddrCallback)(struct __SMBUS_HandleTypeDef *hsmbus, uint8_t TransferDirection, uint16_t AddrMatchCode);  /*!< SMBUS Slave Address Match callback */
  uint32_t AddressingMode;         /*!< Specifies if 7-bit or 10-bit addressing mode for master is selected.
  uint32_t AnalogFilter;           /*!< Specifies if Analog Filter is enable or not.
  uint32_t DualAddressMode;        /*!< Specifies if dual addressing mode is selected.
  void (* ErrorCallback)(struct __SMBUS_HandleTypeDef *hsmbus);                  /*!< SMBUS Error callback                        */
  __IO uint32_t                ErrorCode;       /*!< SMBUS Error code                   */
  uint32_t GeneralCallMode;        /*!< Specifies if general call mode is selected.
  SMBUS_InitTypeDef            Init;            /*!< SMBUS communication parameters     */
  I2C_TypeDef                  *Instance;       /*!< SMBUS registers base address       */
  void (* ListenCpltCallback)(struct __SMBUS_HandleTypeDef *hsmbus);             /*!< SMBUS Listen Complete callback              */
  HAL_LockTypeDef              Lock;            /*!< SMBUS locking object               */
  void (* MasterRxCpltCallback)(struct __SMBUS_HandleTypeDef *hsmbus);           /*!< SMBUS Master Rx Transfer completed callback */
  void (* MasterTxCpltCallback)(struct __SMBUS_HandleTypeDef *hsmbus);           /*!< SMBUS Master Tx Transfer completed callback */
  void (* MspDeInitCallback)(struct __SMBUS_HandleTypeDef *hsmbus);              /*!< SMBUS Msp DeInit callback                   */
  void (* MspInitCallback)(struct __SMBUS_HandleTypeDef *hsmbus);                /*!< SMBUS Msp Init callback                     */
  uint32_t NoStretchMode;          /*!< Specifies if nostretch mode is selected.
  uint32_t OwnAddress1;            /*!< Specifies the first device own address.
  uint32_t OwnAddress2;            /*!< Specifies the second device own address if dual addressing mode is selected
  uint32_t OwnAddress2Masks;       /*!< Specifies the acknoledge mask address second device own address if dual addressing mode is selected
  uint32_t PacketErrorCheckMode;   /*!< Specifies if Packet Error Check mode is selected.
  uint32_t PeripheralMode;         /*!< Specifies which mode of Periphal is selected.
  __IO uint32_t                PreviousState;   /*!< SMBUS communication Previous state */
  uint32_t SMBusTimeout;           /*!< Specifies the content of the 32 Bits SMBUS_TIMEOUT_register value.
  void (* SlaveRxCpltCallback)(struct __SMBUS_HandleTypeDef *hsmbus);            /*!< SMBUS Slave Rx Transfer completed callback  */
  void (* SlaveTxCpltCallback)(struct __SMBUS_HandleTypeDef *hsmbus);            /*!< SMBUS Slave Tx Transfer completed callback  */
  __IO uint32_t                State;           /*!< SMBUS communication state          */
  uint32_t Timing;                 /*!< Specifies the SMBUS_TIMINGR_register value.
  __IO uint16_t                XferCount;       /*!< SMBUS transfer counter             */
  __IO uint32_t                XferOptions;     /*!< SMBUS transfer options             */
  uint16_t                     XferSize;        /*!< SMBUS transfer size                */
  uint8_t                      *pBuffPtr;       /*!< Pointer to SMBUS transfer buffer   */
