#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"

namespace XLSXContent
{
    struct MapAttributeTable_SheetData_Fields {
        int32_t Code;
        int32_t Attribute;
        bool Entry;
        bool Water;
        bool Encount;
        struct System::String* FieldEncount;
    };

    struct MapAttributeTable_SheetData_c;

    struct MapAttributeTable_SheetData_o {
        MapAttributeTable_SheetData_c *klass;
        void *monitor;
        MapAttributeTable_SheetData_Fields fields;
    };

    struct MapAttributeTable_Fields {
        UnityEngine_ScriptableObject_Fields super;
        struct System::Array<MapAttributeTable_SheetData_o*>* Data;
    };

    struct MapAttributeTable_c;

    struct MapAttributeTable_o {
        MapAttributeTable_c *klass;
        void *monitor;
        MapAttributeTable_Fields fields;
    };
}
