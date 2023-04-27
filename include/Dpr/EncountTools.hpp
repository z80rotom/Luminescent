#pragma once

#include "Pml/PokePara/CoreParam.h"

struct Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o;

namespace Dpr
{
    struct EncountTools
    {
        static uint16_t SetWildPokemonItem(Pml::PokePara::CoreParam * pp, int32_t itemRnd, int32_t rnd1, int32_t rnd2, MethodInfo *method);
        static void SetupBattleTrainer(Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o *battleSetupParam, int32_t arenaID, int32_t mapAttrib, int32_t weatherType, int32_t rule, int32_t enemyID0, int32_t enemyID1, int32_t partnerID, MethodInfo *method);
    };
}
