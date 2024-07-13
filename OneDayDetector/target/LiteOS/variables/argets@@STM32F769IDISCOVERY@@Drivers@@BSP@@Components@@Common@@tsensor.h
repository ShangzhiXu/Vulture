  uint8_t AlertMode;            /* Alert Mode Temperature out of range*/
  uint8_t ConversionMode;       /* Continuous/One Shot Mode */
  uint8_t ConversionRate;       /* Number of measure per second */
  uint8_t ConversionResolution; /* Temperature Resolution */
  void       (*Init)(uint16_t, TSENSOR_InitTypeDef *);
  uint8_t    (*IsReady)(uint16_t, uint32_t);
  uint8_t    (*ReadStatus)(uint16_t);
  uint16_t   (*ReadTemp)(uint16_t); 
  uint8_t TemperatureLimitHigh; /* High Temperature Limit Range */
  uint8_t TemperatureLimitLow;  /* Low Temperature Limit Range */
