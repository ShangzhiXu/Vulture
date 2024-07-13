#define BRIDGEIF_DECL_PROTECT(lev)    SYS_ARCH_DECL_PROTECT(lev)
#define BRIDGEIF_DECL_PROTECT(lev)
#define BRIDGEIF_INITDATA1(max_ports, max_fdb_dynamic_entries, max_fdb_static_entries, ethaddr) {ethaddr, max_ports, max_fdb_dynamic_entries, max_fdb_static_entries}
#define BRIDGEIF_INITDATA2(max_ports, max_fdb_dynamic_entries, max_fdb_static_entries, e0, e1, e2, e3, e4, e5) {{e0, e1, e2, e3, e4, e5}, max_ports, max_fdb_dynamic_entries, max_fdb_static_entries}
#define BRIDGEIF_READ_PROTECT(lev)    SYS_ARCH_PROTECT(lev)
#define BRIDGEIF_READ_PROTECT(lev)
#define BRIDGEIF_READ_UNPROTECT(lev)  SYS_ARCH_UNPROTECT(lev)
#define BRIDGEIF_READ_UNPROTECT(lev)
#define BRIDGEIF_WRITE_PROTECT(lev)
#define BRIDGEIF_WRITE_PROTECT(lev)
#define BRIDGEIF_WRITE_UNPROTECT(lev)
#define BRIDGEIF_WRITE_UNPROTECT(lev)
