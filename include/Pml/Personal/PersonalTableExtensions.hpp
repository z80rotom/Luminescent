#pragma once

#include "XLSXContent/PersonalTable/SheetPersonal.hpp"

namespace Pml
{
    namespace Personal
    {
        struct PersonalTableExtensions
        {
            static uint32_t GetParam(XLSXContent::PersonalTable::SheetPersonal_o *data,int32_t paramId,MethodInfo *method);
        };
    }
}