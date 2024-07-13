  uint8_t Axes_Enable;                        /* Axes enable */
  uint8_t Band_Width;                         /* Bandwidth selection */
  uint8_t BlockData_Update;                   /* Block Data Update */
  void       (*ClearIT)(uint16_t, uint16_t); 
  void       (*ConfigIT)(uint16_t); 
  void       (*DeInit)(void); 
  void       (*DisableIT)(uint8_t);  
  void       (*EnableIT)(uint8_t);
  uint8_t Endianness;                         /* Endian Data selection */
  void       (*FilterCmd)(uint8_t);  
  void       (*FilterConfig)(uint8_t);  
  uint8_t Full_Scale;                         /* Full Scale selection */
  void       (*GetXYZ)(float *);
  uint8_t HighPassFilter_CutOff_Frequency;    /* High pass filter cut-off frequency */
  uint8_t HighPassFilter_Mode_Selection;      /* Internal filter mode */
  uint8_t    (*ITStatus)(uint16_t, uint16_t);   
  void       (*Init)(uint16_t);
  uint8_t Interrupt_ActiveEdge;               /* Interrupt Active edge */
  uint8_t Interrupt_Axes;                     /* X, Y, Z Axes Interrupts */ 
  uint8_t Latch_Request;                      /* Latch interrupt request into CLICK_SRC register */
  void       (*LowPower)(uint16_t);   
  uint8_t Output_DataRate;                    /* OUT data rate */
  uint8_t Power_Mode;                         /* Power-down/Sleep/Normal Mode */
  uint8_t    (*ReadID)(void);
  void       (*Reset)(void);
