
#include "logger.hpp"
#include "il2cpp-api.h"
#include "Dpr/Battle/Logic/Setup.hpp"

void BATTLE_SETUP_Wild_DBIncense(Dpr::Battle::Logic::BATTLE_SETUP_PARAM_o *bp,
               Pml::PokeParty_o *playerParty,
               Pml::PokeParty_o *partyEnemy, int32_t partnerTrainerID,
               Dpr::Battle::Logic::BTL_FIELD_SITUATION_o *sit, int32_t rule,
               MethodInfo *method)
{
    const int32_t BTL_MULTIMODE_PP_AA = 2;
    const int32_t BTL_MULTIMODE_P_AA = 4;
    const int32_t BTL_RULE_DOUBLE = 1;
    const int32_t BTL_STATUS_FLAG_NO_LOSE = 16;
    const uint16_t ITEM_INCENSE = 216;
    // TODO: Check if partnerTrainerID != 0
    socket_log_fmt("BATTLE_SETUP_Wild_DBIncense\n");
    Dpr::Battle::Logic::Setup::BATTLE_SETUP_Wild(bp, playerParty, partyEnemy, 0, sit, BTL_RULE_DOUBLE, method);

    // socket_log_fmt("Pml::PokeParty_o::GetMemberPointer: %08X\n", &Pml::PokeParty_o::GetMemberPointer);
    // socket_log_fmt("Pml::PokePara::CoreParam::IsNull: %08X\n", &Pml::PokePara::CoreParam::IsNull);
    // socket_log_fmt("Pml::PokePara::CoreParam::IsEgg: %08X\n", &Pml::PokePara::CoreParam::IsEgg);
    // if (partnerTrainerID != 0)
    // {
    //     socket_log_fmt("Have a partner, so you're already going into a different kind of double battle\n");
    //     return;
    // }
    
    // Pml::PokePara::CoreParam * second = (Pml::PokePara::CoreParam *) playerParty->GetMemberPointer(1, (MethodInfo *) nullptr);
    // if (second->IsNull((MethodInfo *) nullptr) || second->IsEgg(2, (MethodInfo *) nullptr))
    // {
    //     socket_log_fmt("Pokemon can't double battle, force into singles\n");
    //     return;
    // }

    // Pml::PokePara::CoreParam * first = (Pml::PokePara::CoreParam *) playerParty->GetMemberPointer(0, (MethodInfo *) nullptr);
    // if (first->GetItem((MethodInfo *) nullptr) != ITEM_INCENSE)
    // {
    //     socket_log_fmt("Pokemon isn't holding an incense, regular battle time\n");
    //     return;
    // }
    
    bp->fields.multiMode = BTL_MULTIMODE_P_AA;
    // 
    for (size_t i = 2; i < 5; i++)
    {
        bp->fields.party->m_Items[i] = (Pml::PokeParty_o *) il2cpp_object_new(*Pml::PTR_PokeParty_TypeInfo);
        bp->fields.party->m_Items[i]->ctor((MethodInfo *) nullptr);
        bp->fields.party->m_Items[i]->CopyFrom(partyEnemy, (MethodInfo *) nullptr);
    }
    // TODO: Check if you are using the incense on your first member in your party.
    // public const BtlRule BTL_RULE_DOUBLE = 1;
    // Multimode is either 2 or 4
    // public const BtlMultiMode BTL_MULTIMODE_PP_AA = 2;
    // public const BtlMultiMode BTL_MULTIMODE_P_AA = 4;
}

struct Dpr_Battle_Logic_MainModule_o;
// Stub this to see if it fixes the clone
void setup_alone_double_multi_04(Dpr_Battle_Logic_MainModule_o *__this,int32_t *seq,MethodInfo *method)
{
    return;
}