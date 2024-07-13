    UINT32 accuracy;
    UINT32 batchCount;
    CloseParam clsParam;
    UINT8  cmd;
    UINT8  cmd;
    UINT32 errNo;  // In win32, errno is function name and conflict
    PktHeader  hd;
    PktHeader hd;
    PktHeader hd;
    PktHeader hd;
    UINT16 length;
    UINT16 length;
    UINT8  mode;
    OpenParam para;
    UINT8 para[];
    UINT8  partialOrder;
    UINT8  partialOrder;
    UINT32 period; // ticks
    UINT8  reserved[OPEN_PARAM_RESERVED_LENGTH];
    UINT8 reserved[CLOSE_PARAM_RESERVED_LENGTH];
    UINT8  resp;  // value CMD_RESP means need resp, CMD_NO_RESP means need not resp
    UINT8  resp;
    UINT8  tag;
    UINT8  tag;
    UINT16 tranId;
    UINT16 tranId;
    INT32 x;
    INT32 y;
    INT32 z;
