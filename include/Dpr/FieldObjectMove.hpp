#pragma once

#include "il2cpp.hpp"
#include "FieldObjectEntity.hpp"

namespace Dpr
{
    struct FieldObjectMove_Fields
    {
        bool IgnoreY;
        float JumpHeight;
        struct System_WeakReference_FieldObjectEntity__o* _Entity;
        struct Dpr_FieldFloatMove_o* FloatMove;
        struct UnityEngine_Vector3_o BaseWldPos;
        struct UnityEngine_Vector3_o TargetWldPos;
    };

    struct FieldObjectMove_RGCTXs
    {
    };

    struct FieldObjectMove_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct FieldObjectMove_c
    {
        Il2CppClass_1 _1;
        struct FieldObjectMove_StaticFields* static_fields;
        FieldObjectMove_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        FieldObjectMove_VTable vtable;
    };

    struct FieldObjectMove_o
    {
        FieldObjectMove_c *klass;
        void *monitor;
        FieldObjectMove_Fields fields;

        // 01a77b00
        void Update(float deltaTime, MethodInfo *method);

        // 01a778d0
        bool get_IsBusy(MethodInfo *method);

        // 01a779e0
        void SetObjectEntity(FieldObjectEntity_o *entity, MethodInfo *method);

        // 01a77f40
        void MoveSpeed(UnityEngine_Vector3_o targetWldPos, float moveSpeed, MethodInfo *method);
    };

    struct FieldObjectMove_StaticFields
    {
    };
}
