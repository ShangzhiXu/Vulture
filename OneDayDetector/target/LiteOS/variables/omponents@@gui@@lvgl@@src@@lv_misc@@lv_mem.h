    uint8_t frag_pct; /**< Amount of fragmentation */
    uint32_t free_biggest_size;
    uint32_t free_cnt;
    uint32_t free_size; /**< Size of available memory */
    void * p;
    uint16_t size;
    uint32_t total_size; /**< Total heap size */
    uint8_t used    : 1;
    uint32_t used_cnt;
    uint8_t used_pct; /**< Percentage used */
