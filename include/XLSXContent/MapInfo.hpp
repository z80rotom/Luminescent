#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"

namespace XLSXContent
{
    struct MapInfo_SheetZoneData_Fields
    {
        System::String* Caption;
        System::String* MSLabel;
        System::String* PokePlaceName;
        System::String* FlyingPlaceName;
        int32_t MapType;
        bool IsField;
        int32_t LandmarkType;
        struct UnityEngine_Vector2_o MiniMapOffset;
        bool Bicycle;
        bool Escape;
        bool Fly;
        bool BattleSearcher;
        bool TureAruki;
        bool KuruKuru;
        bool Fall;
        System::Array<int32_t>* BattleBg;
        int32_t ZoneID;
        int32_t AreaID;
        struct ZoneTable_o* ZoneGrid;
        struct AttributeMatrix_o* Attribute;
        struct AttributeMatrix_o* AttributeEx;
        struct AttributeMatrix_o* SubAttribute;
        struct AttributeMatrix_o* SubAttributeEx;
        System::Array<System::String*>* BGM;
        System::String* EnvironmentalSound;
        int32_t Weather;
        struct EnvironmentSettings_o* RenderSettings;
        bool ReflectionCamera;
        bool FixedTime;
        System::String* AssetBundleName;
        bool RoomPanCamera;
        struct UnityEngine_Vector4_array* Locators;
        bool Reload;
    };

    struct MapInfo_SheetZoneData_RGCTXs
    {
    };

    struct MapInfo_SheetZoneData_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct MapInfo_SheetZoneData_c
    {
        Il2CppClass_1 _1;
        struct MapInfo_SheetZoneData_StaticFields* static_fields;
        MapInfo_SheetZoneData_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        MapInfo_SheetZoneData_VTable vtable;
    };

    struct MapInfo_SheetZoneData_o
    {
        MapInfo_SheetZoneData_c *klass;
        void *monitor;
        MapInfo_SheetZoneData_Fields fields;
    };

    struct MapInfo_SheetZoneData_StaticFields
    {
    };

    struct MapInfo_SheetCamera_Fields
    {
        int32_t ariaID;
        float pitch;
        float fov;
        float targetRange;
        float panDistance;
        float panPitch;
        float panFov;
        bool panpos_useflag;
        float panMinposY;
        float panMaxposY;
        float panMinposZ;
        float panMaxposZ;
        float defocusStart;
        float defocusEnd;
        float distance;
    };

    struct MapInfo_SheetCamera_RGCTXs
    {
    };

    struct MapInfo_SheetCamera_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct MapInfo_SheetCamera_c
    {
        Il2CppClass_1 _1;
        struct MapInfo_SheetCamera_StaticFields* static_fields;
        MapInfo_SheetCamera_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        MapInfo_SheetCamera_VTable vtable;
    };

    struct MapInfo_SheetCamera_o
    {
        MapInfo_SheetCamera_c *klass;
        void *monitor;
        MapInfo_SheetCamera_Fields fields;
    };

    struct MapInfo_SheetCamera_StaticFields
    {
    };

    struct MapInfo_Fields
    {
        UnityEngine_ScriptableObject_Fields super;
        System::Array<MapInfo_SheetZoneData_o*>* ZoneData;
        System::Array<MapInfo_SheetCamera_o*>* Camera;
    };

    struct MapInfo_RGCTXs
    {
    };

    struct MapInfo_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct MapInfo_c
    {
        Il2CppClass_1 _1;
        struct MapInfo_StaticFields* static_fields;
        MapInfo_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        MapInfo_VTable vtable;
    };

    struct MapInfo_o
    {
        MapInfo_c *klass;
        void *monitor;
        MapInfo_Fields fields;

        // 017d5790
        MapInfo_SheetZoneData_o * get_Item(int32_t index, MethodInfo *method);
    };

    struct MapInfo_StaticFields
    {
    };
}
