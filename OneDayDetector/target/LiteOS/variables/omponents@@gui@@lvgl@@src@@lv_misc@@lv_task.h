    uint32_t last_run; /**< Last time the task ran */
    uint32_t period; /**< How often the task should run */
    uint8_t prio : 3; /**< Task priority */
    int32_t repeat_count; /**< 1: Task times;  -1 : infinity;  0 : stop ;  n>0: residual times */
    lv_task_cb_t task_cb; /**< Task function */
    void * user_data; /**< Custom user data */
