#define LOS_HAL_TABLE_BEGIN(label, name)                                     \
    __asm__(".section \".liteos.table." X_STRING(name) ".begin\",\"aw\"\n"   \
            ".globl " X_STRING(LOS_LABEL_DEFN(label)) "\n"                   \
            ".type    " X_STRING(LOS_LABEL_DEFN(label)) ",object\n"          \
            ".p2align " X_STRING(LOSARC_P2ALIGNMENT) "\n"                    \
            X_STRING(LOS_LABEL_DEFN(label)) ":\n"                            \
            ".previous\n"                                                    \
            )
#define LOS_HAL_TABLE_END(label, name)                                       \
    __asm__(".section \".liteos.table." X_STRING(name) ".finish\",\"aw\"\n"  \
            ".globl " X_STRING(LOS_LABEL_DEFN(label)) "\n"                   \
            ".type    " X_STRING(LOS_LABEL_DEFN(label)) ",object\n"          \
            ".p2align " X_STRING(LOSARC_P2ALIGNMENT) "\n"                    \
            X_STRING(LOS_LABEL_DEFN(label)) ":\n"                            \
            ".previous\n"                                                    \
            )
#define LOS_HAL_TABLE_ENTRY(name)                                  \
    LOSBLD_ATTRIB_SECTION(".liteos.table." X_STRING(name) ".data") \
    LOSBLD_ATTRIB_USED
#define LOS_HAL_TABLE_EXTRA(name) \
    LOSBLD_ATTRIB_SECTION(".liteos.table." X_STRING(name) ".extra")
#define LOS_HAL_TABLE_QUALIFIED_ENTRY(name, _qual)                                  \
    LOSBLD_ATTRIB_SECTION(".liteos.table." X_STRING(name) ".data." X_STRING(_qual)) \
    LOSBLD_ATTRIB_USED
#define LOS_HAL_TABLE_SCATTER_BEGIN(label, name)                                    \
    __asm__(".section \".liteos.table." X_STRING(name) ".scatter.begin\",\"aw\"\n"  \
            ".globl " X_STRING(LOS_LABEL_DEFN(label)) "\n"                          \
            ".type    " X_STRING(LOS_LABEL_DEFN(label)) ",object\n"                 \
            ".p2align " X_STRING(LOSARC_P2ALIGNMENT) "\n"                           \
            X_STRING(LOS_LABEL_DEFN(label)) ":\n"                                   \
            ".previous\n"                                                           \
            )
#define LOS_HAL_TABLE_SCATTER_END(label, name)                                      \
    __asm__(".section \".liteos.table." X_STRING(name) ".scatter.finish\",\"aw\"\n" \
            ".globl " X_STRING(LOS_LABEL_DEFN(label)) "\n"                          \
            ".type    " X_STRING(LOS_LABEL_DEFN(label)) ",object\n"                 \
            ".p2align " X_STRING(LOSARC_P2ALIGNMENT) "\n"                           \
            X_STRING(LOS_LABEL_DEFN(label)) ":\n"                                   \
            ".previous\n"                                                           \
            )
#define LOS_HAL_TABLE_SCATTER_ENTRY(name)                                  \
    LOSBLD_ATTRIB_SECTION(".liteos.table." X_STRING(name) ".scatter.data") \
    LOSBLD_ATTRIB_USED
#define LOS_HAL_TABLE_WOW_BEGIN(label, name)                                     \
    __asm__(".section \".liteos.table." X_STRING(name) ".wow.begin\",\"aw\"\n"   \
            ".globl " X_STRING(LOS_LABEL_DEFN(label)) "\n"                       \
            ".type    " X_STRING(LOS_LABEL_DEFN(label)) ",object\n"              \
            ".p2align " X_STRING(LOSARC_P2ALIGNMENT) "\n"                        \
            X_STRING(LOS_LABEL_DEFN(label)) ":\n"                                \
            ".previous\n"                                                        \
            )
#define LOS_HAL_TABLE_WOW_END(label, name)                                       \
    __asm__(".section \".liteos.table." X_STRING(name) ".wow.finish\",\"aw\"\n"  \
            ".globl " X_STRING(LOS_LABEL_DEFN(label)) "\n"                       \
            ".type    " X_STRING(LOS_LABEL_DEFN(label)) ",object\n"              \
            ".p2align " X_STRING(LOSARC_P2ALIGNMENT) "\n"                        \
            X_STRING(LOS_LABEL_DEFN(label)) ":\n"                                \
            ".previous\n"                                                        \
            )
#define LOS_HAL_TABLE_WOW_ENTRY(name)                                  \
    LOSBLD_ATTRIB_SECTION(".liteos.table." X_STRING(name) ".wow.data") \
    LOSBLD_ATTRIB_USED
