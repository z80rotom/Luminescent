#include "il2cpp.hpp"

#include "Dpr/EncountTools.hpp"
#include "PlayerWork.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/PokePara/PokemonParam.h"
#include "Pml/PokeParty.hpp"
#include "UnityEngine/Random.hpp"

#include "util.hpp"
#include "logger.hpp"

const int32_t SUPERLUCK_ABILITYNO = 105;
const int32_t COMPOUNDEYES_ABILITYNO = 14;

const int32_t ITEM1_BASERATE = 50;
const int32_t ITEM1_BOOSTEDRATE = 60;
const int32_t ITEM2_BASERATE = 20;
const int32_t ITEM2_BOOSTEDRATE = 20;

Pml::PokePara::PokemonParam_o * EventWildBattle_SetWildPokemonItem(Pml::PokeParty_o *__this, uint32_t idx, MethodInfo *method)
{
    system_load_typeinfo((void *)0x3f8c);

    int32_t item1Rate = ITEM1_BASERATE;
    int32_t item2Rate = ITEM2_BASERATE;

    Pml::PokeParty_o * party = PlayerWork::get_playerParty(nullptr);
    Pml::PokePara::CoreParam * firstPoke = (Pml::PokePara::CoreParam *) party->GetMemberPointer(0, nullptr);
    if (!firstPoke->IsEgg(2, nullptr))
    {
        int32_t ability = firstPoke->GetTokuseiNo(nullptr);
        switch (ability)
        {
            case SUPERLUCK_ABILITYNO:
            case COMPOUNDEYES_ABILITYNO:
                item1Rate = ITEM1_BOOSTEDRATE;
                item2Rate = ITEM2_BOOSTEDRATE;
                break;
            default:
                item1Rate = ITEM1_BASERATE;
                item2Rate = ITEM2_BASERATE;
                break;
        }
    }

    Pml::PokePara::CoreParam * enemyPoke = (Pml::PokePara::CoreParam *) __this->GetMemberPointer(0, nullptr);
    int32_t randomRoll = UnityEngine::Random::Range(0, 100, nullptr);

    Dpr::EncountTools::SetWildPokemonItem(enemyPoke, randomRoll, item1Rate, item2Rate, nullptr);

    return __this->GetMemberPointer(idx, method);
}
