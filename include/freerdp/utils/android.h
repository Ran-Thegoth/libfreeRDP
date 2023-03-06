 
#ifndef __FREERDP_ANDROID__
#define __FREERDP_ANDROID__

#include <jni.h>
#ifdef __cplusplus 
extern "C" {
#endif    

typedef int (*serial_available)(const char *tty);
typedef int (*serial_read)(const char *tty, void *buf,const int offset, const int size);
typedef void (*serial_write) (const char *tty, const void *buf,const int offset, const int size);
typedef void (*notify_state)(const char *tty,  const int state);

typedef struct {
    serial_available available;
    serial_read read;
    serial_write write;
    notify_state notify;
} SERIAL_HELPER;

void setSerialHelper(SERIAL_HELPER *);

#ifdef __cplusplus 
}
#endif
#endif
