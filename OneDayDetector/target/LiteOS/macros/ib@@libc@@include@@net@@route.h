#define RT_ADDRCLASS(flags)	((uint32_t) flags >> 23)
#define RT_LOCALADDR(flags)	((flags & RTF_ADDRCLASSMASK) \
				 == (RTF_LOCAL|RTF_INTERFACE))
#define RT_TOS(tos)		((tos) & IPTOS_TOS_MASK)
