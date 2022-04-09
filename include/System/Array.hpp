#pragma once

#include "il2cpp.hpp"

namespace System
{
    template <typename T>
    struct Array
    {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        T m_Items[65535];
    };

}