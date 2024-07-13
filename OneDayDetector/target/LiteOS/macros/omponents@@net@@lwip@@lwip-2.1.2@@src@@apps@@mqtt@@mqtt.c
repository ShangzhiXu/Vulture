#define MQTT_CTL_PACKET_QOS(fixed_hdr_byte0) ((fixed_hdr_byte0 & 0x6) >> 1)
#define MQTT_CTL_PACKET_TYPE(fixed_hdr_byte0) ((fixed_hdr_byte0 & 0xf0) >> 4)
#define mqtt_ringbuf_free(rb) (MQTT_OUTPUT_RINGBUF_SIZE - mqtt_ringbuf_len(rb))
#define mqtt_ringbuf_linear_read_length(rb) LWIP_MIN(mqtt_ringbuf_len(rb), (MQTT_OUTPUT_RINGBUF_SIZE - (rb)->get))
