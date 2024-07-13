#define NEED_NEW_LINE(timesPrint, lineCap) ((timesPrint) % (lineCap) == 0)
#define SCREEN_IS_FULL(timesPrint, lineCap) ((timesPrint) >= ((lineCap) * DEFAULT_SCREEN_HEIGHT))
#define SHELLCMD_ENTRY(l, cmdType, cmdKey, paraNum, cmdHook)    \
    CmdItem l LOS_HAL_TABLE_ENTRY(shellcmd) = {                 \
        cmdType,                                                \
        cmdKey,                                                 \
        paraNum,                                                \
        cmdHook                                                 \
    }
