    char *allocatedFmtStr;            /* Initialization must be NULL  to store alloced point */
    SecBuffer buffer;
    char buffer[SECUREC_FMT_STR_LEN];
    int bufferSize;                   /* The size of floatBuffer */
    const char *digits;                 /* Point to the hexadecimal subset */
    int dynPrecision;                   /* %.*  1 precision from variable parameter ;0 not */
    int dynWidth;                       /* %*   1 width from variable parameter ;0 not */
    unsigned int flags;
    int fldWidth;
    char *floatBuffer;                /* Use heap memory if the SecFormatAttr.buffer is not enough */
    char *fmtStr;                     /* Initialization must point to buffer */
    int padding;                        /* Padding len */
    int precision;
    SecChar prefix[SECUREC_PREFIX_LEN]; /* Prefix is  0 or 0x */
    int prefixLen;                      /* Length of prefix, 0 or 1 or 2 */
    unsigned int radix;                 /* Use for output number , default set to 10 */
    char *str;                  /* Not a null terminated  string */
    char str[SECUREC_BUFFER_SIZE + 1];
    SecFormatBuf text;                  /* Point to formated string */
    int textIsWide;                     /* Flag for text is wide chars ; 0 is not wide char */
    int textLen;                        /* Length of the text */
    wchar_t *wStr;
    wchar_t wStr[SECUREC_WCHAR_BUFFER_SIZE]; /* Just for %lc */
