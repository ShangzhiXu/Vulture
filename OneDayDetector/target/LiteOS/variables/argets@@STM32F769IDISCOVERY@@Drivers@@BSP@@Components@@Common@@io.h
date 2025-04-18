  void       (*ClearIT)(uint16_t, uint32_t);
  uint8_t    (*Config)(uint16_t, uint32_t, IO_ModeTypedef);
  void       (*DisableIT)(uint16_t);
  void       (*EnableIT)(uint16_t);
  uint32_t    (*ITStatus)(uint16_t, uint32_t);
  void       (*Init)(uint16_t);
  uint16_t   (*ReadID)(uint16_t);
  uint32_t   (*ReadPin)(uint16_t, uint32_t);
  void       (*Reset)(uint16_t);
  void       (*Start)(uint16_t, uint32_t);
  void       (*WritePin)(uint16_t, uint32_t, uint8_t);
