#define SNMP_ASN1_SET_TLV_PARAMS(tlv, type_, length_len_, value_len_) do { (tlv).type = (type_); (tlv).type_len = 0; (tlv).length_len = (length_len_); (tlv).value_len = (value_len_); } while (0);
#define SNMP_ASN1_TLV_HDR_LENGTH(tlv) ((tlv).type_len + (tlv).length_len)
#define SNMP_ASN1_TLV_LENGTH(tlv) ((tlv).type_len + (tlv).length_len + (tlv).value_len)
