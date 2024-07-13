    UINT32 (*dataRecv)(UINT8 *data, UINT32 size, UINT32 timeout);
    VOID (*dataSend)(UINT16 len, UINT8 *data);
    UINT32 (*init)(VOID);
    UINT32 (*wait)(VOID);
