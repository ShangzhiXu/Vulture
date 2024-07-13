  OPAMP_InitTypeDef   Init;                         /*!< OPAMP required parameters */
  OPAMP_TypeDef       *Instance;                    /*!< OPAMP instance's registers base address   */
  uint32_t InvertingInput;              /*!< Specifies the inverting input in Standalone & PGA modes
  HAL_LockTypeDef   Lock;                           /*!< Locking object          */
  uint32_t Mode;                        /*!< Specifies the OPAMP mode
  uint32_t NonInvertingInput;           /*!< Specifies the non inverting input of the opamp: 
  uint32_t PgaGain;                     /*!< Specifies the gain in PGA mode 
  uint32_t PowerMode;                   /*!< Specifies the power mode Normal or Low-Power.
  uint32_t PowerSupplyRange;            /*!< Specifies the power supply range: above or under 2.4V.
  __IO HAL_OPAMP_StateTypeDef  State;               /*!< OPAMP communication state */
  HAL_StatusTypeDef Status;                         /*!< OPAMP peripheral status   */
  uint32_t TrimmingValueN;              /*!< Specifies the offset trimming value (NMOS)
  uint32_t TrimmingValueNLowPower;      /*!< Specifies the offset trimming value (NMOS)
  uint32_t TrimmingValueP;              /*!< Specifies the offset trimming value (PMOS)
  uint32_t TrimmingValuePLowPower;      /*!< Specifies the offset trimming value (PMOS)
  uint32_t UserTrimming;                /*!< Specifies the trimming mode 
