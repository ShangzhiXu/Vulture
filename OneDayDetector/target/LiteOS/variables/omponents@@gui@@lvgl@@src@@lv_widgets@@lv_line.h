    uint8_t auto_size : 1;                             /*1: set obj. width to x max and obj. height to y max */
    const lv_point_t * point_array;                    /*Pointer to an array with the points of the line*/
    uint16_t point_num;                                /*Number of points in 'point_array' */
    uint8_t y_inv : 1;                                 /*1: y == 0 will be on the bottom*/
