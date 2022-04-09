#pragma once

/// StorageId
typedef enum {
    NcmStorageId_None          = 0,   ///< None
    NcmStorageId_Host          = 1,   ///< Host
    NcmStorageId_GameCard      = 2,   ///< GameCard
    NcmStorageId_BuiltInSystem = 3,   ///< BuiltInSystem
    NcmStorageId_BuiltInUser   = 4,   ///< BuiltInUser
    NcmStorageId_SdCard        = 5,   ///< SdCard
    NcmStorageId_Any           = 6,   ///< Any
} NcmStorageId;
