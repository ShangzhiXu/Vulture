#define COAP_SERIALIZE_ACCEPT_OPTION(number, field, text)  \
    if (IS_OPTION(coap_pkt, number)) { \
        int i; \
        for (i=0; i<coap_pkt->field##_num; ++i) \
        { \
            PRINTF(text" [%u]\n", coap_pkt->field[i]); \
            option += coap_serialize_int_option(number, current_number, option, coap_pkt->field[i]); \
            current_number = number; \
        } \
    }
#define COAP_SERIALIZE_BLOCK_OPTION(number, field, text)      \
    if (IS_OPTION(coap_pkt, number)) \
    { \
        uint32_t block = coap_pkt->field##_num << 4; \
        PRINTF(text" [%lu%s (%u B/blk)]\n", coap_pkt->field##_num, coap_pkt->field##_more ? "+" : "", coap_pkt->field##_size); \
        if (coap_pkt->field##_more) block |= 0x8; \
        block |= 0xF & coap_log_2(coap_pkt->field##_size/16); \
        PRINTF(text" encoded: 0x%lX\n", block); \
        option += coap_serialize_int_option(number, current_number, option, block); \
        current_number = number; \
    }
#define COAP_SERIALIZE_BYTE_OPTION(number, field, text)      \
    if (IS_OPTION(coap_pkt, number)) { \
        PRINTF(text" %u [0x%02X%02X%02X%02X%02X%02X%02X%02X]\n", coap_pkt->field##_len, \
               coap_pkt->field[0], \
               coap_pkt->field[1], \
               coap_pkt->field[2], \
               coap_pkt->field[3], \
               coap_pkt->field[4], \
               coap_pkt->field[5], \
               coap_pkt->field[6], \
               coap_pkt->field[7] \
              ); /*FIXME always prints 8 bytes */ \
        option += coap_serialize_array_option(number, current_number, option, coap_pkt->field, coap_pkt->field##_len, '\0'); \
        current_number = number; \
    }
#define COAP_SERIALIZE_INT_OPTION(number, field, text)  \
    if (IS_OPTION(coap_pkt, number)) { \
        PRINTF(text" [%u]\n", coap_pkt->field); \
        option += coap_serialize_int_option(number, current_number, option, coap_pkt->field); \
        current_number = number; \
    }
#define COAP_SERIALIZE_MULTI_OPTION(number, field, text)      \
    if (IS_OPTION(coap_pkt, number)) { \
        PRINTF(text); \
        option += coap_serialize_multi_option(number, current_number, option, coap_pkt->field); \
        current_number = number; \
    }
#define COAP_SERIALIZE_STRING_OPTION(number, field, splitter, text)      \
    if (IS_OPTION(coap_pkt, number)) { \
        PRINTF(text" [%.*s]\n", coap_pkt->field##_len, coap_pkt->field); \
        option += coap_serialize_array_option(number, current_number, option, (uint8_t *) coap_pkt->field, coap_pkt->field##_len, splitter); \
        current_number = number; \
    }
#define IS_OPTION(packet, opt) ((opt <= sizeof((packet)->options) * OPTION_MAP_SIZE)?(packet)->options[opt / OPTION_MAP_SIZE] & (1 << (opt % OPTION_MAP_SIZE)):0)
#define MIN(a, b) ((a) < (b)? (a) : (b))
#define SET_OPTION(packet, opt) {if (opt <= sizeof((packet)->options) * OPTION_MAP_SIZE) {(packet)->options[opt / OPTION_MAP_SIZE] |= 1 << (opt % OPTION_MAP_SIZE);}}
