/**
 * @file service.h
 * @brief Service wrapper object
 * @author fincs
 * @author SciresM
 * @copyright libnx Authors
 */

#pragma once
#include "libnx/types.h"

/// Service object structure
typedef struct Service {
    Handle session;
    uint32_t own_handle;
    uint32_t object_id;
    uint16_t pointer_buffer_size;
} Service;

enum {
    SfBufferAttr_In                             = BIT(0),
    SfBufferAttr_Out                            = BIT(1),
    SfBufferAttr_HipcMapAlias                   = BIT(2),
    SfBufferAttr_HipcPointer                    = BIT(3),
    SfBufferAttr_FixedSize                      = BIT(4),
    SfBufferAttr_HipcAutoSelect                 = BIT(5),
    SfBufferAttr_HipcMapTransferAllowsNonSecure = BIT(6),
    SfBufferAttr_HipcMapTransferAllowsNonDevice = BIT(7),
};

typedef struct SfBufferAttrs {
    uint32_t attr0;
    uint32_t attr1;
    uint32_t attr2;
    uint32_t attr3;
    uint32_t attr4;
    uint32_t attr5;
    uint32_t attr6;
    uint32_t attr7;
} SfBufferAttrs;


typedef struct SfBuffer {
    const void* ptr;
    size_t size;
} SfBuffer;

typedef enum SfOutHandleAttr {
    SfOutHandleAttr_None     = 0,
    SfOutHandleAttr_HipcCopy = 1,
    SfOutHandleAttr_HipcMove = 2,
} SfOutHandleAttr;

typedef struct SfOutHandleAttrs {
    SfOutHandleAttr attr0;
    SfOutHandleAttr attr1;
    SfOutHandleAttr attr2;
    SfOutHandleAttr attr3;
    SfOutHandleAttr attr4;
    SfOutHandleAttr attr5;
    SfOutHandleAttr attr6;
    SfOutHandleAttr attr7;
} SfOutHandleAttrs;


typedef struct SfDispatchParams {
    Handle target_session;
    uint32_t context;

    SfBufferAttrs buffer_attrs;
    SfBuffer buffers[8];

    bool in_send_pid;

    uint32_t in_num_objects;
    const Service* in_objects[8];

    uint32_t in_num_handles;
    Handle in_handles[8];

    uint32_t out_num_objects;
    Service* out_objects;

    SfOutHandleAttrs out_handle_attrs;
    Handle* out_handles;
} SfDispatchParams;