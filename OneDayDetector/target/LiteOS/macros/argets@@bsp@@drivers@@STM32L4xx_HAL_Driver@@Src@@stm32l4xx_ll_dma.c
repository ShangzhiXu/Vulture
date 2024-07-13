#define IS_LL_DMA_ALL_CHANNEL_INSTANCE(INSTANCE, CHANNEL)  ((((INSTANCE) == DMA1) && \
                                                         (((CHANNEL) == LL_DMA_CHANNEL_1) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_2) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_3) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_4) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_5) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_6) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_7))) || \
                                                         (((INSTANCE) == DMA2) && \
                                                         (((CHANNEL) == LL_DMA_CHANNEL_1) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_2) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_3) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_4) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_5) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_6) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_7))))
#define IS_LL_DMA_ALL_CHANNEL_INSTANCE(INSTANCE, CHANNEL)  ((((INSTANCE) == DMA1) && \
                                                         (((CHANNEL) == LL_DMA_CHANNEL_1) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_2) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_3) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_4) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_5) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_6) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_7))) || \
                                                         (((INSTANCE) == DMA2) && \
                                                         (((CHANNEL) == LL_DMA_CHANNEL_1) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_2) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_3) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_4) || \
                                                          ((CHANNEL) == LL_DMA_CHANNEL_5))))
#define IS_LL_DMA_ALL_CHANNEL_INSTANCE(INSTANCE, CHANNEL)  ((((INSTANCE) == DMA1) && \
                                                            (((CHANNEL) == LL_DMA_CHANNEL_1)|| \
                                                            ((CHANNEL) == LL_DMA_CHANNEL_2) || \
                                                            ((CHANNEL) == LL_DMA_CHANNEL_3) || \
                                                            ((CHANNEL) == LL_DMA_CHANNEL_4) || \
                                                            ((CHANNEL) == LL_DMA_CHANNEL_5) || \
                                                            ((CHANNEL) == LL_DMA_CHANNEL_6) || \
                                                            ((CHANNEL) == LL_DMA_CHANNEL_7))))
#define IS_LL_DMA_DIRECTION(__VALUE__)          (((__VALUE__) == LL_DMA_DIRECTION_PERIPH_TO_MEMORY) || \
                                                 ((__VALUE__) == LL_DMA_DIRECTION_MEMORY_TO_PERIPH) || \
                                                 ((__VALUE__) == LL_DMA_DIRECTION_MEMORY_TO_MEMORY))
#define IS_LL_DMA_MEMORYDATASIZE(__VALUE__)     (((__VALUE__) == LL_DMA_MDATAALIGN_BYTE)      || \
                                                 ((__VALUE__) == LL_DMA_MDATAALIGN_HALFWORD)  || \
                                                 ((__VALUE__) == LL_DMA_MDATAALIGN_WORD))
#define IS_LL_DMA_MEMORYINCMODE(__VALUE__)      (((__VALUE__) == LL_DMA_MEMORY_INCREMENT) || \
                                                 ((__VALUE__) == LL_DMA_MEMORY_NOINCREMENT))
#define IS_LL_DMA_MODE(__VALUE__)               (((__VALUE__) == LL_DMA_MODE_NORMAL) || \
                                                 ((__VALUE__) == LL_DMA_MODE_CIRCULAR))
#define IS_LL_DMA_NBDATA(__VALUE__)             ((__VALUE__)  <= 0x0000FFFFU)
#define IS_LL_DMA_PERIPHDATASIZE(__VALUE__)     (((__VALUE__) == LL_DMA_PDATAALIGN_BYTE)      || \
                                                 ((__VALUE__) == LL_DMA_PDATAALIGN_HALFWORD)  || \
                                                 ((__VALUE__) == LL_DMA_PDATAALIGN_WORD))
#define IS_LL_DMA_PERIPHINCMODE(__VALUE__)      (((__VALUE__) == LL_DMA_PERIPH_INCREMENT) || \
                                                 ((__VALUE__) == LL_DMA_PERIPH_NOINCREMENT))
#define IS_LL_DMA_PERIPHREQUEST(__VALUE__)      ((__VALUE__) <= 93U)
#define IS_LL_DMA_PERIPHREQUEST(__VALUE__)      (((__VALUE__) == LL_DMA_REQUEST_0)  || \
                                                 ((__VALUE__) == LL_DMA_REQUEST_1)  || \
                                                 ((__VALUE__) == LL_DMA_REQUEST_2)  || \
                                                 ((__VALUE__) == LL_DMA_REQUEST_3)  || \
                                                 ((__VALUE__) == LL_DMA_REQUEST_4)  || \
                                                 ((__VALUE__) == LL_DMA_REQUEST_5)  || \
                                                 ((__VALUE__) == LL_DMA_REQUEST_6)  || \
                                                 ((__VALUE__) == LL_DMA_REQUEST_7))
#define IS_LL_DMA_PRIORITY(__VALUE__)           (((__VALUE__) == LL_DMA_PRIORITY_LOW)    || \
                                                 ((__VALUE__) == LL_DMA_PRIORITY_MEDIUM) || \
                                                 ((__VALUE__) == LL_DMA_PRIORITY_HIGH)   || \
                                                 ((__VALUE__) == LL_DMA_PRIORITY_VERYHIGH))
#define assert_param(expr) ((void)0U)
