#define IS_SAI_AUDIO_FREQUENCY(AUDIO) (((AUDIO) == SAI_AUDIO_FREQUENCY_192K) || ((AUDIO) == SAI_AUDIO_FREQUENCY_96K) || \
                                       ((AUDIO) == SAI_AUDIO_FREQUENCY_48K)  || ((AUDIO) == SAI_AUDIO_FREQUENCY_44K) || \
                                       ((AUDIO) == SAI_AUDIO_FREQUENCY_32K)  || ((AUDIO) == SAI_AUDIO_FREQUENCY_22K) || \
                                       ((AUDIO) == SAI_AUDIO_FREQUENCY_16K)  || ((AUDIO) == SAI_AUDIO_FREQUENCY_11K) || \
                                       ((AUDIO) == SAI_AUDIO_FREQUENCY_8K)   || ((AUDIO) == SAI_AUDIO_FREQUENCY_MCKDIV))
#define IS_SAI_BLOCK_ACTIVE_FRAME(LENGTH) ((1 <= (LENGTH)) && ((LENGTH) <= 128))
#define IS_SAI_BLOCK_CLOCK_STROBING(CLOCK) (((CLOCK) == SAI_CLOCKSTROBING_FALLINGEDGE) || \
                                            ((CLOCK) == SAI_CLOCKSTROBING_RISINGEDGE))
#define IS_SAI_BLOCK_COMPANDING_MODE(MODE)    (((MODE) == SAI_NOCOMPANDING)         || \
                                               ((MODE) == SAI_ULAW_1CPL_COMPANDING) || \
                                               ((MODE) == SAI_ALAW_1CPL_COMPANDING) || \
                                               ((MODE) == SAI_ULAW_2CPL_COMPANDING) || \
                                               ((MODE) == SAI_ALAW_2CPL_COMPANDING))
#define IS_SAI_BLOCK_DATASIZE(DATASIZE) (((DATASIZE) == SAI_DATASIZE_8)  || \
                                         ((DATASIZE) == SAI_DATASIZE_10) || \
                                         ((DATASIZE) == SAI_DATASIZE_16) || \
                                         ((DATASIZE) == SAI_DATASIZE_20) || \
                                         ((DATASIZE) == SAI_DATASIZE_24) || \
                                         ((DATASIZE) == SAI_DATASIZE_32))
#define IS_SAI_BLOCK_FIFO_THRESHOLD(THRESHOLD) (((THRESHOLD) == SAI_FIFOTHRESHOLD_EMPTY)   || \
                                                ((THRESHOLD) == SAI_FIFOTHRESHOLD_1QF)     || \
                                                ((THRESHOLD) == SAI_FIFOTHRESHOLD_HF)      || \
                                                ((THRESHOLD) == SAI_FIFOTHRESHOLD_3QF)     || \
                                                ((THRESHOLD) == SAI_FIFOTHRESHOLD_FULL))  
#define IS_SAI_BLOCK_FIRSTBIT_OFFSET(OFFSET) ((OFFSET) <= 24)
#define IS_SAI_BLOCK_FIRST_BIT(BIT) (((BIT) == SAI_FIRSTBIT_MSB) || \
                                     ((BIT) == SAI_FIRSTBIT_LSB))
#define IS_SAI_BLOCK_FRAME_LENGTH(LENGTH) ((8 <= (LENGTH)) && ((LENGTH) <= 256))
#define IS_SAI_BLOCK_FS_DEFINITION(DEFINITION) (((DEFINITION) == SAI_FS_STARTFRAME) || \
                                                ((DEFINITION) == SAI_FS_CHANNEL_IDENTIFICATION))
#define IS_SAI_BLOCK_FS_OFFSET(OFFSET) (((OFFSET) == SAI_FS_FIRSTBIT) || \
                                        ((OFFSET) == SAI_FS_BEFOREFIRSTBIT))
#define IS_SAI_BLOCK_FS_POLARITY(POLARITY) (((POLARITY) == SAI_FS_ACTIVE_LOW) || \
                                            ((POLARITY) == SAI_FS_ACTIVE_HIGH))
#define IS_SAI_BLOCK_MASTER_DIVIDER(DIVIDER) ((DIVIDER) <= 15)
#define IS_SAI_BLOCK_MCK_OVERSAMPLING(VALUE) (((VALUE) == SAI_MCK_OVERSAMPLING_DISABLE) || \
                                              ((VALUE) == SAI_MCK_OVERSAMPLING_ENABLE))
#define IS_SAI_BLOCK_MODE(MODE)  (((MODE) == SAI_MODEMASTER_TX) || \
                                  ((MODE) == SAI_MODEMASTER_RX) || \
                                  ((MODE) == SAI_MODESLAVE_TX)  || \
                                  ((MODE) == SAI_MODESLAVE_RX))
#define IS_SAI_BLOCK_MUTE_COUNTER(COUNTER) ((COUNTER) <= 63)
#define IS_SAI_BLOCK_MUTE_VALUE(VALUE)    (((VALUE) == SAI_ZERO_VALUE)     || \
                                           ((VALUE) == SAI_LAST_SENT_VALUE)) 
#define IS_SAI_BLOCK_NODIVIDER(NODIVIDER) (((NODIVIDER) == SAI_MASTERDIVIDER_ENABLE) || \
                                           ((NODIVIDER) == SAI_MASTERDIVIDER_DISABLE))
#define IS_SAI_BLOCK_OUTPUT_DRIVE(DRIVE) (((DRIVE) == SAI_OUTPUTDRIVE_DISABLE) || \
                                          ((DRIVE) == SAI_OUTPUTDRIVE_ENABLE))
#define IS_SAI_BLOCK_PROTOCOL(PROTOCOL) (((PROTOCOL) == SAI_FREE_PROTOCOL)  || \
                                         ((PROTOCOL) == SAI_AC97_PROTOCOL)  || \
                                         ((PROTOCOL) == SAI_SPDIF_PROTOCOL)) 
#define IS_SAI_BLOCK_SLOT_NUMBER(NUMBER) ((1 <= (NUMBER)) && ((NUMBER) <= 16))
#define IS_SAI_BLOCK_SLOT_SIZE(SIZE) (((SIZE) == SAI_SLOTSIZE_DATASIZE) || \
                                      ((SIZE) == SAI_SLOTSIZE_16B)      || \
                                      ((SIZE) == SAI_SLOTSIZE_32B))
#define IS_SAI_BLOCK_SYNCEXT(STATE) (((STATE) == SAI_SYNCEXT_DISABLE) ||\
                                     ((STATE) == SAI_SYNCEXT_OUTBLOCKA_ENABLE) ||\
                                     ((STATE) == SAI_SYNCEXT_OUTBLOCKB_ENABLE))
#define IS_SAI_BLOCK_SYNCHRO(SYNCHRO) (((SYNCHRO) == SAI_ASYNCHRONOUS)         || \
                                       ((SYNCHRO) == SAI_SYNCHRONOUS)          || \
                                       ((SYNCHRO) == SAI_SYNCHRONOUS_EXT_SAI1) || \
                                       ((SYNCHRO) == SAI_SYNCHRONOUS_EXT_SAI2))
#define IS_SAI_BLOCK_TRISTATE_MANAGEMENT(STATE) (((STATE) == SAI_OUTPUT_NOTRELEASED) ||\
                                                 ((STATE) == SAI_OUTPUT_RELEASED))
#define IS_SAI_MONO_STEREO_MODE(MODE) (((MODE) == SAI_MONOMODE) ||\
                                       ((MODE) == SAI_STEREOMODE))
#define IS_SAI_PDM_CLOCK_ENABLE(CLOCK) (((CLOCK) != 0U) && \
                                       (((CLOCK) & ~(SAI_PDM_CLOCK1_ENABLE | SAI_PDM_CLOCK2_ENABLE)) == 0U))
#define IS_SAI_PDM_MIC_PAIRS_NUMBER(VALUE)   ((1U <= (VALUE)) && ((VALUE) <= 3U))
#define IS_SAI_PROTOCOL_DATASIZE(DATASIZE)   (((DATASIZE) == SAI_PROTOCOL_DATASIZE_16BIT)         ||\
                                              ((DATASIZE) == SAI_PROTOCOL_DATASIZE_16BITEXTENDED) ||\
                                              ((DATASIZE) == SAI_PROTOCOL_DATASIZE_24BIT)         ||\
                                              ((DATASIZE) == SAI_PROTOCOL_DATASIZE_32BIT))
#define IS_SAI_SLOT_ACTIVE(ACTIVE)  ((ACTIVE) <= SAI_SLOTACTIVE_ALL)
#define IS_SAI_SUPPORTED_PROTOCOL(PROTOCOL)   (((PROTOCOL) == SAI_I2S_STANDARD)     ||\
                                               ((PROTOCOL) == SAI_I2S_MSBJUSTIFIED) ||\
                                               ((PROTOCOL) == SAI_I2S_LSBJUSTIFIED) ||\
                                               ((PROTOCOL) == SAI_PCM_LONG)         ||\
                                               ((PROTOCOL) == SAI_PCM_SHORT))
#define __HAL_SAI_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->CLRFR = (__FLAG__))
#define __HAL_SAI_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR1 &=  ~SAI_xCR1_SAIEN)
#define __HAL_SAI_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((__HANDLE__)->Instance->IMR &= (~(__INTERRUPT__)))
#define __HAL_SAI_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR1 |=  SAI_xCR1_SAIEN)
#define __HAL_SAI_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->IMR |= (__INTERRUPT__))
#define __HAL_SAI_GET_FLAG(__HANDLE__, __FLAG__) ((((__HANDLE__)->Instance->SR) & (__FLAG__)) == (__FLAG__))
#define __HAL_SAI_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->IMR & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_SAI_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SAI_STATE_RESET)
