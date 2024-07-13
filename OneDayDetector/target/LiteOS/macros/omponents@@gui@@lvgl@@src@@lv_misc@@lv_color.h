# define LV_COLOR_GET_A(c)   LV_COLOR_GET_A16(c)
# define LV_COLOR_GET_A(c) LV_COLOR_GET_A1(c)
# define LV_COLOR_GET_A(c) LV_COLOR_GET_A32(c)
# define LV_COLOR_GET_A(c) LV_COLOR_GET_A8(c)
# define LV_COLOR_GET_A1(c) 1
# define LV_COLOR_GET_A16(c) 0xFF
# define LV_COLOR_GET_A32(c) (c).ch.alpha
# define LV_COLOR_GET_A8(c) 0xFF
# define LV_COLOR_GET_B(c)   LV_COLOR_GET_B16(c)
# define LV_COLOR_GET_B(c) LV_COLOR_GET_B1(c)
# define LV_COLOR_GET_B(c) LV_COLOR_GET_B32(c)
# define LV_COLOR_GET_B(c) LV_COLOR_GET_B8(c)
# define LV_COLOR_GET_B1(c) (c).ch.blue
# define LV_COLOR_GET_B16(c) (c).ch.blue
# define LV_COLOR_GET_B32(c) (c).ch.blue
# define LV_COLOR_GET_B8(c) (c).ch.blue
#   define LV_COLOR_GET_G(c) LV_COLOR_GET_G16(c)
#   define LV_COLOR_GET_G(c) LV_COLOR_GET_G16_SWAP(c)
# define LV_COLOR_GET_G(c) LV_COLOR_GET_G1(c)
# define LV_COLOR_GET_G(c) LV_COLOR_GET_G32(c)
# define LV_COLOR_GET_G(c) LV_COLOR_GET_G8(c)
# define LV_COLOR_GET_G1(c) (c).ch.green
# define LV_COLOR_GET_G16(c) (c).ch.green
# define LV_COLOR_GET_G16_SWAP(c) (((c).ch.green_h << 3) + (c).ch.green_l)
# define LV_COLOR_GET_G32(c) (c).ch.green
# define LV_COLOR_GET_G8(c) (c).ch.green
# define LV_COLOR_GET_R(c) LV_COLOR_GET_R1(c)
# define LV_COLOR_GET_R(c) LV_COLOR_GET_R16(c)
# define LV_COLOR_GET_R(c) LV_COLOR_GET_R32(c)
# define LV_COLOR_GET_R(c) LV_COLOR_GET_R8(c)
# define LV_COLOR_GET_R1(c) (c).ch.red
# define LV_COLOR_GET_R16(c) (c).ch.red
# define LV_COLOR_GET_R32(c) (c).ch.red
# define LV_COLOR_GET_R8(c) (c).ch.red
#define LV_COLOR_MAKE(r8, g8, b8) ((lv_color_t){.full = (uint8_t)((b8 >> 7) | (g8 >> 7) | (r8 >> 7))})
#define LV_COLOR_MAKE(r8, g8, b8) ((lv_color_t){{(uint8_t)((b8 >> 6) & 0x3U), (uint8_t)((g8 >> 5) & 0x7U), (uint8_t)((r8 >> 5) & 0x7U)}})
#define LV_COLOR_MAKE(r8, g8, b8) ((lv_color_t){{(uint16_t)((b8 >> 3) & 0x1FU), (uint16_t)((g8 >> 2) & 0x3FU), (uint16_t)((r8 >> 3) & 0x1FU)}})
#define LV_COLOR_MAKE(r8, g8, b8) ((lv_color_t){{(uint16_t)((g8 >> 5) & 0x7U), (uint16_t)((r8 >> 3) & 0x1FU), (uint16_t)((b8 >> 3) & 0x1FU), (uint16_t)((g8 >> 2) & 0x7U)}})
#define LV_COLOR_MAKE(r8, g8, b8) ((lv_color_t){{b8, g8, r8, 0xff}}) /*Fix 0xff alpha*/
# define LV_COLOR_SET_A(c, v) LV_COLOR_SET_A1(c,v)
# define LV_COLOR_SET_A(c, v) LV_COLOR_SET_A16(c,v)
# define LV_COLOR_SET_A(c, v) LV_COLOR_SET_A32(c,v)
# define LV_COLOR_SET_A(c, v) LV_COLOR_SET_A8(c,v)
# define LV_COLOR_SET_A1(c, v)
# define LV_COLOR_SET_A16(c, v) do {} while(0)
# define LV_COLOR_SET_A32(c, v) (c).ch.alpha = (uint32_t)((v) & 0xFF);
# define LV_COLOR_SET_A8(c, v) do {} while(0)
# define LV_COLOR_SET_B(c, v) LV_COLOR_SET_B1(c,v)
# define LV_COLOR_SET_B(c, v) LV_COLOR_SET_B16(c,v)
# define LV_COLOR_SET_B(c, v) LV_COLOR_SET_B32(c,v)
# define LV_COLOR_SET_B(c, v) LV_COLOR_SET_B8(c,v)
# define LV_COLOR_SET_B1(c, v) (c).ch.blue = (uint8_t)((v) & 0x1);
# define LV_COLOR_SET_B16(c, v) (c).ch.blue = (uint8_t)(v) & 0x1FU;
# define LV_COLOR_SET_B32(c, v) (c).ch.blue = (uint32_t)((v) & 0xFF);
# define LV_COLOR_SET_B8(c, v) (c).ch.blue = (uint8_t)(v) & 0x3U;
#   define LV_COLOR_SET_G(c, v) LV_COLOR_SET_G16(c,v)
#   define LV_COLOR_SET_G(c, v) LV_COLOR_SET_G16_SWAP(c,v)
# define LV_COLOR_SET_G(c, v) LV_COLOR_SET_G1(c,v)
# define LV_COLOR_SET_G(c, v) LV_COLOR_SET_G32(c,v)
# define LV_COLOR_SET_G(c, v) LV_COLOR_SET_G8(c,v)
# define LV_COLOR_SET_G1(c, v) (c).ch.green = (uint8_t)((v) & 0x1);
# define LV_COLOR_SET_G16(c, v) (c).ch.green = (uint8_t)(v) & 0x3FU;
# define LV_COLOR_SET_G16_SWAP(c, v) {(c).ch.green_h = (uint8_t)(((v) >> 3) & 0x7); (c).ch.green_l = (uint8_t)((v) & 0x7);}
# define LV_COLOR_SET_G32(c, v) (c).ch.green = (uint32_t)((v) & 0xFF);
# define LV_COLOR_SET_G8(c, v) (c).ch.green = (uint8_t)(v) & 0x7U;
# define LV_COLOR_SET_R(c, v) LV_COLOR_SET_R1(c,v)
# define LV_COLOR_SET_R(c, v) LV_COLOR_SET_R16(c,v)
# define LV_COLOR_SET_R(c, v) LV_COLOR_SET_R32(c,v)
# define LV_COLOR_SET_R(c, v) LV_COLOR_SET_R8(c,v)
# define LV_COLOR_SET_R1(c, v) (c).ch.red = (uint8_t)((v) & 0x1);
# define LV_COLOR_SET_R16(c, v) (c).ch.red = (uint8_t)(v) & 0x1FU;
# define LV_COLOR_SET_R32(c, v) (c).ch.red = (uint32_t)((v) & 0xFF);
# define LV_COLOR_SET_R8(c, v) (c).ch.red = (uint8_t)(v) & 0x7U;
