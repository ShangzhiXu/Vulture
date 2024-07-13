#define _T(x) L ## x
#define _T(x) u8 ## x
#define _T(x) U ## x
#define _T(x) x
#define _TEXT(x) L ## x
#define _TEXT(x) u8 ## x
#define _TEXT(x) U ## x
#define _TEXT(x) x
#define f_eof(fp) ((int)((fp)->fptr == (fp)->obj.objsize))
#define f_error(fp) ((fp)->err)
#define f_rewind(fp) f_lseek((fp), 0)
#define f_rewinddir(dp) f_readdir((dp), 0)
#define f_rmdir(path) f_unlink(path)
#define f_size(fp) ((fp)->obj.objsize)
#define f_tell(fp) ((fp)->fptr)
#define f_unmount(path) f_mount(0, path, 0)
