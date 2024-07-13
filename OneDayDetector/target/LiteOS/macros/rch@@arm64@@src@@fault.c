#define GET_IL(esr) ((esr) & (1U << 25))
#define IS_VALID_ADDR(ptr) (((ptr) >= SYS_MEM_BASE) &&       \
                            ((ptr) <= g_sys_mem_addr_end) && \
                            IS_ALIGNED((ptr), sizeof(CHAR *)))
#define NBIT(val, high, low) (((val) >> (low)) & ((1U << (((high) - (low)) + 1)) - 1))
