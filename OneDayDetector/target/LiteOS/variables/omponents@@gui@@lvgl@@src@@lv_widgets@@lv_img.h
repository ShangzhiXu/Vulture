    uint16_t angle;    /*rotation angle of the image*/
    uint8_t antialias : 1; /*Apply anti-aliasing in transformations (rotate, zoom)*/
    uint8_t auto_size : 1; /*1: automatically set the object size to the image size*/
    uint8_t cf : 5;        /*Color format from `lv_img_color_format_t`*/
    lv_coord_t h;          /*Height of the image (Handled by the library)*/
    lv_point_t offset;
    lv_point_t pivot;     /*rotation center of the image*/
    const void * src; /*Image source: Pointer to an array or a file or a symbol*/
    uint8_t src_type : 2;  /*See: lv_img_src_t*/
    lv_coord_t w;          /*Width of the image (Handled by the library)*/
    uint16_t zoom;         /*256 means no zoom, 512 double size, 128 hasl size*/
