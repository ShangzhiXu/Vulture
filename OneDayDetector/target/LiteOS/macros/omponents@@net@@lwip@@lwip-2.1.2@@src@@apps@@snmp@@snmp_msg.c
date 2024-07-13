#define BUILD_EXEC(code, retValue) \
  if ((code) != ERR_OK) { \
    LWIP_DEBUGF(SNMP_DEBUG, ("SNMP error during creation of outbound frame!: " # code)); \
    return retValue; \
  }
#define IF_PARSE_ASSERT(code) PARSE_ASSERT(code, ERR_ARG)
#define IF_PARSE_EXEC(code)   PARSE_EXEC(code, ERR_ARG)
#define OF_BUILD_EXEC(code) BUILD_EXEC(code, ERR_ARG)
#define OVB_BUILD_EXEC(code) BUILD_EXEC(code, ERR_ARG)
#define PARSE_ASSERT(cond, retValue) \
  if (!(cond)) { \
    LWIP_DEBUGF(SNMP_DEBUG, ("SNMP parse assertion failed!: " # cond)); \
    snmp_stats.inasnparseerrs++; \
    return retValue; \
  }
#define PARSE_EXEC(code, retValue) \
  if ((code) != ERR_OK) { \
    LWIP_DEBUGF(SNMP_DEBUG, ("Malformed ASN.1 detected.\n")); \
    snmp_stats.inasnparseerrs++; \
    return retValue; \
  }
#define VB_PARSE_ASSERT(code) PARSE_ASSERT(code, SNMP_VB_ENUMERATOR_ERR_ASN1ERROR)
#define VB_PARSE_EXEC(code)   PARSE_EXEC(code, SNMP_VB_ENUMERATOR_ERR_ASN1ERROR)
