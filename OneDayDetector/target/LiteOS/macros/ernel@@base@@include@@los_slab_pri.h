#define ATOMIC_BITSET_SZ(numbits)                  (sizeof(struct AtomicBitset) + \
                                                      ((numbits) + LOW_BITS_MASK) / 8) /* 8, byte alignment */
#define OS_ALLOC_FROM_SLAB_CHECK(slabNode)         (((OsSlabBlockNode *)(slabNode))->magic == (UINT16)OS_SLAB_MAGIC)
#define OS_SLAB_BLOCK_HEAD_GET(ptr)                ((OsSlabBlockNode *)(VOID *)((UINT8 *)(ptr) - \
                                                      sizeof(OsSlabBlockNode)))
#define OS_SLAB_BLOCK_ID_GET(slabNode)             (((OsSlabBlockNode *)(slabNode))->recordId)
#define OS_SLAB_BLOCK_ID_SET(slabNode, id)         (((OsSlabBlockNode *)(slabNode))->recordId = (id))
#define OS_SLAB_BLOCK_MAGIC_GET(slabNode)          (((OsSlabBlockNode *)(slabNode))->magic)
#define OS_SLAB_BLOCK_MAGIC_SET(slabNode)          (((OsSlabBlockNode *)(slabNode))->magic = (UINT16)OS_SLAB_MAGIC)
#define OS_SLAB_BLOCK_SIZE_GET(slabNode)           (((OsSlabBlockNode *)(slabNode))->blkSz)
#define OS_SLAB_BLOCK_SIZE_SET(slabNode, size)     (((OsSlabBlockNode *)(slabNode))->blkSz = (UINT8)(size))
#define OS_SLAB_CLASS_LEVEL_GET(size) \
        (OS_SLAB_LOG2((size - 1) >> (OS_SLAB_LOG2(SLAB_MEM_CALSS_STEP_SIZE - 1))))
#define OS_SLAB_LOG2(value)                        ((UINT32)(32 - CLZ(value) - 1)) /* get highest bit one position */
