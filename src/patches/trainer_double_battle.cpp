
#include "logger.hpp"
#include "il2cpp-api.h"
#include "Dpr/Battle/Logic/Setup.hpp"
#include "PlayerWork.hpp"

void BTL_SETUP_Trainer(Dpr::Battle::Logic::BATTLE_SETUP_PARAM_o *bp, Pml::PokeParty_o *playerParty,int32_t trID,
               Dpr::Battle::Logic::BTL_FIELD_SITUATION_o *sit, int32_t rule, MethodInfo *method)
{
    const int32_t BTL_RULE_DOUBLE = 1;
    if (PlayerWork::GetBool(2196, (MethodInfo *) nullptr))
    {
        rule = BTL_RULE_DOUBLE;
    }
    Dpr::Battle::Logic::Setup::BTL_SETUP_Trainer(bp, playerParty, trID, sit, rule, (MethodInfo *) nullptr);
}