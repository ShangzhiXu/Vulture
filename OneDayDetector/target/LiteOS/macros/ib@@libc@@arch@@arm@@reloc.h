#define CRTJMP(pc,sp) __asm__ __volatile__( \
	"mov sp,%1 ; bx %0" : : "r"(pc), "r"(sp) : "memory" )
