#define IS_DMA_CHANNEL(CHANNEL) (((CHANNEL) == DMA_CHANNEL_0)  || \
                                 ((CHANNEL) == DMA_CHANNEL_1)  || \
                                 ((CHANNEL) == DMA_CHANNEL_2)  || \
                                 ((CHANNEL) == DMA_CHANNEL_3)  || \
                                 ((CHANNEL) == DMA_CHANNEL_4)  || \
                                 ((CHANNEL) == DMA_CHANNEL_5)  || \
                                 ((CHANNEL) == DMA_CHANNEL_6)  || \
                                 ((CHANNEL) == DMA_CHANNEL_7)  || \
                                 ((CHANNEL) == DMA_CHANNEL_8)  || \
                                 ((CHANNEL) == DMA_CHANNEL_9)  || \
                                 ((CHANNEL) == DMA_CHANNEL_10) || \
                                 ((CHANNEL) == DMA_CHANNEL_11) || \
                                 ((CHANNEL) == DMA_CHANNEL_12) || \
                                 ((CHANNEL) == DMA_CHANNEL_13) || \
                                 ((CHANNEL) == DMA_CHANNEL_14) || \
                                 ((CHANNEL) == DMA_CHANNEL_15)) 
#define IS_DMA_CHANNEL(CHANNEL) (((CHANNEL) == DMA_CHANNEL_0) || \
                                 ((CHANNEL) == DMA_CHANNEL_1) || \
                                 ((CHANNEL) == DMA_CHANNEL_2) || \
                                 ((CHANNEL) == DMA_CHANNEL_3) || \
                                 ((CHANNEL) == DMA_CHANNEL_4) || \
                                 ((CHANNEL) == DMA_CHANNEL_5) || \
                                 ((CHANNEL) == DMA_CHANNEL_6) || \
                                 ((CHANNEL) == DMA_CHANNEL_7))
