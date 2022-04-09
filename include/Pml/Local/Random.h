#pragma once

#include "il2cpp.hpp"
// #include "types.h"

// #include "Pml/MonsNo.h"

namespace Pml
{
    namespace Local
    {
        class Random {
            public:
                static uint32_t GetValue(MethodInfo * method);
                static uint32_t GetValue(uint32_t max, MethodInfo * method);
        };
    } // namespace Local
    
} // namespace Pml
