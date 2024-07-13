  uint16_t AmpliGain;       /*!< Specifies ampli gain value
  uint8_t Calibration;      /*!< Specifies if calibration is done before each Idd measurement
  void       (*ClearIT)(uint16_t);
  void       (*Config)(uint16_t,IDD_ConfigTypeDef);
  void       (*DeInit)(uint16_t);
  uint8_t DeltaDelayUnit;   /*!< Specifies Delta delay unit
  uint8_t DeltaDelayValue;  /*!< Specifies Delta delay between 2 measures
  void       (*DisableIT)(uint16_t);
  void       (*EnableIT)(uint16_t);
  void       (*ErrorClearIT)(uint16_t);
  void       (*ErrorDisableIT)(uint16_t);
  void       (*ErrorEnableIT)(uint16_t);
  uint8_t    (*ErrorGetCode)(uint16_t);
  uint8_t    (*ErrorGetITStatus)(uint16_t);
  uint8_t    (*ErrorGetSrc)(uint16_t);
  uint8_t    (*GetITStatus)(uint16_t);
  void       (*GetValue)(uint16_t, uint32_t *);
  void       (*Init)(uint16_t);
  void       (*LowPower)(uint16_t);
  uint8_t MeasureNb;        /*!< Specifies number of Measure to be performed 
  uint8_t PreDelayUnit;     /*!< Specifies Pre delay unit 
  uint8_t PreDelayValue;    /*!< Specifies Pre delay value in selected unit
  uint16_t   (*ReadID)(uint16_t);
  void       (*Reset)(uint16_t);
  uint16_t Shunt0StabDelay; /*!< Specifies delay of Shunt 0 stabilization if existing
  uint16_t Shunt0Value;     /*!< Specifies value of Shunt 0 if existing
  uint16_t Shunt1StabDelay; /*!< Specifies delay of Shunt 1 stabilization if existing
  uint16_t Shunt1Value;     /*!< Specifies value of Shunt 1 if existing
  uint16_t Shunt2StabDelay; /*!< Specifies delay of Shunt 2 stabilization if existing
  uint16_t Shunt2Value;     /*!< Specifies value of Shunt 2 if existing
  uint16_t Shunt3StabDelay; /*!< Specifies delay of Shunt 3 stabilization if existing
  uint16_t Shunt3Value;     /*!< Specifies value of Shunt 3 if existing
  uint16_t Shunt4StabDelay; /*!< Specifies delay of Shunt 4 stabilization if existing
  uint16_t Shunt4Value;     /*!< Specifies value of Shunt 4 if existing
  uint8_t ShuntNbOnBoard;   /*!< Specifies number of shunts that are present on board
  uint8_t ShuntNbUsed;      /*!< Specifies number of shunts used for measurement
  void       (*Start)(uint16_t);
  uint16_t VddMin;          /*!< Specifies minimum MCU VDD can reach to protect MCU from reset
  uint8_t VrefMeasurement;  /*!< Specifies if Vref is automatically measured before each Idd measurement
  void       (*WakeUp)(uint16_t);
