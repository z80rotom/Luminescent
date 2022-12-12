#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {

            namespace Section_FromEvent_FormChange
            {
                struct Description_Fields {
                    uint8_t pokeID;
                    uint8_t formNo;
                    bool isDontResetFormByOut;
                    bool isEnableInCaseOfDead;
                    bool isDisplayTokuseiWindow;
                    bool isDisplayChangeEffect;
                    StrParam_o* successMessage;
                };

                struct Description_c;

                struct Description_o {
                    // 1fb4570
                    void ctor(MethodInfo * method);

                    Description_c *klass;
                    void *monitor;
                    Description_Fields fields;
                };

                // 4c5b2b8
                extern void * Description_TypeInfo;
            }
        }
    }
}