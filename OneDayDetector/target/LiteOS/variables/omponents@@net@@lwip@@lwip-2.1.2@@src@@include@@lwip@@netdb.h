    struct sockaddr  *ai_addr;       /* Socket address of socket. */
    socklen_t         ai_addrlen;    /* Length of socket address. */
    char             *ai_canonname;  /* Canonical name of service location. */
    int               ai_family;     /* Address family of socket. */
    int               ai_flags;      /* Input flags. */
    struct addrinfo  *ai_next;       /* Pointer to next in list. */
    int               ai_protocol;   /* Protocol of socket. */
    int               ai_socktype;   /* Socket type. */
    char **h_addr_list; /* A pointer to an array of pointers to network addresses (in
    int    h_addrtype;  /* Address type. */
    char **h_aliases;   /* A pointer to an array of pointers to alternative host names,
    int    h_length;    /* The length, in bytes, of the address. */
    char  *h_name;      /* Official name of the host. */
