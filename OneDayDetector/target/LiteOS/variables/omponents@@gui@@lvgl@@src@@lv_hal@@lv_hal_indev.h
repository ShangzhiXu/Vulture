            struct _lv_obj_t * act_obj;      /*The object being pressed*/
            lv_point_t act_point; /**< Current point of input device. */
    uint32_t btn_id;  /**< For LV_INDEV_TYPE_BUTTON the currently pressed button*/
    const lv_point_t * btn_points; /**< Array points assigned to the button ()screen will be pressed
    struct _lv_obj_t * cursor;     /**< Cursor for LV_INPUT_TYPE_POINTER*/
    uint8_t disabled : 1;
    struct _disp_t * disp;
            lv_drag_dir_t drag_dir  : 3;
            uint8_t drag_in_prog : 1;
    uint8_t drag_limit;
            uint8_t drag_limit_out : 1;
            lv_point_t drag_sum; /*Count the dragged pixels to check LV_INDEV_DEF_DRAG_LIMIT*/
    uint8_t drag_throw;
            lv_point_t drag_throw_vect;
    lv_indev_drv_t driver;
    int16_t enc_diff; /**< For LV_INDEV_TYPE_ENCODER number of steps since the previous read*/
    void (*feedback_cb)(struct _lv_indev_drv_t *, uint8_t);
            lv_gesture_dir_t gesture_dir;
    uint8_t gesture_limit;
    uint8_t gesture_min_velocity;
            uint8_t gesture_sent : 1;
            lv_point_t gesture_sum; /*Count the gesture pixels to check LV_INDEV_DEF_GESTURE_LIMIT*/
    struct _lv_group_t * group;    /**< Keypad destination group*/
    uint32_t key;     /**< For LV_INDEV_TYPE_KEYPAD the currently pressed key*/
        } keypad;
            uint32_t last_key;
            struct _lv_obj_t * last_obj;     /*The last obejct which was pressed (used by dragthrow and
            lv_point_t last_point; /**< Last point of input device. */
            struct _lv_obj_t * last_pressed; /*The lastly pressed object*/
            lv_indev_state_t last_state;
    uint8_t long_pr_sent : 1;
    uint16_t long_press_rep_time;
    uint16_t long_press_time;
    uint32_t longpr_rep_timestamp; /**< Long press repeat time stamp*/
    lv_point_t point; /**< For LV_INDEV_TYPE_POINTER the currently pressed point*/
        } pointer;
    uint32_t pr_timestamp;         /**< Pressed time stamp*/
    lv_indev_proc_t proc;
    bool (*read_cb)(struct _lv_indev_drv_t * indev_drv, lv_indev_data_t * data);
    lv_task_t * read_task;
    uint8_t reset_query : 1;
    lv_indev_state_t state; /**< Current state of the input device. */
    lv_indev_state_t state; /**< LV_INDEV_STATE_REL or LV_INDEV_STATE_PR*/
    lv_indev_type_t type;
    } types;
    lv_indev_drv_user_data_t user_data;
            lv_point_t vect; /**< Difference between `act_point` and `last_point`. */
    uint8_t wait_until_release : 1;
