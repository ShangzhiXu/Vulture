#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define SPIFFS_API_CHECK_CFG(fs) \
  if (!SPIFFS_CHECK_CFG((fs))) { \
    (fs)->err_code = SPIFFS_ERR_NOT_CONFIGURED; \
    return SPIFFS_ERR_NOT_CONFIGURED; \
  }
#define SPIFFS_API_CHECK_MOUNT(fs) \
  if (!SPIFFS_CHECK_MOUNT((fs))) { \
    (fs)->err_code = SPIFFS_ERR_NOT_MOUNTED; \
    return SPIFFS_ERR_NOT_MOUNTED; \
  }
#define SPIFFS_API_CHECK_RES(fs, res) \
  if ((res) < SPIFFS_OK) { \
    (fs)->err_code = (res); \
    return (res); \
  }
#define SPIFFS_API_CHECK_RES_UNLOCK(fs, res) \
  if ((res) < SPIFFS_OK) { \
    (fs)->err_code = (res); \
    SPIFFS_UNLOCK(fs); \
    return (res); \
  }
#define SPIFFS_BLOCK_FOR_PAGE(fs, page) \
  ( (page) / SPIFFS_PAGES_PER_BLOCK(fs) )
#define SPIFFS_BLOCK_TO_PADDR(fs, block) \
  ( SPIFFS_CFG_PHYS_ADDR(fs) + (block)* SPIFFS_CFG_LOG_BLOCK_SZ(fs) )
#define SPIFFS_CACHE_PAGE_SIZE(fs) \
  (sizeof(spiffs_cache_page) + SPIFFS_CFG_LOG_PAGE_SZ(fs))
#define SPIFFS_CFG_LOG_BLOCK_SZ(fs) \
  ((fs)->cfg.log_block_size)
#define SPIFFS_CFG_LOG_PAGE_SZ(fs) \
  ((fs)->cfg.log_page_size)
#define SPIFFS_CFG_PHYS_ADDR(fs) \
  ((fs)->cfg.phys_addr)
#define SPIFFS_CFG_PHYS_ERASE_SZ(fs) \
  ((fs)->cfg.phys_erase_block)
#define SPIFFS_CFG_PHYS_SZ(fs) \
  ((fs)->cfg.phys_size)
#define SPIFFS_CHECK_CFG(fs) \
  ((fs)->config_magic == SPIFFS_CONFIG_MAGIC)
#define SPIFFS_CHECK_MAGIC_POSSIBLE(fs) \
  ( (SPIFFS_OBJ_LOOKUP_MAX_ENTRIES(fs) % (SPIFFS_CFG_LOG_PAGE_SZ(fs)/sizeof(spiffs_obj_id))) * sizeof(spiffs_obj_id) \
    <= (SPIFFS_CFG_LOG_PAGE_SZ(fs)-sizeof(spiffs_obj_id)*2) )
#define SPIFFS_CHECK_MOUNT(fs) \
  ((fs)->mounted != 0)
#define SPIFFS_CHECK_RES(res) \
  do { \
    if ((res) < SPIFFS_OK) return (res); \
  } while (0);
#define SPIFFS_DATA_PAGE_SIZE(fs) \
    ( SPIFFS_CFG_LOG_PAGE_SZ(fs) - sizeof(spiffs_page_header) )
#define SPIFFS_DATA_SPAN_IX_FOR_OBJ_IX_SPAN_IX(fs, spix) \
  ( (spix) == 0 ? 0 : (SPIFFS_OBJ_HDR_IX_LEN(fs) + (((spix)-1) * SPIFFS_OBJ_IX_LEN(fs))) )
#define SPIFFS_ERASE_COUNT_PADDR(fs, bix) \
  ( SPIFFS_BLOCK_TO_PADDR(fs, bix) + SPIFFS_OBJ_LOOKUP_PAGES(fs) * SPIFFS_CFG_LOG_PAGE_SZ(fs) - sizeof(spiffs_obj_id) )
#define SPIFFS_FH_OFFS(fs, fh)   ((fh) != 0 ? ((fh) + (fs)->cfg.fh_ix_offset) : 0)
#define SPIFFS_FH_OFFS(fs, fh)   (fh)
#define SPIFFS_FH_UNOFFS(fs, fh) ((fh) != 0 ? ((fh) - (fs)->cfg.fh_ix_offset) : 0)
#define SPIFFS_FH_UNOFFS(fs, fh) (fh)
#define SPIFFS_HAL_ERASE(_fs, _paddr, _len) \
  (_fs)->cfg.hal_erase_f((_fs), (_paddr), (_len))
#define SPIFFS_HAL_ERASE(_fs, _paddr, _len) \
  (_fs)->cfg.hal_erase_f((_paddr), (_len))
#define SPIFFS_HAL_READ(_fs, _paddr, _len, _dst) \
  (_fs)->cfg.hal_read_f((_fs), (_paddr), (_len), (_dst))
#define SPIFFS_HAL_READ(_fs, _paddr, _len, _dst) \
  (_fs)->cfg.hal_read_f((_paddr), (_len), (_dst))
#define SPIFFS_HAL_WRITE(_fs, _paddr, _len, _src) \
  (_fs)->cfg.hal_write_f((_fs), (_paddr), (_len), (_src))
#define SPIFFS_HAL_WRITE(_fs, _paddr, _len, _src) \
  (_fs)->cfg.hal_write_f((_paddr), (_len), (_src))
#define SPIFFS_IS_LOOKUP_PAGE(fs,pix)     \
  (((pix) % SPIFFS_PAGES_PER_BLOCK(fs)) < SPIFFS_OBJ_LOOKUP_PAGES(fs))
#define SPIFFS_MAGIC(fs, bix)           \
  ((spiffs_obj_id)(0x20140529 ^ SPIFFS_CFG_LOG_PAGE_SZ(fs)))
#define SPIFFS_MAGIC(fs, bix)           \
  ((spiffs_obj_id)(0x20140529 ^ SPIFFS_CFG_LOG_PAGE_SZ(fs) ^ ((fs)->block_count - (bix))))
#define SPIFFS_MAGIC_PADDR(fs, bix) \
  ( SPIFFS_BLOCK_TO_PADDR(fs, bix) + SPIFFS_OBJ_LOOKUP_PAGES(fs) * SPIFFS_CFG_LOG_PAGE_SZ(fs) - sizeof(spiffs_obj_id)*2 )
#define SPIFFS_MAX_PAGES(fs) \
  ( SPIFFS_CFG_PHYS_SZ(fs)/SPIFFS_CFG_LOG_PAGE_SZ(fs) )
#define SPIFFS_OBJ_HDR_IX_LEN(fs) \
  ((SPIFFS_CFG_LOG_PAGE_SZ(fs) - sizeof(spiffs_page_object_ix_header))/sizeof(spiffs_page_ix))
#define SPIFFS_OBJ_IX_ENTRY(fs, spix) \
  ((spix) < SPIFFS_OBJ_HDR_IX_LEN(fs) ? (spix) : (((spix)-SPIFFS_OBJ_HDR_IX_LEN(fs))%SPIFFS_OBJ_IX_LEN(fs)))
#define SPIFFS_OBJ_IX_ENTRY_SPAN_IX(fs, spix) \
  ((spix) < SPIFFS_OBJ_HDR_IX_LEN(fs) ? 0 : (1+((spix)-SPIFFS_OBJ_HDR_IX_LEN(fs))/SPIFFS_OBJ_IX_LEN(fs)))
#define SPIFFS_OBJ_IX_LEN(fs) \
  ((SPIFFS_CFG_LOG_PAGE_SZ(fs) - sizeof(spiffs_page_object_ix))/sizeof(spiffs_page_ix))
#define SPIFFS_OBJ_LOOKUP_ENTRY_FOR_PAGE(fs, page) \
  ( (page) % SPIFFS_PAGES_PER_BLOCK(fs) - SPIFFS_OBJ_LOOKUP_PAGES(fs) )
#define SPIFFS_OBJ_LOOKUP_ENTRY_TO_PADDR(fs, block, entry) \
  (SPIFFS_BLOCK_TO_PADDR(fs, block) + (SPIFFS_OBJ_LOOKUP_PAGES(fs) + entry) * SPIFFS_CFG_LOG_PAGE_SZ(fs) )
#define SPIFFS_OBJ_LOOKUP_ENTRY_TO_PIX(fs, block, entry) \
  ((block)*SPIFFS_PAGES_PER_BLOCK(fs) + (SPIFFS_OBJ_LOOKUP_PAGES(fs) + entry))
#define SPIFFS_OBJ_LOOKUP_MAX_ENTRIES(fs) \
  (SPIFFS_PAGES_PER_BLOCK(fs)-SPIFFS_OBJ_LOOKUP_PAGES(fs))
#define SPIFFS_OBJ_LOOKUP_PAGES(fs)     \
  (MAX(1, (SPIFFS_PAGES_PER_BLOCK(fs) * sizeof(spiffs_obj_id)) / SPIFFS_CFG_LOG_PAGE_SZ(fs)) )
#define SPIFFS_PADDR_TO_PAGE(fs, addr) \
  ( ((addr) -  SPIFFS_CFG_PHYS_ADDR(fs)) / SPIFFS_CFG_LOG_PAGE_SZ(fs) )
#define SPIFFS_PADDR_TO_PAGE_OFFSET(fs, addr) \
  ( ((addr) - SPIFFS_CFG_PHYS_ADDR(fs)) % SPIFFS_CFG_LOG_PAGE_SZ(fs) )
#define SPIFFS_PAGES_PER_BLOCK(fs) \
  ( SPIFFS_CFG_LOG_BLOCK_SZ(fs)/SPIFFS_CFG_LOG_PAGE_SZ(fs) )
#define SPIFFS_PAGE_FOR_BLOCK(fs, block) \
  ( (block) * SPIFFS_PAGES_PER_BLOCK(fs) )
#define SPIFFS_PAGE_TO_PADDR(fs, page) \
  ( SPIFFS_CFG_PHYS_ADDR(fs) + (page) * SPIFFS_CFG_LOG_PAGE_SZ(fs) )
#define SPIFFS_VALIDATE_DATA(ph, objid, spix) \
    if (((ph).flags & SPIFFS_PH_FLAG_USED) != 0) return SPIFFS_ERR_IS_FREE; \
    if (((ph).flags & SPIFFS_PH_FLAG_DELET) == 0) return SPIFFS_ERR_DELETED; \
    if (((ph).flags & SPIFFS_PH_FLAG_FINAL) != 0) return SPIFFS_ERR_NOT_FINALIZED; \
    if (((ph).flags & SPIFFS_PH_FLAG_INDEX) == 0) return SPIFFS_ERR_IS_INDEX; \
    if ((objid) & SPIFFS_OBJ_ID_IX_FLAG) return SPIFFS_ERR_IS_INDEX; \
    if ((ph).span_ix != (spix)) return SPIFFS_ERR_DATA_SPAN_MISMATCH;
#define SPIFFS_VALIDATE_OBJIX(ph, objid, spix) \
    if (((ph).flags & SPIFFS_PH_FLAG_USED) != 0) return SPIFFS_ERR_IS_FREE; \
    if (((ph).flags & SPIFFS_PH_FLAG_DELET) == 0) return SPIFFS_ERR_DELETED; \
    if (((ph).flags & SPIFFS_PH_FLAG_FINAL) != 0) return SPIFFS_ERR_NOT_FINALIZED; \
    if (((ph).flags & SPIFFS_PH_FLAG_INDEX) != 0) return SPIFFS_ERR_NOT_INDEX; \
    if (((objid) & SPIFFS_OBJ_ID_IX_FLAG) == 0) return SPIFFS_ERR_NOT_INDEX; \
    if ((ph).span_ix != (spix)) return SPIFFS_ERR_INDEX_SPAN_MISMATCH;
#define _SPIFFS_MEMCPY(__d, __s, __l) do { \
    intptr_t __a1 = (intptr_t)((u8_t*)(__s)); \
    intptr_t __a2 = (intptr_t)((u8_t*)(__s)+(__l)); \
    intptr_t __b1 = (intptr_t)((u8_t*)(__d)); \
    intptr_t __b2 = (intptr_t)((u8_t*)(__d)+(__l)); \
    if (__a1 <= __b2 && __b1 <= __a2) { \
      printf("FATAL OVERLAP: memcpy from %lx..%lx to %lx..%lx\n", __a1, __a2, __b1, __b2); \
      ERREXIT(); \
    } \
    memcpy((__d),(__s),(__l)); \
} while (0)
#define _SPIFFS_MEMCPY(__d, __s, __l) do{memcpy((__d),(__s),(__l));}while(0)
#define _spiffs_rd(fs, op, fh, addr, len, dst) \
    spiffs_phys_rd((fs), (op), (fh), (addr), (len), (dst))
#define _spiffs_rd(fs, op, fh, addr, len, dst) \
    spiffs_phys_rd((fs), (addr), (len), (dst))
#define _spiffs_wr(fs, op, fh, addr, len, src) \
    spiffs_phys_wr((fs), (op), (fh), (addr), (len), (src))
#define _spiffs_wr(fs, op, fh, addr, len, src) \
    spiffs_phys_wr((fs), (addr), (len), (src))
#define spiffs_get_cache(fs) \
  ((spiffs_cache *)((fs)->cache))
#define spiffs_get_cache_page(fs, c, ix) \
  ((u8_t *)(&((c)->cpages[(ix) * SPIFFS_CACHE_PAGE_SIZE(fs)])) + sizeof(spiffs_cache_page))
#define spiffs_get_cache_page_hdr(fs, c, ix) \
  ((spiffs_cache_page *)(&((c)->cpages[(ix) * SPIFFS_CACHE_PAGE_SIZE(fs)])))
