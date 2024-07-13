#define SET_BS_LATER(contextP, newState) \
do{\
    lwm2m_setBsCtrlStat(contextP, newState);\
    contextP->state = lwm2m_getBsCtrlStat(contextP);\
    lwm2m_delayBsRetry(contextP);\
}while(0)
