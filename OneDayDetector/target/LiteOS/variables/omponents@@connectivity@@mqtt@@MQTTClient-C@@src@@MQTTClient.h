    unsigned char *buf,
    size_t buf_size,
    int cleansession;
      command_timeout_ms;
    void (*defaultMessageHandler) (MessageData*);
    unsigned char dup;
        void (*fp) (MessageData*);
    enum QoS grantedQoS;
    unsigned short id;
    Network* ipstack;
    int isconnected;
    unsigned int keepAliveInterval;
    Timer last_sent, last_received;
    Timer last_sent, last_received;
    MQTTMessage* message;
    } messageHandlers[MAX_MESSAGE_HANDLERS];      /* Message handlers are indexed by subscription topic */
    Mutex mutex;
    unsigned int next_packetid,
    void *payload;
    size_t payloadlen;
    char ping_outstanding;
    enum QoS qos;
    unsigned char rc;
      *readbuf;
      readbuf_size;
    unsigned char retained;
    unsigned char sessionPresent;
    Thread thread;
        const char* topicFilter;
    MQTTString* topicName;
