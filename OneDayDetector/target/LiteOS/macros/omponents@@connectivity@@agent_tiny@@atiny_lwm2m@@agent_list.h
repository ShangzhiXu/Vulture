#define ATINY_DL_LIST_ENTRY(item, type, member)\
    ((type *)((char *)item - ATINY_OFF_SET_OF(type, member)))\

#define ATINY_DL_LIST_FIRST(object) ((object)->next)
#define ATINY_DL_LIST_FOR_EACH(item, list)\
    for ((item) = (list)->next;\
        (item) != (list);\
        (item) = (item)->next)
#define ATINY_DL_LIST_FOR_EACH_ENTRY(item, list, type, member)\
    for (item = ATINY_DL_LIST_ENTRY((list)->next, type, member);\
        &item->member != (list);\
        item = ATINY_DL_LIST_ENTRY(item->member.next, type, member))
#define ATINY_DL_LIST_FOR_EACH_ENTRY_SAFE(item, next, list, type, member)\
    for (item = ATINY_DL_LIST_ENTRY((list)->next, type, member),\
        next = ATINY_DL_LIST_ENTRY(item->member->next, type, member);\
        &item->member != (list);\
        item = next, item = ATINY_DL_LIST_ENTRY(item->member.next, type, member))
#define ATINY_DL_LIST_FOR_EACH_SAFE(item, next, list)\
    for (item = (list)->next, next = item->next; item != (list);\
        item = next, next = item->next)
#define ATINY_DL_LIST_HEAD(list)\
            atiny_dl_list list = { &(list), &(list) }
#define ATINY_FIELD_TO_STRUCT(field_addr, type, member) \
    ((type *)((char *)(field_addr) - ATINY_OFF_SET_OF(type, member)))
#define ATINY_OFFSET_OF_FIELD(type, field)    ((UINT32)&(((type *)0)->field))
#define ATINY_OFF_SET_OF(type, member) ((long)&((type *)0)->member)
