#define IS_OPAMP_FACTORYTRIMMING(TRIMMING) (((TRIMMING) == OPAMP_FACTORYTRIMMING_N) || \
                                             ((TRIMMING) == OPAMP_FACTORYTRIMMING_P))
#define IS_OPAMP_FUNCTIONAL_NORMALMODE(INPUT) (((INPUT) == OPAMP_STANDALONE_MODE) || \
                                               ((INPUT) == OPAMP_PGA_MODE) || \
                                               ((INPUT) == OPAMP_FOLLOWER_MODE))
#define IS_OPAMP_INVERTING_INPUT_PGA(INPUT) (((INPUT) == OPAMP_INVERTINGINPUT_IO0) || \
                                             ((INPUT) == OPAMP_INVERTINGINPUT_IO1) || \
                                             ((INPUT) == OPAMP_INVERTINGINPUT_CONNECT_NO))
#define IS_OPAMP_INVERTING_INPUT_PGA(INPUT) (((INPUT) == OPAMP_INVERTINGINPUT_IO0) || \
                                             ((INPUT) == OPAMP_INVERTINGINPUT_CONNECT_NO))
#define IS_OPAMP_INVERTING_INPUT_STANDALONE(INPUT) (((INPUT) == OPAMP_INVERTINGINPUT_IO0) || \
                                                    ((INPUT) == OPAMP_INVERTINGINPUT_IO1))
#define IS_OPAMP_INVERTING_INPUT_STANDALONE(INPUT) ((INPUT) == OPAMP_INVERTINGINPUT_IO0)
#define IS_OPAMP_NONINVERTING_INPUT(INPUT) (((INPUT) == OPAMP_NONINVERTINGINPUT_IO0) || \
                                            ((INPUT) == OPAMP_NONINVERTINGINPUT_DAC_CH))
#define IS_OPAMP_PGA_GAIN(GAIN) (((GAIN) == OPAMP_PGA_GAIN_2) || \
                                 ((GAIN) == OPAMP_PGA_GAIN_4) || \
                                 ((GAIN) == OPAMP_PGA_GAIN_8) || \
                                 ((GAIN) == OPAMP_PGA_GAIN_16))
#define IS_OPAMP_POWERMODE(TRIMMING) (((TRIMMING) == OPAMP_POWERMODE_NORMAL) || \
                                      ((TRIMMING) == OPAMP_POWERMODE_LOWPOWER) )
#define IS_OPAMP_POWER_SUPPLY_RANGE(RANGE) (((RANGE) == OPAMP_POWERSUPPLY_LOW) || \
                                            ((RANGE) == OPAMP_POWERSUPPLY_HIGH)  )
#define IS_OPAMP_TRIMMING(TRIMMING) (((TRIMMING) == OPAMP_TRIMMING_FACTORY) || \
                                     ((TRIMMING) == OPAMP_TRIMMING_USER))
#define IS_OPAMP_TRIMMINGVALUE(TRIMMINGVALUE) ((TRIMMINGVALUE) <= 0x1F)
#define __HAL_OPAMP_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_OPAMP_STATE_RESET)
