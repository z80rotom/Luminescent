#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    struct FieldObjectRotateYaw_Fields
    {
        struct System_WeakReference_FieldObjectEntity__o* _Entity;
        struct Dpr_FieldFloatMove_o* FloatMove;
        float BaseYawAngle;
        float TargetYawAngle;
    };

    struct FieldObjectRotateYaw_RGCTXs
    {
    };

    struct FieldObjectRotateYaw_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct FieldObjectRotateYaw_c
    {
        Il2CppClass_1 _1;
        struct FieldObjectRotateYaw_StaticFields* static_fields;
        FieldObjectRotateYaw_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        FieldObjectRotateYaw_VTable vtable;
    };

    struct FieldObjectRotateYaw_o
    {
        FieldObjectRotateYaw_c *klass;
        void *monitor;
        FieldObjectRotateYaw_Fields fields;

        // 01a783e0
        void Update(float deltaTime, MethodInfo *method);

        // 01a781c0
        bool get_IsBusy(MethodInfo *method);

        // 01a782d0
        void SetObjectEntity(FieldObjectEntity_o *entity, MethodInfo *method);

        // 01a785e0
        void MoveTime(float targetYawAngle, float moveTime, MethodInfo *method);
    };

    struct FieldObjectRotateYaw_StaticFields
    {
    };
}
