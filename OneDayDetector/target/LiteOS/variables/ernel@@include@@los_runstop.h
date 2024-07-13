    FLASH_READ_FUNC pfFlashReadFunc;            /* < An abstract function for reading data from a certain flash */
    FLASH_WRITE_FUNC pfFlashWriteFunc;          /* < An abstract function for writing data to a certain flash */
    RUNSTOP_CALLBACK_FUNC pfIdleWakeupCallback; /* < Wake up callback function, called in idle task */
    RUNSTOP_CALLBACK_FUNC pfImageDoneCallback;  /* < Image done callback function, called just after memory is stored */
    RUNSTOP_CALLBACK_FUNC pfWakeupCallback;     /* < Wake up callback function */
    size_t uwFlashEraseAlignSize;               /* < Block align size when erasing data in a certain flash */
    size_t uwFlashReadAlignSize;                /* < Block align size when reading data from a certain flash */
    size_t uwFlashWriteAlignSize;               /* < Block align size when writing data to a certain flash */
    UINTPTR uwImageFlashAddr;                   /* < The flash starting address where the whole application image
    UINTPTR uwWowFlashAddr;                     /* < The flash starting address to which the memory is to be
