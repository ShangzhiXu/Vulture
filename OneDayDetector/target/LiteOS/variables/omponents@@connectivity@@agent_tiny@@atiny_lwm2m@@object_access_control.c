    uint16_t                accCtrlOwner;
    acc_ctrl_ri_t          *accCtrlValList;
    uint16_t                accCtrlValue;
    struct acc_ctrl_oi_s   *next;       // matches lwm2m_list_t::next
    struct acc_ctrl_ri_s   *next;       // matches lwm2m_list_t::next
    uint16_t                objInstId;  // matches lwm2m_list_t::id
    uint16_t                objectId;
    uint16_t                objectInstId;
    uint16_t                resInstId;  // matches lwm2m_list_t::id, ..serverID
