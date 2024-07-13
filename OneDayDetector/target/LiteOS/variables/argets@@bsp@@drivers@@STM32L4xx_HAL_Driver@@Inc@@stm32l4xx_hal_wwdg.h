  uint32_t Counter;       /*!< Specifies the WWDG free-running downcounter  value.
  uint32_t EWIMode ;      /*!< Specifies if WWDG Early Wakeup Interupt is enable or not.
  WWDG_InitTypeDef             Init;       /*!< WWDG required parameters */
  WWDG_TypeDef                 *Instance;  /*!< Register base address    */
  uint32_t Prescaler;     /*!< Specifies the prescaler value of the WWDG.
  uint32_t Window;        /*!< Specifies the WWDG window value to be compared to the downcounter.
