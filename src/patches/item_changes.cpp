#include "il2cpp.hpp"

#include "Dpr/UI/UIBag.hpp"
#include "Pml/Personal/PersonalSystem.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/PokePara/PokemonParam.h"

#include "util.hpp"
#include "logger.hpp"

// Checks if Ability Patch can be used.
bool AbilityPatchUsability(Dpr::UI::UIBag___c__DisplayClass135_0_o *__this, Pml::PokePara::PokemonParam_o *pp, MethodInfo *method)
{
    system_load_typeinfo((void *)0x9592);

    Pml::PokePara::CoreParam* coreParam = (Pml::PokePara::CoreParam*)__this->fields.pokeParam;

    int32_t monsno = coreParam->GetMonsNo(nullptr);
    int32_t formno = coreParam->GetFormNo(nullptr);

    Pml::Personal::PersonalSystem::LoadPersonalData(monsno, formno, nullptr);
    int32_t pattern = Pml::Personal::PersonalSystem::GetTokuseiPattern(nullptr);

    switch (pattern)
    {
        case 0: // A1 == A2 == HA
            return false;
        case 1: // A1 == A2 != HA
        case 2: // A1 != A2 != HA
            Pml::PokePara::CoreParam* corePp = (Pml::PokePara::CoreParam*)pp;
            uint8_t abilitySlot = corePp->GetTokuseiIndex(nullptr);
            if (abilitySlot != 2) // Change to Hidden Ability
            {
                corePp->SetTokuseiIndex(2, nullptr);
            }
            else // Change to first Ability
            {
                corePp->SetTokuseiIndex(0, nullptr);
            }
            return true;
    }

    return false;
}
