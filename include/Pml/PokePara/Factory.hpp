#pragma once

#include "Pml/Local/RandomGenerator.hpp"

namespace Pml
{
    namespace PokePara
    {
        struct Factory
        {
            static uint8_t GetSexAtRandomInPersonalDistribution(int32_t monsno, uint16_t formno, Pml::Local::RandomGenerator_o *pRandom, MethodInfo *method);
            static uint16_t GetSizePersonalValue(int16_t value, Pml::Local::RandomGenerator_o *pRandom,MethodInfo *method);
        };
    }
}