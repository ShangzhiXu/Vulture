		char *ifcu_buf;
		struct ifreq *ifcu_req;
		char ifrn_name[IFNAMSIZ];
		struct sockaddr ifru_addr;
		struct sockaddr ifru_broadaddr;
		char *ifru_data;
		struct sockaddr ifru_dstaddr;
		short int ifru_flags;
		struct sockaddr ifru_hwaddr;
		int ifru_ivalue;
		struct ifmap ifru_map;
		int ifru_mtu;
		struct sockaddr ifru_netmask;
		char ifru_newname[IFNAMSIZ];
		char ifru_slave[IFNAMSIZ];
