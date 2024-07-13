#define CRTJMP(pc,sp) __asm__ __volatile__( \
	"mv sp, %1 ; jr %0" : : "r"(pc), "r"(sp) : "memory" )
