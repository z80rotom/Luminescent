#pragma once

#include "il2cpp.hpp"
// #include "types.h"

// #include "Pml/MonsNo.h"

namespace Pml
{
    namespace PokePara
    {
        class CalcTool {
            public:
                static bool IsRareColor(uint32_t id, uint32_t rnd, MethodInfo *method);
                // static byte CalcLevel(MonsNo monsno, ushort formno, uint exp);
                static uint32_t CorrectColorRndForNormal(uint32_t id, uint32_t rnd, MethodInfo *method);
                static uint32_t CorrectColorRndForRare(uint32_t id,uint32_t rnd,MethodInfo *method);
                static uint8_t GetCorrectSexInPersonalData(int32_t monsno, uint16_t formno, uint8_t bothCase, MethodInfo *method);
        };

        extern void ** PTR_CalcTool_TypeInfo_04bd79d8;
    } // namespace PokePara
    
} // namespace Pml
