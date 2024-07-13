#define LOSBLD_ATTRIB_ALIGN(__align__) __attribute__((aligned(__align__)))
#define LOSBLD_ATTRIB_SECTION(__sect__) __attribute__((section(__sect__)))
#define LOS_LABEL_DEFN(label) label
#define OS_STRING(x)  #x
#define X_STRING(x) OS_STRING(x)
