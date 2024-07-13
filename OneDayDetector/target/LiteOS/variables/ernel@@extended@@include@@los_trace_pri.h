    UINT32 cmd;     /* trace start or stop cmd */
    UINT8 cmd;
    } ctrl;
        UINT16 curIndex;            /* The current record index */
        UINT16 curObjIndex;         /* The current obj index */
    UINT8 end;
        TraceEventFrame *frameBuf;  /* Pointer to the track items */
    OfflineHead *head;
        UINT16 maxObjCount;         /* The max num of obj index */
        UINT16 maxRecordCount;      /* The max num of track items */
        ObjData *objBuf;            /* Pointer to obj info data */
    UINT32 param;   /* magic numb stand for notify msg */
    UINT8 param1;
    UINT8 param2;
    UINT8 param3;
    UINT8 param4;
    UINT8 param5;
