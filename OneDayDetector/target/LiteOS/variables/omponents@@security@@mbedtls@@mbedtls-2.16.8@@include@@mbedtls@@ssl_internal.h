    unsigned char alt_out_ctr[8];       /*!<  Alternative record epoch/counter
    mbedtls_ssl_transform *alt_transform_out;   /*!<  Alternative transform for
    unsigned int async_in_progress : 1; /*!< an asynchronous operation is in progress */
    } buffering;
    void (*calc_finished)(mbedtls_ssl_context *, unsigned char *, int);
    void (*calc_verify)(mbedtls_ssl_context *, unsigned char *);
    mbedtls_x509_crt *cert;                 /*!< cert                       */
    mbedtls_cipher_context_t cipher_ctx_dec;    /*!<  decryption context      */
    mbedtls_cipher_context_t cipher_ctx_enc;    /*!<  encryption context      */
    const mbedtls_ssl_ciphersuite_t *ciphersuite_info;
    int cli_exts;                       /*!< client extension presence*/
    z_stream ctx_deflate;               /*!<  compression context     */
    z_stream ctx_inflate;               /*!<  decompression context   */
    mbedtls_ssl_flight_item *cur_msg;   /*!<  Current message in flight      */
    unsigned char *cur_msg_p;           /*!<  Position in current message    */
    const mbedtls_ecp_curve_info **curves;      /*!<  Supported elliptic curves */
            unsigned char *data;
            unsigned char *data;
            size_t data_len;
    mbedtls_dhm_context dhm_ctx;                /*!<  DHM key exchange        */
    mbedtls_ecdh_context ecdh_ctx;              /*!<  ECDH key exchange       */
    mbedtls_md_type_t ecdsa;
    unsigned char *ecjpake_cache;               /*!< Cache for ClientHello ext */
    size_t ecjpake_cache_len;                   /*!< Length of cached data */
    mbedtls_ecjpake_context ecjpake_ctx;        /*!< EC J-PAKE key exchange */
    mbedtls_x509_crt_restart_ctx ecrs_ctx;  /*!< restart context            */
    int ecrs_enabled;                   /*!< Handshake supports EC restart? */
    size_t ecrs_n;                      /*!< place for saving a length      */
    } ecrs_state;                       /*!< current (or last) operation    */
            unsigned epoch;
    int extended_ms;                    /*!< use Extended Master Secret? */
       mbedtls_md5_context fin_md5;
      mbedtls_sha1_context fin_sha1;
    mbedtls_sha256_context fin_sha256;
    mbedtls_sha512_context fin_sha512;
    size_t fixed_ivlen;                 /*!<  Fixed part of IV (AEAD) */
    mbedtls_ssl_flight_item *flight;    /*!<  Current outgoing flight        */
        } future_record;
    mbedtls_ssl_sig_hash_set_t hash_algs;             /*!<  Set of suitable sig-hash pairs */
        } hs[MBEDTLS_SSL_MAX_BUFFERED_HS];
    unsigned int in_flight_start_seq;   /*!<  Minimum message sequence in the
    unsigned int in_msg_seq;            /*!<  Incoming handshake sequence number */
            unsigned is_complete   : 1;
            unsigned is_fragmented : 1;
            unsigned is_valid      : 1;
    unsigned char iv_dec[16];           /*!<  IV (decryption)         */
    unsigned char iv_enc[16];           /*!<  IV (encryption)         */
    size_t ivlen;                       /*!<  IV length               */
    mbedtls_pk_context *key;                /*!< private key                */
    mbedtls_ssl_key_cert *key_cert;     /*!< chosen key/cert pair (server)  */
    unsigned int keylen;                /*!<  symmetric key length (bytes)  */
            size_t len;
    size_t len;             /*!< length of p                            */
    unsigned char mac_dec[20];          /*!<  SSL v3.0 secret (dec)   */
    unsigned char mac_enc[20];          /*!<  SSL v3.0 secret (enc)   */
    size_t maclen;                      /*!<  MAC length              */
    int max_major_ver;                  /*!< max. major version client*/
    int max_minor_ver;                  /*!< max. minor version client*/
    mbedtls_md_context_t md_ctx_dec;            /*!<  MAC (decryption)        */
    mbedtls_md_context_t md_ctx_enc;            /*!<  MAC (encryption)        */
    size_t minlen;                      /*!<  min. ciphertext length  */
    uint16_t mtu;                       /*!<  Handshake mtu, used to fragment outgoing messages */
    int new_session_ticket;             /*!< use NewSessionTicket?    */
    mbedtls_ssl_flight_item *next;  /*!< next handshake message(s)              */
    mbedtls_ssl_key_cert *next;             /*!< next key/cert pair         */
    unsigned int out_msg_seq;           /*!<  Outgoing handshake sequence number */
    unsigned char *p;       /*!< message, including handshake headers   */
    size_t pmslen;                      /*!<  premaster length        */
    unsigned char premaster[MBEDTLS_PREMASTER_SIZE];
    unsigned char *psk;                 /*!<  PSK from the callback         */
    size_t psk_len;                     /*!<  Length of PSK from callback   */
    unsigned char randbytes[64];        /*!<  random bytes            */
    int resume;                         /*!<  session resume indicator*/
    unsigned char retransmit_state;     /*!<  Retransmission state           */
    uint32_t retransmit_timeout;        /*!<  Current value of timeout       */
    mbedtls_md_type_t rsa;
        uint8_t seen_ccs;               /*!< Indicates if a CCS message has
    int sni_authmode;                   /*!< authmode from SNI callback     */
    mbedtls_x509_crt *sni_ca_chain;     /*!< trusted CAs from SNI callback  */
    mbedtls_x509_crl *sni_ca_crl;       /*!< trusted CAs CRLs from SNI      */
    mbedtls_ssl_key_cert *sni_key_cert; /*!< key/cert list from SNI         */
    int  (*tls_prf)(const unsigned char *, size_t, const char *,
                    const unsigned char *, size_t,
                    unsigned char *, size_t);
        size_t total_bytes_buffered; /*!< Cumulative size of heap allocated
    unsigned char type;     /*!< type of the message: handshake or CCS  */
    void (*update_checksum)(mbedtls_ssl_context *, const unsigned char *, size_t);
    void *user_async_ctx;
    unsigned char *verify_cookie;       /*!<  Cli: HelloVerifyRequest cookie
    unsigned char verify_cookie_len;    /*!<  Cli: cookie length
