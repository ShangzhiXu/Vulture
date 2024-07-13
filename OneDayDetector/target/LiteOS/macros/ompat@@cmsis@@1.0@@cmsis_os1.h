#define osKernelSysTickMicroSec(microsec) (((uint64_t)(microsec) * (osKernelSysTickFrequency)) / 1000000)
#define osMailQ(name)  \
&os_mailQ_def_##name
#define osMailQDef(name, queue_sz, type) \
extern const osMailQDef_t os_mailQ_def_##name
#define osMailQDef(name, queue_sz, type) \
struct osMailQ os_mailQ_p_##name = { 0, NULL }; \
const osMailQDef_t os_mailQ_def_##name =  \
{ (queue_sz), sizeof(type), &os_mailQ_p_##name }
#define osMessageQ(name) \
&os_messageQ_def_##name
#define osMessageQDef(name, queue_sz, type)   \
extern const osMessageQDef_t os_messageQ_def_##name
#define osMessageQDef(name, queue_sz, type)   \
const osMessageQDef_t os_messageQ_def_##name = \
{ (queue_sz), sizeof (type), NULL }
#define osMutex(name)  \
&os_mutex_def_##name
#define osMutexDef(name)  \
extern const osMutexDef_t os_mutex_def_##name
#define osMutexDef(name)  \
const osMutexDef_t os_mutex_def_##name = { 0 }
#define osPool(name) \
&os_pool_def_##name
#define osPoolDef(name, no, type)   \
extern const osPoolDef_t os_pool_def_##name
#define osPoolDef(name, no, type)   \
const osPoolDef_t os_pool_def_##name = \
{ (no), sizeof(type), NULL }
#define osSemaphore(name)  \
&os_semaphore_def_##name
#define osSemaphoreDef(name)  \
extern const osSemaphoreDef_t os_semaphore_def_##name
#define osSemaphoreDef(name)  \
const osSemaphoreDef_t os_semaphore_def_##name = { 0 }
#define osThread(name)  \
&os_thread_def_##name
#define osThreadDef(name, priority, instances, stacksz)  \
extern const osThreadDef_t os_thread_def_##name
#define osThreadDef(name, priority, instances, stacksz)  \
const osThreadDef_t os_thread_def_##name = \
{ #name, (name), (priority), (instances), (stacksz)  }
#define osTimer(name) \
&os_timer_def_##name
#define osTimerDef(name, function)  \
extern const osTimerDef_t os_timer_def_##name
#define osTimerDef(name, function)  \
const osTimerDef_t os_timer_def_##name = \
{ (function) }
