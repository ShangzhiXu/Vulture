  void     (*CloseChargePump)(void);
  void     (*DrawImage)(uint16_t, uint16_t, uint16_t, uint16_t, uint8_t*);
  uint16_t (*GetEpdPixelHeight)(void);
  uint16_t (*GetEpdPixelWidth)(void);
  void     (*Init)(void);
  void     (*RefreshDisplay)(void);
  void     (*SetDisplayWindow)(uint16_t, uint16_t, uint16_t, uint16_t);
  void     (*WritePixel)(uint8_t);
