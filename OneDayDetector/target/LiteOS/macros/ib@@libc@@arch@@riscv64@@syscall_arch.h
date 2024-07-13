#define __SYSCALL_LL_E(x) (x)
#define __SYSCALL_LL_O(x) (x)
#define __asm_syscall(...) \
	__asm__ __volatile__ ("ecall\n\t" \
	: "=r"(a0) : __VA_ARGS__ : "memory"); \
	return a0; \

