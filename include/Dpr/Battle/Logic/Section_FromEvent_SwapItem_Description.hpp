#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Section_FromEvent_SwapItem_Description_Fields {
                uint8_t userPokeID;
                uint8_t targetPokeID;
                bool isIncRecordCount_StealItemFromWildPoke;
                bool isDisplayTokuseiWindow;
                struct StrParam_o* successMessage1;
                struct StrParam_o* successMessage2;
                struct StrParam_o* successMessage3;
            };

            struct Section_FromEvent_SwapItem_Description_c;

            struct Section_FromEvent_SwapItem_Description_o {
                // 01fb8800
                void ctor(MethodInfo * method);

                Section_FromEvent_SwapItem_Description_c *klass;
                void *monitor;
                Section_FromEvent_SwapItem_Description_Fields fields;
            };

            // 04c5b1f0
            extern void * Section_FromEvent_SwapItem_Description_TypeInfo;
        }
    }
}
