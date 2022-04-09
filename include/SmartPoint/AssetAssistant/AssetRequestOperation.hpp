#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "UnityEngine/CustomYieldInstruction.hpp"
#include "SmartPoint/AssetAssistant/IAssetRequestItem.hpp"
#include "SmartPoint/AssetAssistant/AssetBundleRequestItem.hpp"

namespace SmartPoint
{
    namespace AssetAssistant
    {
        struct AssetRequestOperation_Fields{
            UnityEngine::CustomYieldInstruction_Fields super;
            System::Array<IAssetRequestItem_o> * _requests;
        };
        struct AssetRequestOperation_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
            VirtualInvokeData _4_MoveNext;
            VirtualInvokeData _5_get_Current;
            VirtualInvokeData _6_Reset;
            VirtualInvokeData _7_get_keepWaiting;
        };
        struct AssetRequestOperation_c {
            Il2CppClass_1 _1;
            void* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            AssetRequestOperation_VTable vtable;
        };
        struct AssetRequestOperation_o {
            // 017feb30
            AssetBundleRequestItem_o * get_assetBundleRequest(MethodInfo * method);
            
            AssetRequestOperation_c *klass;
            void *monitor;
            AssetRequestOperation_Fields fields;
        };
    }

}