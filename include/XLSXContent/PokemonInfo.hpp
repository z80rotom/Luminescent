#pragma once
#include "il2cpp.hpp"
#include "System/String.hpp"

namespace XLSXContent
{
    namespace PokemonInfo
    {
        struct SheetCatalog_Fields {
            int32_t UniqueID;
            int32_t No;
            int32_t SinnohNo;
            int32_t MonsNo;
            int32_t FormNo;
            uint8_t Sex;
            bool Rare;
            System::String * AssetBundleName;
            float BattleScale;
            float ContestScale;
            int32_t ContestSize;
            float FieldScale;
            float FieldChikaScale;
            float StatueScale;
            float FieldWalkingScale;
            float FieldFureaiScale;
            float MenuScale;
            System::String * ModelMotion;
            struct UnityEngine_Vector3_o ModelOffset;
            struct UnityEngine_Vector3_o ModelRotationAngle;
            float DistributionScale;
            System::String * DistributionModelMotion;
            struct UnityEngine_Vector3_o DistributionModelOffset;
            struct UnityEngine_Vector3_o DistributionModelRotationAngle;
            float VoiceScale;
            System::String * VoiceModelMotion;
            struct UnityEngine_Vector3_o VoiceModelOffset;
            struct UnityEngine_Vector3_o VoiceModelRotationAngle;
            struct UnityEngine_Vector3_o CenterPointOffset;
            struct UnityEngine_Vector2_o RotationLimitAngle;
            float StatusScale;
            System::String * StatusModelMotion;
            struct UnityEngine_Vector3_o StatusModelOffset;
            struct UnityEngine_Vector3_o StatusModelRotationAngle;
            float BoxScale;
            System::String * BoxModelMotion;
            struct UnityEngine_Vector3_o BoxModelOffset;
            struct UnityEngine_Vector3_o BoxModelRotationAngle;
            float CompareScale;
            System::String * CompareModelMotion;
            struct UnityEngine_Vector3_o CompareModelOffset;
            struct UnityEngine_Vector3_o CompareModelRotationAngle;
            float BrakeStart;
            float BrakeEnd;
            float WalkSpeed;
            float RunSpeed;
            float WalkStart;
            float RunStart;
            float BodySize;
            float AppearLimit;
            int32_t MoveType;
            bool GroundEffect;
            bool Waitmoving;
            int32_t BattleAjustHeight;
        };

        struct SheetCatalog_c;

        struct SheetCatalog_o {
            SheetCatalog_c *klass;
            void *monitor;
            SheetCatalog_Fields fields;
        };
    }
}