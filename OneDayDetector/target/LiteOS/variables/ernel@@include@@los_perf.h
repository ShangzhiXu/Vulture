        UINT32 eventId;       /**< the specific event corresponds to the PerfEventType */
    } events[PERF_MAX_EVENT]; /**< perf event list */
    PerfEventConfig         eventsCfg;                      /**< perf event config */
    UINT32 eventsNr;          /**< total perf event number */
    BOOL                    needSample;                     /**< whether to sample data */
        UINT32 period;        /**< event period, for every "period"th occurrence of the event a
    BOOL predivided;         /**< whether to prescaler (once every 64 counts),
    UINT32                  sampleType;                     /**< type of data to sample defined in PerfSampleType */
    BOOL                    taskFilterEnable;               /**< whether to filter tasks */
    UINT32                  taskIds[PERF_MAX_FILTER_TSKS];  /**< perf task filter list (whitelist) */
    UINT32                  taskIdsNr;                      /**< task numbers of task filter whiltelist,
    UINT32 type;              /**< enum PerfEventType */
