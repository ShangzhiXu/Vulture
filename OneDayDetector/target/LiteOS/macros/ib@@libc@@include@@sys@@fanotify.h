#define FAN_EVENT_NEXT(meta, len) ((len) -= (meta)->event_len, (struct fanotify_event_metadata*)(((char *)(meta)) + (meta)->event_len))
#define FAN_EVENT_OK(meta, len) ((long)(len) >= (long)FAN_EVENT_METADATA_LEN && (long)(meta)->event_len >= (long)FAN_EVENT_METADATA_LEN && (long)(meta)->event_len <= (long)(len))
