#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"

namespace XLSXContent
{
    struct LocalKoukanData_Sheetdata_Fields {
        int32_t target;
        System::String* name_label;
        int32_t trainerid;
        int32_t monsno;
        System::String* nickname_label;
        int32_t level;
        int32_t seikaku;
        int32_t tokusei;
        uint16_t itemno;
        int32_t rand;
        uint8_t sex;
        int32_t language;
        System::Array<int32_t>* waza;
    };

    struct LocalKoukanData_Sheetdata_c;

    struct LocalKoukanData_Sheetdata_o {
        LocalKoukanData_Sheetdata_c *klass;
        void *monitor;
        LocalKoukanData_Sheetdata_Fields fields;
    };

    struct LocalKoukanData_Fields {
        UnityEngine_ScriptableObject_Fields super;
        System::Array<LocalKoukanData_Sheetdata_o*>* data;
    };

    struct LocalKoukanData_c;

    struct LocalKoukanData_o {
        LocalKoukanData_c *klass;
        void *monitor;
        LocalKoukanData_Fields fields;

        // 017d5670
        XLSXContent::LocalKoukanData_Sheetdata_o * get_Item(int32_t index, MethodInfo *method);
    };
}
