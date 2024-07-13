    unsigned int accept_local           :1; /* accept peer's value for ouraddr */
    unsigned int accept_remote          :1; /* accept peer's value for hisaddr */
    unsigned int cflag                  :1;
    u8_t  maxslotindex;		/* values for RFC1332 VJ compression neg. */
    unsigned int neg_addr               :1; /* Negotiate IP Address? */
    unsigned int neg_vj                 :1; /* Van Jacobson Compression? */
    unsigned int old_addrs              :1; /* Use old (IP-Addresses) option? */
    unsigned int old_vj                 :1; /* use old (short) form of VJ option? */
    unsigned int req_addr               :1; /* Ask peer to send IP address? */
    unsigned int req_dns1               :1; /* Ask peer to send primary DNS address? */
    unsigned int req_dns2               :1; /* Ask peer to send secondary DNS address? */
    u16_t vj_protocol;		/* protocol value to use in VJ option */
