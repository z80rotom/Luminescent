#pragma once

#include "il2cpp.hpp"

#include "System/Array.hpp"
#include "System/String.hpp"

namespace UnityEngine
{
    namespace Networking
    {
        struct DownloadHandler_Fields {
            intptr_t m_Ptr;
        };
        struct DownloadHandler_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
            VirtualInvokeData _4_Dispose;
            VirtualInvokeData _5_GetData;
            VirtualInvokeData _6_GetText;
            VirtualInvokeData _7_ReceiveData;
            VirtualInvokeData _8_ReceiveContentLengthHeader;
            VirtualInvokeData _9_ReceiveContentLength;
            VirtualInvokeData _10_CompleteContent;
            VirtualInvokeData _11_GetProgress;
        };
        struct DownloadHandler_c {
            Il2CppClass_1 _1;
            void* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            DownloadHandler_VTable vtable;
        };
        struct DownloadHandler_o {
            // 01ad4530
            System::Array<uint8_t> * get_data(MethodInfo *method);

            DownloadHandler_c *klass;
            void *monitor;
            DownloadHandler_Fields fields;
        };
    }
}