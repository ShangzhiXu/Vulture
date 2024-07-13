#define SECUREC_BEGIN_WITH_BOM(s, len) SECUREC_BEGIN_WITH_UCS_BOM((s), (len))
#define SECUREC_BEGIN_WITH_BOM(s, len) SECUREC_BEGIN_WITH_UTF8_BOM((s), (len))
#define SECUREC_BEGIN_WITH_UCS_BOM(s, len) ((len) >= SECUREC_UCS_BOM_HEADER_SIZE && \
    (((unsigned char)((s)[0]) == SECUREC_UCS_BOM_HEADER_LE_1ST && \
    (unsigned char)((s)[1]) == SECUREC_UCS_BOM_HEADER_LE_2ST) || \
    ((unsigned char)((s)[0]) == SECUREC_UCS_BOM_HEADER_BE_1ST && \
    (unsigned char)((s)[1]) == SECUREC_UCS_BOM_HEADER_BE_2ST)))
#define SECUREC_BEGIN_WITH_UTF8_BOM(s, len) ((len) >= SECUREC_UTF8_BOM_HEADER_SIZE && \
    (unsigned char)((s)[0]) == SECUREC_UTF8_BOM_HEADER_1ST && \
    (unsigned char)((s)[1]) == SECUREC_UTF8_BOM_HEADER_2ND && \
    (unsigned char)((s)[2]) == SECUREC_UTF8_BOM_HEADER_3RD)
#define SECUREC_FILE_STREAM_FROM_FILE(stream, fp) do { \
    (stream)->flag = SECUREC_FILE_STREAM_FLAG; \
    (stream)->base = NULL; \
    (stream)->cur = NULL; \
    (stream)->count = 0; \
    SECUREC_FILE_STREAM_INIT_FILE((stream), (fp)); \
} SECUREC_WHILE_ZERO
#define SECUREC_FILE_STREAM_FROM_STDIN(stream) do { \
    (stream)->flag = SECUREC_PIPE_STREAM_FLAG; \
    (stream)->base = NULL; \
    (stream)->cur = NULL; \
    (stream)->count = 0; \
    SECUREC_FILE_STREAM_INIT_FILE((stream), SECUREC_STREAM_STDIN); \
} SECUREC_WHILE_ZERO
#define SECUREC_FILE_STREAM_FROM_STRING(stream, buf, cnt) do { \
    (stream)->flag = SECUREC_MEM_STR_FLAG; \
    (stream)->base = NULL; \
    (stream)->cur = (buf); \
    (stream)->count = (cnt); \
    SECUREC_FILE_STREAM_INIT_FILE((stream), NULL); \
} SECUREC_WHILE_ZERO
#define SECUREC_FILE_STREAM_INIT_FILE(stream, fp) do { \
    (stream)->pf = (fp); \
    (stream)->fileRealRead = 0; \
    (stream)->oriFilePos = 0; \
    (stream)->lastChar = 0; \
    (stream)->fUnGet = 0; \
} SECUREC_WHILE_ZERO
#define SECUREC_FILE_STREAM_INIT_FILE(stream, fp) do { \
    (stream)->pf = (fp); \
    (stream)->fileRealRead = 0; \
    (stream)->oriFilePos = 0; \
} SECUREC_WHILE_ZERO
#define SECUREC_FILE_STREAM_INIT_FILE(stream, fp)
#define SECUREC_LOCK_FILE(s)
#define SECUREC_LOCK_STDIN(i, s)
#define SECUREC_UNLOCK_FILE(s)
#define SECUREC_UNLOCK_STDIN(i, s)
#define isalpha(c) (isupper(c) || (islower(c)))
#define isascii(c) (((unsigned char)(c)) <= 0x7f)
#define isdigit(c) ((c) >= '0' && (c) <= '9')
#define islower(c) ((c) >= 'a' && (c) <= 'z')
#define isspace(c) (((c) == ' ') || ((c) == '\t') || ((c) == '\r') || ((c) == '\n'))
#define isupper(c) ((c) >= 'A' && (c) <= 'Z')
#define iswspace(c) (((c) == L' ') || ((c) == L'\t') || ((c) == L'\r') || ((c) == L'\n'))
#define isxdigit(c) (isdigit(c) || isxupper(c) || isxlower(c))
#define isxlower(c) ((c) >= 'a' && (c) <= 'f')
#define isxupper(c) ((c) >= 'A' && (c) <= 'F')
