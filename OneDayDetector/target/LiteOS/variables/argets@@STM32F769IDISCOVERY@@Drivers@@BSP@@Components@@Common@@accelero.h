  uint8_t AccFull_Scale;                      /* Full Scale selection */
  uint8_t AccOutput_DataRate;                 /* OUT data rate */
  uint8_t Axes_Enable;                        /* Axes enable */
  uint8_t BlockData_Update;                   /* Block Data Update */
  void      (*ClearIT)(void);
  uint8_t Communication_Mode;
  void      (*ConfigIT)(void);
  void      (*DeInit)(void); 
  void      (*DisableIT)(uint8_t);
  void      (*EnableIT)(uint8_t);
  uint8_t Endianness;                         /* Endian Data selection */
  void      (*FilterCmd)(uint8_t);
  void      (*FilterConfig)(uint8_t);
  void      (*GetXYZ)(int16_t *);
  uint8_t HighPassFilter_AOI1;                /* HPF_enabling/disabling for AOI function on interrupt 1 */
  uint8_t HighPassFilter_AOI2;                /* HPF_enabling/disabling for AOI function on interrupt 2 */
  uint8_t HighPassFilter_CutOff_Frequency;    /* High pass filter cut-off frequency */
  uint8_t HighPassFilter_Data_Sel;
  uint8_t HighPassFilter_Mode_Selection;      /* Internal filter mode */
  uint8_t HighPassFilter_Stat;
  uint8_t High_Resolution;                    /* High Resolution enabling/disabling */
  uint8_t   (*ITStatus)(uint16_t);
  void      (*Init)(uint16_t);
  void      (*LowPower)(void);
  uint8_t Power_Mode;                         /* Power-down/Normal Mode */
  uint8_t   (*ReadID)(void);
  void      (*Reset)(void);
