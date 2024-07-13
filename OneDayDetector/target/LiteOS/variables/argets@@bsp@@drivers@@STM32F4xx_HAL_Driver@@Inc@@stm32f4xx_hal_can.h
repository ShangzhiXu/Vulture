  FunctionalState AutoBusOff;          /*!< Enable or disable the automatic bus-off management.
  FunctionalState AutoRetransmission;  /*!< Enable or disable the non-automatic retransmission mode.
  FunctionalState AutoWakeUp;          /*!< Enable or disable the automatic wake-up mode.
  uint32_t DLC;      /*!< Specifies the length of the frame that will be transmitted.
  uint32_t DLC;      /*!< Specifies the length of the frame that will be transmitted.
  void (* ErrorCallback)(struct __CAN_HandleTypeDef *hcan);             /*!< CAN Error callback                    */
  __IO uint32_t               ErrorCode;                 /*!< CAN Error code.
  uint32_t ExtId;    /*!< Specifies the extended identifier.
  uint32_t ExtId;    /*!< Specifies the extended identifier.
  uint32_t FilterActivation;      /*!< Enable or disable the filter.
  uint32_t FilterBank;            /*!< Specifies the filter bank which will be initialized.
  uint32_t FilterFIFOAssignment;  /*!< Specifies the FIFO (0 or 1U) which will be assigned to the filter.
  uint32_t FilterIdHigh;          /*!< Specifies the filter identification number (MSBs for a 32-bit
  uint32_t FilterIdLow;           /*!< Specifies the filter identification number (LSBs for a 32-bit
  uint32_t FilterMaskIdHigh;      /*!< Specifies the filter mask number or identification number,
  uint32_t FilterMaskIdLow;       /*!< Specifies the filter mask number or identification number,
  uint32_t FilterMatchIndex; /*!< Specifies the index of matching acceptance filter element.
  uint32_t FilterMode;            /*!< Specifies the filter mode to be initialized.
  uint32_t FilterScale;           /*!< Specifies the filter scale.
  uint32_t IDE;      /*!< Specifies the type of identifier for the message that will be transmitted.
  uint32_t IDE;      /*!< Specifies the type of identifier for the message that will be transmitted.
  CAN_InitTypeDef             Init;                      /*!< CAN required parameters */
  CAN_TypeDef                 *Instance;                 /*!< Register base address */
  uint32_t Mode;                       /*!< Specifies the CAN operating mode.
  void (* MspDeInitCallback)(struct __CAN_HandleTypeDef *hcan);         /*!< CAN Msp DeInit callback               */
  void (* MspInitCallback)(struct __CAN_HandleTypeDef *hcan);           /*!< CAN Msp Init callback                 */
  uint32_t Prescaler;                  /*!< Specifies the length of a time quantum.
  uint32_t RTR;      /*!< Specifies the type of frame for the message that will be transmitted.
  uint32_t RTR;      /*!< Specifies the type of frame for the message that will be transmitted.
  FunctionalState ReceiveFifoLocked;   /*!< Enable or disable the Receive FIFO Locked mode.
  void (* RxFifo0FullCallback)(struct __CAN_HandleTypeDef *hcan);       /*!< CAN Rx FIFO 0 full callback           */
  void (* RxFifo0MsgPendingCallback)(struct __CAN_HandleTypeDef *hcan); /*!< CAN Rx FIFO 0 msg pending callback    */
  void (* RxFifo1FullCallback)(struct __CAN_HandleTypeDef *hcan);       /*!< CAN Rx FIFO 1 full callback           */
  void (* RxFifo1MsgPendingCallback)(struct __CAN_HandleTypeDef *hcan); /*!< CAN Rx FIFO 1 msg pending callback    */
  uint32_t SlaveStartFilterBank;  /*!< Select the start filter bank for the slave CAN instance.
  void (* SleepCallback)(struct __CAN_HandleTypeDef *hcan);             /*!< CAN Sleep callback                    */
  __IO HAL_CAN_StateTypeDef   State;                     /*!< CAN communication state */
  uint32_t StdId;    /*!< Specifies the standard identifier.
  uint32_t StdId;    /*!< Specifies the standard identifier.
  uint32_t SyncJumpWidth;              /*!< Specifies the maximum number of time quanta the CAN hardware
  uint32_t TimeSeg1;                   /*!< Specifies the number of time quanta in Bit Segment 1.
  uint32_t TimeSeg2;                   /*!< Specifies the number of time quanta in Bit Segment 2.
  FunctionalState TimeTriggeredMode;   /*!< Enable or disable the time triggered communication mode.
  uint32_t Timestamp; /*!< Specifies the timestamp counter value captured on start of frame reception.
  FunctionalState TransmitFifoPriority;/*!< Enable or disable the transmit FIFO priority.
  FunctionalState TransmitGlobalTime; /*!< Specifies whether the timestamp counter value captured on start
  void (* TxMailbox0AbortCallback)(struct __CAN_HandleTypeDef *hcan);   /*!< CAN Tx Mailbox 0 abort callback       */
  void (* TxMailbox0CompleteCallback)(struct __CAN_HandleTypeDef *hcan);/*!< CAN Tx Mailbox 0 complete callback    */
  void (* TxMailbox1AbortCallback)(struct __CAN_HandleTypeDef *hcan);   /*!< CAN Tx Mailbox 1 abort callback       */
  void (* TxMailbox1CompleteCallback)(struct __CAN_HandleTypeDef *hcan);/*!< CAN Tx Mailbox 1 complete callback    */
  void (* TxMailbox2AbortCallback)(struct __CAN_HandleTypeDef *hcan);   /*!< CAN Tx Mailbox 2 abort callback       */
  void (* TxMailbox2CompleteCallback)(struct __CAN_HandleTypeDef *hcan);/*!< CAN Tx Mailbox 2 complete callback    */
  void (* WakeUpFromRxMsgCallback)(struct __CAN_HandleTypeDef *hcan);   /*!< CAN Wake Up from Rx msg callback      */
