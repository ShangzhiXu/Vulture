#define LOS_DL_LIST_ENTRY(item, type, member) \
    ((type *)(VOID *)((CHAR *)(item) - LOS_OFF_SET_OF(type, member)))
#define LOS_DL_LIST_FIRST(object) ((object)->pstNext)
#define LOS_DL_LIST_FOR_EACH(item, list) \
    for (item = (list)->pstNext;         \
         (item) != (list);               \
         item = (item)->pstNext)
#define LOS_DL_LIST_FOR_EACH_ENTRY(item, list, type, member)             \
    for (item = LOS_DL_LIST_ENTRY((list)->pstNext, type, member);        \
         &(item)->member != (list);                                      \
         item = LOS_DL_LIST_ENTRY((item)->member.pstNext, type, member))
#define LOS_DL_LIST_FOR_EACH_ENTRY_HOOK(item, list, type, member, hook)  \
    for (item = LOS_DL_LIST_ENTRY((list)->pstNext, type, member), hook;  \
         &(item)->member != (list);                                      \
         item = LOS_DL_LIST_ENTRY((item)->member.pstNext, type, member), hook)
#define LOS_DL_LIST_FOR_EACH_ENTRY_SAFE(item, next, list, type, member)               \
    for (item = LOS_DL_LIST_ENTRY((list)->pstNext, type, member),                     \
         next = LOS_DL_LIST_ENTRY((item)->member->pstNext, type, member);             \
         &(item)->member != (list);                                                   \
         item = next, next = LOS_DL_LIST_ENTRY((item)->member.pstNext, type, member))
#define LOS_DL_LIST_FOR_EACH_SAFE(item, next, list)      \
    for (item = (list)->pstNext, next = (item)->pstNext; \
         (item) != (list);                               \
         item = next, next = (item)->pstNext)
#define LOS_DL_LIST_HEAD(list) LOS_DL_LIST list = { &(list), &(list) }
#define LOS_DL_LIST_LAST(object) ((object)->pstPrev)
#define LOS_OFF_SET_OF(type, member) ((UINTPTR)&((type *)0)->member)
#define OFFSET_OF_FIELD(type, field) ((UINTPTR)&((type *)0)->field)
