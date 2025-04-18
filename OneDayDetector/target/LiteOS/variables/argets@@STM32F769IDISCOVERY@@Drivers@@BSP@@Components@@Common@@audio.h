  void      (*DeInit)(void);
  uint32_t  (*Init)(uint16_t, uint16_t, uint8_t, uint32_t);
  uint32_t  (*Pause)(uint16_t);
  uint32_t  (*Play)(uint16_t, uint16_t*, uint16_t);
  uint32_t  (*ReadID)(uint16_t);
  uint32_t  (*Reset)(uint16_t);
  uint32_t  (*Resume)(uint16_t);
  uint32_t  (*SetFrequency)(uint16_t, uint32_t);
  uint32_t  (*SetMute)(uint16_t, uint32_t);
  uint32_t  (*SetOutputMode)(uint16_t, uint8_t);
  uint32_t  (*SetVolume)(uint16_t, uint8_t);
  uint32_t  (*Stop)(uint16_t, uint32_t);
