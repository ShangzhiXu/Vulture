    char *base;                 /* The pointer to the header of buffered string */
    size_t count;               /* The size of buffered string in bytes */
    const char *cur;            /* The pointer to next read position */
    int fUnGet;                 /* The boolean flag of pushing a char back to read stream */
    size_t fileRealRead;
    unsigned int flag;          /* Mark the properties of input stream */
    unsigned int lastChar;      /* The char code of last input */
    long oriFilePos;            /* The original position of file offset when fscanf is called */
    FILE *pf;                   /* The file pointer */
