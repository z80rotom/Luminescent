#pragma once

// #include "Pml/MonsNo.h"
// #include "types.h"

namespace Pml
{
    namespace PokePara
    {
        class Accessor {
            public:
                // MonsNo GetMonsNo(); // 0x26A0670
                // ushort GetFormNo(); // 0x26A1CE0
                // 028000e0
                uint32_t GetExp(MethodInfo * method);                
                // 028022c0
                uint32_t GetLevel(MethodInfo *method);

                // Talent values
                // 028049a0
                uint32_t SetTalentAgi(uint8_t value, MethodInfo * method);
                // 028047a0
                uint32_t SetTalentAtk(uint8_t value, MethodInfo * method);
                // 02804810
                uint32_t SetTalentDef(uint8_t value, MethodInfo * method);
                // 0280472
                uint32_t SetTalentHp(uint8_t value, MethodInfo * method);
                // 028048a0
                uint32_t SetTalentSpAtk(uint8_t value, MethodInfo * method);
                // 02804920
                uint32_t SetTalentSpDef(uint8_t value, MethodInfo * method);
                // 02800e90
                int32_t GetWazaNo(uint8_t wazaIndex, MethodInfo *method);

        };
    } // namespace PokePara
    
} // namespace Pml


