    unsigned char _pms_dhe_psk[4 + MBEDTLS_MPI_MAX_SIZE
                                 + MBEDTLS_PSK_MAX_LEN];       /* RFC 4279 3 */
    unsigned char _pms_dhm[MBEDTLS_MPI_MAX_SIZE];      /* RFC 5246 8.1.2 */
    unsigned char _pms_ecdh[MBEDTLS_ECP_MAX_BYTES];    /* RFC 4492 5.10 */
    unsigned char _pms_ecdhe_psk[4 + MBEDTLS_ECP_MAX_BYTES
                                   + MBEDTLS_PSK_MAX_LEN];     /* RFC 5489 2 */
    unsigned char _pms_ecjpake[32];     /* Thread spec: SHA-256 output */
    unsigned char _pms_psk[4 + 2 * MBEDTLS_PSK_MAX_LEN];       /* RFC 4279 2 */
    unsigned char _pms_rsa[48];                         /* RFC 5246 8.1.1 */
    unsigned char _pms_rsa_psk[52 + MBEDTLS_PSK_MAX_LEN];      /* RFC 4279 4 */
    unsigned int allow_legacy_renegotiation : 2 ; /*!< MBEDTLS_LEGACY_XXX   */
    const char *alpn_chosen;    /*!<  negotiated protocol                   */
    const char **alpn_list;         /*!< ordered list of protocols          */
    unsigned int anti_replay : 1;   /*!< detect and prevent replay?         */
    unsigned int arc4_disabled : 1; /*!< blacklist RC4 ciphersuites?        */
    unsigned int authmode : 2;      /*!< MBEDTLS_SSL_VERIFY_XXX             */
    unsigned int badmac_limit;      /*!< limit of records with a bad MAC    */
    unsigned badmac_seen;       /*!< records with a bad MAC received    */
    mbedtls_x509_crt *ca_chain;     /*!< trusted CAs                        */
    mbedtls_x509_crl *ca_crl;       /*!< trusted CAs CRLs                   */
    unsigned int cbc_record_splitting : 1;  /*!< do cbc record splitting    */
    const mbedtls_x509_crt_profile *cert_profile; /*!< verification profile */
    unsigned int cert_req_ca_list : 1;  /*!< enable sending CA list in
    int ciphersuite;            /*!< chosen ciphersuite */
    const int *ciphersuite_list[4]; /*!< allowed ciphersuites per version   */
    unsigned char  *cli_id;         /*!<  transport-level ID of the client  */
    size_t          cli_id_len;     /*!<  length of cli_id                  */
    int client_auth;                    /*!<  flag for client auth.   */
    unsigned char *compress_buf;        /*!<  zlib data buffer        */
    int compression;            /*!< chosen compression */
    const mbedtls_ssl_config *conf; /*!< configuration information          */
    unsigned char cur_out_ctr[8]; /*!<  Outgoing record sequence  number. */
    const mbedtls_ecp_group_id *curve_list; /*!< allowed curves             */
    mbedtls_mpi dhm_G;              /*!< generator for DHM                  */
    mbedtls_mpi dhm_P;              /*!< prime modulus for DHM              */
    unsigned int dhm_min_bitlen;    /*!< min. bit length of the DHM prime   */
    uint8_t disable_datagram_packing;  /*!< Disable packing multiple records
    unsigned int disable_renegotiation : 1; /*!< disable renegotiation?     */
    int encrypt_then_mac;       /*!< flag for EtM activation                */
    unsigned int encrypt_then_mac : 1 ; /*!< negotiate encrypt-then-mac?    */
    unsigned int endpoint : 1;      /*!< 0: client, 1: server               */
    unsigned int extended_ms : 1;   /*!< negotiate extended master secret?  */
    mbedtls_ssl_async_cancel_t *f_async_cancel; /*!< cancel asynchronous operation */
    mbedtls_ssl_async_decrypt_t *f_async_decrypt_start; /*!< start asynchronous decryption operation */
    mbedtls_ssl_async_resume_t *f_async_resume; /*!< resume asynchronous operation */
    mbedtls_ssl_async_sign_t *f_async_sign_start; /*!< start asynchronous signature operation */
    int (*f_cookie_check)( void *, const unsigned char *, size_t,
                           const unsigned char *, size_t );
    int (*f_cookie_write)( void *, unsigned char **, unsigned char *,
                           const unsigned char *, size_t );
    void (*f_dbg)(void *, int, const char *, int, const char *);
    int (*f_export_keys)( void *, const unsigned char *,
            const unsigned char *, size_t, size_t, size_t );
    int (*f_get_cache)(void *, mbedtls_ssl_session *);
    mbedtls_ssl_get_timer_t *f_get_timer;       /*!< get timer callback */
    int (*f_psk)(void *, mbedtls_ssl_context *, const unsigned char *, size_t);
    mbedtls_ssl_recv_t *f_recv; /*!< Callback for network receive */
    mbedtls_ssl_recv_timeout_t *f_recv_timeout;
    int  (*f_rng)(void *, unsigned char *, size_t);
    mbedtls_ssl_send_t *f_send; /*!< Callback for network send */
    int (*f_set_cache)(void *, const mbedtls_ssl_session *);
    mbedtls_ssl_set_timer_t *f_set_timer;       /*!< set timer callback */
    int (*f_sni)(void *, mbedtls_ssl_context *, const unsigned char *, size_t);
    int (*f_ticket_parse)( void *, mbedtls_ssl_session *, unsigned char *, size_t);
    int (*f_ticket_write)( void *, const mbedtls_ssl_session *,
            unsigned char *, const unsigned char *, size_t *, uint32_t * );
    int (*f_vrfy)(void *, mbedtls_x509_crt *, int, uint32_t *);
    unsigned int fallback : 1;      /*!< is this a fallback?                */
    mbedtls_ssl_handshake_params *handshake;    /*!<  params required only during
    char *hostname;             /*!< expected peer CN for verification
    uint32_t hs_timeout_max;        /*!< maximum value of the handshake
    uint32_t hs_timeout_min;        /*!< initial value of the handshake
    unsigned char id[32];       /*!< session identifier */
    size_t id_len;              /*!< session id length  */
    unsigned char *in_buf;      /*!< input buffer                     */
    unsigned char *in_ctr;      /*!< 64-bit incoming message counter
    uint16_t in_epoch;          /*!< DTLS epoch for incoming records  */
    unsigned char *in_hdr;      /*!< start of record header           */
    size_t in_hslen;            /*!< current handshake message length,
    unsigned char *in_iv;       /*!< ivlen-byte IV                    */
    size_t in_left;             /*!< amount of data read so far       */
    unsigned char *in_len;      /*!< two-bytes message length field   */
    unsigned char *in_msg;      /*!< message contents (in_iv+ivlen)   */
    size_t in_msglen;           /*!< record header: message length    */
    int in_msgtype;             /*!< record header: message type      */
    unsigned char *in_offt;     /*!< read offset in application data  */
    uint64_t in_window;         /*!< bitmask for replay detection     */
    uint64_t in_window_top;     /*!< last validated record seq_num    */
    int keep_current_message;   /*!< drop or reuse current message
    mbedtls_ssl_key_cert *key_cert; /*!< own certificate/key pair(s)        */
    int major_ver;              /*!< equal to  MBEDTLS_SSL_MAJOR_VERSION_3    */
    unsigned char master[48];   /*!< the master secret  */
    unsigned char max_major_ver;    /*!< max. major version used            */
    unsigned char max_minor_ver;    /*!< max. minor version used            */
    unsigned char mfl_code;     /*!< MaxFragmentLength negotiated by peer */
    unsigned int mfl_code : 3;      /*!< desired fragment length            */
    unsigned char min_major_ver;    /*!< min. major version used            */
    unsigned char min_minor_ver;    /*!< min. minor version used            */
    int minor_ver;              /*!< either 0 (SSL3) or 1 (TLS1.0)    */
    uint16_t mtu;               /*!< path mtu, used to fragment outgoing messages */
    int nb_zero;                /*!< # of 0-length encrypted messages */
    size_t next_record_offset;  /*!< offset of the next record in datagram
    unsigned char *out_buf;     /*!< output buffer                    */
    unsigned char *out_ctr;     /*!< 64-bit outgoing message counter  */
    unsigned char *out_hdr;     /*!< start of record header           */
    unsigned char *out_iv;      /*!< ivlen-byte IV                    */
    size_t out_left;            /*!< amount of data not yet written   */
    unsigned char *out_len;     /*!< two-bytes message length field   */
    unsigned char *out_msg;     /*!< message contents (out_iv+ivlen)  */
    size_t out_msglen;          /*!< record header: message length    */
    int out_msgtype;            /*!< record header: message type      */
    char own_verify_data[MBEDTLS_SSL_VERIFY_DATA_MAX_LEN]; /*!<  previous handshake verify data */
    void *p_async_config_data; /*!< Configuration data set by mbedtls_ssl_conf_async_private_cb(). */
    void *p_bio;                /*!< context for I/O operations   */
    void *p_cache;                  /*!< context for cache callbacks        */
    void *p_cookie;                 /*!< context for the cookie callbacks   */
    void *p_dbg;                    /*!< context for the debug function     */
    void *p_export_keys;            /*!< context for key export callback    */
    void *p_psk;                    /*!< context for PSK callback           */
    void *p_rng;                    /*!< context for the RNG function       */
    void *p_sni;                    /*!< context for SNI callback           */
    void *p_ticket;                 /*!< context for the ticket callbacks   */
    void *p_timer;              /*!< context for the timer callbacks */
    void *p_vrfy;                   /*!< context for X.509 verify calllback */
    mbedtls_x509_crt *peer_cert;        /*!< peer X.509 cert chain */
    char peer_verify_data[MBEDTLS_SSL_VERIFY_DATA_MAX_LEN]; /*!<  previous handshake verify data */
    unsigned char *psk;             /*!< pre-shared key. This field should
    unsigned char *psk_identity;    /*!< identity for PSK negotiation. This
    size_t         psk_identity_len;/*!< length of identity. This field should
    size_t         psk_len;         /*!< length of the pre-shared key. This
    uint32_t read_timeout;          /*!< timeout for mbedtls_ssl_read (ms)  */
    int renego_max_records;         /*!< grace period for renegotiation     */
    unsigned char renego_period[8]; /*!< value of the record counters
    int renego_records_seen;    /*!< Records since renego request, or with DTLS,
    int renego_status;          /*!< Initial, in progress, pending?   */
    int secure_renegotiation;           /*!<  does peer support legacy or
    mbedtls_ssl_session *session;               /*!<  negotiated session data     */
    mbedtls_ssl_session *session_in;            /*!<  current session data (in)   */
    mbedtls_ssl_session *session_negotiate;     /*!<  session data in negotiation */
    mbedtls_ssl_session *session_out;           /*!<  current session data (out)  */
    unsigned int session_tickets : 1;   /*!< use session tickets?           */
    const int *sig_hashes;          /*!< allowed signature hashes           */
    signed char split_done;     /*!< current record already splitted? */
    mbedtls_time_t start;       /*!< starting time      */
    int state;                  /*!< SSL handshake: current state     */
    unsigned char *ticket;      /*!< RFC 5077 session ticket */
    size_t ticket_len;          /*!< session ticket length   */
    uint32_t ticket_lifetime;   /*!< ticket lifetime hint    */
    mbedtls_ssl_transform *transform;           /*!<  negotiated transform params     */
    mbedtls_ssl_transform *transform_in;        /*!<  current transform params (in)   */
    mbedtls_ssl_transform *transform_negotiate; /*!<  transform params in negotiation */
    mbedtls_ssl_transform *transform_out;       /*!<  current transform params (in)   */
    unsigned int transport : 1;     /*!< stream (TLS) or datagram (DTLS)    */
    int trunc_hmac;             /*!< flag for truncated hmac activation   */
    unsigned int trunc_hmac : 1;    /*!< negotiate truncated hmac?          */
    size_t verify_data_len;             /*!<  length of verify data stored   */
    uint32_t verify_result;          /*!<  verification result     */
