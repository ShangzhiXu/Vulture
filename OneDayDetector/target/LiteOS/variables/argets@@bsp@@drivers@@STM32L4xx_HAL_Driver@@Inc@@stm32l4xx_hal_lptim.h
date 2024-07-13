  uint32_t ActiveEdge;    /*!< Selects the Trigger active edge.
  LPTIM_ClockConfigTypeDef     Clock;               /*!< Specifies the clock parameters */
  uint32_t                     CounterSource;       /*!< Specifies whether the counter is incremented each internal event
      LPTIM_InitTypeDef           Init;             /*!< LPTIM required parameters */
  uint32_t                     Input1Source;        /*!< Specifies source selected for input1 (GPIO or comparator output).
  uint32_t                     Input2Source;        /*!< Specifies source selected for input2 (GPIO or comparator output).
      LPTIM_TypeDef              *Instance;         /*!< Register base address     */
      HAL_LockTypeDef             Lock;             /*!< LPTIM locking object      */
  uint32_t                     OutputPolarity;      /*!< Specifies the Output polarity.
  uint32_t Polarity;      /*!< Selects the polarity of the active edge for the counter unit
  uint32_t Prescaler;      /*!< Specifies the counter clock Prescaler.
  uint32_t SampleTime;     /*!< Selects the clock sampling time to configure the clock glitch filter.
  uint32_t SampleTime;    /*!< Selects the trigger sampling time to configure the clock glitch filter.
  uint32_t Source;         /*!< Selects the clock source.
  uint32_t Source;        /*!< Selects the Trigger source.
   __IO  HAL_LPTIM_StateTypeDef   State;            /*!< LPTIM peripheral state    */
      HAL_StatusTypeDef           Status;           /*!< LPTIM peripheral status   */  
  LPTIM_TriggerConfigTypeDef   Trigger;             /*!< Specifies the Trigger parameters */
  LPTIM_ULPClockConfigTypeDef  UltraLowPowerClock;  /*!< Specifies the Ultra Low Power clock parameters */
  uint32_t                     UpdateMode;          /*!< Specifies whether the update of the autoreload and the compare
