#pragma once

#include "types.h"

/// Account UserId.
typedef struct {
    uint64_t uid[2];       ///< UserId. All-zero is invalid / Uid not set. See also \ref accountUidIsValid.
} AccountUid;