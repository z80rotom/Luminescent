#pragma once

#include "il2cpp.hpp"

#include "System/String.hpp"
#include "UnityEngine/AsyncOperation.hpp"
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "UnityEngine/Networking/DownloadHandler.hpp"

namespace System
{
    struct Uri_o;
}

namespace UnityEngine
{
    namespace Networking
    {
        struct UploadHandler_o;
        struct CertificateHandler_o;

        struct UnityWebRequest_Fields {
            intptr_t m_Ptr;
            DownloadHandler_o* m_DownloadHandler;
            UploadHandler_o* m_UploadHandler;
            CertificateHandler_o* m_CertificateHandler;
            System::Uri_o* m_Uri;
            bool _disposeCertificateHandlerOnDispose;
            bool _disposeDownloadHandlerOnDispose;
            bool _disposeUploadHandlerOnDispose;
        };

        struct UnityWebRequest_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
            VirtualInvokeData _4_Dispose;
        };
        
        struct UnityWebRequest_c {
            Il2CppClass_1 _1;
            void* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            UnityWebRequest_VTable vtable;
        };
        
        struct UnityWebRequest_o {
            // 01ad6d80
            static UnityWebRequest_o * Get(System::String * uri, MethodInfo * method);
            // Not quite true, but true enough for my purposes
            // 01ad5b50
            AsyncOperation_o * SendWebRequest(MethodInfo * method);
            UnityWebRequest_c *klass;
            void *monitor;
            UnityWebRequest_Fields fields;
        };
    }
}