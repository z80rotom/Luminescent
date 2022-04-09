#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"
#include "SmartPoint/AssetAssistant/RefCounted.hpp"
#include "SmartPoint/AssetAssistant/AssetBundleRecord.hpp"
#include "UnityEngine/Object.hpp"
#include "UnityEngine/AssetBundle.hpp"

namespace SmartPoint
{
    namespace AssetAssistant
    {
        struct AssetBundleCache_Fields {
            RefCounted_Fields super;
            AssetBundleRecord_o* _record;
            UnityEngine::AssetBundle_o* _assetBundle;
            bool _isLoaded;
            System::Array<System::String>* _variants;
            System::Array<UnityEngine::Object_o>* _loadedAssets;
            bool _unloadAllLoadedObjects;
            System::Array<System::String>* _remapDependencies;
        };
        struct AssetBundleCache_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
            VirtualInvokeData _4_AddRef;
            VirtualInvokeData _5_Release;
        };
        struct AssetBundleCache_c {
            Il2CppClass_1 _1;
            struct AssetBundleCache_StaticFields* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            AssetBundleCache_VTable vtable;
        };
        struct AssetBundleCache_o {
            AssetBundleCache_c *klass;
            void *monitor;
            AssetBundleCache_Fields fields;
        };
    }
}