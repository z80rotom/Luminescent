#pragma once

#include "il2cpp.hpp"
#include "Audio/AudioInstance.hpp"

struct SmartPoint_AssetAssistant_SingletonMonoBehaviour_AudioManager__Fields {
	UnityEngine_MonoBehaviour_Fields super;
};

namespace Audio
{
    struct AudioManager_Fields
    {
        SmartPoint_AssetAssistant_SingletonMonoBehaviour_AudioManager__Fields super;
        struct UnityEngine_GameObject_o* _prefab;
        struct System_Int32_array* _poolCounts;
        struct UnityEngine_Transform_o* _listenerRoot;
        struct System_String_o* _commonBankName;
        struct System_Collections_Generic_List_AudioManager_ListenerParam__o* _listenerParams;
        struct System_Collections_Generic_List_AudioInstance__o* _audioInstances;
        struct ObjectPool_AudioManager_PoolType__AudioInstance__o* _objectPool;
        struct System_Collections_Generic_HashSet_AudioData__o* _audioDatas;
        uint32_t _eventId;
        uint32_t _bgmPlayId;
        bool _isUpdateListenerCamera;
        float _duration;
        struct UnityEngine_Events_UnityAction_uint__o* onFinishBgm;
        int32_t _configVoice;
    };

    struct AudioManager_RGCTXs
    {
    };

    struct AudioManager_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
        VirtualInvokeData _4_Awake;
        VirtualInvokeData _5_OnApplicationQuit;
    };

    struct AudioManager_c
    {
        Il2CppClass_1 _1;
        struct AudioManager_StaticFields* static_fields;
        AudioManager_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        AudioManager_VTable vtable;
    };

    struct AudioManager_o
    {
        AudioManager_c *klass;
        void *monitor;
        AudioManager_Fields fields;

        // 021eb8d0
        AudioInstance_o * PlaySe(uint32_t playEventId, void *onFinished, MethodInfo *method);
    };

    struct AudioManager_StaticFields
    {
    };
}
