#pragma once

#include "il2cpp.hpp"
#include "UnityEngine/Color.hpp"

namespace Effect
{
    struct EffectInstance_Fields
    {
        struct EffectData_o* _effectData;
        struct UnityEngine_ParticleSystem_o* _particleSystem;
        struct ParticleSystemController_o* _particleSystemController;
        struct UnityEngine_Events_UnityAction_object__o* _onFinished;
        struct UnityEngine_Events_UnityAction_EffectInstance__o* _onPlayFinished;
        struct UnityEngine_Transform_o* _attachedTransform;
        struct UnityEngine_Vector3_o _localPosition;
        struct UnityEngine_Quaternion_o _localRotation;
        struct UnityEngine::Color_o _mulColor;
        float _stopFadeLifeTime;
        float _stopFadeTime;
    };

    struct EffectInstance_RGCTXs
    {
    };

    struct EffectInstance_VTable
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

    struct EffectInstance_c
    {
        Il2CppClass_1 _1;
        struct EffectInstance_StaticFields* static_fields;
        EffectInstance_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        EffectInstance_VTable vtable;
    };

    struct EffectInstance_o
    {
        EffectInstance_c *klass;
        void *monitor;
        EffectInstance_Fields fields;

        // 01efe7b0
        void Stop(float fadeTime, bool isForce, MethodInfo *method);
    };

    struct EffectInstance_StaticFields
    {
    };
}
