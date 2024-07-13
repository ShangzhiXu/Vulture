#define GET_POS(x) ((x) & 0x7FFF)
#define IS_RTL_POS(x) (((x) & 0x8000) != 0)
#define SET_RTL_POS(x, is_rtl) (GET_POS(x) | ((is_rtl)? 0x8000: 0))
