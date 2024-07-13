  void (*close)(void* handle);
  void* (*open)(const char* fname, const char* mode, u8_t write);
  int (*read)(void* handle, void* buf, int bytes);
  int (*write)(void* handle, struct pbuf* p);
