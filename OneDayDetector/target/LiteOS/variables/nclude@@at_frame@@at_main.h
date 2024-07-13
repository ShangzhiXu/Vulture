    uint8_t *addr;
    void *arg;
    uint32_t buardrate;
    oob_callback callback;
    int32_t (*cmd)(int8_t *cmd, int32_t len, const char *suffix, char *resp_buf, int *resp_len);
    char *cmd_begin;
    at_cmd_info_s cmd_info;
    oob_cmd_match cmd_match;
    int32_t (*cmd_multi_suffix)(const int8_t *cmd, int len, at_cmd_info_s *cmd_info);
    uint32_t cmd_mux;
    uint8_t  *cmdresp; /* AT cmd response,default 512 bytes */
    void (*deinit)(void);
    uint32_t end;
    uint32_t expire_time;
    UINT32 fd; /* convert between socket_fd and linkid */
    char featurestr[OOB_CMD_LEN];
    int32_t (*get_id)(void);
    int32_t (*handle_data)(const int8_t *data, uint32_t len);
    at_listener *head;
    int32_t (*init)(at_config *config);
    char ipaddr[MAXIPLEN];
    int len;
    uint32_t len;
    char *line_end;
    at_link  *linkid;
    uint32_t linkid_num;
    int match_idx;
    at_msg_type_e msg_type;
    uint32_t  mux_mode;
    uint32_t  mux_mode;
    char *name;
    struct _listner *next;
    oob_t oob[OOB_MAX_NUM];
    int32_t oob_num;
    int32_t (*oob_register)(char *featurestr, int cmdlen, oob_callback callback, oob_cmd_match cmd_match);
    uint32_t ori;
    int port;
    UINT32 qid; /* queue id */
    uint8_t  *recv_buf;
    uint32_t recv_sem;
    UINT8 remote_ip[16];
    UINT32 remote_port;
    char *resp_buf;
    uint32_t *resp_len;
    uint32_t resp_sem;
    uint32_t rid;
    bool     rid_flag;
    int runflag;
    uint8_t  *saveddata;
    void (*step_callback)(void);
    const char **suffix;
    int suffix_num;
    uint32_t timeout; /* command respond timeout */
    uint32_t timeout; /* command respond timeout */
    uint32_t trx_mux;
    bool     trx_mux_flag;
    uint32_t  tsk_hdl;
    UINT32 usable;
    uint32_t usart_port;
    uint32_t user_buf_len; /* malloc 3 block memory for intener use, len * 3 */
    uint8_t  *userdata; /* data form servers,default 512 bytes */
    int32_t (*write)(int8_t *cmd, int8_t *suffix, int8_t *buf, int32_t len);
