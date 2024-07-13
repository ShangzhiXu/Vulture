#define PRV_CONCAT_STR(buf, len, index, str, str_len)    \
    {                                                    \
        if ((len)-(index) < (str_len)) return -1;        \
        memcpy((buf)+(index), (str), (str_len));         \
        (index) += (str_len);                            \
    }
