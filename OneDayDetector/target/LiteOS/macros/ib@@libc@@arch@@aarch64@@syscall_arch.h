#define __SYSCALL_LL_E(x) (x)
#define __SYSCALL_LL_O(x) (x)
#define __asm_syscall(...) do { \
	__asm__ __volatile__ ( "svc 0" \
	: "=r"(x0) : __VA_ARGS__ : "memory", "cc"); \
	return x0; \
	} while (0)
