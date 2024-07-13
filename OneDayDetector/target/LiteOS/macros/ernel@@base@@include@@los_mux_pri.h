#define GET_MUX(muxId)              (((LosMuxCB *)g_allMux) + GET_MUX_INDEX(muxId))
#define GET_MUX_COUNT(muxId)        ((muxId) >> MUX_SPLIT_BIT)
#define GET_MUX_INDEX(muxId)        ((muxId) & ((1U << MUX_SPLIT_BIT) - 1))
#define SET_MUX_ID(count, muxId)    (((count) << MUX_SPLIT_BIT) | (muxId))
