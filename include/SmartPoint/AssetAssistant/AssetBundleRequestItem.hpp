#pragma once

#include "il2cpp.hpp"
#include "System/String.hpp"
#include "System/Array.hpp"
#include "System/IO/FileStream.hpp"
#include "SmartPoint/AssetAssistant/AssetBundleDownloadManifest.hpp"
#include "SmartPoint/AssetAssistant/AssetBundleCache.hpp"
#include "SmartPoint/AssetAssistant/RequestEventCallback.hpp"
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "UnityEngine/AsyncOperation.hpp"
#include "UnityEngine/AssetBundleCreateRequest.hpp"


namespace SmartPoint
{
    namespace AssetAssistant
    {
        enum class RequestStatus
        {
            None = 0,
            ResolveDependencies = 1,
            LoadAndInstall = 2,
            RequestInstallation = 3,
            InstallAssetBundles = 4,
            SaveManifest = 5,
            WaitForInstallation = 6,
            WaitForCacheLoading = 7,
            WaitForCacheWriting = 8,
            WaitForReloadShaders = 9,
            LoadAssetBundle = 10,
            LoadAsset = 11,
            LoadFinished = 12,
            Complete = 13,
            HttpError = 14,
            NetworkError = 15,
            FileNotFound = 16,
        };

        struct AssetBundleRequestItem_Fields {
            int32_t _status;
            AssetBundleDownloadManifest_o* _manifest;
            System::String * _uri;
            UnityEngine::Networking::UnityWebRequest_o* _webRequest;
            System::IO::FileStream_o* _fileStream;
            System::Array<System::String> * _variants;
            bool _loadAllAssets;
            AssetBundleCache_o* _cache;
            UnityEngine::AssetBundleCreateRequest_o* _createRequest;
            UnityEngine::AsyncOperation_o* _assetRequest;
            RequestEventCallback_o* _callback;
            System::String * _error;
            UnityEngine::CustomYieldInstruction_o* _customInstruction;
        };

        struct AssetBundleRequestItem_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
            VirtualInvokeData _4_get_status;
            VirtualInvokeData _5_set_status;
            VirtualInvokeData _6_get_uri;
            VirtualInvokeData _7_set_uri;
            VirtualInvokeData _8_get_manifest;
            VirtualInvokeData _9_set_manifest;
            VirtualInvokeData _10_get_isComplete;
            VirtualInvokeData _11_get_callback;
            VirtualInvokeData _12_set_callback;
            VirtualInvokeData _13_get_error;
            VirtualInvokeData _14_set_error;
        };
 
        struct AssetBundleRequestItem_c {
            Il2CppClass_1 _1;
            void* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            AssetBundleRequestItem_VTable vtable;
        };
 
        struct AssetBundleRequestItem_o {
            AssetBundleRequestItem_c *klass;
            void *monitor;
            AssetBundleRequestItem_Fields fields;
        };
    }
}