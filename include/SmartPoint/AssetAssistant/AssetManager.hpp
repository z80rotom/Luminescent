#pragma once

#include "SmartPoint/AssetAssistant/AssetRequestOperation.hpp"
#include "SmartPoint/AssetAssistant/AssetBundleRequestItem.hpp"
#include "SmartPoint/AssetAssistant/RequestEventCallback.hpp"

namespace SmartPoint
{
    namespace AssetAssistant
    {
        struct AssetManager
        {
            // 017f2f70
            static AssetRequestOperation_o * AppendAssetBundleRequest(System::String *assetBundleName,bool loadAllAssets,
                RequestEventCallback_o *callback, System::Array<System::String> *variants,
                MethodInfo *method);
        };
    }
}