    } api_call;
    } api_msg;
      struct tcpip_api_call_data *arg;
      void *arg;
    } cb;
      void *ctx;
  err_t err;
      tcpip_api_call_fn function;
      tcpip_callback_fn function;
      tcpip_callback_fn function;
      sys_timeout_handler h;
    } inp;
      netif_input_fn input_fn;
      u32_t msecs;
      void* msg;
  } msg;
      struct netif *netif;
      struct pbuf *p;
      sys_sem_t *sem;
  sys_sem_t sem;
    } tmo;
  enum tcpip_msg_type type;
