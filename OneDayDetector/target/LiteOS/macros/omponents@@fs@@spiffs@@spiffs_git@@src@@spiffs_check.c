#define CHECK_CB(_fs, _type, _rep, _arg1, _arg2) \
  do { \
    if ((_fs)->check_cb_f) (_fs)->check_cb_f((_fs), (_type), (_rep), (_arg1), (_arg2)); \
  } while (0)
#define CHECK_CB(_fs, _type, _rep, _arg1, _arg2) \
  do { \
    if ((_fs)->check_cb_f) (_fs)->check_cb_f((_type), (_rep), (_arg1), (_arg2)); \
  } while (0)
