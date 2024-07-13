    uint32_t                     bootstrapServerAccountTimeout;
    uint32_t                     clientHoldOffTime;
    connection_t  *connList;
    data_report_t data;
    uint16_t                     instanceId;  // matches lwm2m_list_t::id
    bool                         isBootstrap;
    atiny_dl_list list;
    lwm2m_context_t * lwm2mH;
    struct _security_instance_ * next;        // matches lwm2m_list_t::next
    uint16_t                     publicIdLen;
    char *                       publicIdentity;
    char *                       secretKey;
    uint16_t                     secretKeyLen;
    uint8_t                      securityMode;
    lwm2m_object_t * securityObjP;
    lwm2m_object_t * serverObject;
    char *                       serverPublicKey;
    uint16_t                     serverPublicKeyLen;
    uint16_t                     shortID;
    char *                       smsParams; // SMS binding key parameters
    uint16_t                     smsParamsLen;
    char *                       smsSecret; // SMS binding secret key
    uint16_t                     smsSecretLen;
    uint8_t                      smsSecurityMode;
    char *                       uri;
