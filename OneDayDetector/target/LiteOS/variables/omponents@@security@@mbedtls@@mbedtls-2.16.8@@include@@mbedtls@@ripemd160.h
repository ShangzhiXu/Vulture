    unsigned char buffer[64];   /*!< data block being processed */
    uint32_t state[5];          /*!< intermediate digest state  */
    uint32_t total[2];          /*!< number of bytes processed  */
