#define IS_LL_DMA_ALL_STREAM_INSTANCE(INSTANCE, STREAM)   ((((INSTANCE) == DMA1) && \
                                                           (((STREAM) == LL_DMA_STREAM_0) || \
                                                            ((STREAM) == LL_DMA_STREAM_1) || \
                                                            ((STREAM) == LL_DMA_STREAM_2) || \
                                                            ((STREAM) == LL_DMA_STREAM_3) || \
                                                            ((STREAM) == LL_DMA_STREAM_4) || \
                                                            ((STREAM) == LL_DMA_STREAM_5) || \
                                                            ((STREAM) == LL_DMA_STREAM_6) || \
                                                            ((STREAM) == LL_DMA_STREAM_7) || \
                                                            ((STREAM) == LL_DMA_STREAM_ALL))) ||\
                                                            (((INSTANCE) == DMA2) && \
                                                          (((STREAM) == LL_DMA_STREAM_0) || \
                                                           ((STREAM) == LL_DMA_STREAM_1) || \
                                                           ((STREAM) == LL_DMA_STREAM_2) || \
                                                           ((STREAM) == LL_DMA_STREAM_3) || \
                                                           ((STREAM) == LL_DMA_STREAM_4) || \
                                                           ((STREAM) == LL_DMA_STREAM_5) || \
                                                           ((STREAM) == LL_DMA_STREAM_6) || \
                                                           ((STREAM) == LL_DMA_STREAM_7) || \
                                                           ((STREAM) == LL_DMA_STREAM_ALL))))
#define IS_LL_DMA_CHANNEL(__VALUE__)            (((__VALUE__) == LL_DMA_CHANNEL_0)  || \
                                                 ((__VALUE__) == LL_DMA_CHANNEL_1)  || \
                                                 ((__VALUE__) == LL_DMA_CHANNEL_2)  || \
                                                 ((__VALUE__) == LL_DMA_CHANNEL_3)  || \
                                                 ((__VALUE__) == LL_DMA_CHANNEL_4)  || \
                                                 ((__VALUE__) == LL_DMA_CHANNEL_5)  || \
                                                 ((__VALUE__) == LL_DMA_CHANNEL_6)  || \
                                                 ((__VALUE__) == LL_DMA_CHANNEL_7))
#define IS_LL_DMA_DIRECTION(__VALUE__)          (((__VALUE__) == LL_DMA_DIRECTION_PERIPH_TO_MEMORY) || \
                                                 ((__VALUE__) == LL_DMA_DIRECTION_MEMORY_TO_PERIPH) || \
                                                 ((__VALUE__) == LL_DMA_DIRECTION_MEMORY_TO_MEMORY))
#define IS_LL_DMA_FIFO_MODE_STATE(STATE) (((STATE) == LL_DMA_FIFOMODE_DISABLE ) || \
                                          ((STATE) == LL_DMA_FIFOMODE_ENABLE))
#define IS_LL_DMA_FIFO_THRESHOLD(THRESHOLD) (((THRESHOLD) == LL_DMA_FIFOTHRESHOLD_1_4) || \
                                             ((THRESHOLD) == LL_DMA_FIFOTHRESHOLD_1_2)  || \
                                             ((THRESHOLD) == LL_DMA_FIFOTHRESHOLD_3_4)  || \
                                             ((THRESHOLD) == LL_DMA_FIFOTHRESHOLD_FULL))
#define IS_LL_DMA_MEMORYDATASIZE(__VALUE__)     (((__VALUE__) == LL_DMA_MDATAALIGN_BYTE)      || \
                                                 ((__VALUE__) == LL_DMA_MDATAALIGN_HALFWORD)  || \
                                                 ((__VALUE__) == LL_DMA_MDATAALIGN_WORD))
#define IS_LL_DMA_MEMORYINCMODE(__VALUE__)      (((__VALUE__) == LL_DMA_MEMORY_INCREMENT) || \
                                                 ((__VALUE__) == LL_DMA_MEMORY_NOINCREMENT))
#define IS_LL_DMA_MEMORY_BURST(BURST) (((BURST) == LL_DMA_MBURST_SINGLE) || \
                                       ((BURST) == LL_DMA_MBURST_INC4)   || \
                                       ((BURST) == LL_DMA_MBURST_INC8)   || \
                                       ((BURST) == LL_DMA_MBURST_INC16))
#define IS_LL_DMA_MODE(__VALUE__)               (((__VALUE__) == LL_DMA_MODE_NORMAL)    || \
                                                 ((__VALUE__) == LL_DMA_MODE_CIRCULAR)  || \
                                                 ((__VALUE__) == LL_DMA_MODE_PFCTRL))
#define IS_LL_DMA_NBDATA(__VALUE__)             ((__VALUE__)  <= 0x0000FFFFU)
#define IS_LL_DMA_PERIPHDATASIZE(__VALUE__)     (((__VALUE__) == LL_DMA_PDATAALIGN_BYTE)      || \
                                                 ((__VALUE__) == LL_DMA_PDATAALIGN_HALFWORD)  || \
                                                 ((__VALUE__) == LL_DMA_PDATAALIGN_WORD))
#define IS_LL_DMA_PERIPHERAL_BURST(BURST) (((BURST) == LL_DMA_PBURST_SINGLE) || \
                                           ((BURST) == LL_DMA_PBURST_INC4)   || \
                                           ((BURST) == LL_DMA_PBURST_INC8)   || \
                                           ((BURST) == LL_DMA_PBURST_INC16))
#define IS_LL_DMA_PERIPHINCMODE(__VALUE__)      (((__VALUE__) == LL_DMA_PERIPH_INCREMENT) || \
                                                 ((__VALUE__) == LL_DMA_PERIPH_NOINCREMENT))
#define IS_LL_DMA_PRIORITY(__VALUE__)           (((__VALUE__) == LL_DMA_PRIORITY_LOW)    || \
                                                 ((__VALUE__) == LL_DMA_PRIORITY_MEDIUM) || \
                                                 ((__VALUE__) == LL_DMA_PRIORITY_HIGH)   || \
                                                 ((__VALUE__) == LL_DMA_PRIORITY_VERYHIGH))
#define assert_param(expr) ((void)0U)
