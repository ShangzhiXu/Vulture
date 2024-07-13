  IWDG_InitTypeDef             Init;       /*!< IWDG required parameters */
  IWDG_TypeDef                 *Instance;  /*!< Register base address    */
  uint32_t Prescaler;  /*!< Select the prescaler of the IWDG.
  uint32_t Reload;     /*!< Specifies the IWDG down-counter reload value.
  uint32_t Window;     /*!< Specifies the window value to be compared to the down-counter.
