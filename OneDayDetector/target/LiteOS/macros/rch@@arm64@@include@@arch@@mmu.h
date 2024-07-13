#define BM(base, count, val) (((UINT64)(val) & (((UINT64)1UL << (count)) - 1)) << (base))
#define MMU_MAIR_ATTR(index, attr) BM((index) * 8, 8, (attr))
#define MMU_PTE_ATTR_ATTR_INDEX(attrindex) BM(2, 3, (attrindex))
