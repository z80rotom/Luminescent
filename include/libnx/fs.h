/**
 * @file fs.h
 * @brief Filesystem (fsp-srv) service IPC wrapper.
 * Normally applications should just use standard stdio not FS-serv directly. However this can be used if obtaining a FsFileSystem, FsFile, or FsStorage, for mounting with fs_dev/romfs_dev, etc.
 * @author plutoo
 * @author yellowint8_t
 * @copyright libnx Authors
 */
#pragma once
// #include "../types.h"
// #include "../kernel/event.h"
// #include "../services/ncm_types.h"
// #include "../services/acc.h"
// #include "../sf/service.h"

// We use wrapped handles for type safety.
#include "libnx/types.h"
#include "libnx/service.h"
#include "libnx/services/acc.h"
#include "libnx/kernel/event.h"
#include "libnx/services/ncm_types.h"

#define FS_MAX_PATH 0x301

/// For use with \ref FsSaveDataAttribute.
#define FS_SAVEDATA_CURRENT_APPLICATIONID 0

typedef struct {
    uint8_t c[0x10];
} FsRightsId;

typedef struct {
    Service s;
} FsFileSystem;

typedef struct {
    Service s;
} FsFile;

typedef struct {
    Service s;
} FsDir;

typedef struct {
    Service s;
} FsStorage;

typedef struct {
    Service s;
} FsSaveDataInfoReader;

typedef struct {
    Service s;
} FsEventNotifier;

typedef struct {
    Service s;
} FsDeviceOperator;

/// Directory entry.
typedef struct {
    char name[FS_MAX_PATH];         ///< Entry name.
    uint8_t pad[3];
    int8_t type;                        ///< See FsDirEntryType.
    uint8_t pad2[3];                     ///< ?
    int64_t file_size;                  ///< File size.
} FsDirectoryEntry;

/// SaveDataAttribute
typedef struct {
    uint64_t application_id;             ///< ApplicationId of the savedata to access when accessing other programs' savedata via SaveData, otherwise FS_SAVEDATA_CURRENT_APPLICATIONID.
    AccountUid uid;                 ///< \ref AccountUid for the user-specific savedata to access, otherwise 0 for common savedata.
    uint64_t system_save_data_id;        ///< SystemSaveDataId, 0 for ::FsSaveDataType_Account.
    uint8_t save_data_type;              ///< \ref FsSaveDataType
    uint8_t save_data_rank;              ///< \ref FsSaveDataRank
    uint16_t save_data_index;            ///< SaveDataIndex
    uint32_t pad_x24;                    ///< Padding.
    uint64_t unk_x28;                    ///< 0 for ::FsSaveDataType_System/::FsSaveDataType_Account.
    uint64_t unk_x30;                    ///< 0 for ::FsSaveDataType_System/::FsSaveDataType_Account.
    uint64_t unk_x38;                    ///< 0 for ::FsSaveDataType_System/::FsSaveDataType_Account.
} FsSaveDataAttribute;

/// SaveDataExtraData
typedef struct {
    FsSaveDataAttribute attr;       ///< \ref FsSaveDataAttribute
    uint64_t owner_id;                   ///< ProgramId of the owner of this save data. 0 for ::FsSaveDataType_System.
    uint64_t timestamp;                  ///< POSIX timestamp.
    uint32_t flags;                      ///< \ref FsSaveDataFlags
    uint32_t unk_x54;                    ///< Normally 0. Possibly unused?
    int64_t data_size;                  ///< Usable save data size.
    int64_t journal_size;               ///< Journal size of the save data.
    uint64_t commit_id;                  ///< Id of the latest commit.
    uint8_t unused[0x190];               ///< Uninitialized.
} FsSaveDataExtraData;

/// SaveDataMetaInfo
typedef struct {
    uint32_t size;
    uint8_t type;                        ///< \ref FsSaveDataMetaType
    uint8_t reserved[0x0B];
} FsSaveDataMetaInfo;

/// SaveDataCreationInfo
typedef struct {
    int64_t save_data_size;    ///< Size of the save data.
    int64_t journal_size;      ///< Journal size of the save data.
    uint64_t available_size;    ///< AvailableSize
    uint64_t owner_id;          ///< ProgramId of the owner of this save data. 0 for ::FsSaveDataType_System.
    uint32_t flags;             ///< \ref FsSaveDataFlags
    uint8_t save_data_space_id; ///< \ref FsSaveDataSpaceId
    uint8_t unk;                ///< 0 for ::FsSaveDataType_System.
    uint8_t padding[0x1a];      ///< Uninitialized for ::FsSaveDataType_System.
} FsSaveDataCreationInfo;

/// SaveDataInfo
typedef struct {
    uint64_t save_data_id;         ///< SaveDataId
    uint8_t save_data_space_id;    ///< \ref FsSaveDataSpaceId
    uint8_t save_data_type;        ///< \ref FsSaveDataType
    uint8_t pad[6];                ///< Padding.
    AccountUid uid;           ///< FsSave::userID
    uint64_t system_save_data_id;  ///< FsSaveDataAttribute::system_save_data_id
    uint64_t application_id;       ///< ApplicationId for ::FsSaveDataType_Account.
    uint64_t size;                 ///< Raw saveimage size.
    uint16_t save_data_index;      ///< SaveDataIndex
    uint8_t save_data_rank;        ///< \ref FsSaveDataRank
    uint8_t unk_x3b[0x25];         ///< Unknown. Usually zeros?
} FsSaveDataInfo;

typedef struct {
    uint64_t created;  ///< POSIX timestamp.
    uint64_t modified; ///< POSIX timestamp.
    uint64_t accessed; ///< POSIX timestamp.
    uint8_t is_valid;  ///< 0x1 when the timestamps are set.
    uint8_t padding[7];
} FsTimeStampRaw;

/// This is nn::fssystem::ArchiveMacKey. Used by \ref setsysGetThemeKey and \ref setsysSetThemeKey. Does not appear to be in use elsewhere.
typedef struct {
    uint8_t key[0x10];
} FsArchiveMacKey;

/// Returned by fsFsGetEntryType.
typedef enum {
    FsDirEntryType_Dir  = 0, ///< Entry is a directory.
    FsDirEntryType_File = 1, ///< Entry is a file.
} FsDirEntryType;

/// For use with fsFsOpenFile.
typedef enum {
    FsOpenMode_Read   = BIT(0), ///< Open for reading.
    FsOpenMode_Write  = BIT(1), ///< Open for writing.
    FsOpenMode_Append = BIT(2), ///< Append file.
} FsOpenMode;

/// For use with fsFsCreateFile.
typedef enum {
    FsCreateOption_BigFile = BIT(0), ///< Creates a ConcatenationFile (dir with archive bit) instead of file.
} FsCreateOption;

/// For use with fsFsOpenDirectory.
typedef enum {
    FsDirOpenMode_ReadDirs   = BIT(0),  ///< Enable reading directory entries.
    FsDirOpenMode_ReadFiles  = BIT(1),  ///< Enable reading file entries.
    FsDirOpenMode_NoFileSize = BIT(31), ///< Causes result entries to not contain filesize information (always 0).
} FsDirOpenMode;

/// For use with fsFileRead.
typedef enum {
    FsReadOption_None = 0, ///< No option.
} FsReadOption;

/// For use with fsFileWrite.
typedef enum {
    FsWriteOption_None  = 0,      ///< No option.
    FsWriteOption_Flush = BIT(0), ///< Forces a flush after write.
} FsWriteOption;

typedef enum {
    FsContentStorageId_System = 0,
    FsContentStorageId_User   = 1,
    FsContentStorageId_SdCard = 2,
} FsContentStorageId;

typedef enum {
    FsCustomStorageId_System   = 0,
    FsCustomStorageId_SdCard   = 1,
} FsCustomStorageId;

/// ImageDirectoryId
typedef enum {
    FsImageDirectoryId_Nand = 0,
    FsImageDirectoryId_Sd   = 1,
} FsImageDirectoryId;

/// SaveDataSpaceId
typedef enum {
    FsSaveDataSpaceId_System           = 0,    ///< System
    FsSaveDataSpaceId_User             = 1,    ///< User
    FsSaveDataSpaceId_SdSystem         = 2,    ///< SdSystem
    FsSaveDataSpaceId_Temporary        = 3,    ///< [3.0.0+] Temporary
    FsSaveDataSpaceId_SdUser           = 4,    ///< [4.0.0+] SdUser
    FsSaveDataSpaceId_ProperSystem     = 100,  ///< [3.0.0+] ProperSystem
    FsSaveDataSpaceId_SafeMode         = 101,  ///< [3.0.0+] SafeMode

    FsSaveDataSpaceId_All              = -1,   ///< Pseudo value for fsOpenSaveDataInfoReader().
} FsSaveDataSpaceId;

/// SaveDataType
typedef enum {
    FsSaveDataType_System              = 0, ///< System
    FsSaveDataType_Account             = 1, ///< Account
    FsSaveDataType_Bcat                = 2, ///< Bcat
    FsSaveDataType_Device              = 3, ///< Device
    FsSaveDataType_Temporary           = 4, ///< [3.0.0+] Temporary
    FsSaveDataType_Cache               = 5, ///< [3.0.0+] Cache
    FsSaveDataType_SystemBcat          = 6, ///< [4.0.0+] SystemBcat
} FsSaveDataType;

/// SaveDataRank
typedef enum {
    FsSaveDataRank_Primary   = 0,           ///< Primary
    FsSaveDataRank_Secondary = 1,           ///< Secondary
} FsSaveDataRank;

/// SaveDataFlags
typedef enum {
    FsSaveDataFlags_KeepAfterResettingSystemSaveData                    = BIT(0),
    FsSaveDataFlags_KeepAfterRefurbishment                              = BIT(1),
    FsSaveDataFlags_KeepAfterResettingSystemSaveDataWithoutUserSaveData = BIT(2),
    FsSaveDataFlags_NeedsSecureDelete                                   = BIT(3),
} FsSaveDataFlags;

/// SaveDataMetaType
typedef enum {
    FsSaveDataMetaType_None             = 0,
    FsSaveDataMetaType_Thumbnail        = 1,
    FsSaveDataMetaType_ExtensionContext = 2,
} FsSaveDataMetaType;

typedef enum {
    FsGameCardAttribute_AutoBootFlag                          = BIT(0), ///< Causes the cartridge to automatically start on bootup
    FsGameCardAttribute_HistoryEraseFlag                      = BIT(1), ///< Causes NS to throw an error on attempt to load the cartridge
    FsGameCardAttribute_RepairToolFlag                        = BIT(2), ///< [4.0.0+] Indicates that this gamecard is a repair tool.
    FsGameCardAttribute_DifferentRegionCupToTerraDeviceFlag   = BIT(3), ///< [9.0.0+] DifferentRegionCupToTerraDeviceFlag
    FsGameCardAttribute_DifferentRegionCupToGlobalDeviceFlag  = BIT(4), ///< [9.0.0+] DifferentRegionCupToGlobalDeviceFlag
} FsGameCardAttribute;

typedef enum {
    FsGameCardPartition_Update = 0,
    FsGameCardPartition_Normal = 1,
    FsGameCardPartition_Secure = 2,
    FsGameCardPartition_Logo   = 3,  ///< [4.0.0+]
} FsGameCardPartition;

typedef struct {
    uint32_t value;
} FsGameCardHandle;

typedef struct {
    uint32_t aes_ctr_key_type;           ///< Contains bitflags describing how data is AES encrypted.
    uint32_t speed_emulation_type;       ///< Contains bitflags describing how data is emulated.
    uint32_t reserved[0x38/sizeof(uint32_t)];
} FsRangeInfo;

typedef enum {
    FsOperationId_Clear,           ///< Fill range with zero for supported file/storage.
    FsOperationId_ClearSignature,  ///< Clears signature for supported file/storage.
    FsOperationId_InvalidateCache, ///< Invalidates cache for supported file/storage.
    FsOperationId_QueryRange,      ///< Retrieves information on data for supported file/storage.
} FsOperationId;

/// BisPartitionId
typedef enum {
    FsBisPartitionId_BootPartition1Root              = 0,

    FsBisPartitionId_BootPartition2Root              = 10,

    FsBisPartitionId_UserDataRoot                    = 20,
    FsBisPartitionId_BootConfigAndPackage2Part1      = 21,
    FsBisPartitionId_BootConfigAndPackage2Part2      = 22,
    FsBisPartitionId_BootConfigAndPackage2Part3      = 23,
    FsBisPartitionId_BootConfigAndPackage2Part4      = 24,
    FsBisPartitionId_BootConfigAndPackage2Part5      = 25,
    FsBisPartitionId_BootConfigAndPackage2Part6      = 26,
    FsBisPartitionId_CalibrationBinary               = 27,
    FsBisPartitionId_CalibrationFile                 = 28,
    FsBisPartitionId_SafeMode                        = 29,
    FsBisPartitionId_User                            = 30,
    FsBisPartitionId_System                          = 31,
    FsBisPartitionId_SystemProperEncryption          = 32,
    FsBisPartitionId_SystemProperPartition           = 33,
    FsBisPartitionId_SignedSystemPartitionOnSafeMode = 34,
} FsBisPartitionId;

/// FileSystemType
typedef enum {
    FsFileSystemType_Logo               = 2,  ///< Logo
    FsFileSystemType_ContentControl     = 3,  ///< ContentControl
    FsFileSystemType_ContentManual      = 4,  ///< ContentManual
    FsFileSystemType_ContentMeta        = 5,  ///< ContentMeta
    FsFileSystemType_ContentData        = 6,  ///< ContentData
    FsFileSystemType_ApplicationPackage = 7,  ///< ApplicationPackage
    FsFileSystemType_RegisteredUpdate   = 8,  ///< [4.0.0+] RegisteredUpdate
} FsFileSystemType;

/// FileSystemQueryId
typedef enum {
    FsFileSystemQueryId_SetConcatenationFileAttribute           = 0,  ///< [4.0.0+]
    FsFileSystemQueryId_IsValidSignedSystemPartitionOnSdCard    = 2,  ///< [8.0.0+]
} FsFileSystemQueryId;

/// FsPriority
typedef enum {
    FsPriority_Normal     = 0,
    FsPriority_Realtime   = 1,
    FsPriority_Low        = 2,
    FsPriority_Background = 3,
} FsPriority;

/// For use with fsOpenHostFileSystemWithOption
typedef enum {
    FsMountHostOptionFlag_None                = 0,      ///< Host filesystem will be case insensitive.
    FsMountHostOptionFlag_PseudoCaseSensitive = BIT(0), ///< Host filesystem will be pseudo case sensitive.
} FsMountHostOption;

/// Initialize fsp-srv. Used automatically during app startup.
Result fsInitialize(void);

/// Exit fsp-srv. Used automatically during app exit.
void fsExit(void);

/// Gets the Service object for the actual fsp-srv service session.
Service* fsGetServiceSession(void);

/// [5.0.0+] Configures the \ref FsPriority of all filesystem commands issued within the current thread.
void fsSetPriority(FsPriority prio);

/// Mount requested filesystem type from content file
Result fsOpenFileSystem(FsFileSystem* out, FsFileSystemType fsType, const char* contentPath); ///< same as calling fsOpenFileSystemWithId with 0 as id
Result fsOpenDataFileSystemByCurrentProcess(FsFileSystem *out);
Result fsOpenFileSystemWithPatch(FsFileSystem* out, uint64_t id, FsFileSystemType fsType); ///< [2.0.0+], like OpenFileSystemWithId but without content path.
Result fsOpenFileSystemWithId(FsFileSystem* out, uint64_t id, FsFileSystemType fsType, const char* contentPath); ///< works on all firmwares, id is ignored on [1.0.0]
Result fsOpenDataFileSystemByProgramId(FsFileSystem *out, uint64_t program_id); ///< [3.0.0+]
Result fsOpenBisFileSystem(FsFileSystem* out, FsBisPartitionId partitionId, const char* string);
Result fsOpenBisStorage(FsStorage* out, FsBisPartitionId partitionId);

/// Do not call this directly, see fs_dev.h.
Result fsOpenSdCardFileSystem(FsFileSystem* out);

Result fsOpenHostFileSystem(FsFileSystem* out, const char *path);
Result fsOpenHostFileSystemWithOption(FsFileSystem* out, const char *path, uint32_t flags); ///< [9.0.0+]

Result fsDeleteSaveDataFileSystem(uint64_t application_id);
Result fsCreateSaveDataFileSystem(const FsSaveDataAttribute* attr, const FsSaveDataCreationInfo* creation_info, const FsSaveDataMetaInfo* meta);
Result fsCreateSaveDataFileSystemBySystemSaveDataId(const FsSaveDataAttribute* attr, const FsSaveDataCreationInfo* creation_info);
Result fsDeleteSaveDataFileSystemBySaveDataSpaceId(FsSaveDataSpaceId save_data_space_id, uint64_t saveID); ///< [2.0.0+]
Result fsDeleteSaveDataFileSystemBySaveDataAttribute(FsSaveDataSpaceId save_data_space_id, const FsSaveDataAttribute* attr); ///< [4.0.0+]

Result fsIsExFatSupported(bool* out);

Result fsOpenGameCardFileSystem(FsFileSystem* out, const FsGameCardHandle* handle, FsGameCardPartition partition);

Result fsExtendSaveDataFileSystem(FsSaveDataSpaceId save_data_space_id, uint64_t saveID, int64_t dataSize, int64_t journalSize); ///< [3.0.0+]

Result fsOpenSaveDataFileSystem(FsFileSystem* out, FsSaveDataSpaceId save_data_space_id, const FsSaveDataAttribute *attr);
Result fsOpenSaveDataFileSystemBySystemSaveDataId(FsFileSystem* out, FsSaveDataSpaceId save_data_space_id, const FsSaveDataAttribute *attr);
Result fsOpenReadOnlySaveDataFileSystem(FsFileSystem* out, FsSaveDataSpaceId save_data_space_id, const FsSaveDataAttribute *attr); ///< [2.0.0+].

Result fsReadSaveDataFileSystemExtraDataBySaveDataSpaceId(void* buf, size_t len, FsSaveDataSpaceId save_data_space_id, uint64_t saveID);
Result fsReadSaveDataFileSystemExtraData(void* buf, size_t len, uint64_t saveID);
Result fsWriteSaveDataFileSystemExtraData(const void* buf, size_t len, FsSaveDataSpaceId save_data_space_id, uint64_t saveID);

Result fsOpenSaveDataInfoReader(FsSaveDataInfoReader* out, FsSaveDataSpaceId save_data_space_id);

Result fsOpenImageDirectoryFileSystem(FsFileSystem* out, FsImageDirectoryId image_directory_id);
Result fsOpenContentStorageFileSystem(FsFileSystem* out, FsContentStorageId content_storage_id);
Result fsOpenCustomStorageFileSystem(FsFileSystem* out, FsCustomStorageId custom_storage_id); ///< [7.0.0+]

Result fsOpenDataStorageByCurrentProcess(FsStorage* out);
Result fsOpenDataStorageByProgramId(FsStorage *out, uint64_t program_id); /// <[3.0.0+]
Result fsOpenDataStorageByDataId(FsStorage* out, uint64_t dataId, NcmStorageId storageId);
Result fsOpenPatchDataStorageByCurrentProcess(FsStorage* out);

Result fsOpenDeviceOperator(FsDeviceOperator* out);
Result fsOpenSdCardDetectionEventNotifier(FsEventNotifier* out);

Result fsIsSignedSystemPartitionOnSdCardValid(bool *out);

/// Retrieves the rights id corresponding to the content path. Only available on [2.0.0+].
Result fsGetRightsIdByPath(const char* path, FsRightsId* out_rights_id);

/// Retrieves the rights id and key generation corresponding to the content path. Only available on [3.0.0+].
Result fsGetRightsIdAndKeyGenerationByPath(const char* path, uint8_t* out_key_generation, FsRightsId* out_rights_id);

Result fsDisableAutoSaveDataCreation(void);

Result fsSetGlobalAccessLogMode(uint32_t mode);
Result fsGetGlobalAccessLogMode(uint32_t* out_mode);
Result fsOutputAccessLogToSdCard(const char *log, size_t size);

/// Only available on [7.0.0+].
Result fsGetProgramIndexForAccessLog(uint32_t *out_program_index, uint32_t *out_program_count);

// Wrapper(s) for fsCreateSaveDataFileSystem.
Result fsCreate_TemporaryStorage(uint64_t application_id, uint64_t owner_id, int64_t size, uint32_t flags);

// Wrapper(s) for fsCreateSaveDataFileSystemBySystemSaveDataId.
Result fsCreate_SystemSaveDataWithOwner(FsSaveDataSpaceId save_data_space_id, uint64_t system_save_data_id, AccountUid uid, uint64_t owner_id, int64_t size, int64_t journal_size, uint32_t flags);
Result fsCreate_SystemSaveData(FsSaveDataSpaceId save_data_space_id, uint64_t system_save_data_id, int64_t size, int64_t journal_size, uint32_t flags);

/// Wrapper for fsOpenSaveDataFileSystem.
/// See \ref FsSaveDataAttribute for application_id and uid.
Result fsOpen_SaveData(FsFileSystem* out, uint64_t application_id, AccountUid uid);

/// Wrapper for fsOpenReadOnlySaveDataFileSystem.
/// Only available on [2.0.0+].
/// See \ref FsSaveDataAttribute for application_id and uid.
Result fsOpen_SaveDataReadOnly(FsFileSystem* out, uint64_t application_id, AccountUid uid);

/// Wrapper for fsOpenSaveDataFileSystem, for opening BcatSaveData.
Result fsOpen_BcatSaveData(FsFileSystem* out, uint64_t application_id);

/// Wrapper for fsOpenSaveDataFileSystem, for opening DeviceSaveData.
/// See \ref FsSaveDataAttribute for application_id.
Result fsOpen_DeviceSaveData(FsFileSystem* out, uint64_t application_id);

/// Wrapper for fsOpenSaveDataFileSystem, for opening TemporaryStorage.
/// Only available on [3.0.0+].
Result fsOpen_TemporaryStorage(FsFileSystem* out);

/// Wrapper for fsOpenSaveDataFileSystem, for opening CacheStorage.
/// Only available on [3.0.0+].
/// See \ref FsSaveDataAttribute for application_id.
Result fsOpen_CacheStorage(FsFileSystem* out, uint64_t application_id, uint16_t save_data_index);

/// Wrapper for fsOpenSaveDataFileSystemBySystemSaveDataId, for opening SystemSaveData.
/// WARNING: You can brick when writing to SystemSaveData, if the data is corrupted etc.
Result fsOpen_SystemSaveData(FsFileSystem* out, FsSaveDataSpaceId save_data_space_id, uint64_t system_save_data_id, AccountUid uid);

/// Wrapper for fsOpenSaveDataFileSystemBySystemSaveDataId, for opening SystemBcatSaveData.
/// Only available on [4.0.0+].
Result fsOpen_SystemBcatSaveData(FsFileSystem* out, uint64_t system_save_data_id);

// IFileSystem
Result fsFsCreateFile(FsFileSystem* fs, const char* path, int64_t size, uint32_t option);
Result fsFsDeleteFile(FsFileSystem* fs, const char* path);
Result fsFsCreateDirectory(FsFileSystem* fs, const char* path);
Result fsFsDeleteDirectory(FsFileSystem* fs, const char* path);
Result fsFsDeleteDirectoryRecursively(FsFileSystem* fs, const char* path);
Result fsFsRenameFile(FsFileSystem* fs, const char* cur_path, const char* new_path);
Result fsFsRenameDirectory(FsFileSystem* fs, const char* cur_path, const char* new_path);
Result fsFsGetEntryType(FsFileSystem* fs, const char* path, FsDirEntryType* out);
Result fsFsOpenFile(FsFileSystem* fs, const char* path, uint32_t mode, FsFile* out);
Result fsFsOpenDirectory(FsFileSystem* fs, const char* path, uint32_t mode, FsDir* out);
Result fsFsCommit(FsFileSystem* fs);
Result fsFsGetFreeSpace(FsFileSystem* fs, const char* path, int64_t* out);
Result fsFsGetTotalSpace(FsFileSystem* fs, const char* path, int64_t* out);
Result fsFsGetFileTimeStampRaw(FsFileSystem* fs, const char* path, FsTimeStampRaw *out); ///< [3.0.0+]
Result fsFsCleanDirectoryRecursively(FsFileSystem* fs, const char* path); ///< [3.0.0+]
Result fsFsQueryEntry(FsFileSystem* fs, void *out, size_t out_size, const void *in, size_t in_size, const char* path, FsFileSystemQueryId query_id); ///< [4.0.0+]
void fsFsClose(FsFileSystem* fs);

/// Uses \ref fsFsQueryEntry to set the archive bit on the specified absolute directory path.
/// This will cause HOS to treat the directory as if it were a file containing the directory's concatenated contents.
Result fsFsSetConcatenationFileAttribute(FsFileSystem* fs, const char *path);

/// Wrapper for fsFsQueryEntry with FsFileSystemQueryId_IsValidSignedSystemPartitionOnSdCard.
/// Only available on [8.0.0+].
Result fsFsIsValidSignedSystemPartitionOnSdCard(FsFileSystem* fs, bool *out);

// IFile
Result fsFileRead(FsFile* f, int64_t off, void* buf, uint64_t read_size, uint32_t option, uint64_t* bytes_read);
Result fsFileWrite(FsFile* f, int64_t off, const void* buf, uint64_t write_size, uint32_t option);
Result fsFileFlush(FsFile* f);
Result fsFileSetSize(FsFile* f, int64_t sz);
Result fsFileGetSize(FsFile* f, int64_t* out);
Result fsFileOperateRange(FsFile* f, FsOperationId op_id, int64_t off, int64_t len, FsRangeInfo* out); ///< [4.0.0+]
void fsFileClose(FsFile* f);

// IDirectory
Result fsDirRead(FsDir* d, int64_t* total_entries, size_t max_entries, FsDirectoryEntry *buf);
Result fsDirGetEntryCount(FsDir* d, int64_t* count);
void fsDirClose(FsDir* d);

// IStorage
Result fsStorageRead(FsStorage* s, int64_t off, void* buf, uint64_t read_size);
Result fsStorageWrite(FsStorage* s, int64_t off, const void* buf, uint64_t write_size);
Result fsStorageFlush(FsStorage* s);
Result fsStorageSetSize(FsStorage* s, int64_t sz);
Result fsStorageGetSize(FsStorage* s, int64_t* out);
Result fsStorageOperateRange(FsStorage* s, FsOperationId op_id, int64_t off, int64_t len, FsRangeInfo* out); ///< [4.0.0+]
void fsStorageClose(FsStorage* s);

// ISaveDataInfoReader

/// Read FsSaveDataInfo data into the buf array.
Result fsSaveDataInfoReaderRead(FsSaveDataInfoReader *s, FsSaveDataInfo* buf, size_t max_entries, int64_t* total_entries);
void fsSaveDataInfoReaderClose(FsSaveDataInfoReader *s);

// IEventNotifier
Result fsEventNotifierGetEventHandle(FsEventNotifier* e, Event* out, bool autoclear);
void fsEventNotifierClose(FsEventNotifier* e);

// IDeviceOperator
Result fsDeviceOperatorIsSdCardInserted(FsDeviceOperator* d, bool* out);
Result fsDeviceOperatorIsGameCardInserted(FsDeviceOperator* d, bool* out);
Result fsDeviceOperatorGetGameCardHandle(FsDeviceOperator* d, FsGameCardHandle* out);
Result fsDeviceOperatorGetGameCardAttribute(FsDeviceOperator* d, const FsGameCardHandle* handle, uint8_t *out);
void fsDeviceOperatorClose(FsDeviceOperator* d);
