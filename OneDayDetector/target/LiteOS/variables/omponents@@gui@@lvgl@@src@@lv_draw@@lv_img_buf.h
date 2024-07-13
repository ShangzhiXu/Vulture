    uint32_t always_zero : 3; /*It the upper bits of the first byte. Always zero to look like a
        int16_t angle;              /*angle to rotate*/
        bool antialias;
        lv_img_cf_t cf;             /*color format of the image to rotate*/
    uint32_t cf : 5;          /* Color format: See `lv_img_color_format_t`*/
    } cfg;
        uint8_t chroma_keyed : 1;
        lv_color_t color;           /*a color used for `LV_IMG_CF_INDEXED_1/2/4/8BIT` color formats*/
        lv_color_t color;
        int32_t cosma;
    const uint8_t * data;
    uint32_t data_size;
    uint32_t h : 11; /*Height of     the image map*/
        uint8_t has_alpha : 1;
    lv_img_header_t header;
        lv_img_dsc_t img_dsc;
        uint8_t native_color : 1;
        lv_opa_t opa;
        lv_coord_t pivot_x;         /*pivot x*/
        int32_t pivot_x_256;
        lv_coord_t pivot_y;         /* pivot y*/
        int32_t pivot_y_256;
        uint8_t px_size;
        uint32_t pxi;
    } res;
    uint32_t reserved : 2; /*Reserved to be used later*/
        int32_t sinma;
        const void * src;           /*image source (array of pixels)*/
        lv_coord_t src_h;           /*height of the image source*/
        lv_coord_t src_w;           /*width of the image source*/
    } tmp;
    uint32_t w : 11; /*Width of the image map*/
        lv_coord_t xs;
        lv_coord_t xs_int;
        lv_coord_t ys;
        lv_coord_t ys_int;
        uint16_t zoom;              /*256 no zoom, 128 half size, 512 double size*/
        uint16_t zoom_inv;
