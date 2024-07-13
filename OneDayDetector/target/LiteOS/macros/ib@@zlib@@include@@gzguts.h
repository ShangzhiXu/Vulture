#  define GT_OFF(x) (sizeof(int) == sizeof(z_off64_t) && (x) > INT_MAX)
#  define GT_OFF(x) (sizeof(int) == sizeof(z_off64_t) && (x) > gz_intmax())
#    define zstrerror() strerror(errno)
#    define zstrerror() "stdio error (consult errno)"
#  define zstrerror() gz_strwinerror((DWORD)GetLastError())
