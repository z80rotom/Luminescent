#include "logger.hpp"
#include "util.hpp"
#include "UnityEngine/AsyncOperation.hpp"
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "SmartPoint/AssetAssistant/AssetRequestOperation.hpp"
#include "SmartPoint/AssetAssistant/AssetBundleRequestItem.hpp"
#include "SmartPoint/AssetAssistant/RequestEventCallback.hpp"
#include "SmartPoint/AssetAssistant/AssetManager.hpp"

// SmartPoint_AssetAssistant_AssetBundleRequestItem_o *
// SmartPoint.AssetAssistant.AssetRequestOperation$$get_assetBundleRequest
//           (SmartPoint_AssetAssistant_AssetRequestOperation_o *__this,MethodInfo *method)

// 04e9cfc0
extern System::String * StringLiteral_9235_ev_script;

using namespace SmartPoint::AssetAssistant;
using namespace UnityEngine;
using namespace UnityEngine::Networking;

// NOTE: THESE ARE JUST FOR BAD LOGGING NOTHING ELSE
char * toNarrowString(uint16_t * wstring, size_t len)
{
    char * inString = (char *) wstring;
    char * newString = (char *) malloc(sizeof(char) * (len + 1));
    for (size_t i = 0; i < len; i++)
    {
        newString[i] = inString[i*2];
    }
    newString[len] = '\0';

    return newString;
}

// Unsafe, can cause strings to become unstable
char * toNarrowString(System::String * string)
{
    return toNarrowString(&string->fields.m_firstChar, string->fields.m_stringLength);
}

System::Array<uint8_t> * GetData(System::String * uri)
{
    return nullptr;
}

AssetBundleRequestItem_o * Lumi_AssetRequestOperation_get_assetBundleRequest(AssetRequestOperation_o *__this,MethodInfo *method)
{
    socket_log_fmt("Lumi_AssetRequestOperation_get_assetBundleRequest\n");
    AssetBundleRequestItem_o * item = __this->get_assetBundleRequest(method);
    char * uri = toNarrowString(item->fields._uri);
    socket_log_fmt("URI: %s\n", uri);
    return item;
}

AssetRequestOperation_o * Lumi_AssetManager_AppendAssetBundleRequest(
        System::String *assetBundleName,bool loadAllAssets,
        RequestEventCallback_o *callback,
        System::Array<System::String> *variants,
        MethodInfo *method)
{
    socket_log_fmt("Lumi_AssetManager_AppendAssetBundleRequest\n");

    if (assetBundleName->Equals(StringLiteral_9235_ev_script, (MethodInfo *) nullptr))
    {
        socket_log_fmt("Got ev_script\n");
        char * cUri = "http://192.168.1.198:8080/api/ev_script";
        System::String * uri = System::String::CreateString(cUri);
        System::Array<uint8_t> * data = GetData(uri);
    }
    // socket_log_fmt("&AssetManager::AppendAssetBundleRequest %08X\n", &AssetManager::AppendAssetBundleRequest);
    // char * cAssetBundleName = toNarrowString(assetBundleName);
    // socket_log_fmt("cAssetBundleName: %s\n", cAssetBundleName);
    AssetRequestOperation_o * op = AssetManager::AppendAssetBundleRequest(
        assetBundleName, loadAllAssets, callback, variants, method);

    return op;
}