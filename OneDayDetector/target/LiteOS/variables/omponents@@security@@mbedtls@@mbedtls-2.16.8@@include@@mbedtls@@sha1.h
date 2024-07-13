    unsigned char buffer[64];   /*!< The data block being processed. */
    uint32_t state[5];          /*!< The intermediate digest state.  */
    uint32_t total[2];          /*!< The number of Bytes processed.  */
