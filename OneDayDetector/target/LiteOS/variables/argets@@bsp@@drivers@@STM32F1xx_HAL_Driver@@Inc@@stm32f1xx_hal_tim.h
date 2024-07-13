  HAL_TIM_ActiveChannel    Channel;       /*!< Active channel                    */
  uint32_t ClearInputFilter;    /*!< TIM Clear Input filter
  uint32_t ClearInputPolarity;   /*!< TIM Clear Input polarity
  uint32_t ClearInputPrescaler;  /*!< TIM Clear Input prescaler
  uint32_t ClearInputSource;     /*!< TIM clear Input sources
  uint32_t ClearInputState;      /*!< TIM clear Input state
  uint32_t ClockDivision;     /*!< Specifies the clock division.
  uint32_t ClockFilter;    /*!< TIM clock filter
  uint32_t ClockPolarity;   /*!< TIM clock polarity
  uint32_t ClockPrescaler;  /*!< TIM clock prescaler
  uint32_t ClockSource;     /*!< TIM clock sources
  uint32_t CounterMode;       /*!< Specifies the counter mode.
  uint32_t EncoderMode;   /*!< Specifies the active edge of the input signal.
  uint32_t IC1Filter;     /*!< Specifies the input capture filter.
  uint32_t IC1Polarity;   /*!< Specifies the active edge of the input signal.
  uint32_t IC1Prescaler;  /*!< Specifies the Input Capture Prescaler.
  uint32_t IC1Selection;  /*!< Specifies the input.
  uint32_t IC2Filter;     /*!< Specifies the input capture filter.
  uint32_t IC2Polarity;   /*!< Specifies the active edge of the input signal.
  uint32_t IC2Prescaler;  /*!< Specifies the Input Capture Prescaler.
  uint32_t IC2Selection;  /*!< Specifies the input.
  uint32_t ICFilter;      /*!< Specifies the input capture filter.
  uint32_t ICFilter;     /*!< Specifies the input capture filter.
  uint32_t  ICPolarity;   /*!< Specifies the active edge of the input signal.
  uint32_t ICPolarity;    /*!< Specifies the active edge of the input signal.
  uint32_t ICPrescaler;  /*!< Specifies the Input Capture Prescaler.
  uint32_t ICSelection;   /*!< Specifies the input.
  uint32_t ICSelection;  /*!< Specifies the input.
  TIM_Base_InitTypeDef     Init;          /*!< TIM Time Base required parameters */
  uint32_t  InputTrigger;      /*!< Input Trigger source
  TIM_TypeDef              *Instance;     /*!< Register base address             */
  HAL_LockTypeDef          Lock;          /*!< Locking object                    */
  uint32_t OCFastMode;   /*!< Specifies the Fast mode state.
  uint32_t OCIdleState;   /*!< Specifies the TIM Output Compare pin state during Idle state.
  uint32_t OCIdleState;   /*!< Specifies the TIM Output Compare pin state during Idle state.
  uint32_t OCMode;        /*!< Specifies the TIM mode.
  uint32_t OCMode;        /*!< Specifies the TIM mode.
  uint32_t OCNIdleState;  /*!< Specifies the TIM Output Compare pin state during Idle state.
  uint32_t OCNIdleState;  /*!< Specifies the TIM Output Compare pin state during Idle state.
  uint32_t OCNPolarity;   /*!< Specifies the complementary output polarity.
  uint32_t OCNPolarity;   /*!< Specifies the complementary output polarity.
  uint32_t OCPolarity;    /*!< Specifies the output polarity.
  uint32_t OCPolarity;    /*!< Specifies the output polarity.
  uint32_t Period;            /*!< Specifies the period value to be loaded into the active
  uint32_t Prescaler;         /*!< Specifies the prescaler value used to divide the TIM clock.
  uint32_t Pulse;         /*!< Specifies the pulse value to be loaded into the Capture Compare Register.
  uint32_t Pulse;         /*!< Specifies the pulse value to be loaded into the Capture Compare Register.
  uint32_t RepetitionCounter;  /*!< Specifies the repetition counter value. Each time the RCR downcounter
  uint32_t  SlaveMode;      /*!< Slave mode selection
  __IO HAL_TIM_StateTypeDef   State;         /*!< TIM operation state               */
  uint32_t  TriggerFilter;     /*!< Input trigger filter
  uint32_t  TriggerPolarity;   /*!< Input Trigger polarity
  uint32_t  TriggerPrescaler;  /*!< Input trigger prescaler
  DMA_HandleTypeDef        *hdma[7];      /*!< DMA Handlers array
