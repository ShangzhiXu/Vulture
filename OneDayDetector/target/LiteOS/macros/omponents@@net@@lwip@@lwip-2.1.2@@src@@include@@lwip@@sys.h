#define SYS_ARCH_DEC(var, val) do { \
                                SYS_ARCH_DECL_PROTECT(old_level); \
                                SYS_ARCH_PROTECT(old_level); \
                                var -= val; \
                                SYS_ARCH_UNPROTECT(old_level); \
                              } while(0)
#define SYS_ARCH_DECL_PROTECT(lev) sys_prot_t lev
#define SYS_ARCH_DECL_PROTECT(lev)
#define SYS_ARCH_GET(var, ret) do { \
                                SYS_ARCH_DECL_PROTECT(old_level); \
                                SYS_ARCH_PROTECT(old_level); \
                                ret = var; \
                                SYS_ARCH_UNPROTECT(old_level); \
                              } while(0)
#define SYS_ARCH_INC(var, val) do { \
                                SYS_ARCH_DECL_PROTECT(old_level); \
                                SYS_ARCH_PROTECT(old_level); \
                                var += val; \
                                SYS_ARCH_UNPROTECT(old_level); \
                              } while(0)
#define SYS_ARCH_LOCKED(code) do { \
                                SYS_ARCH_DECL_PROTECT(old_level); \
                                SYS_ARCH_PROTECT(old_level); \
                                code; \
                                SYS_ARCH_UNPROTECT(old_level); \
                              } while(0)
#define SYS_ARCH_PROTECT(lev) lev = sys_arch_protect()
#define SYS_ARCH_PROTECT(lev)
#define SYS_ARCH_SET(var, val) do { \
                                SYS_ARCH_DECL_PROTECT(old_level); \
                                SYS_ARCH_PROTECT(old_level); \
                                var = val; \
                                SYS_ARCH_UNPROTECT(old_level); \
                              } while(0)
#define SYS_ARCH_UNPROTECT(lev) sys_arch_unprotect(lev)
#define SYS_ARCH_UNPROTECT(lev)
#define sys_arch_sem_wait(s,t)
#define sys_mbox_fetch(m,d)
#define sys_mbox_free(m)
#define sys_mbox_new(m, s) ERR_OK
#define sys_mbox_post(m,d)
#define sys_mbox_set_invalid(m)
#define sys_mbox_set_invalid_val(m)
#define sys_mbox_tryfetch(m,d)
#define sys_mbox_trypost(m,d)
#define sys_mbox_valid(m)
#define sys_mbox_valid_val(m)
#define sys_msleep(t)
#define sys_mutex_free(mu)
#define sys_mutex_lock(mu)
#define sys_mutex_new(mu) ERR_OK
#define sys_mutex_set_invalid(mu)
#define sys_mutex_unlock(mu)
#define sys_mutex_valid(mu) 0
#define sys_sem_free(s)
#define sys_sem_new(s, c) ERR_OK
#define sys_sem_set_invalid(s)
#define sys_sem_set_invalid_val(s)
#define sys_sem_signal(s)
#define sys_sem_valid(s) 0
#define sys_sem_valid_val(s) 0
#define sys_sem_wait(s)
#define sys_thread_new(n,t,a,s,p)
