    struct disk_dev dev[FF_VOLUMES];
    const struct diskio_drv *drv;
    DSTATUS (*initialize)(BYTE);                       /* !< Initialize Disk Drive  */
    DRESULT (*ioctl)(BYTE, BYTE, void *);              /* !< I/O control operation  */
    uint8_t lun;
    volatile uint8_t num;
    DRESULT (*read)(BYTE, BYTE *, DWORD, UINT);        /* !< Read Sector(s)         */
    uint8_t state;
    DSTATUS (*status)(BYTE);                           /* !< Get Disk Status        */
    DRESULT (*write)(BYTE, const BYTE *, DWORD, UINT); /* !< Write Sector(s)        */
