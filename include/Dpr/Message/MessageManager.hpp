#pragma once

#include "il2cpp.hpp"
#include "System/String.hpp"

struct SmartPoint_AssetAssistant_SingletonMonoBehaviour_MessageManager__Fields {
	UnityEngine_MonoBehaviour_Fields super;
};

namespace Dpr
{
    namespace Message
    {
        struct MessageManager_Fields
        {
            SmartPoint_AssetAssistant_SingletonMonoBehaviour_MessageManager__Fields super;
            struct Dpr_Message_MsgDataFileLoader_o* msbtLoader;
            struct Dpr_Message_MessageDataModel_o* dataModel;
            struct Dpr_Message_TagWordBuffer_o* tagWordBuffer;
            struct Dpr_Message_MessageWordDataPool_o* wordDataPool;
        };

        struct MessageManager_RGCTXs
        {
        };

        struct MessageManager_VTable
        {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
            VirtualInvokeData _4_Awake;
            VirtualInvokeData _5_OnApplicationQuit;
        };

        struct MessageManager_c
        {
            Il2CppClass_1 _1;
            struct MessageManager_StaticFields* static_fields;
            MessageManager_RGCTXs* rgctx_data;
            Il2CppClass_2 _2;
            MessageManager_VTable vtable;
        };

        struct MessageManager_o
        {
            MessageManager_c *klass;
            void *monitor;
            MessageManager_Fields fields;

            // 0210ce50
            System::String * GetNameMessage(System::String *fileName, System::String *label, MethodInfo *method);
        };

        struct MessageManager_StaticFields
        {
            struct UnityEngine_Events_UnityAction_bool__o* onChangeKanjiMode;
        };
    }
}
