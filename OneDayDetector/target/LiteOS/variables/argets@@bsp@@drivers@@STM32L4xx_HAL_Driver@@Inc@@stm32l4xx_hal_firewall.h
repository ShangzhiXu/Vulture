  uint32_t CodeSegmentLength;              /*!< Protected code segment length in bytes. This value is 22-bit long, the 8 LSB bits are 
  uint32_t CodeSegmentStartAddress;        /*!< Protected code segment start address. This value is 24-bit long, the 8 LSB bits are
  uint32_t NonVDataSegmentLength;          /*!< Protected non-volatile data segment length in bytes. This value is 22-bit long, the 8 LSB
  uint32_t NonVDataSegmentStartAddress;    /*!< Protected non-volatile data segment start address. This value is 24-bit long, the 8 LSB
  uint32_t VDataSegmentLength;             /*!< Protected volatile data segment length in bytes. This value is 17-bit long, the 6 LSB
  uint32_t VDataSegmentStartAddress;       /*!< Protected volatile data segment start address. This value is 17-bit long, the 6 LSB bits
  uint32_t VolatileDataExecution;          /*!< Set VDE bit specifying whether or not the volatile data segment can be executed.
  uint32_t VolatileDataShared;             /*!< Set VDS bit in specifying whether or not the volatile data segment can be shared with a 
