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
            struct Section_FromEvent_SetItem_Description_Fields {
                uint8_t userPokeID;
                uint8_t targetPokeID;
                uint16_t itemID;
                bool isClearConsume;
                bool isClearConsumeOtherPoke;
                uint8_t clearConsumePokeID;
                bool isCallConsumedEvent;
                bool isDisplayTokuseiWindow;
                bool isConsumeItem;
                struct Dpr::Battle::Logic::StrParam_o* successMessage;
            };

            struct Section_FromEvent_SetItem_Description_c;

            struct Section_FromEvent_SetItem_Description_o {
                // 01fb7ab0
                void ctor(MethodInfo * method);

                Section_FromEvent_SetItem_Description_c *klass;
                void *monitor;
                Section_FromEvent_SetItem_Description_Fields fields;
            };

            // 04c5b1f8
            extern void * Section_FromEvent_SetItem_Description_TypeInfo;
        }
    }
}
