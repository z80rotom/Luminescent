#pragma once

#include "Pml/PokePara/CoreParam.h"

namespace Dpr
{
    struct EncountTools
    {
        static uint16_t SetWildPokemonItem(Pml::PokePara::CoreParam * pp, int32_t itemRnd, int32_t rnd1, int32_t rnd2, MethodInfo *method);
    };
}