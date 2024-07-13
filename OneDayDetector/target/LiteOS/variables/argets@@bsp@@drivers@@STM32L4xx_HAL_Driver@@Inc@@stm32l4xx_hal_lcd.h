  uint32_t Bias;            /*!< Configures the LCD Bias.
  uint32_t BlinkFrequency;  /*!< Configures the LCD Blink frequency.
  uint32_t BlinkMode;       /*!< Configures the LCD Blink Mode.
  uint32_t Contrast;        /*!< Configures the LCD Contrast.
  uint32_t DeadTime;        /*!< Configures the LCD Dead Time.
  uint32_t Divider;         /*!< Configures the LCD Divider.
  uint32_t Duty;            /*!< Configures the LCD Duty.
  __IO uint32_t                 ErrorCode;  /* LCD Error code */
  uint32_t HighDrive;       /*!< Enable or disable the low resistance divider.
  LCD_InitTypeDef               Init;       /* LCD communication parameters */
  LCD_TypeDef                   *Instance;  /* LCD registers base address */
  HAL_LockTypeDef               Lock;       /* Locking object */
  uint32_t MuxSegment;      /*!< Enable or disable mux segment.
  uint32_t Prescaler;       /*!< Configures the LCD Prescaler.
  uint32_t PulseOnDuration; /*!< Configures the LCD Pulse On Duration.
  __IO HAL_LCD_StateTypeDef     State;      /* LCD communication state */
  uint32_t VoltageSource;   /*!< Selects the LCD Voltage source.
