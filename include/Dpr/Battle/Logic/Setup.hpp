#pragma once

#include "il2cpp.hpp"
#include "Pml/PokeParty.hpp"
#include "Dpr/Battle/Logic/BATTLE_SETUP_PARAM.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Setup
            {
                static void BATTLE_PARAM_SetBtlStatusFlag(BATTLE_SETUP_PARAM_o *bp,int32_t status_f,MethodInfo *method);
                // 023a3780
                static void BATTLE_SETUP_Wild(BATTLE_SETUP_PARAM_o *bp,
                    Pml::PokeParty_o *playerParty, Pml::PokeParty_o *partyEnemy, int32_t partnerTrainerID,
                    BTL_FIELD_SITUATION_o *sit, int32_t rule, MethodInfo *method);
                static void BTL_SETUP_Trainer(BATTLE_SETUP_PARAM_o *bp,
                    Pml::PokeParty_o *playerParty, int32_t trID,
                    BTL_FIELD_SITUATION_o *sit, int32_t rule, MethodInfo *method);
                // static void BTL_SETUP_Trainer_Multi(BATTLE_SETUP_PARAM_o *bp, Pml::PokeParty_o **playerParty,
                //     int32_t trID_friend,int32_t trID_1,int32_t trID_2,
                //     BTL_FIELD_SITUATION_o *sit,int32_t rule,MethodInfo *method);
                // 023a4240
                static void normalTrainer(BATTLE_SETUP_PARAM_o *dst, int32_t clientID, int32_t tr_id, MethodInfo *method);
            };
        }
    }
}