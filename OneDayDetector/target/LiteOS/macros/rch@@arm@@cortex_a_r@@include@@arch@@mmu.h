#define ACCESS_TYPE_CLIENT(domainNum)    (0x1U << ((domainNum) << 1))
#define ACCESS_TYPE_MANAGER(domainNum)   (0x3U << ((domainNum) << 1))
#define ACCESS_TYPE_NO_ACCESS(domainNum) (0x0U << ((domainNum) << 1))
#define MMU_AP_STATE(flag)      (((flag) & 0x1U) ? ACCESS_RW : ACCESS_RO)
#define MMU_BUFFER_STATE(flag)  (((flag) >> 2) & 0x1U)
#define MMU_CACHE_STATE(flag)   (((flag) >> 1) & 0x1U)
#define MMU_DESC_OFFSET(vBase)  ((vBase) << 2)
#define MMU_EXECUTE_STATE(flag) (((flag) >> 3) & 0x1U)
#define MMU_GET_AREA(flag)      ((flag) & (0x1U << 4))
#define SECTION_CHANGE(item, cache, buff, access, exeNever) do { \
    union MMUFirstLevelDescriptor desc;                          \
    desc.word = (*(UINTPTR *)(item));                            \
    desc.section.s = (MMU_SHAREABLE);                            \
    X_MMU_SET_BCX(desc.section, (buff), (cache), (exeNever));    \
    X_MMU_SET_AP_ALL(desc.section, (access));                    \
    (*(UINTPTR *)(item)) = desc.word;                            \
} while (0)
#define X_MMU_CHG_DESC(aBase, vBase, size, baseAddress, tableBase) do { \
    UINT32 i, j, k;                                                     \
    k = (tableBase) + MMU_DESC_OFFSET(vBase);                           \
    for (j = (aBase), i = 0; i < (size); ++i, ++j, k += MMU_DESC_LEN) { \
        (baseAddress) = j;                                              \
        *(UINTPTR *)k = desc.word;                                      \
    }                                                                   \
} while (0)
#define X_MMU_CHG_DESC_64K(aBase, vBase, size, baseAddress, tableBase) do { \
    UINT32 i, j, k, n;                                                      \
    k = (tableBase) + MMU_DESC_OFFSET(vBase);                               \
    for (j = (aBase), i = 0; i < (size); ++i, ++j) {                        \
        (baseAddress) = j;                                                  \
        for (n = 0; n < (MMU_64K / MMU_4K); ++n, k += MMU_DESC_LEN) {       \
            *(UINTPTR *)k = desc.word;                                      \
        }                                                                   \
    }                                                                       \
} while (0)
#define X_MMU_ONE_LEVEL_PAGE(aBase, vBase, size, sdomain) do {               \
    union MMUFirstLevelDescriptor desc = { .word = 0 };                      \
    desc.pageTable.id = MMU_FIRST_LEVEL_PAGE_TABLE_ID;                       \
    desc.pageTable.domain = (sdomain);                                       \
    X_MMU_CHG_DESC(aBase, vBase, size, desc.pageTable.baseAddress, ttbBase); \
} while (0)
#define X_MMU_SECTION(aBase, vBase, size, cache, buff, access, exeNever, sdomain) do { \
    union MMUFirstLevelDescriptor desc = { .word = 0 };                                \
    desc.section.id = MMU_FIRST_LEVEL_SECTION_ID;                                      \
    desc.section.s = (MMU_SHAREABLE);                                                  \
    desc.section.domain = (sdomain);                                                   \
    X_MMU_SET_BCX(desc.section, (buff), (cache), (exeNever));                          \
    X_MMU_SET_AP_ALL(desc.section, (access));                                          \
    X_MMU_CHG_DESC(aBase, vBase, size, desc.section.baseAddress, ttbBase);             \
} while (0)
#define X_MMU_SET_AP_ALL(item, access) do { \
    (item).ap1 = (access) & 0x3U;           \
    (item).ap  = (access) >> 2;             \
} while (0)
#define X_MMU_SET_BCX(item, buff, cache, exeNever) do { \
    (item).b = (buff);                                  \
    (item).c = (cache);                                 \
    (item).xn = (exeNever);                             \
} while (0)
#define X_MMU_TWO_LEVEL_PAGE(aBase, vBase, size, cache, buff, access, exeNever) do { \
    union MMUFirstLevelDescriptor desc = { .word = 0 };                              \
    desc.smallPageTable.id = MMU_SECOND_LEVEL_SMALL_PAGE_TABLE_ID >> 1;              \
    desc.smallPageTable.s = (MMU_SHAREABLE);                                         \
    X_MMU_SET_BCX(desc.smallPageTable, (buff), (cache), (exeNever));                 \
    X_MMU_SET_AP_ALL(desc.smallPageTable, (access));                                 \
    X_MMU_CHG_DESC(aBase, vBase, size, desc.smallPageTable.baseAddress, sttBase);    \
} while (0)
#define X_MMU_TWO_LEVEL_PAGE64K(aBase, vBase, size, cache, buff, access, exeNever) do { \
    union MMUFirstLevelDescriptor desc = { .word = 0 };                                 \
    desc.bigPageTable.id = MMU_SECOND_LEVEL_BIG_PAGE_TABLE_ID;                          \
    desc.bigPageTable.s = (MMU_SHAREABLE);                                              \
    X_MMU_SET_BCX(desc.bigPageTable, (buff), (cache), (exeNever));                      \
    X_MMU_SET_AP_ALL(desc.bigPageTable, (access));                                      \
    X_MMU_CHG_DESC_64K(aBase, vBase, size, desc.bigPageTable.baseAddress, sttBase);     \
} while (0)
