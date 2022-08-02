#pragma once 

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            namespace Section_FromEvent_Message
            {
                struct Description_Fields
                {
                    uint8_t pokeID;
                    bool isDisplayTokuseiWindow;
                    Dpr::Battle::Logic::StrParam_o* message;
                };

                struct Description_c;

                struct Description_o
                {
                    // Methods
                    void ctor(MethodInfo * method);
                    // Fields
                    Description_c *klass;
                    void *monitor;
                    Description_Fields fields;
                };

                extern void * Description_TypeInfo;
            };
        }
    }
}