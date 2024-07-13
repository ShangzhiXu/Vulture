    } bits;
    uint8_t full;
    uint8_t has_local    : 1;
    uint8_t has_trans    : 1;
    uint8_t ignore_trans   : 1;     /*1: Mark that this style list shouldn't receive transitions at all*/
        uint8_t inherit     : 1; /*1: The property can be inherited*/
    uint8_t * map;
    uint32_t sentinel;
    uint32_t sentinel;
    uint8_t skip_trans   : 1;       /*1: Temporally skip the transition style if any*/
        uint8_t state       : 7; /* To which state the property refers to*/
    uint8_t style_cnt;
    lv_style_t ** style_list;
