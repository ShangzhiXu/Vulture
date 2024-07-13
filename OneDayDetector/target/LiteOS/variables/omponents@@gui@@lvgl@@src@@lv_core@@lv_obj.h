    uint8_t adv_hittest     : 1; /**< 1: Use advanced hit-testing (slower) */
    lv_align_t align;
    uint8_t auto_realign : 1;
    const struct _lv_obj_t * base;
    lv_bidi_dir_t base_dir  : 2; /**< Base direction of texts related to this object */
    lv_ll_t child_ll;       /**< Linked list to store the children objects*/
    uint8_t click           : 1; /**< 1: Can be pressed by an input device*/
    lv_area_t coords; /**< Coordinates of the object (x1, y1, x2, y2)*/
    lv_design_cb_t design_cb; /**< Object type specific design function*/
    uint8_t drag            : 1; /**< 1: Enable the dragging*/
    lv_drag_dir_t drag_dir  : 3; /**<  Which directions the object can be dragged in */
    uint8_t drag_parent     : 1; /**< 1: Parent will be dragged instead*/
    uint8_t drag_throw      : 1; /**< 1: Enable throwing with drag*/
    lv_event_cb_t event_cb; /**< Event callback function */
    void * ext_attr;            /**< Object type specific extended data*/
    lv_area_t ext_click_pad;   /**< Extra click padding area. */
    uint8_t ext_click_pad_hor; /**< Extra click padding in horizontal direction */
    uint8_t ext_click_pad_ver; /**< Extra click padding in vertical direction */
    lv_coord_t ext_draw_pad; /**< EXTtend the size in every direction for drawing. */
    uint8_t gesture_parent : 1;  /**< 1: Parent will be gesture instead*/
    void * group_p;
    uint8_t hidden          : 1; /**< 1: Object is hidden*/
    uint8_t origo_align : 1; /**< 1: the origo (center of the object) was aligned with
    struct _lv_obj_t * parent; /**< Pointer to the parent object*/
    uint8_t parent_event    : 1; /**< 1: Send the object's events to the parent too. */
    uint8_t part;
    uint8_t part;
    lv_point_t * point;
    uint8_t protect;            /**< Automatically happening actions can be prevented.
    lv_realign_t realign;       /**< Information about the last call to ::lv_obj_align. */
    bool result;
    lv_state_t result;
    lv_style_list_t * result;
    lv_signal_cb_t signal_cb; /**< Object type specific signal function*/
    lv_state_t state;
    lv_style_list_t  style_list;
    uint8_t top             : 1; /**< 1: If the object or its children is clicked it goes to the foreground*/
    const char * type[LV_MAX_ANCESTOR_NUM]; /**< [0]: the actual type, [1]: ancestor, [2] #1's ancestor
    lv_obj_user_data_t user_data; /**< Custom user data for object. */
    lv_coord_t xofs;
    lv_coord_t yofs;
