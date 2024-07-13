    lv_spinner_dir_t anim_dir : 1;   /*Animation Direction*/
    lv_spinner_type_t anim_type : 2; /*Type of the arc animation*/
    lv_arc_ext_t arc; /*Ext. of ancestor*/
    lv_anim_value_t arc_length;      /*Length of the spinning indicator in degree*/
    uint16_t time;                   /*Time of one round*/
