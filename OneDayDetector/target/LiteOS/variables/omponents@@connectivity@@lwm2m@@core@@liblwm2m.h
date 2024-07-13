    uint8_t               ack_received; // indicates, that the ACK was received
    bool active;
    char*                   altPath;
    char*                altPath;
            lwm2m_data_t* array;
        bool        asBoolean;
        } asBuffer;
        } asChildren;
        double      asFloat;
        double  asFloat;
        int64_t     asInteger;
        int64_t asInteger;
        } asObjLink;
    lwm2m_binding_t         binding;      // client connection mode with this server
    lwm2m_binding_t         binding;
    lwm2m_block1_data_t*    block1Data;   // buffer to handle block1 data, should be replace by a list to support several block1 transfer by server.
    uint8_t*              block1buffer;     // data buffer
    size_t                block1bufferSize; // buffer size
    lwm2m_bootstrap_callback_t bootstrapCallback;
    lwm2m_server_t*      bootstrapServerList;
    void*                      bootstrapUserData;
    lwm2m_bs_control_t    bsCtrl;
    lwm2m_bootstrap_type_e bsType;
            uint8_t* buffer;
    uint8_t* buffer;
    uint16_t buffer_len;
    lwm2m_data_process callback;  /*ack»Øµ÷*/
    lwm2m_result_callback_t callback;
    lwm2m_transaction_callback_t callback;
    lwm2m_data_cfg_t   cfg;
    lwm2m_change_callback_t   change;
    lwm2m_client_t*         clientList;
    struct _lwm2m_client_* clientP;
    uint32_t cnt;
    int cookie;                   /*Êý¾Ýcookie,ÓÃÒÔÔÚack»Øµ÷ÖÐ£¬Çø·Ö²»Í¬µÄÊý¾Ý*/
            size_t         count;
    uint32_t counter;
    uint32_t counter;
    lwm2m_create_callback_t   createFunc;
    lwm2m_delete_callback_t   deleteFunc;
    bool                    dirty;
    lwm2m_discover_callback_t discoverFunc;
    time_t                  endOfLife;
    char*                endpointName;
    lwm2m_execute_callback_t  executeFunc;
    uint8_t     flag;           // indicates which segments are set
    lwm2m_media_type_t format;
    uint32_t format;
    double      greaterThan;
    uint16_t                     id;    // matches lwm2m_list_t::id
    uint16_t                 id;         // matches lwm2m_list_t::id
    uint16_t    id;
    uint16_t    id;
    uint16_t    instanceId;
    lwm2m_list_t*            instanceList;
    lwm2m_list_t* instanceList;
    uint16_t                internalID; // matches lwm2m_list_t::id
    uint16_t lastMid;
    time_t lastTime;
    } lastValue;
    uint16_t              lastmid;          // mid of the last message received
            size_t    length;
    double      lessThan;
    time_t                  lifetime;     // lifetime of the registration in sec or 0 if default value (86400 sec), also used as hold off time for bootstrap servers
    uint32_t                lifetime;
    char*                   location;
    uint16_t              mID;   // matches lwm2m_list_t::id
    uint32_t    maxPeriod;
    coap_packet_t* message;
    uint32_t    minPeriod;
    lwm2m_result_callback_t monitorCallback;
    void*                   monitorUserData;
    char*                   msisdn;
    char*                msisdn;
    char*                   name;
    lwm2m_transaction_t* next;   // matches lwm2m_list_t::next
    struct _lwm2m_client_* next;        // matches lwm2m_list_t::next
    struct _lwm2m_client_object_* next;  // matches lwm2m_list_t::next
    struct _lwm2m_list_t* next;
    struct _lwm2m_object_t* next;            // for internal use only.
    struct _lwm2m_observation_* next;   // matches lwm2m_list_t::next
    struct _lwm2m_observed_* next;
    struct _lwm2m_server_* next;          // matches lwm2m_list_t::next
    struct _lwm2m_watcher_* next;
    uint16_t                nextMID;
    uint16_t       objID;
            uint16_t objectId;
    uint16_t    objectId;
            uint16_t objectInstanceId;
    lwm2m_client_object_t* objectList;
    lwm2m_object_t*      objectList;
    lwm2m_observation_t*    observationList;
    void*                observe_mutex;
    lwm2m_observed_t*    observedList;
    lwm2m_attributes_t* parameters;
    void*                 peerH;
    lwm2m_read_callback_t     readFunc;
    bool                 regist_first_flag;  //when serverlist and bootstrapServerList are all exist, we use regist or bootstrap.
    time_t                  registration; // date of the last registration in sec or end of client hold off time for bootstrap servers
    uint16_t    resourceId;
    time_t                response_timeout; // timeout to wait for response, if token is used. When 0, use calculated acknowledge timeout.
    uint8_t  retrans_counter;
    time_t   retrans_time;
    uint16_t                secObjInstID; // matches lwm2m_list_t::id
    lwm2m_server_t* server;
    lwm2m_server_t*      serverList;
    void*                   sessionH;
    void*                   sessionH;
    uint16_t                shortID;      // servers short ID, may be 0 for bootstrap server
    lwm2m_client_state_t state;
    lwm2m_client_state_t state;
    lwm2m_status_t          status;
    lwm2m_status_t          status;
    double      step;
    bool                    supportJSON;
    uint8_t     toClear;
    uint8_t     toSet;
    uint8_t token[8];
    uint8_t token[8];
    size_t tokenLen;
    uint32_t tokenLen;
    lwm2m_transaction_t*    transactionList;
    int type;                     /*Êý¾ÝÉÏ±¨ÀàÐÍ*/
    lwm2m_data_type_t type;
    bool update;
    lwm2m_uri_t             uri;
    lwm2m_uri_t uri;
    void*                   userData;
    void*                   userData;
    void* userData;
    void* userData;
    } value;
    lwm2m_watcher_t* watcherList;
    lwm2m_write_callback_t    writeFunc;
