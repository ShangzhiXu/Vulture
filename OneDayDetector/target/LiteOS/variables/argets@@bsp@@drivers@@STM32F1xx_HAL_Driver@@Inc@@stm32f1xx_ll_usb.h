  uint32_t  ErrCnt;        /*!< Host channel error count.*/
  uint32_t Host_channels;        /*!< Host Channels number.
  uint32_t Sof_enable;           /*!< Enable or disable the output of the SOF signal.                        */
  uint32_t Sof_enable;           /*!< Enable or disable the output of the SOF signal.                        */
  uint32_t battery_charging_enable; /*!< Enable or disable Battery charging.                                  */
  uint8_t   ch_num;        /*!< Host channel number.
  uint8_t   data_pid;      /*!< Initial data PID.
  uint8_t   data_pid_start; /*!< Initial data PID
  uint8_t   dev_addr ;     /*!< USB device address.
  uint32_t dev_endpoints;        /*!< Device Endpoints number.
  uint32_t dev_endpoints;        /*!< Device Endpoints number.
  uint32_t  dma_addr;       /*!< 32 bits aligned transfer buffer address                                  */
  uint32_t  dma_addr;      /*!< 32 bits aligned transfer buffer address.                                   */
  uint8_t   do_ping;       /*!< Enable or disable the use of the PING protocol for HS mode.                */
  uint8_t   doublebuffer;    /*!< Double buffer enable
  uint32_t ep0_mps;              /*!< Set the Endpoint 0 Max Packet size. 
  uint32_t ep0_mps;              /*!< Set the Endpoint 0 Max Packet size. 
  uint8_t   ep_is_in;      /*!< Endpoint direction
  uint8_t   ep_num;        /*!< Endpoint number.
  uint8_t   ep_type;       /*!< Endpoint Type.
  uint8_t   even_odd_frame; /*!< IFrame parity
  uint8_t   is_in;          /*!< Endpoint direction
  uint8_t   is_in;          /*!< Endpoint direction
  uint8_t   is_stall;       /*!< Endpoint stall condition
  uint8_t   is_stall;       /*!< Endpoint stall condition
  uint32_t low_power_enable;       /*!< Enable or disable Low Power mode                                      */
  uint32_t low_power_enable;     /*!< Enable or disable the low power mode.                                  */
  uint32_t lpm_enable;             /*!< Enable or disable Battery charging.                                  */
  uint16_t  max_packet;    /*!< Endpoint Max packet size.
  uint32_t  maxpacket;      /*!< Endpoint Max packet size
  uint32_t  maxpacket;      /*!< Endpoint Max packet size
  uint8_t   num;            /*!< Endpoint number
  uint8_t   num;            /*!< Endpoint number
  uint32_t phy_itface;           /*!< Select the used PHY interface.
  uint16_t  pmaaddr0;       /*!< PMA Address0
  uint16_t  pmaaddr1;        /*!< PMA Address1
  uint16_t  pmaadress;      /*!< PMA Address
  uint8_t   process_ping;  /*!< Execute the PING protocol for HS mode.                                     */
  uint32_t speed;                /*!< USB Core speed.
  uint32_t speed;                /*!< USB Core speed.
  uint8_t   speed;         /*!< USB Host speed.
  USB_OTG_HCStateTypeDef   state;     /*!< Host Channel state.
  uint8_t   toggle_in;     /*!< IN transfer current toggle flag.
  uint8_t   toggle_out;    /*!< OUT transfer current toggle flag
  uint16_t  tx_fifo_num;    /*!< This parameter is not required by USB Device FS peripheral, it is used 
  uint16_t  tx_fifo_num;    /*!< Transmission FIFO number
  uint8_t   type;           /*!< Endpoint type
  uint8_t   type;           /*!< Endpoint type
  USB_OTG_URBStateTypeDef  urb_state;  /*!< URB state.
  uint32_t use_external_vbus;    /*!< Enable or disable the use of the external VBUS.                        */
  uint32_t vbus_sensing_enable;  /*!< Enable or disable the VBUS Sensing feature.                            */
  uint8_t   *xfer_buff;     /*!< Pointer to transfer buffer                                               */
  uint8_t   *xfer_buff;     /*!< Pointer to transfer buffer                                               */
  uint8_t   *xfer_buff;    /*!< Pointer to transfer buffer.                                                */
  uint32_t  xfer_count;     /*!< Partial transfer length in case of multi packet transfer                 */
  uint32_t  xfer_count;     /*!< Partial transfer length in case of multi packet transfer                 */
  uint32_t  xfer_count;    /*!< Partial transfer length in case of multi packet transfer.                  */
  uint32_t  xfer_len;       /*!< Current transfer length                                                  */
  uint32_t  xfer_len;       /*!< Current transfer length                                                  */
  uint32_t  xfer_len;      /*!< Current transfer length.                                                   */
