    unsigned char buffer[16];   /*!< data block being processed */
    unsigned char cksum[16];    /*!< checksum of the data block */
    size_t left;                /*!< amount of data in buffer   */
    unsigned char state[48];    /*!< intermediate digest state  */
