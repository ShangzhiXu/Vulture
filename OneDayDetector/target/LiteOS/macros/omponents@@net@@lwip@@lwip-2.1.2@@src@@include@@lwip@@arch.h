#define LWIP_ALIGNMENT_CAST(target_type, val) LWIP_CONST_CAST(target_type, val)
#define LWIP_CONST_CAST(target_type, val) ((target_type)((ptrdiff_t)val))
#define LWIP_DECLARE_MEMORY_ALIGNED(variable_name, size) u8_t variable_name[LWIP_MEM_ALIGN_BUFFER(size)]
#define LWIP_MEM_ALIGN(addr) ((void *)(((mem_ptr_t)(addr) + MEM_ALIGNMENT - 1) & ~(mem_ptr_t)(MEM_ALIGNMENT-1)))
#define LWIP_MEM_ALIGN_BUFFER(size) (((size) + MEM_ALIGNMENT - 1U))
#define LWIP_MEM_ALIGN_SIZE(size) (((size) + MEM_ALIGNMENT - 1U) & ~(MEM_ALIGNMENT-1U))
#define LWIP_PACKED_CAST(target_type, val) LWIP_CONST_CAST(target_type, val)
#define LWIP_PLATFORM_ASSERT(x) do {printf("Assertion \"%s\" failed at line %d in %s\n", \
                                     x, __LINE__, __FILE__); fflush(NULL); abort();} while(0)
#define LWIP_PLATFORM_DIAG(x) do {printf x;} while(0)
#define LWIP_PTR_NUMERIC_CAST(target_type, val) LWIP_CONST_CAST(target_type, val)
#define LWIP_RAND() ((u32_t)rand())
#define LWIP_UNUSED_ARG(x) (void)x
#define PACK_STRUCT_FIELD(x) x
#define PACK_STRUCT_FLD_8(x) PACK_STRUCT_FIELD(x)
#define PACK_STRUCT_FLD_S(x) PACK_STRUCT_FIELD(x)
#define lwip_in_range(c, lo, up)  ((u8_t)(c) >= (lo) && (u8_t)(c) <= (up))
#define lwip_isdigit(c)           lwip_in_range((c), '0', '9')
#define lwip_isdigit(c)           isdigit((unsigned char)(c))
#define lwip_islower(c)           lwip_in_range((c), 'a', 'z')
#define lwip_islower(c)           islower((unsigned char)(c))
#define lwip_isspace(c)           ((c) == ' ' || (c) == '\f' || (c) == '\n' || (c) == '\r' || (c) == '\t' || (c) == '\v')
#define lwip_isspace(c)           isspace((unsigned char)(c))
#define lwip_isupper(c)           lwip_in_range((c), 'A', 'Z')
#define lwip_isupper(c)           isupper((unsigned char)(c))
#define lwip_isxdigit(c)          (lwip_isdigit(c) || lwip_in_range((c), 'a', 'f') || lwip_in_range((c), 'A', 'F'))
#define lwip_isxdigit(c)          isxdigit((unsigned char)(c))
#define lwip_tolower(c)           (lwip_isupper(c) ? (c) - 'A' + 'a' : c)
#define lwip_tolower(c)           tolower((unsigned char)(c))
#define lwip_toupper(c)           (lwip_islower(c) ? (c) - 'a' + 'A' : c)
#define lwip_toupper(c)           toupper((unsigned char)(c))
