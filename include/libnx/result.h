#pragma once

/// Module values
enum {
    Module_Kernel=1,
    Module_Libnx=345,
    Module_HomebrewAbi=346,
    Module_HomebrewLoader=347,
    Module_LibnxNvidia=348,
    Module_LibnxBinder=349,
};

/// libnx error codes
enum {
    LibnxError_BadReloc=1,
    LibnxError_OutOfMemory,
    LibnxError_AlreadyMapped,
    LibnxError_BadGetInfo_Stack,
    LibnxError_BadGetInfo_Heap,
    LibnxError_BadQueryMemory,
    LibnxError_AlreadyInitialized,
    LibnxError_NotInitialized,
    LibnxError_NotFound,
    LibnxError_IoError,
    LibnxError_BadInput,
    LibnxError_BadReent,
    LibnxError_BufferProducerError,
    LibnxError_HandleTooEarly,
    LibnxError_HeapAllocFailed,
    LibnxError_TooManyOverrides,
    LibnxError_ParcelError,
    LibnxError_BadGfxInit,
    LibnxError_BadGfxEventWait,
    LibnxError_BadGfxQueueBuffer,
    LibnxError_BadGfxDequeueBuffer,
    LibnxError_AppletCmdidNotFound,
    LibnxError_BadAppletReceiveMessage,
    LibnxError_BadAppletNotifyRunning,
    LibnxError_BadAppletGetCurrentFocusState,
    LibnxError_BadAppletGetOperationMode,
    LibnxError_BadAppletGetPerformanceMode,
    LibnxError_BadUsbCommsRead,
    LibnxError_BadUsbCommsWrite,
    LibnxError_InitFail_SM,
    LibnxError_InitFail_AM,
    LibnxError_InitFail_HID,
    LibnxError_InitFail_FS,
    LibnxError_BadGetInfo_Rng,
    LibnxError_JitUnavailable,
    LibnxError_WeirdKernel,
    LibnxError_IncompatSysVer,
    LibnxError_InitFail_Time,
    LibnxError_TooManyDevOpTabs,
    LibnxError_DomainMessageUnknownType,
    LibnxError_DomainMessageTooManyObjectIds,
    LibnxError_AppletFailedToInitialize,
    LibnxError_ApmFailedToInitialize,
    LibnxError_NvinfoFailedToInitialize,
    LibnxError_NvbufFailedToInitialize,
    LibnxError_LibAppletBadExit,
    LibnxError_InvalidCmifOutHeader,
    LibnxError_ShouldNotHappen,
};

/// Checks whether a result code indicates success.
#define R_SUCCEEDED(res)   ((res)==0)
/// Checks whether a result code indicates failure.
#define R_FAILED(res)      ((res)!=0)