#pragma once

#include "il2cpp.hpp"
#include "UnityEngine/GameObject.hpp"
#include "Dpr/Field/FieldEncount/SWAY_ENC_INFO.hpp"

namespace Dpr
{
    namespace Field
    {
        struct SwayGrass_Fields {
        };
        struct SwayGrass_RGCTXs {
        };
        struct SwayGrass_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };
        struct SwayGrass_c {
            Il2CppClass_1 _1;   
            struct SwayGrass_StaticFields* static_fields;
            SwayGrass_RGCTXs* rgctx_data;
            Il2CppClass_2 _2;
            SwayGrass_VTable vtable;
        };
        struct SwayGrass_o {
            SwayGrass_c *klass;
            void *monitor;
            SwayGrass_Fields fields;

            // 019b43d0
            static bool SwayGrass_CheckSpEncount(Dpr::Field::FieldEncount::SWAY_ENC_INFO_o *info, UnityEngine_Vector3_o *pos, float size, MethodInfo *method);
            // 019b4fa0
            static void StopSE(MethodInfo *method);
        };
        struct SwayGrass_StaticFields {
            bool is_swaygrass_flag;
            int32_t swayZone;
            struct SwayGrass_GrassData_array* grass_data;
            struct Audio_AudioInstance_array* _grassAudio;
            struct SwayGrass_GrassData_o* work_data;
            uint32_t rensa_count;
            int32_t rensa_mons;
            uint32_t rensa_lv;
            bool BattleEndRensaStart;
            struct UnityEngine::GameObject_o* RootGrass;
            bool _callSwayBGM;
            bool _callStopSwayBGM;
        };
        extern SwayGrass_c * SwayGrass_InfoType;   
    }  
}
