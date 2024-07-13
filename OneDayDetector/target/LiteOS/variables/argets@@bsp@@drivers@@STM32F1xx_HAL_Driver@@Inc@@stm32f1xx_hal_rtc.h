  uint32_t Alarm;                /*!< Specifies the alarm ID (only 1 alarm ID for STM32F1).
  RTC_TimeTypeDef AlarmTime;     /*!< Specifies the RTC Alarm Time members */
  uint32_t AsynchPrediv;    /*!< Specifies the RTC Asynchronous Predivider value.
  uint8_t Date;     /*!< Specifies the RTC Date.
  RTC_DateTypeDef             DateToUpdate;       /*!< Current date set by user and updated automatically  */ 
  uint8_t Hours;            /*!< Specifies the RTC Time Hour.
  RTC_InitTypeDef             Init;       /*!< RTC required parameters  */ 
  RTC_TypeDef                 *Instance;  /*!< Register base address    */
  HAL_LockTypeDef             Lock;       /*!< RTC locking object       */
  uint8_t Minutes;          /*!< Specifies the RTC Time Minutes.
  uint8_t Month;    /*!< Specifies the RTC Date Month (in BCD format).
  uint32_t OutPut;          /*!< Specifies which signal will be routed to the RTC Tamper pin.
  uint8_t Seconds;          /*!< Specifies the RTC Time Seconds.
  __IO HAL_RTCStateTypeDef    State;      /*!< Time communication state */
  uint8_t WeekDay;  /*!< Specifies the RTC Date WeekDay (not necessary for HAL_RTC_SetDate).
  uint8_t Year;     /*!< Specifies the RTC Date Year.
