    u_short bsd_bits;		/* # bits/code for BSD Compress */
    unsigned int bsd_compress     :1; /* do BSD Compress? */
    unsigned int deflate          :1; /* do Deflate? */
    unsigned int deflate_correct  :1; /* use correct code for deflate? */
    unsigned int deflate_draft    :1; /* use draft RFC code for deflate? */
    u8_t method;		/* code for chosen compression method */
    u8_t mppe;			/* MPPE bitfield */
    unsigned int predictor_1      :1; /* do Predictor-1? */
    unsigned int predictor_2      :1; /* do Predictor-2? */
