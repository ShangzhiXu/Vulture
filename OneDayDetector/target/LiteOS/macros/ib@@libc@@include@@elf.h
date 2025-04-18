#define DT_ADDRTAGIDX(tag)	(DT_ADDRRNGHI - (tag))
#define DT_EXTRATAGIDX(tag)	((Elf32_Word)-((Elf32_Sword) (tag) <<1>>1)-1)
#define DT_VALTAGIDX(tag)	(DT_VALRNGHI - (tag))
#define DT_VERSIONTAGIDX(tag)	(DT_VERNEEDNUM - (tag))
#define EF_ARM_EABI_VERSION(flags)	((flags) & EF_ARM_EABIMASK)
#define ELF32_M_INFO(sym, size)	(((sym) << 8) + (unsigned char) (size))
#define ELF32_M_SIZE(info)	((unsigned char) (info))
#define ELF32_M_SYM(info)	((info) >> 8)
#define ELF32_R_INFO(sym, type)		(((sym) << 8) + ((type) & 0xff))
#define ELF32_R_SYM(val)		((val) >> 8)
#define ELF32_R_TYPE(val)		((val) & 0xff)
#define ELF32_ST_BIND(val)		(((unsigned char) (val)) >> 4)
#define ELF32_ST_INFO(bind, type)	(((bind) << 4) + ((type) & 0xf))
#define ELF32_ST_TYPE(val)		((val) & 0xf)
#define ELF32_ST_VISIBILITY(o)	((o) & 0x03)
#define ELF64_M_INFO(sym, size)	ELF32_M_INFO (sym, size)
#define ELF64_M_SIZE(info)	ELF32_M_SIZE (info)
#define ELF64_M_SYM(info)	ELF32_M_SYM (info)
#define ELF64_R_INFO(sym,type)		((((Elf64_Xword) (sym)) << 32) + (type))
#define ELF64_R_SYM(i)			((i) >> 32)
#define ELF64_R_TYPE(i)			((i) & 0xffffffff)
#define ELF64_ST_BIND(val)		ELF32_ST_BIND (val)
#define ELF64_ST_INFO(bind, type)	ELF32_ST_INFO ((bind), (type))
#define ELF64_ST_TYPE(val)		ELF32_ST_TYPE (val)
#define ELF64_ST_VISIBILITY(o)	ELF32_ST_VISIBILITY (o)
#define PPC64_LOCAL_ENTRY_OFFSET(x) (1 << (((x)&0xe0)>>5) & 0xfc)
