#define IS_SAI_CLK_SOURCE(SOURCE) (((SOURCE) == SAI_CLKSOURCE_PLLI2S) ||\
                                   ((SOURCE) == SAI_CLKSOURCE_EXT)||\
                                   ((SOURCE) == SAI_CLKSOURCE_PLLR)||\
                                   ((SOURCE) == SAI_CLKSOURCE_HS))
#define IS_SAI_CLK_SOURCE(SOURCE) (((SOURCE) == SAI_CLKSOURCE_PLLSAI) ||\
                                   ((SOURCE) == SAI_CLKSOURCE_EXT)||\
                                   ((SOURCE) == SAI_CLKSOURCE_PLLI2S)||\
                                   ((SOURCE) == SAI_CLKSOURCE_NA))
