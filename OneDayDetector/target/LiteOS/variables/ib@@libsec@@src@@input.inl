    SecChar *allocatedFloatStr;    /* Initialization must be NULL  to store alloced point */
    void *argPtr;         /* Variable parameter pointer, point to the end of the string */
    size_t arrayWidth;    /* Length of pointer Variable parameter, in charaters */
    unsigned int beyondMax;        /* Non-zero means beyond */
    SecChar buffer[SECUREC_FLOAT_BUFSIZE + 1];
    SecInt ch;            /* Char read from input */
    int charCount;        /* Number of characters processed */
    int convChr;          /* Lowercase format conversion characters */
    SecChar *floatStr;             /* Initialization must point to buffer */
    size_t floatStrTotalLen;       /* Initialization must be length of buffer in charater */
    size_t floatStrUsedLen;        /* Store float string len */
    signed char isWCharOrLong;  /* -1/0 not wchar or long, 1 for wchar or long */
    unsigned char mask; /* Default 0 */
    unsigned int negative;         /* 0 is positive */
    unsigned long number; /* Store input number32 value */
    SecUnsignedInt64 number64; /* Store input number64 value */
    int numberArgType;       /* 1 for 64-bit integer, 0 otherwise. use it as decode function index */
    unsigned int numberState; /* Identifies whether to start processing numbers, 1 is can input number*/
    int numberWidth;      /* 0 = SHORT, 1 = int, > 1  long or L_DOUBLE */
    int oriConvChr;       /* Store  original format conversion, convChr may change when parsing integers */
    unsigned char suppress;     /* 0 is not have %* in format */
    unsigned char *table; /* Default NULL */
    int width;            /* Width number in format */
    int widthSet;         /* 0 is not set width in format */
