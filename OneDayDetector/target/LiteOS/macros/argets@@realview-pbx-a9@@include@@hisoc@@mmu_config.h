#define MMU_GET_FIRST_TABLE_ADDR(addr)    (((addr) / MMU_1M) * 4 + FIRST_PAGE_DESCRIPTOR_ADDR)
#define MMU_GET_FIRST_TABLE_ITEM(addr)    (*(UINT32 *)MMU_GET_FIRST_TABLE_ADDR(addr))
#define MMU_GET_SECOND_TABLE_ADDR(addr)   (MMU_GET_SECOND_TABLE_BASE(addr) + MMU_GET_SECOND_TABLE_OFFSET(addr))
#define MMU_GET_SECOND_TABLE_BASE(addr)   ((MMU_GET_FIRST_TABLE_ITEM(addr)) & 0xfffffc00)
#define MMU_GET_SECOND_TABLE_OFFSET(addr) (((addr) % MMU_1M) / MMU_4K * 4)
#define X_MMU_SECOND_TABLE_APP_PAGE_SET() do {                                          \
    stAppPage.page_addr = MMZ_MEM_BASE;                                                 \
    stAppPage.page_length = MMZ_MEM_LEN;                                                \
    stAppPage.page_descriptor_addr = (UINTPTR)second_page_table_app;                    \
    stAppPage.page_type = MMU_SECOND_LEVEL_SMALL_PAGE_TABLE_ID;                         \
    ArchSecPageEnable(&stAppPage, BUFFER_DISABLE | CACHE_DISABLE | ACCESS_PERM_RW_RW);  \
} while (0)
#define X_MMU_SECOND_TABLE_OS_PAGE_SET() do {                                                               \
    g_mmuOsPage.page_addr = SYS_MEM_BASE;                                                                   \
    g_mmuOsPage.page_length = ((((UINTPTR)&__ram_data_start - SYS_MEM_BASE) + MMU_1M - 1) & ~(MMU_1M - 1)); \
    g_mmuOsPage.page_descriptor_addr = (UINTPTR)second_page_table_os;                                       \
    g_mmuOsPage.page_type = MMU_SECOND_LEVEL_SMALL_PAGE_TABLE_ID;                                           \
    if (g_mmuOsPage.page_length > (sizeof(second_page_table_os) << 10)) {                                   \
        PRINT_ERR("%s,%d\n", __FUNCTION__,__LINE__);                                                        \
        PRINT_ERR("the mapping size of os second page is 0x%x, should be not bigger than 0x%x\n",           \
                  g_mmuOsPage.page_length,(sizeof(second_page_table_os) << 10));                            \
        return;                                                                                             \
    }                                                                                                       \
    ArchSecPageEnable(&g_mmuOsPage, BUFFER_ENABLE | CACHE_ENABLE | ACCESS_PERM_RW_RW);                      \
} while (0)
