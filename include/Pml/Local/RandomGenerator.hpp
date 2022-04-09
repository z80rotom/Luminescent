#pragma once

#include "il2cpp.hpp"

namespace Pml
{
    namespace Local
    {
        struct RandomGenerator_o
        {
            void ctor(MethodInfo * method);
            void Initialize(uint64_t seed,MethodInfo *method);
            uint32_t GetRand(MethodInfo * method);
            uint32_t GetRand(uint32_t max, MethodInfo * method);
        };

        extern void ** PTR_RandomGenerator_TypeInfo_04bdc948;
    }
}