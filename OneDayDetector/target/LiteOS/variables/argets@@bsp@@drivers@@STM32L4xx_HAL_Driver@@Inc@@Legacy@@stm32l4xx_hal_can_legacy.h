  uint32_t ABOM;       /*!< Enable or disable the automatic bus-off management.
  uint32_t AWUM;       /*!< Enable or disable the automatic wake-up mode.
  uint32_t BS1;        /*!< Specifies the number of time quanta in Bit Segment 1.
  uint32_t BS2;        /*!< Specifies the number of time quanta in Bit Segment 2.
  uint32_t BankNumber;            /*!< Select the start slave bank filter.
  uint32_t DLC;         /*!< Specifies the length of the frame that will be received.
  uint32_t DLC;      /*!< Specifies the length of the frame that will be transmitted.
  uint8_t Data[8];      /*!< Contains the data to be received.
  uint8_t Data[8];   /*!< Contains the data to be transmitted.
  __IO uint32_t               ErrorCode;  /*!< CAN Error code                 */
  uint32_t ExtId;       /*!< Specifies the extended identifier.
  uint32_t ExtId;    /*!< Specifies the extended identifier.
  uint32_t FIFONumber;  /*!< Specifies the receive FIFO number.
  uint32_t FMI;         /*!< Specifies the index of the filter the message stored in the mailbox passes through.
  uint32_t FilterActivation;      /*!< Enable or disable the filter.
  uint32_t FilterFIFOAssignment;  /*!< Specifies the FIFO (0 or 1) which will be assigned to the filter.
  uint32_t FilterIdHigh;          /*!< Specifies the filter identification number (MSBs for a 32-bit
  uint32_t FilterIdLow;           /*!< Specifies the filter identification number (LSBs for a 32-bit
  uint32_t FilterMaskIdHigh;      /*!< Specifies the filter mask number or identification number,
  uint32_t FilterMaskIdLow;       /*!< Specifies the filter mask number or identification number,
  uint32_t FilterMode;            /*!< Specifies the filter mode to be initialized.
  uint32_t FilterNumber;          /*!< Specifies the filter which will be initialized.
  uint32_t FilterScale;           /*!< Specifies the filter scale.
  uint32_t IDE;         /*!< Specifies the type of identifier for the message that will be received.
  uint32_t IDE;      /*!< Specifies the type of identifier for the message that will be transmitted.
  CAN_InitTypeDef             Init;       /*!< CAN required parameters        */
  CAN_TypeDef                 *Instance;  /*!< Register base address          */
  HAL_LockTypeDef             Lock;       /*!< CAN locking object             */
  uint32_t Mode;       /*!< Specifies the CAN operating mode.
  uint32_t NART;       /*!< Enable or disable the non-automatic retransmission mode.
  uint32_t Prescaler;  /*!< Specifies the length of a time quantum.
  uint32_t RFLM;       /*!< Enable or disable the receive FIFO Locked mode.
  uint32_t RTR;         /*!< Specifies the type of frame for the received message.
  uint32_t RTR;      /*!< Specifies the type of frame for the message that will be transmitted.
  uint32_t SJW;        /*!< Specifies the maximum number of time quanta
  __IO HAL_CAN_StateTypeDef   State;      /*!< CAN communication state        */
  uint32_t StdId;       /*!< Specifies the standard identifier.
  uint32_t StdId;    /*!< Specifies the standard identifier.
  uint32_t TTCM;       /*!< Enable or disable the time triggered communication mode.
  uint32_t TXFP;       /*!< Enable or disable the transmit FIFO priority.
  CanRxMsgTypeDef*            pRxMsg;     /*!< Pointer to reception structure */
  CanTxMsgTypeDef*            pTxMsg;     /*!< Pointer to transmit structure  */
