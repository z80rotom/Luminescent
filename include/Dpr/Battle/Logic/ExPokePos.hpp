#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct ExPokePos_c;

            struct ExPokePos_Fields {
                int32_t m_type;
                uint8_t m_basePos;
            };

            struct ExPokePos_o {
                ExPokePos_c *klass;
                void *monitor;
                ExPokePos_Fields fields;

                void ctor(int32_t type, uint8_t basePos, MethodInfo *method);
            };

            extern void *ExPokePos_TypeInfo;

            namespace ExPosType {
                enum ExPosType {
                    BASE_POS,
                    NEXT_FRIENDS,
                    AREA_ENEMY, // Adjacent Opponents
                    AREA_OTHERS, // All but the User
                    AREA_MYTEAM, // All Allies
                    AREA_FRIENDS, // Adjacent Allies
                    AREA_ALL,
                    FULL_ENEMY, // All Opponents
                    FULL_FRIENDS, // All Allies and User
                    FULL_ALL // All
                };
            }
        }
    }
}