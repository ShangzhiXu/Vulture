    unsigned char buffer[128];  /*!< The data block being processed. */
    int is384;                  /*!< Determines which function to use:
    uint64_t state[8];          /*!< The intermediate digest state. */
    uint64_t total[2];          /*!< The number of Bytes processed. */
