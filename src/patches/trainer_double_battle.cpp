
#include "logger.hpp"
#include "il2cpp-api.h"
#include "Dpr/Battle/Logic/Setup.hpp"
#include "Dpr/EncountTools.hpp"
#include "PlayerWork.hpp"

const int32_t BTL_RULE_SINGLE = 0;
const int32_t BTL_RULE_DOUBLE = 1;


void Dpr_EncountTools_SetupBattleTrainer(Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o *battleSetupParam, int32_t arenaID,
                int32_t mapAttrib, int32_t weatherType, int32_t rule, int32_t enemyID0, int32_t enemyID1, int32_t partnerID, MethodInfo *method)
{
    if (PlayerWork::GetBool(2196, (MethodInfo *) nullptr))
    {
        rule = BTL_RULE_DOUBLE;
    }
    Dpr::EncountTools::SetupBattleTrainer(battleSetupParam, arenaID, mapAttrib, weatherType, rule, enemyID0, enemyID1, partnerID, method);
}
