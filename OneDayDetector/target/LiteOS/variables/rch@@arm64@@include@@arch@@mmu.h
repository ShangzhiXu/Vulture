    UINTPTR endAddr;   /**< Ending address of a section.     */
    UINTPTR page_addr;            /**< The second page start addr */
    UINTPTR page_descriptor_addr; /**< The second page page table storage addr,
    UINTPTR page_length;          /**< The second page length */
    UINTPTR page_type;            /**< The second page type, it can be set small page ID(4K):
    *stPage; /* <  the goal object of second page, if uwFlag bit3 is FIRST_SECTION,
    UINTPTR startAddr; /**< Starting address of a section.     */
    UINTPTR uwArea;
    UINTPTR uwFlag;    /* <   mode set.
