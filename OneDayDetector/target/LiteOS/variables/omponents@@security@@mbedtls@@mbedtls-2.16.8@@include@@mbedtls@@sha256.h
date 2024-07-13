    unsigned char buffer[64];   /*!< The data block being processed. */
    int is224;                  /*!< Determines which function to use:
    uint32_t state[8];          /*!< The intermediate digest state.  */
    uint32_t total[2];          /*!< The number of Bytes processed.  */
