#define API_EXPR_DEREF(expr)            expr
#define API_EXPR_DEREF(expr)            (*(expr))
#define API_EXPR_REF(expr)              (&(expr))
#define API_EXPR_REF(expr)              expr
#define API_EXPR_REF_SEM(expr)          (expr)
#define API_EXPR_REF_SEM(expr)          API_EXPR_REF(expr)
#define API_EXPR_REF_SEM(expr)          API_EXPR_REF(expr)
#define API_MSG_M_DEF(m)                m
#define API_MSG_M_DEF(m)                *m
#define API_MSG_M_DEF_C(t, m)           t m
#define API_MSG_M_DEF_C(t, m)           const t * m
#define API_VAR_ALLOC(type, pool, name, errorval)
#define API_VAR_ALLOC(type, pool, name, errorval) API_VAR_ALLOC_EXT(type, pool, name, return errorval)
#define API_VAR_ALLOC_EXT(type, pool, name, errorblock) do { \
                                          name = (type *)memp_malloc(pool); \
                                          if (name == NULL) { \
                                            errorblock; \
                                          } \
                                        } while(0)
#define API_VAR_ALLOC_EXT(type, pool, name, errorblock)
#define API_VAR_ALLOC_POOL(type, pool, name, errorval) do { \
                                          name = (type *)LWIP_MEMPOOL_ALLOC(pool); \
                                          if (name == NULL) { \
                                            return errorval; \
                                          } \
                                        } while(0)
#define API_VAR_ALLOC_POOL(type, pool, name, errorval)
#define API_VAR_DECLARE(type, name)     type * name
#define API_VAR_DECLARE(type, name)     type name
#define API_VAR_FREE(pool, name)        memp_free(pool, name)
#define API_VAR_FREE(pool, name)
#define API_VAR_FREE_POOL(pool, name)   LWIP_MEMPOOL_FREE(pool, name)
#define API_VAR_FREE_POOL(pool, name)
#define API_VAR_REF(name)               (*(name))
#define API_VAR_REF(name)               name
