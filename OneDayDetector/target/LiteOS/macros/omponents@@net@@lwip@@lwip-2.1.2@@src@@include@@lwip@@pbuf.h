  #define PBUF_CHECK_FREE_OOSEQ()
#define PBUF_CHECK_FREE_OOSEQ() do { if(pbuf_free_ooseq_pending) { \
  /* pbuf_alloc() reported PBUF_POOL to be empty -> try to free some \
     ooseq queued pbufs now */ \
  pbuf_free_ooseq(); }}while(0)
#define PBUF_NEEDS_COPY(p)  ((p)->type_internal & PBUF_TYPE_FLAG_DATA_VOLATILE)
#define pbuf_get_allocsrc(p)          ((p)->type_internal & PBUF_TYPE_ALLOC_SRC_MASK)
#define pbuf_init()
#define pbuf_match_allocsrc(p, type)  (pbuf_get_allocsrc(p) == ((type) & PBUF_TYPE_ALLOC_SRC_MASK))
#define pbuf_match_type(p, type)      pbuf_match_allocsrc(p, type)
