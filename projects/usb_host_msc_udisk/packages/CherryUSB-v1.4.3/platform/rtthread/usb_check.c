#include "rtthread.h"

#ifdef PKG_CHERRYUSB_HOST

#ifndef RT_USING_TIMER_SOFT
#error must enable RT_USING_TIMER_SOFT to support timer callback in thread
#endif

#if RT_TIMER_THREAD_STACK_SIZE < 2048
#error "RT_TIMER_THREAD_STACK_SIZE must be >= 2048"
#endif

#endif
