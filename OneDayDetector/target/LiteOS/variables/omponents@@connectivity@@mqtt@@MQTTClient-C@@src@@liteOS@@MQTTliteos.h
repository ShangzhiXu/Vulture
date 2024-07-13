    void *ctx;
    unsigned long long end_time;
    int fd;
    mqtt_security_info_s *(*get_security_info)(void);
    int (*mqttread) (struct Network*, unsigned char*, int, int);
    int (*mqttwrite) (struct Network*, unsigned char*, int, int);
    void *no_used;
