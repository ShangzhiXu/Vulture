  uint32_t AHBCLKDivider;         /*!< The AHB clock (HCLK) divider. This clock is derived from the system clock (SYSCLK).
  uint32_t APB1CLKDivider;        /*!< The APB1 clock (PCLK1) divider. This clock is derived from the AHB clock (HCLK).
  uint32_t APB2CLKDivider;        /*!< The APB2 clock (PCLK2) divider. This clock is derived from the AHB clock (HCLK).
  uint32_t ClockType;             /*!< The clock to be configured.
  uint32_t HSEState;             /*!< The new state of the HSE.
  uint32_t HSICalibrationValue;   /*!< The HSI calibration trimming value (default is RCC_HSICALIBRATION_DEFAULT).
  uint32_t HSIState;             /*!< The new state of the HSI.
  uint32_t LSEState;             /*!< The new state of the LSE.
  uint32_t LSIState;             /*!< The new state of the LSI.
  uint32_t OscillatorType;       /*!< The oscillators to be configured.
  RCC_PLLInitTypeDef PLL;        /*!< PLL structure parameters                                                    */      
  uint32_t SYSCLKSource;          /*!< The clock source (SYSCLKS) used as system clock.
