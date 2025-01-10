#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct PokeActionContainer_c;

            struct PokeActionContainer_Fields {
                struct Dpr_Battle_Logic_PokeAction_array* m_actions;
                uint8_t m_count;
            };

            struct PokeActionContainer_o {
                bool IsAllActDoneByPokeID(uint8_t pokeID, MethodInfo *method);

                PokeActionContainer_c *klass;
                void *monitor;
                PokeActionContainer_Fields fields;
            };
        }
    }
}