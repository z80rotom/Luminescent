/**
 * @file thread.h
 * @brief Multi-threading support
 * @author plutoo
 * @copyright libnx Authors
 */
#pragma once
#include "libnx/types.h"
#include "libnx/arm/thread_context.h"
// #include "wait.h"

/// Thread information structure.
typedef struct Thread {
    Handle handle;         ///< Thread handle.
    bool   owns_stack_mem; ///< Whether the stack memory is automatically allocated.
    void*  stack_mem;      ///< Pointer to stack memory.
    void*  stack_mirror;   ///< Pointer to stack memory mirror.
    size_t stack_sz;       ///< Stack size.
    void** tls_array;
    struct Thread* next;
    struct Thread** prev_next;
} Thread;