#pragma once

#include "il2cpp.hpp"

namespace Audio
{
    struct AudioInstance_Fields
    {
        struct AkGameObj_o* _akGameObj;
        int32_t _listenerType;
        uint32_t _playEventId;
        uint32_t _stopEventId;
        struct UnityEngine_Transform_o* _attachedTransform;
        struct UnityEngine_Vector3_o _localPosition;
        struct UnityEngine_Quaternion_o _localRotation;
        struct UnityEngine_Events_UnityAction_AudioInstance__o* _onFinished;
        float _volume;
        uint32_t _playId;
        float _duration;
        bool _isDurtyRtpc;
        bool _isManualRemoved;
        int32_t _stateBits;
    };

    struct AudioInstance_RGCTXs
    {
    };

    struct AudioInstance_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
        VirtualInvokeData _4_IObjectPoolInstance_SetGameObject;
        VirtualInvokeData _5_IObjectPoolInstance_GetGameObject;
        VirtualInvokeData _6_IObjectPoolInstance_OnCreate;
        VirtualInvokeData _7_IObjectPoolInstance_OnRelease;
    };

    struct AudioInstance_c
    {
        Il2CppClass_1 _1;
        struct AudioInstance_StaticFields* static_fields;
        AudioInstance_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        AudioInstance_VTable vtable;
    };

    struct AudioInstance_o
    {
        AudioInstance_c *klass;
        void *monitor;
        AudioInstance_Fields fields;
    };

    struct AudioInstance_StaticFields
    {
    };
}
