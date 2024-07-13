  uint32_t Alarm;                /*!< Specifies the alarm .
  uint8_t AlarmDateWeekDay;      /*!< Specifies the RTC Alarm Date/WeekDay.
  uint32_t AlarmDateWeekDaySel;  /*!< Specifies the RTC Alarm is on Date or WeekDay.
  uint32_t AlarmMask;            /*!< Specifies the RTC Alarm Masks.
  uint32_t AlarmSubSecondMask;   /*!< Specifies the RTC Alarm SubSeconds Masks.
  RTC_TimeTypeDef AlarmTime;     /*!< Specifies the RTC Alarm Time members */
  uint32_t AsynchPrediv;    /*!< Specifies the RTC Asynchronous Predivider value.
  uint8_t Date;     /*!< Specifies the RTC Date.
  uint32_t DayLightSaving;  /*!< Specifies RTC_DayLightSaveOperation: the value of hour adjustment.
  uint32_t HourFormat;      /*!< Specifies the RTC Hour Format.
  uint8_t Hours;            /*!< Specifies the RTC Time Hour.
  RTC_InitTypeDef           Init;       /*!< RTC required parameters  */
  RTC_TypeDef               *Instance;  /*!< Register base address    */
  HAL_LockTypeDef           Lock;       /*!< RTC locking object       */
  uint8_t Minutes;          /*!< Specifies the RTC Time Minutes.
  uint8_t Month;    /*!< Specifies the RTC Date Month (in BCD format).
  uint32_t OutPut;          /*!< Specifies which signal will be routed to the RTC output.
  uint32_t OutPutPolarity;  /*!< Specifies the polarity of the output signal.  
  uint32_t OutPutRemap;    /*!< Specifies the remap for RTC output.
  uint32_t OutPutType;      /*!< Specifies the RTC Output Pin mode.
  uint32_t SecondFraction;  /*!< Specifies the range or granularity of Sub Second register content
  uint8_t Seconds;          /*!< Specifies the RTC Time Seconds.
  __IO HAL_RTCStateTypeDef  State;      /*!< Time communication state */
  uint32_t StoreOperation;  /*!< Specifies RTC_StoreOperation value to be written in the BCK bit 
  uint32_t SubSeconds;     /*!< Specifies the RTC_SSR RTC Sub Second register content.
  uint32_t SynchPrediv;     /*!< Specifies the RTC Synchronous Predivider value.
  uint8_t TimeFormat;       /*!< Specifies the RTC AM/PM Time.
  uint8_t WeekDay;  /*!< Specifies the RTC Date WeekDay.
  uint8_t Year;     /*!< Specifies the RTC Date Year.
