#define IS_ETH_ADDRESS_ALIGNED_BEATS(CMD) (((CMD) == ETH_ADDRESSALIGNEDBEATS_ENABLE) || \
                                           ((CMD) == ETH_ADDRESSALIGNEDBEATS_DISABLE))
#define IS_ETH_AUTOMATIC_PADCRC_STRIP(CMD) (((CMD) == ETH_AUTOMATICPADCRCSTRIP_ENABLE) || \
                                            ((CMD) == ETH_AUTOMATICPADCRCSTRIP_DISABLE))
#define IS_ETH_AUTONEGOTIATION(CMD) (((CMD) == ETH_AUTONEGOTIATION_ENABLE) || \
                                     ((CMD) == ETH_AUTONEGOTIATION_DISABLE))
#define IS_ETH_BACKOFF_LIMIT(LIMIT) (((LIMIT) == ETH_BACKOFFLIMIT_10) || \
                                     ((LIMIT) == ETH_BACKOFFLIMIT_8) || \
                                     ((LIMIT) == ETH_BACKOFFLIMIT_4) || \
                                     ((LIMIT) == ETH_BACKOFFLIMIT_1))
#define IS_ETH_BROADCAST_FRAMES_RECEPTION(CMD) (((CMD) == ETH_BROADCASTFRAMESRECEPTION_ENABLE) || \
                                                ((CMD) == ETH_BROADCASTFRAMESRECEPTION_DISABLE))
#define IS_ETH_CARRIER_SENSE(CMD) (((CMD) == ETH_CARRIERSENCE_ENABLE) || \
                                   ((CMD) == ETH_CARRIERSENCE_DISABLE))
#define IS_ETH_CHECKSUM_MODE(MODE)    (((MODE) == ETH_CHECKSUM_BY_HARDWARE) || \
                                      ((MODE) == ETH_CHECKSUM_BY_SOFTWARE))
#define IS_ETH_CHECKSUM_OFFLOAD(CMD) (((CMD) == ETH_CHECKSUMOFFLAOD_ENABLE) || \
                                      ((CMD) == ETH_CHECKSUMOFFLAOD_DISABLE))
#define IS_ETH_CONTROL_FRAMES(PASS) (((PASS) == ETH_PASSCONTROLFRAMES_BLOCKALL) || \
                                     ((PASS) == ETH_PASSCONTROLFRAMES_FORWARDALL) || \
                                     ((PASS) == ETH_PASSCONTROLFRAMES_FORWARDPASSEDADDRFILTER))
#define IS_ETH_DEFERRAL_CHECK(CMD) (((CMD) == ETH_DEFFERRALCHECK_ENABLE) || \
                                    ((CMD) == ETH_DEFFERRALCHECK_DISABLE))
#define IS_ETH_DESTINATION_ADDR_FILTER(FILTER) (((FILTER) == ETH_DESTINATIONADDRFILTER_NORMAL) || \
                                                ((FILTER) == ETH_DESTINATIONADDRFILTER_INVERSE))
#define IS_ETH_DMARXDESC_GET_FLAG(FLAG) (((FLAG) == ETH_DMARXDESC_OWN) || \
                                         ((FLAG) == ETH_DMARXDESC_AFM) || \
                                         ((FLAG) == ETH_DMARXDESC_ES) || \
                                         ((FLAG) == ETH_DMARXDESC_DE) || \
                                         ((FLAG) == ETH_DMARXDESC_SAF) || \
                                         ((FLAG) == ETH_DMARXDESC_LE) || \
                                         ((FLAG) == ETH_DMARXDESC_OE) || \
                                         ((FLAG) == ETH_DMARXDESC_VLAN) || \
                                         ((FLAG) == ETH_DMARXDESC_FS) || \
                                         ((FLAG) == ETH_DMARXDESC_LS) || \
                                         ((FLAG) == ETH_DMARXDESC_IPV4HCE) || \
                                         ((FLAG) == ETH_DMARXDESC_LC) || \
                                         ((FLAG) == ETH_DMARXDESC_FT) || \
                                         ((FLAG) == ETH_DMARXDESC_RWT) || \
                                         ((FLAG) == ETH_DMARXDESC_RE) || \
                                         ((FLAG) == ETH_DMARXDESC_DBE) || \
                                         ((FLAG) == ETH_DMARXDESC_CE) || \
                                         ((FLAG) == ETH_DMARXDESC_MAMPCE))
#define IS_ETH_DMATXDESC_BUFFER_SIZE(SIZE) ((SIZE) <= 0x1FFF)
#define IS_ETH_DMATXDESC_GET_FLAG(FLAG) (((FLAG) == ETH_DMATXDESC_OWN) || \
                                         ((FLAG) == ETH_DMATXDESC_IC) || \
                                         ((FLAG) == ETH_DMATXDESC_LS) || \
                                         ((FLAG) == ETH_DMATXDESC_FS) || \
                                         ((FLAG) == ETH_DMATXDESC_DC) || \
                                         ((FLAG) == ETH_DMATXDESC_DP) || \
                                         ((FLAG) == ETH_DMATXDESC_TTSE) || \
                                         ((FLAG) == ETH_DMATXDESC_TER) || \
                                         ((FLAG) == ETH_DMATXDESC_TCH) || \
                                         ((FLAG) == ETH_DMATXDESC_TTSS) || \
                                         ((FLAG) == ETH_DMATXDESC_IHE) || \
                                         ((FLAG) == ETH_DMATXDESC_ES) || \
                                         ((FLAG) == ETH_DMATXDESC_JT) || \
                                         ((FLAG) == ETH_DMATXDESC_FF) || \
                                         ((FLAG) == ETH_DMATXDESC_PCE) || \
                                         ((FLAG) == ETH_DMATXDESC_LCA) || \
                                         ((FLAG) == ETH_DMATXDESC_NC) || \
                                         ((FLAG) == ETH_DMATXDESC_LCO) || \
                                         ((FLAG) == ETH_DMATXDESC_EC) || \
                                         ((FLAG) == ETH_DMATXDESC_VF) || \
                                         ((FLAG) == ETH_DMATXDESC_CC) || \
                                         ((FLAG) == ETH_DMATXDESC_ED) || \
                                         ((FLAG) == ETH_DMATXDESC_UF) || \
                                         ((FLAG) == ETH_DMATXDESC_DB))
#define IS_ETH_DMA_ARBITRATION_ROUNDROBIN_RXTX(RATIO) (((RATIO) == ETH_DMAARBITRATION_ROUNDROBIN_RXTX_1_1) || \
                                                       ((RATIO) == ETH_DMAARBITRATION_ROUNDROBIN_RXTX_2_1) || \
                                                       ((RATIO) == ETH_DMAARBITRATION_ROUNDROBIN_RXTX_3_1) || \
                                                       ((RATIO) == ETH_DMAARBITRATION_ROUNDROBIN_RXTX_4_1) || \
                                                       ((RATIO) == ETH_DMAARBITRATION_RXPRIORTX))
#define IS_ETH_DMA_DESC_SKIP_LENGTH(LENGTH) ((LENGTH) <= 0x1F)
#define IS_ETH_DMA_FLAG(FLAG) ((((FLAG) & (uint32_t)0xC7FE1800) == 0x00) && ((FLAG) != 0x00)) 
#define IS_ETH_DMA_GET_FLAG(FLAG) (((FLAG) == ETH_DMA_FLAG_TST) || ((FLAG) == ETH_DMA_FLAG_PMT) || \
                                   ((FLAG) == ETH_DMA_FLAG_MMC) || ((FLAG) == ETH_DMA_FLAG_DATATRANSFERERROR) || \
                                   ((FLAG) == ETH_DMA_FLAG_READWRITEERROR) || ((FLAG) == ETH_DMA_FLAG_ACCESSERROR) || \
                                   ((FLAG) == ETH_DMA_FLAG_NIS) || ((FLAG) == ETH_DMA_FLAG_AIS) || \
                                   ((FLAG) == ETH_DMA_FLAG_ER) || ((FLAG) == ETH_DMA_FLAG_FBE) || \
                                   ((FLAG) == ETH_DMA_FLAG_ET) || ((FLAG) == ETH_DMA_FLAG_RWT) || \
                                   ((FLAG) == ETH_DMA_FLAG_RPS) || ((FLAG) == ETH_DMA_FLAG_RBU) || \
                                   ((FLAG) == ETH_DMA_FLAG_R) || ((FLAG) == ETH_DMA_FLAG_TU) || \
                                   ((FLAG) == ETH_DMA_FLAG_RO) || ((FLAG) == ETH_DMA_FLAG_TJT) || \
                                   ((FLAG) == ETH_DMA_FLAG_TBU) || ((FLAG) == ETH_DMA_FLAG_TPS) || \
                                   ((FLAG) == ETH_DMA_FLAG_T))
#define IS_ETH_DMA_GET_IT(IT) (((IT) == ETH_DMA_IT_TST) || ((IT) == ETH_DMA_IT_PMT) || \
                               ((IT) == ETH_DMA_IT_MMC) || ((IT) == ETH_DMA_IT_NIS) || \
                               ((IT) == ETH_DMA_IT_AIS) || ((IT) == ETH_DMA_IT_ER) || \
                               ((IT) == ETH_DMA_IT_FBE) || ((IT) == ETH_DMA_IT_ET) || \
                               ((IT) == ETH_DMA_IT_RWT) || ((IT) == ETH_DMA_IT_RPS) || \
                               ((IT) == ETH_DMA_IT_RBU) || ((IT) == ETH_DMA_IT_R) || \
                               ((IT) == ETH_DMA_IT_TU) || ((IT) == ETH_DMA_IT_RO) || \
                               ((IT) == ETH_DMA_IT_TJT) || ((IT) == ETH_DMA_IT_TBU) || \
                               ((IT) == ETH_DMA_IT_TPS) || ((IT) == ETH_DMA_IT_T))
#define IS_ETH_DMA_GET_OVERFLOW(OVERFLOW) (((OVERFLOW) == ETH_DMA_OVERFLOW_RXFIFOCOUNTER) || \
                                           ((OVERFLOW) == ETH_DMA_OVERFLOW_MISSEDFRAMECOUNTER))
#define IS_ETH_DMA_IT(IT) ((((IT) & (uint32_t)0xC7FE1800) == 0x00) && ((IT) != 0x00))
#define IS_ETH_DMA_RXDESC_BUFFER(BUFFER) (((BUFFER) == ETH_DMARXDESC_BUFFER1) || \
                                          ((BUFFER) == ETH_DMARXDESC_BUFFER2))
#define IS_ETH_DMA_TXDESC_CHECKSUM(CHECKSUM) (((CHECKSUM) == ETH_DMATXDESC_CHECKSUMBYPASS) || \
                                              ((CHECKSUM) == ETH_DMATXDESC_CHECKSUMIPV4HEADER) || \
                                              ((CHECKSUM) == ETH_DMATXDESC_CHECKSUMTCPUDPICMPSEGMENT) || \
                                              ((CHECKSUM) == ETH_DMATXDESC_CHECKSUMTCPUDPICMPFULL))
#define IS_ETH_DMA_TXDESC_SEGMENT(SEGMENT) (((SEGMENT) == ETH_DMATXDESC_LASTSEGMENTS) || \
                                            ((SEGMENT) == ETH_DMATXDESC_FIRSTSEGMENT))
#define IS_ETH_DROP_TCPIP_CHECKSUM_FRAME(CMD) (((CMD) == ETH_DROPTCPIPCHECKSUMERRORFRAME_ENABLE) || \
                                               ((CMD) == ETH_DROPTCPIPCHECKSUMERRORFRAME_DISABLE))
#define IS_ETH_DUPLEX_MODE(MODE)  (((MODE) == ETH_MODE_FULLDUPLEX) || \
                                  ((MODE) == ETH_MODE_HALFDUPLEX))
#define IS_ETH_ENHANCED_DESCRIPTOR_FORMAT(CMD) (((CMD) == ETH_DMAENHANCEDDESCRIPTOR_ENABLE) || \
                                                ((CMD) == ETH_DMAENHANCEDDESCRIPTOR_DISABLE))
#define IS_ETH_FIXED_BURST(CMD) (((CMD) == ETH_FIXEDBURST_ENABLE) || \
                                 ((CMD) == ETH_FIXEDBURST_DISABLE))
#define IS_ETH_FLUSH_RECEIVE_FRAME(CMD) (((CMD) == ETH_FLUSHRECEIVEDFRAME_ENABLE) || \
                                         ((CMD) == ETH_FLUSHRECEIVEDFRAME_DISABLE))
#define IS_ETH_FORWARD_ERROR_FRAMES(CMD) (((CMD) == ETH_FORWARDERRORFRAMES_ENABLE) || \
                                          ((CMD) == ETH_FORWARDERRORFRAMES_DISABLE))
#define IS_ETH_FORWARD_UNDERSIZED_GOOD_FRAMES(CMD) (((CMD) == ETH_FORWARDUNDERSIZEDGOODFRAMES_ENABLE) || \
                                                    ((CMD) == ETH_FORWARDUNDERSIZEDGOODFRAMES_DISABLE))
#define IS_ETH_INTER_FRAME_GAP(GAP) (((GAP) == ETH_INTERFRAMEGAP_96BIT) || \
                                     ((GAP) == ETH_INTERFRAMEGAP_88BIT) || \
                                     ((GAP) == ETH_INTERFRAMEGAP_80BIT) || \
                                     ((GAP) == ETH_INTERFRAMEGAP_72BIT) || \
                                     ((GAP) == ETH_INTERFRAMEGAP_64BIT) || \
                                     ((GAP) == ETH_INTERFRAMEGAP_56BIT) || \
                                     ((GAP) == ETH_INTERFRAMEGAP_48BIT) || \
                                     ((GAP) == ETH_INTERFRAMEGAP_40BIT))
#define IS_ETH_JABBER(CMD) (((CMD) == ETH_JABBER_ENABLE) || \
                            ((CMD) == ETH_JABBER_DISABLE))
#define IS_ETH_LOOPBACK_MODE(CMD) (((CMD) == ETH_LOOPBACKMODE_ENABLE) || \
                                   ((CMD) == ETH_LOOPBACKMODE_DISABLE))
#define IS_ETH_MAC_ADDRESS0123(ADDRESS) (((ADDRESS) == ETH_MAC_ADDRESS0) || \
                                         ((ADDRESS) == ETH_MAC_ADDRESS1) || \
                                         ((ADDRESS) == ETH_MAC_ADDRESS2) || \
                                         ((ADDRESS) == ETH_MAC_ADDRESS3))
#define IS_ETH_MAC_ADDRESS123(ADDRESS) (((ADDRESS) == ETH_MAC_ADDRESS1) || \
                                        ((ADDRESS) == ETH_MAC_ADDRESS2) || \
                                        ((ADDRESS) == ETH_MAC_ADDRESS3))
#define IS_ETH_MAC_ADDRESS_FILTER(FILTER) (((FILTER) == ETH_MAC_ADDRESSFILTER_SA) || \
                                           ((FILTER) == ETH_MAC_ADDRESSFILTER_DA))
#define IS_ETH_MAC_ADDRESS_MASK(MASK) (((MASK) == ETH_MAC_ADDRESSMASK_BYTE6) || \
                                       ((MASK) == ETH_MAC_ADDRESSMASK_BYTE5) || \
                                       ((MASK) == ETH_MAC_ADDRESSMASK_BYTE4) || \
                                       ((MASK) == ETH_MAC_ADDRESSMASK_BYTE3) || \
                                       ((MASK) == ETH_MAC_ADDRESSMASK_BYTE2) || \
                                       ((MASK) == ETH_MAC_ADDRESSMASK_BYTE1))
#define IS_ETH_MAC_GET_FLAG(FLAG) (((FLAG) == ETH_MAC_FLAG_TST) || ((FLAG) == ETH_MAC_FLAG_MMCT) || \
                                   ((FLAG) == ETH_MAC_FLAG_MMCR) || ((FLAG) == ETH_MAC_FLAG_MMC) || \
                                   ((FLAG) == ETH_MAC_FLAG_PMT))
#define IS_ETH_MAC_GET_IT(IT) (((IT) == ETH_MAC_IT_TST) || ((IT) == ETH_MAC_IT_MMCT) || \
                               ((IT) == ETH_MAC_IT_MMCR) || ((IT) == ETH_MAC_IT_MMC) || \
                               ((IT) == ETH_MAC_IT_PMT))
#define IS_ETH_MAC_IT(IT) ((((IT) & (uint32_t)0xFFFFFDF1) == 0x00) && ((IT) != 0x00))
#define IS_ETH_MEDIA_INTERFACE(MODE)         (((MODE) == ETH_MEDIA_INTERFACE_MII) || \
                                              ((MODE) == ETH_MEDIA_INTERFACE_RMII))
#define IS_ETH_MMC_GET_IT(IT) (((IT) == ETH_MMC_IT_TGF) || ((IT) == ETH_MMC_IT_TGFMSC) || \
                               ((IT) == ETH_MMC_IT_TGFSC) || ((IT) == ETH_MMC_IT_RGUF) || \
                               ((IT) == ETH_MMC_IT_RFAE) || ((IT) == ETH_MMC_IT_RFCE))
#define IS_ETH_MMC_IT(IT) (((((IT) & (uint32_t)0xFFDF3FFF) == 0x00) || (((IT) & (uint32_t)0xEFFDFF9F) == 0x00)) && \
                           ((IT) != 0x00))
#define IS_ETH_MULTICAST_FRAMES_FILTER(FILTER) (((FILTER) == ETH_MULTICASTFRAMESFILTER_PERFECTHASHTABLE) || \
                                                ((FILTER) == ETH_MULTICASTFRAMESFILTER_HASHTABLE) || \
                                                ((FILTER) == ETH_MULTICASTFRAMESFILTER_PERFECT) || \
                                                ((FILTER) == ETH_MULTICASTFRAMESFILTER_NONE))
#define IS_ETH_PAUSE_LOW_THRESHOLD(THRESHOLD) (((THRESHOLD) == ETH_PAUSELOWTHRESHOLD_MINUS4) || \
                                               ((THRESHOLD) == ETH_PAUSELOWTHRESHOLD_MINUS28) || \
                                               ((THRESHOLD) == ETH_PAUSELOWTHRESHOLD_MINUS144) || \
                                               ((THRESHOLD) == ETH_PAUSELOWTHRESHOLD_MINUS256))
#define IS_ETH_PAUSE_TIME(TIME) ((TIME) <= 0xFFFF)
#define IS_ETH_PHY_ADDRESS(ADDRESS) ((ADDRESS) <= 0x20)
#define IS_ETH_PMT_GET_FLAG(FLAG) (((FLAG) == ETH_PMT_FLAG_WUFR) || \
                                   ((FLAG) == ETH_PMT_FLAG_MPR))
#define IS_ETH_PROMISCUOUS_MODE(CMD) (((CMD) == ETH_PROMISCUOUS_MODE_ENABLE) || \
                                      ((CMD) == ETH_PROMISCUOUS_MODE_DISABLE))
#define IS_ETH_RECEIVE_ALL(CMD) (((CMD) == ETH_RECEIVEALL_ENABLE) || \
                                 ((CMD) == ETH_RECEIVEAll_DISABLE))
#define IS_ETH_RECEIVE_FLOWCONTROL(CMD) (((CMD) == ETH_RECEIVEFLOWCONTROL_ENABLE) || \
                                         ((CMD) == ETH_RECEIVEFLOWCONTROL_DISABLE))
#define IS_ETH_RECEIVE_OWN(CMD) (((CMD) == ETH_RECEIVEOWN_ENABLE) || \
                                 ((CMD) == ETH_RECEIVEOWN_DISABLE))
#define IS_ETH_RECEIVE_STORE_FORWARD(CMD) (((CMD) == ETH_RECEIVESTOREFORWARD_ENABLE) || \
                                           ((CMD) == ETH_RECEIVESTOREFORWARD_DISABLE))
#define IS_ETH_RECEIVE_THRESHOLD_CONTROL(THRESHOLD) (((THRESHOLD) == ETH_RECEIVEDTHRESHOLDCONTROL_64BYTES) || \
                                                     ((THRESHOLD) == ETH_RECEIVEDTHRESHOLDCONTROL_32BYTES) || \
                                                     ((THRESHOLD) == ETH_RECEIVEDTHRESHOLDCONTROL_96BYTES) || \
                                                     ((THRESHOLD) == ETH_RECEIVEDTHRESHOLDCONTROL_128BYTES))
#define IS_ETH_RETRY_TRANSMISSION(CMD) (((CMD) == ETH_RETRYTRANSMISSION_ENABLE) || \
                                        ((CMD) == ETH_RETRYTRANSMISSION_DISABLE))
#define IS_ETH_RXDMA_BURST_LENGTH(LENGTH) (((LENGTH) == ETH_RXDMABURSTLENGTH_1BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_2BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_4BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_8BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_16BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_32BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_4XPBL_4BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_4XPBL_8BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_4XPBL_16BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_4XPBL_32BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_4XPBL_64BEAT) || \
                                           ((LENGTH) == ETH_RXDMABURSTLENGTH_4XPBL_128BEAT))
#define IS_ETH_RX_MODE(MODE)    (((MODE) == ETH_RXPOLLING_MODE) || \
                                 ((MODE) == ETH_RXINTERRUPT_MODE)) 
#define IS_ETH_SECOND_FRAME_OPERATE(CMD) (((CMD) == ETH_SECONDFRAMEOPERARTE_ENABLE) || \
                                          ((CMD) == ETH_SECONDFRAMEOPERARTE_DISABLE))
#define IS_ETH_SOURCE_ADDR_FILTER(CMD) (((CMD) == ETH_SOURCEADDRFILTER_NORMAL_ENABLE) || \
                                        ((CMD) == ETH_SOURCEADDRFILTER_INVERSE_ENABLE) || \
                                        ((CMD) == ETH_SOURCEADDRFILTER_DISABLE))
#define IS_ETH_SPEED(SPEED) (((SPEED) == ETH_SPEED_10M) || \
                             ((SPEED) == ETH_SPEED_100M))
#define IS_ETH_TRANSMIT_FLOWCONTROL(CMD) (((CMD) == ETH_TRANSMITFLOWCONTROL_ENABLE) || \
                                          ((CMD) == ETH_TRANSMITFLOWCONTROL_DISABLE))
#define IS_ETH_TRANSMIT_STORE_FORWARD(CMD) (((CMD) == ETH_TRANSMITSTOREFORWARD_ENABLE) || \
                                            ((CMD) == ETH_TRANSMITSTOREFORWARD_DISABLE))
#define IS_ETH_TRANSMIT_THRESHOLD_CONTROL(THRESHOLD) (((THRESHOLD) == ETH_TRANSMITTHRESHOLDCONTROL_64BYTES) || \
                                                      ((THRESHOLD) == ETH_TRANSMITTHRESHOLDCONTROL_128BYTES) || \
                                                      ((THRESHOLD) == ETH_TRANSMITTHRESHOLDCONTROL_192BYTES) || \
                                                      ((THRESHOLD) == ETH_TRANSMITTHRESHOLDCONTROL_256BYTES) || \
                                                      ((THRESHOLD) == ETH_TRANSMITTHRESHOLDCONTROL_40BYTES) || \
                                                      ((THRESHOLD) == ETH_TRANSMITTHRESHOLDCONTROL_32BYTES) || \
                                                      ((THRESHOLD) == ETH_TRANSMITTHRESHOLDCONTROL_24BYTES) || \
                                                      ((THRESHOLD) == ETH_TRANSMITTHRESHOLDCONTROL_16BYTES))
#define IS_ETH_TXDMA_BURST_LENGTH(LENGTH) (((LENGTH) == ETH_TXDMABURSTLENGTH_1BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_2BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_4BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_8BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_16BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_32BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_4XPBL_4BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_4XPBL_8BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_4XPBL_16BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_4XPBL_32BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_4XPBL_64BEAT) || \
                                           ((LENGTH) == ETH_TXDMABURSTLENGTH_4XPBL_128BEAT))
#define IS_ETH_UNICAST_FRAMES_FILTER(FILTER) (((FILTER) == ETH_UNICASTFRAMESFILTER_PERFECTHASHTABLE) || \
                                              ((FILTER) == ETH_UNICASTFRAMESFILTER_HASHTABLE) || \
                                              ((FILTER) == ETH_UNICASTFRAMESFILTER_PERFECT))
#define IS_ETH_UNICAST_PAUSE_FRAME_DETECT(CMD) (((CMD) == ETH_UNICASTPAUSEFRAMEDETECT_ENABLE) || \
                                                ((CMD) == ETH_UNICASTPAUSEFRAMEDETECT_DISABLE))
#define IS_ETH_VLAN_TAG_COMPARISON(COMPARISON) (((COMPARISON) == ETH_VLANTAGCOMPARISON_12BIT) || \
                                                ((COMPARISON) == ETH_VLANTAGCOMPARISON_16BIT))
#define IS_ETH_VLAN_TAG_IDENTIFIER(IDENTIFIER) ((IDENTIFIER) <= 0xFFFF)
#define IS_ETH_WATCHDOG(CMD) (((CMD) == ETH_WATCHDOG_ENABLE) || \
                              ((CMD) == ETH_WATCHDOG_DISABLE))
#define IS_ETH_ZEROQUANTA_PAUSE(CMD)   (((CMD) == ETH_ZEROQUANTAPAUSE_ENABLE) || \
                                        ((CMD) == ETH_ZEROQUANTAPAUSE_DISABLE))
#define __HAL_ETH_BACK_PRESSURE_ACTIVATION_DISABLE(__HANDLE__)         ((__HANDLE__)->Instance->MACFCR &= ~ETH_MACFCR_FCBBPA)
#define __HAL_ETH_BACK_PRESSURE_ACTIVATION_ENABLE(__HANDLE__)          ((__HANDLE__)->Instance->MACFCR |= ETH_MACFCR_FCBBPA)
#define __HAL_ETH_DMARXDESC_DISABLE_IT(__HANDLE__)                         ((__HANDLE__)->RxDesc->ControlBufferSize |= ETH_DMARXDESC_DIC)
#define __HAL_ETH_DMARXDESC_ENABLE_IT(__HANDLE__)                          ((__HANDLE__)->RxDesc->ControlBufferSize &=(~(uint32_t)ETH_DMARXDESC_DIC))
#define __HAL_ETH_DMARXDESC_GET_FLAG(__HANDLE__, __FLAG__)             ((__HANDLE__)->RxDesc->Status & (__FLAG__) == (__FLAG__))
#define __HAL_ETH_DMARXDESC_SET_OWN_BIT(__HANDLE__)                           ((__HANDLE__)->RxDesc->Status |= ETH_DMARXDESC_OWN)
#define __HAL_ETH_DMATXDESC_CHECKSUM_INSERTION(__HANDLE__, __CHECKSUM__)     ((__HANDLE__)->TxDesc->Status |= (__CHECKSUM__))
#define __HAL_ETH_DMATXDESC_CRC_DISABLE(__HANDLE__)                         ((__HANDLE__)->TxDesc->Status |= ETH_DMATXDESC_DC)
#define __HAL_ETH_DMATXDESC_CRC_ENABLE(__HANDLE__)                          ((__HANDLE__)->TxDesc->Status &= ~ETH_DMATXDESC_DC)
#define __HAL_ETH_DMATXDESC_DISABLE_IT(__HANDLE__)                          ((__HANDLE__)->TxDesc->Status &= ~ETH_DMATXDESC_IC)
#define __HAL_ETH_DMATXDESC_ENABLE_IT(__HANDLE__)                          ((__HANDLE__)->TxDesc->Status |= ETH_DMATXDESC_IC)
#define __HAL_ETH_DMATXDESC_GET_COLLISION_COUNT(__HANDLE__)                   (((__HANDLE__)->TxDesc->Status & ETH_DMATXDESC_CC) >> ETH_DMATXDESC_COLLISION_COUNTSHIFT)
#define __HAL_ETH_DMATXDESC_GET_FLAG(__HANDLE__, __FLAG__)             ((__HANDLE__)->TxDesc->Status & (__FLAG__) == (__FLAG__))
#define __HAL_ETH_DMATXDESC_SET_OWN_BIT(__HANDLE__)                       ((__HANDLE__)->TxDesc->Status |= ETH_DMATXDESC_OWN)
#define __HAL_ETH_DMATXDESC_SHORT_FRAME_PADDING_DISABLE(__HANDLE__)           ((__HANDLE__)->TxDesc->Status |= ETH_DMATXDESC_DP)
#define __HAL_ETH_DMATXDESC_SHORT_FRAME_PADDING_ENABLE(__HANDLE__)            ((__HANDLE__)->TxDesc->Status &= ~ETH_DMATXDESC_DP)
#define __HAL_ETH_DMA_CLEAR_FLAG(__HANDLE__, __FLAG__)                 ((__HANDLE__)->Instance->DMASR = (__FLAG__))
#define __HAL_ETH_DMA_CLEAR_IT(__HANDLE__, __INTERRUPT__)      ((__HANDLE__)->Instance->DMASR =(__INTERRUPT__))
#define __HAL_ETH_DMA_DISABLE_IT(__HANDLE__, __INTERRUPT__)                ((__HANDLE__)->Instance->DMAIER &= ~(__INTERRUPT__))
#define __HAL_ETH_DMA_ENABLE_IT(__HANDLE__, __INTERRUPT__)                 ((__HANDLE__)->Instance->DMAIER |= (__INTERRUPT__))
#define __HAL_ETH_DMA_GET_FLAG(__HANDLE__, __FLAG__)                   (((__HANDLE__)->Instance->DMASR &( __FLAG__)) == ( __FLAG__))
#define __HAL_ETH_ETH_MMC_COUNTER_ROLLOVER_DISABLE(__HANDLE__)           ((__HANDLE__)->Instance->MMCCR |= ETH_MMCCR_CSR)
#define __HAL_ETH_ETH_MMC_COUNTER_ROLLOVER_ENABLE(__HANDLE__)            ((__HANDLE__)->Instance->MMCCR &= ~ETH_MMCCR_CSR)
#define __HAL_ETH_ETH_MMC_RESET_ONREAD_DISABLE(__HANDLE__)               ((__HANDLE__)->Instance->MMCCR &= ~ETH_MMCCR_ROR)
#define __HAL_ETH_ETH_MMC_RESET_ONREAD_ENABLE(__HANDLE__)                ((__HANDLE__)->Instance->MMCCR |= ETH_MMCCR_ROR)
#define __HAL_ETH_GET_DMA_OVERFLOW_STATUS(__HANDLE__, __OVERFLOW__)       (((__HANDLE__)->Instance->DMAMFBOCR & (__OVERFLOW__)) == (__OVERFLOW__))
#define __HAL_ETH_GET_FLOW_CONTROL_BUSY_STATUS(__HANDLE__)               (((__HANDLE__)->Instance->MACFCR & ETH_MACFCR_FCBBPA) == ETH_MACFCR_FCBBPA)
#define __HAL_ETH_GET_PMT_FLAG_STATUS(__HANDLE__, __FLAG__)               (((__HANDLE__)->Instance->MACPMTCSR &( __FLAG__)) == ( __FLAG__))
#define __HAL_ETH_GLOBAL_UNICAST_WAKEUP_DISABLE(__HANDLE__)              ((__HANDLE__)->Instance->MACPMTCSR &= ~ETH_MACPMTCSR_GU)
#define __HAL_ETH_GLOBAL_UNICAST_WAKEUP_ENABLE(__HANDLE__)               ((__HANDLE__)->Instance->MACPMTCSR |= ETH_MACPMTCSR_GU)
#define __HAL_ETH_INITIATE_PAUSE_CONTROL_FRAME(__HANDLE__)              ((__HANDLE__)->Instance->MACFCR |= ETH_MACFCR_FCBBPA)
#define __HAL_ETH_MAC_DISABLE_IT(__HANDLE__, __INTERRUPT__)                ((__HANDLE__)->Instance->MACIMR &= ~(__INTERRUPT__))
#define __HAL_ETH_MAC_ENABLE_IT(__HANDLE__, __INTERRUPT__)                 ((__HANDLE__)->Instance->MACIMR |= (__INTERRUPT__))
#define __HAL_ETH_MAC_GET_FLAG(__HANDLE__, __FLAG__)                   (((__HANDLE__)->Instance->MACSR &( __FLAG__)) == ( __FLAG__))
#define __HAL_ETH_MAGIC_PACKET_DETECTION_DISABLE(__HANDLE__)             ((__HANDLE__)->Instance->MACPMTCSR &= ~ETH_MACPMTCSR_WFE)
#define __HAL_ETH_MAGIC_PACKET_DETECTION_ENABLE(__HANDLE__)              ((__HANDLE__)->Instance->MACPMTCSR |= ETH_MACPMTCSR_MPE)
#define __HAL_ETH_MMC_COUNTERS_RESET(__HANDLE__)                         ((__HANDLE__)->Instance->MMCCR |= ETH_MMCCR_CR)
#define __HAL_ETH_MMC_COUNTER_FREEZE_DISABLE(__HANDLE__)                 ((__HANDLE__)->Instance->MMCCR &= ~ETH_MMCCR_MCF)
#define __HAL_ETH_MMC_COUNTER_FREEZE_ENABLE(__HANDLE__)                  ((__HANDLE__)->Instance->MMCCR |= ETH_MMCCR_MCF)
#define __HAL_ETH_MMC_COUNTER_FULL_PRESET(__HANDLE__)                     ((__HANDLE__)->Instance->MMCCR |= (ETH_MMCCR_MCFHP | ETH_MMCCR_MCP))
#define __HAL_ETH_MMC_COUNTER_HALF_PRESET(__HANDLE__)                     do{(__HANDLE__)->Instance->MMCCR &= ~ETH_MMCCR_MCFHP;\
                                                                          (__HANDLE__)->Instance->MMCCR |= ETH_MMCCR_MCP;} while (0)
#define __HAL_ETH_MMC_RX_IT_DISABLE(__HANDLE__, __INTERRUPT__)              (__HANDLE__)->Instance->MMCRIMR |= ((__INTERRUPT__) & 0xEFFFFFFF)
#define __HAL_ETH_MMC_RX_IT_ENABLE(__HANDLE__, __INTERRUPT__)               (__HANDLE__)->Instance->MMCRIMR &= ~((__INTERRUPT__) & 0xEFFFFFFF)
#define __HAL_ETH_MMC_TX_IT_DISABLE(__HANDLE__, __INTERRUPT__)           ((__HANDLE__)->Instance->MMCRIMR |= (__INTERRUPT__))
#define __HAL_ETH_MMC_TX_IT_ENABLE(__HANDLE__, __INTERRUPT__)            ((__HANDLE__)->Instance->MMCRIMR &= ~ (__INTERRUPT__))
#define __HAL_ETH_POWER_DOWN_DISABLE(__HANDLE__)                        ((__HANDLE__)->Instance->MACPMTCSR &= ~ETH_MACPMTCSR_PD)
#define __HAL_ETH_POWER_DOWN_ENABLE(__HANDLE__)                         ((__HANDLE__)->Instance->MACPMTCSR |= ETH_MACPMTCSR_PD)
#define __HAL_ETH_RESET_HANDLE_STATE(__HANDLE__)  do{                                                 \
                                                       (__HANDLE__)->State = HAL_ETH_STATE_RESET;     \
                                                       (__HANDLE__)->MspInitCallback = NULL;          \
                                                       (__HANDLE__)->MspDeInitCallback = NULL;        \
                                                     } while(0)
#define __HAL_ETH_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_ETH_STATE_RESET)
#define __HAL_ETH_SET_RECEIVE_WATCHDOG_TIMER(__HANDLE__, __VALUE__)       ((__HANDLE__)->Instance->DMARSWTR = (__VALUE__))
#define __HAL_ETH_WAKEUP_EXTI_CLEAR_FLAG()   EXTI->PR = (ETH_EXTI_LINE_WAKEUP)
#define __HAL_ETH_WAKEUP_EXTI_DISABLE_EVENT() EXTI->EMR &= ~(ETH_EXTI_LINE_WAKEUP)
#define __HAL_ETH_WAKEUP_EXTI_DISABLE_FALLINGRISING_TRIGGER()  do{EXTI->RTSR &= ~(ETH_EXTI_LINE_WAKEUP);\
                                                                  EXTI->FTSR &= ~(ETH_EXTI_LINE_WAKEUP);\
                                                                  }while(0)
#define __HAL_ETH_WAKEUP_EXTI_DISABLE_FALLING_EDGE_TRIGGER()  EXTI->FTSR &= ~(ETH_EXTI_LINE_WAKEUP)
#define __HAL_ETH_WAKEUP_EXTI_DISABLE_IT()   EXTI->IMR &= ~(ETH_EXTI_LINE_WAKEUP)
#define __HAL_ETH_WAKEUP_EXTI_DISABLE_RISING_EDGE_TRIGGER()  EXTI->RTSR &= ~(ETH_EXTI_LINE_WAKEUP)                                                          
#define __HAL_ETH_WAKEUP_EXTI_ENABLE_EVENT()  EXTI->EMR |= (ETH_EXTI_LINE_WAKEUP)
#define __HAL_ETH_WAKEUP_EXTI_ENABLE_FALLINGRISING_TRIGGER()  do{EXTI->RTSR |= ETH_EXTI_LINE_WAKEUP;\
                                                                 EXTI->FTSR |= ETH_EXTI_LINE_WAKEUP;\
                                                                 }while(0)
#define __HAL_ETH_WAKEUP_EXTI_ENABLE_FALLING_EDGE_TRIGGER()  EXTI->FTSR |= (ETH_EXTI_LINE_WAKEUP)
#define __HAL_ETH_WAKEUP_EXTI_ENABLE_IT()    EXTI->IMR |= (ETH_EXTI_LINE_WAKEUP)
#define __HAL_ETH_WAKEUP_EXTI_ENABLE_RISING_EDGE_TRIGGER()  EXTI->RTSR |= ETH_EXTI_LINE_WAKEUP
#define __HAL_ETH_WAKEUP_EXTI_GENERATE_SWIT()                  EXTI->SWIER|= ETH_EXTI_LINE_WAKEUP
#define __HAL_ETH_WAKEUP_EXTI_GET_FLAG()     EXTI->PR & (ETH_EXTI_LINE_WAKEUP)
#define __HAL_ETH_WAKEUP_FRAME_DETECTION_DISABLE(__HANDLE__)             ((__HANDLE__)->Instance->MACPMTCSR &= ~ETH_MACPMTCSR_WFE)
#define __HAL_ETH_WAKEUP_FRAME_DETECTION_ENABLE(__HANDLE__)              ((__HANDLE__)->Instance->MACPMTCSR |= ETH_MACPMTCSR_WFE)
