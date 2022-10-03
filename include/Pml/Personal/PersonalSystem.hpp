#pragma once

#include "XLSXContent/PersonalTable/SheetPersonal.hpp"

namespace Pml
{
    namespace Personal
    {
        struct PersonalSystem
        {
            // 0x024a0ca0
            static XLSXContent::PersonalTable::SheetPersonal_o * GetPersonalData(int32_t monsno,uint16_t formno,MethodInfo *method);
            // 0x027fbe70
            static void LoadPersonalData(int32_t monsno, uint16_t formno, MethodInfo *method);
            // 0x027fc3a0
            static bool CheckPersonalWazaMachine(uint16_t machineNo, MethodInfo *method);
        };
    }
}