#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"

namespace XLSXContent
{
    struct StopData_SheetData_Fields {
        System::String* ID;
        UnityEngine_Vector2_o Position;
        int32_t HeightLayer;
        UnityEngine_Vector2_o Size;
        System::String * ContactLabel;
        int32_t Param;
        int32_t Work;
    };

    struct StopData_SheetData_c;

    struct StopData_SheetData_o {
        StopData_SheetData_c *klass;
        void *monitor;
        StopData_SheetData_Fields fields;
    };

    struct StopData_Fields {
        UnityEngine_ScriptableObject_Fields super;
        System::Array<StopData_SheetData_o> * Data;
    };

    struct StopData_c;

    struct StopData_o {
        StopData_c *klass;
        void *monitor;
        StopData_Fields fields;
    };
}