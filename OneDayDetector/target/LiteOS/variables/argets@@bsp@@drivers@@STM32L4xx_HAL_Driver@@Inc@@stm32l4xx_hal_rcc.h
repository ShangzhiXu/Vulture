  uint32_t AHBCLKDivider;         /*!< The AHB clock (HCLK) divider. This clock is derived from the system clock (SYSCLK).
  uint32_t APB1CLKDivider;        /*!< The APB1 clock (PCLK1) divider. This clock is derived from the AHB clock (HCLK).
  uint32_t APB2CLKDivider;        /*!< The APB2 clock (PCLK2) divider. This clock is derived from the AHB clock (HCLK).
  uint32_t ClockType;             /*!< The clock to be configured.
  uint32_t HSEState;             /*!< The new state of the HSE.
  uint32_t HSI48State;             /*!< The new state of the HSI48 (only applicable to STM32L43x/STM32L44x/STM32L49x/STM32L4Ax devices).
  uint32_t HSICalibrationValue;  /*!< The calibration trimming value (default is RCC_HSICALIBRATION_DEFAULT).
  uint32_t HSIState;             /*!< The new state of the HSI.
  uint32_t LSEState;             /*!< The new state of the LSE.
  uint32_t LSIState;             /*!< The new state of the LSI.
  uint32_t MSICalibrationValue;  /*!< The calibration trimming value (default is RCC_MSICALIBRATION_DEFAULT).
  uint32_t MSIClockRange;        /*!< The MSI frequency range.
  uint32_t MSIState;             /*!< The new state of the MSI.
  uint32_t OscillatorType;       /*!< The oscillators to be configured.
  RCC_PLLInitTypeDef PLL;        /*!< Main PLL structure parameters                                               */
  uint32_t PLLM;       /*!< PLLM: Division factor for PLL VCO input clock.
  uint32_t PLLN;       /*!< PLLN: Multiplication factor for PLL VCO output clock.
  uint32_t PLLP;       /*!< PLLP: Division factor for SAI clock.
  uint32_t PLLQ;       /*!< PLLQ: Division factor for SDMMC1, RNG and USB clocks.
  uint32_t PLLR;       /*!< PLLR: Division for the main system clock.
  uint32_t PLLSource;  /*!< RCC_PLLSource: PLL entry clock source.
  uint32_t PLLState;   /*!< The new state of the PLL.
  uint32_t SYSCLKSource;          /*!< The clock source used as system clock (SYSCLK).
