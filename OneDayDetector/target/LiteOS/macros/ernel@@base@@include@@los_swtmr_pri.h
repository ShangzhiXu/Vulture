#define OS_SWT_FROM_SID(swtmrId) ((LosSwtmrCB *)g_swtmrCBArray + ((swtmrId) % LOSCFG_BASE_CORE_SWTMR_LIMIT))
