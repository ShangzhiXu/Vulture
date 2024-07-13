  uint32_t Sof_enable;              /*!< Enable or disable the output of the SOF signal.                        */
  uint32_t battery_charging_enable; /*!< Enable or disable Battery charging.                                    */
  uint8_t   data_pid_start;  /*!< Initial data PID
  uint32_t dev_endpoints;           /*!< Device Endpoints number.
  uint8_t   doublebuffer;    /*!< Double buffer enable
  uint32_t ep0_mps;                 /*!< Set the Endpoint 0 Max Packet size.                                    */
  uint8_t   is_in;           /*!< Endpoint direction
  uint8_t   is_stall;        /*!< Endpoint stall condition
  uint32_t low_power_enable;        /*!< Enable or disable Low Power mode                                       */
  uint32_t lpm_enable;              /*!< Enable or disable Battery charging.                                    */
  uint32_t  maxpacket;       /*!< Endpoint Max packet size
  uint8_t   num;             /*!< Endpoint number
  uint32_t phy_itface;              /*!< Select the used PHY interface.
  uint16_t  pmaaddr0;        /*!< PMA Address0
  uint16_t  pmaaddr1;        /*!< PMA Address1
  uint16_t  pmaadress;       /*!< PMA Address
  uint32_t speed;                   /*!< USB Core speed.
  uint16_t  tx_fifo_num;     /*!< This parameter is not required by USB Device FS peripheral, it is used
  uint8_t   type;            /*!< Endpoint type
  uint8_t   *xfer_buff;      /*!< Pointer to transfer buffer                                                */
  uint32_t  xfer_count;      /*!< Partial transfer length in case of multi packet transfer                  */
  uint32_t  xfer_len;        /*!< Current transfer length                                                   */
