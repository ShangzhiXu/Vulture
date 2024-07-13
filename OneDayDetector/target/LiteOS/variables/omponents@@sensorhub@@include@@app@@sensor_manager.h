    INT32 (*Close)(SensorType *sensor);
    INT32 (*Init)(SensorType *sensor);
    INT32 (*IoCtl)(SensorType *sensor, UINT8 type, UINT8 *data);
    INT32 (*IrqHandler)(VOID);
    INT32 (*Open)(SensorType *sensor, OpenParam *para);
    INT32 (*ReadData)(SensorType *sensor);
    struct DeviceType       *attachDevice;
    struct LOS_DL_LIST      attachedApp;
        MailCalibrate   calibrat;
    CloseParam              closeParam;
    CloseParam         closeParam;
    CloseParam closeParam;
    UINT8                   cmd;
    UINT8  cmd;
    SensorItem              commuItem;
        MailConfig      config;
    INT32                   count;
    SmEvent event;
    UINT16             id;          // identify for each item operate
    UINT16     id;
    UINT16     id;
    UINT16 id;
    UINT16 id;
    UINT32                  interval; // ticks
    SensorItem *item;
    SensorItem *item;
    SensorItem *item;
        MailItemDisable itemDisable;
        MailItemEnable  itemEnable;
        MailItemInit    itemInit;
    struct LOS_DL_LIST      list;
    struct LOS_DL_LIST list;
    INT32 offset[MAIL_OFFSET_LENGTH];
    OpenParam               openParam;  // the interval time of driver update date
    OpenParam          openParam;   // The date update period of this item
    OpenParam  openParam;
    VOID                    *priv;
    PrivResponse            privResp;
    UINT8      reserved;
    UINT8      reserved;
    UINT8  reserved;
    UINT8              reserverd;
    UINT8              resp;        // 0 no respond; 1 respond
    UINT8      resp;
    UINT8      resp;
    UINT8  resp;
    UINT8  resp;
    RespFunc           respFunc;    // respond callback when operate
    RespFunc   respFunc;
    INT32 result;
    INT32 result;
        MailSample      sample;
        MailSelftest    selftest;
    VOID                    *sensorData;
    UINT8                   sensorDataLen;
    SensorType *sensorInterface;
    UINT32                  sensorMuxLock;
    struct SensorOperation  *sensorOp;
    UINT8                   sensorStat;
    UINT32                  slaveAddr;
    struct LOS_DL_LIST      slaveList;
    struct LOS_DL_LIST      slist;
    SensorItemState    state;
    ObjTag             tag;         // the argument of respond callback
    ObjTag     tag;
    ObjTag tag;
    ObjTag tag;
    UINT8                   tag;
    UINT32             updateArg;   // the argument of date update callback
    UINT32     updateArg;
    UINT32             updateCnt;   // date update count
    UpdateFunc         updateFunc;  // date update callback
    UpdateFunc updateFunc;
    UINT32             updateTime;  // date update time
