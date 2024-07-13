    int32_t act_time;            /**< Current time in animation. Set to negative to make delay.*/
    lv_anim_path_cb_t cb;
    uint8_t early_apply  : 1;    /**< 1: Apply start value immediately even is there is `delay` */
    int32_t end;                 /**< End value*/
    lv_anim_exec_xcb_t exec_cb;   /**< Function to execute to animate*/
    uint32_t has_run : 1;     /**< Indicates the animation has run in this round*/
    lv_anim_path_t path;         /**< Describe the path (curve) of animations*/
    uint32_t playback_delay;     /**< Wait before play back*/
    uint8_t playback_now : 1; /**< Play back is in progress*/
    uint32_t playback_time;      /**< Duration of playback animation*/
    lv_anim_ready_cb_t ready_cb; /**< Call it when the animation is ready*/
    uint16_t repeat_cnt;         /**< Repeat count for the animation*/
    uint32_t repeat_delay;       /**< Wait before repeat*/
    int32_t start;               /**< Start value*/
    lv_anim_start_cb_t start_cb; /**< Call it when the animation is starts (considering `delay`)*/
    uint32_t time;               /**< Animation time in ms*/
    uint32_t time_orig;
    lv_anim_user_data_t user_data; /**< Custom user data*/
    void * user_data;
    void * var;                  /**<Variable to animate*/
