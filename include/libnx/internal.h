#pragma once
#include "libnx/types.h"
#include "libnx/arm/tls.h"
#include "libnx/kernel/thread.h"

#define THREADVARS_MAGIC 0x21545624 // !TV$

// This structure is exactly 0x20 bytes
typedef struct {
    // Magic value used to check if the struct is initialized
    uint32_t magic;

    // Thread handle, for mutexes
    Handle handle;

    // Pointer to the current thread (if exists)
    Thread* thread_ptr;

    // Pointer to this thread's newlib state
    struct _reent* reent;

    // Pointer to this thread's thread-local segment
    void* tls_tp; // !! Offset needs to be TLS+0x1F8 for __aarch64_read_tp !!
} ThreadVars;

static inline ThreadVars* getThreadVars(void) {
    return (ThreadVars*)((uint8_t*)armGetTls() + 0x200 - sizeof(ThreadVars));
}