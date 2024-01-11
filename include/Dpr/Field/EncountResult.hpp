#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"

namespace Dpr
{
    namespace Field
    {
        struct EncountResult_Fields {
            int32_t Type;
            System::Array<int32_t> * Enemy; // struct Pml_MonsNo_array* 
            System::Array<int32_t> * Level;
            System::Array<uint8_t> * FixSex; // struct Pml_Sex_array* 
            System::Array<int32_t> * FixSeikaku; // struct Pml_PokePara_Seikaku_array* 
            bool IsRare;
            int32_t Partner;
            int32_t HatudouTokusei;
            int32_t BattleBG;
            int32_t MP_SaveIndex;
            bool IsKakure;
            int32_t karanaForm;
            int32_t annoForm;
        };

        struct EncountResult_c;

        struct EncountResult_o {
            EncountResult_c *klass;
            void *monitor;
            EncountResult_Fields fields;

            // 019b2c70
            void ctor(MethodInfo *method);
        };

        // 04c5f200
        extern void * EncountResult_TypeInfo;
    }
}
