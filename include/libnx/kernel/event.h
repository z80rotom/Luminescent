#pragma once

#include "libnx/types.h"

/// Kernel-mode event structure.
typedef struct {
    Handle revent;  ///< Read-only event handle
    Handle wevent;  ///< Write-only event handle
    bool autoclear; ///< Autoclear flag
} Event;