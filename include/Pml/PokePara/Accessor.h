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

        };
    } // namespace PokePara
    
} // namespace Pml


