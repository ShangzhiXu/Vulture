  uint32_t             AddressAlignedBeats;         /*!< Enables or disables the Address Aligned Beats.
  uint32_t             AutoNegotiation;           /*!< Selects or not the AutoNegotiation mode for the external PHY
  uint32_t             AutomaticPadCRCStrip;      /*!< Selects or not the Automatic MAC Pad/CRC Stripping.
  uint32_t             BackOffLimit;              /*!< Selects the BackOff limit value.
  uint32_t             BroadcastFramesReception;  /*!< Selects or not the reception of Broadcast Frames.
  uint32_t   Buffer1Addr;           /*!< Buffer1 address pointer */
  uint32_t   Buffer2NextDescAddr;   /*!< Buffer2 or next descriptor address pointer */
  uint32_t             CarrierSense;              /*!< Selects or not the Carrier Sense.
  uint32_t             ChecksumMode;              /*!< Selects if the checksum is check by hardware or by software. 
  uint32_t             ChecksumOffload;           /*!< Selects or not the IPv4 checksum checking for received frame payloads' TCP/UDP/ICMP headers.
  uint32_t   ControlBufferSize;     /*!< Control and Buffer1, Buffer2 lengths */
  uint32_t             DMAArbitration;              /*!< Selects the DMA Tx/Rx arbitration.
  void    (* DMAErrorCallback)   ( struct __ETH_HandleTypeDef * heth);  /*!< DMA Error Callback      */
  uint32_t             DeferralCheck;             /*!< Selects or not the deferral check function (Half-Duplex mode).
  uint32_t             DescriptorSkipLength;        /*!< Specifies the number of word to skip between two unchained descriptors (Ring mode)
  uint32_t             DestinationAddrFilter;     /*!< Sets the destination filter mode for both unicast and multicast frames.
 uint32_t              DropTCPIPChecksumErrorFrame; /*!< Selects or not the Dropping of TCP/IP Checksum Error Frames.
  uint32_t             DuplexMode;                /*!< Selects the MAC duplex mode: Half-Duplex or Full-Duplex mode
  uint32_t             EnhancedDescriptorFormat;    /*!< Enables the enhanced descriptor format.
  uint32_t   ExtendedStatus;        /*!< Extended status for PTP receive descriptor */
  ETH_DMADescTypeDef *FSRxDesc;          /*!< First Segment Rx Desc */
  uint32_t             FixedBurst;                  /*!< Enables or disables the AHB Master interface fixed burst transfers.
  uint32_t             FlushReceivedFrame;          /*!< Enables or disables the flushing of received frames.
  uint32_t             ForwardErrorFrames;          /*!< Selects or not the forward to the DMA of erroneous frames.
  uint32_t             ForwardUndersizedGoodFrames; /*!< Enables or disables the Rx FIFO to forward Undersized frames (frames with no Error
  uint32_t             HashTableHigh;             /*!< This field holds the higher 32 bits of Hash table.
  uint32_t             HashTableLow;              /*!< This field holds the lower 32 bits of Hash table.
  ETH_InitTypeDef            Init;          /*!< Ethernet Init Configuration */
  ETH_TypeDef                *Instance;     /*!< Register base address       */
  uint32_t             InterFrameGap;             /*!< Selects the minimum IFG between frames during transmission.
  uint32_t             Jabber;                    /*!< Selects or not Jabber timer
  ETH_DMADescTypeDef *LSRxDesc;          /*!< Last Segment Rx Desc */
  uint32_t                   LinkStatus;    /*!< Ethernet link status        */
  HAL_LockTypeDef            Lock;          /*!< ETH Lock                    */
  uint32_t             LoopbackMode;              /*!< Selects or not the internal MAC MII Loopback mode.
  uint8_t             *MACAddr;                   /*!< MAC Address of used Hardware: must be pointer on an array of 6 bytes */
  uint32_t             MediaInterface;            /*!< Selects the media-independent interface or the reduced media-independent interface. 
  void    (* MspDeInitCallback)  ( struct __ETH_HandleTypeDef * heth);  /*!< ETH Msp DeInit callback     */
  void    (* MspInitCallback)    ( struct __ETH_HandleTypeDef * heth);  /*!< ETH Msp Init callback       */
  uint32_t             MulticastFramesFilter;     /*!< Selects the Multicast Frames filter mode: None/HashTableFilter/PerfectFilter/PerfectHashTableFilter.
  uint32_t             PassControlFrames;         /*!< Sets the forwarding mode of the control frames (including unicast and multicast PAUSE frames)
  uint32_t             PauseLowThreshold;         /*!< This field configures the threshold of the PAUSE to be checked for
  uint32_t             PauseTime;                 /*!< This field holds the value to be used in the Pause Time field in the transmit control frame. 
  uint16_t             PhyAddress;                /*!< Ethernet PHY address.
  uint32_t             PromiscuousMode;           /*!< Selects or not the Promiscuous Mode
  uint32_t             ReceiveAll;                /*!< Selects or not all frames reception by the MAC (No filtering).
  uint32_t             ReceiveFlowControl;        /*!< Enables or disables the MAC to decode the received Pause frame and
  uint32_t             ReceiveOwn;                /*!< Selects or not the ReceiveOwn,
  uint32_t             ReceiveStoreForward;         /*!< Enables or disables the Receive store and forward mode.
  uint32_t             ReceiveThresholdControl;     /*!< Selects the threshold level of the Receive FIFO.
  uint32_t   Reserved1;             /*!< Reserved */
  uint32_t             RetryTransmission;         /*!< Selects or not the MAC attempt retries transmission, based on the settings of BL,
  void    (* RxCpltCallback)     ( struct __ETH_HandleTypeDef * heth);  /*!< ETH Rx  Complete Callback   */
  uint32_t             RxDMABurstLength;            /*!< Indicates the maximum number of beats to be transferred in one Rx DMA transaction.
  ETH_DMADescTypeDef         *RxDesc;       /*!< Rx descriptor to Get        */
  ETH_DMARxFrameInfos        RxFrameInfos;  /*!< last Rx frame infos         */
  uint32_t             RxMode;                    /*!< Selects the Ethernet Rx mode: Polling mode, Interrupt mode.
  uint32_t             SecondFrameOperate;          /*!< Selects or not the Operate on second frame mode, which allows the DMA to process a second
  uint32_t  SegCount;                    /*!< Segment count */
  uint32_t             SourceAddrFilter;          /*!< Selects the Source Address Filter mode.
  uint32_t             Speed;                     /*!< Sets the Ethernet speed: 10/100 Mbps.
  __IO HAL_ETH_StateTypeDef  State;         /*!< ETH communication state     */
  __IO uint32_t   Status;           /*!< Status */
  uint32_t   TimeStampHigh;         /*!< Time Stamp High value for transmit and receive */
  uint32_t   TimeStampLow;          /*!< Time Stamp Low value for transmit and receive */
  uint32_t             TransmitFlowControl;       /*!< Enables or disables the MAC to transmit Pause frames (Full-Duplex mode)
  uint32_t             TransmitStoreForward;        /*!< Enables or disables Transmit store and forward mode.
  uint32_t             TransmitThresholdControl;    /*!< Selects or not the Transmit Threshold Control.
  void    (* TxCpltCallback)     ( struct __ETH_HandleTypeDef * heth);  /*!< ETH Tx Complete Callback   */
  uint32_t             TxDMABurstLength;            /*!< Indicates the maximum number of beats to be transferred in one Tx DMA transaction.
  ETH_DMADescTypeDef         *TxDesc;       /*!< Tx descriptor to Set        */
  uint32_t             UnicastFramesFilter;       /*!< Selects the Unicast Frames filter mode: HashTableFilter/PerfectFilter/PerfectHashTableFilter.
  uint32_t             UnicastPauseFrameDetect;   /*!< Selects or not the MAC detection of the Pause frames (with MAC Address0
  uint32_t             VLANTagComparison;         /*!< Selects the 12-bit VLAN identifier or the complete 16-bit VLAN tag for
  uint32_t             VLANTagIdentifier;         /*!< Holds the VLAN tag identifier for receive frames */
  uint32_t             Watchdog;                  /*!< Selects or not the Watchdog timer
  uint32_t             ZeroQuantaPause;           /*!< Selects or not the automatic generation of Zero-Quanta Pause Control frames.
  uint32_t buffer;                       /*!< Frame buffer */
  uint32_t length;                       /*!< Frame length */
