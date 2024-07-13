		unsigned int cleansession : 1;	  /**< clean session flag */
		unsigned int cleansession : 1;	  /**< cleansession flag */
		unsigned int : 1;	  	          /**< unused */
		unsigned int : 1;	     					/**< unused */
		unsigned int password : 1; 			/**< 3.1 password */
		unsigned int password : 1; 			/**< 3.1 password */
    unsigned int reserved : 7;	  	    /**< unused */
    unsigned int reserved: 7;	     			/**< unused */
		unsigned int sessionpresent : 1;    /**< session present flag */
		unsigned int sessionpresent : 1;    /**< session present flag */
		unsigned int username : 1;			/**< 3.1 user name */
		unsigned int username : 1;			/**< 3.1 user name */
		unsigned int will : 1;			    /**< will flag */
		unsigned int will : 1;			    /**< will flag */
		unsigned int willQoS : 2;				/**< will QoS value */
		unsigned int willQoS : 2;				/**< will QoS value */
		unsigned int willRetain : 1;		/**< will retain setting */
		unsigned int willRetain : 1;		/**< will retain setting */
