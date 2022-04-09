#pragma once
#include "libnx/types.h"
#include "libnx/kernel/mutex.h"
#include "libnx/kernel/condvar.h"

#define NX_SESSION_MGR_MAX_SESSIONS 16

typedef struct SessionMgr
{
    Handle sessions[NX_SESSION_MGR_MAX_SESSIONS];
    uint32_t num_sessions;
    uint32_t free_mask;
    Mutex mutex;
    CondVar condvar;
    uint32_t num_waiters;
} SessionMgr;