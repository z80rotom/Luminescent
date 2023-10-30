#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct FieldStatus_c;

            struct FieldStatus_Fields {
                struct FieldStatus_Data_o* m_data;
            };

            struct FieldStatus_o {
                FieldStatus_c *klass;
                void *monitor;
                FieldStatus_Fields fields;

                bool CheckEffect(int32_t effect, MethodInfo *method);
                bool CheckFuin(MainModule_o **mainModule, POKECON_o *pokeCon, BTL_POKEPARAM_o *attacker, int32_t waza, MethodInfo *method);
                void clearFactorWork(int32_t effect, MethodInfo *method);
            };

            struct FieldStatus_Data_c;

            struct FieldStatus_Data_Fields {
                uint8_t weather;
                uint32_t weatherTurn;
                uint32_t weatherTurnUpCount;
                uint32_t weatherTurnCount;
                uint8_t weatherCausePokeID;
                uint8_t currentGround;
                struct Dpr_Battle_Logic_BTL_SICKCONT_array* cont;
                struct System_UInt32_array* turnCount;
                struct System_UInt32_array_array* dependPokeID;
                struct System_UInt32_array* dependPokeCount;
                struct System_Boolean_array* enableFlag;
                struct System_UInt16_array* subParam;
            };

            struct FieldStatus_Data_o {
                FieldStatus_Data_c *klass;
                void *monitor;
                FieldStatus_Data_Fields fields;
            };
        }
    }
}