#include "il2cpp.hpp"
#include "il2cpp-api.h"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"
#include "Dpr/Battle/Logic/Common.hpp"
#include "Dpr/Battle/Logic/Calc.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"
#include "Dpr/Battle/Logic/EventID.hpp"
#include "Dpr/Battle/Logic/EventSystem.hpp"
#include "Dpr/Battle/Logic/Handler.hpp"
#include "Dpr/Battle/Logic/Tables.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_SetItem_Description.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_SetWazaEffectIndex_Description_o.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_SwapItem_Description.hpp"
#include "ItemWork.hpp"

#include "util.hpp"
#include "logger.hpp"

// EventVar.Label
const uint16_t POKEID = 2;
const uint16_t POKEID_ATK = 3;
const uint16_t POKEID_TARGET1 = 6;

using namespace Dpr::Battle::Logic;

// Changes the handler for Thief to put the item into the player's bag.
void HandlerDorobou(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("HandlerDorobou\n");

    system_load_typeinfo((void *)0xa92f);
    system_load_typeinfo((void *)0xa965);
    system_load_typeinfo((void *)0x43b9);
    system_load_typeinfo((void *)0x43ba);
    il2cpp_runtime_class_init(Common_TypeInfo);

    // Check that we're looking at the attacking pokémon.
    uint attackingPoke = Common::GetEventVar(args, POKEID_ATK, nullptr);
    if (attackingPoke == pokeID)
    {
        // Check that the attacking pokémon is not holding an item.
        bool attackerHasNoItem = Common::Dorobou_CheckEnable(args, pokeID, nullptr);
        if (attackerHasNoItem)
        {
            // Check the target??
            uint targetPoke = Common::GetEventVar(args, POKEID_TARGET1, nullptr);
            if ((targetPoke & 0xff) != 0x1f)
            {
                // Check if the target is holding an item.
                BTL_POKEPARAM_o* targetPokeParam = Common::GetPokeParam(args, (uint8_t)targetPoke, nullptr);
                uint16_t item = targetPokeParam->GetItem(nullptr);
                if (item != 0)
                {
                    // Check if the item can be thieved. (Form change items, wild pokémon using the move, etc.)
                    bool cantSteal = Common::CheckCantStealPoke(args, pokeID, (uint8_t)targetPoke, nullptr);
                    if (!cantSteal)
                    {
                        if (Common::GetCompetitor(args, nullptr) != 0) // Is a trainer
                        {
                            Section_FromEvent_SwapItem_Description_o* swapItemDesc = (Section_FromEvent_SwapItem_Description_o *) il2cpp_object_new(Section_FromEvent_SwapItem_Description_TypeInfo);
                            swapItemDesc->ctor(nullptr);
                            swapItemDesc->fields.userPokeID = pokeID;
                            swapItemDesc->fields.targetPokeID = (uint8_t)targetPoke;
                            swapItemDesc->fields.isIncRecordCount_StealItemFromWildPoke = true;

                            swapItemDesc->fields.successMessage1->Setup(2, 0x598, nullptr);
                            swapItemDesc->fields.successMessage1->AddArg(attackingPoke, nullptr);
                            swapItemDesc->fields.successMessage1->AddArg(targetPoke & 0xff, nullptr);
                            swapItemDesc->fields.successMessage1->AddArg(item, nullptr);

                            bool swapped = Common::SwapItem(args, &swapItemDesc, nullptr);
                            if (swapped)
                            {
                                Section_FromEvent_SetWazaEffectIndex_Description_o* setWazaDesc = (Section_FromEvent_SetWazaEffectIndex_Description_o *) il2cpp_object_new(Section_FromEvent_SetWazaEffectIndex_Description_TypeInfo);
                                setWazaDesc->ctor(nullptr);
                                setWazaDesc->fields.effectIndex = 1;
                                Common::SetWazaEffectIndex(args, &setWazaDesc, nullptr);
                            }
                        }
                        else // Is wild
                        {
                            Section_FromEvent_SetItem_Description_o* setItemDesc = (Section_FromEvent_SetItem_Description_o *) il2cpp_object_new(Section_FromEvent_SetItem_Description_TypeInfo);
                            setItemDesc->ctor(nullptr);
                            setItemDesc->fields.userPokeID = pokeID;
                            setItemDesc->fields.targetPokeID = (uint8_t)targetPoke;
                            setItemDesc->fields.itemID = 0;

                            setItemDesc->fields.successMessage->Setup(2, 0x598, nullptr);
                            setItemDesc->fields.successMessage->AddArg(attackingPoke, nullptr);
                            setItemDesc->fields.successMessage->AddArg(targetPoke & 0xff, nullptr);
                            setItemDesc->fields.successMessage->AddArg(item, nullptr);

                            bool itemSet = Common::SetItem(args, &setItemDesc, nullptr);
                            if (itemSet)
                            {
                                if (ItemWork::IsAddItem(item, 1, nullptr))
                                {
                                    ItemWork::AddItem(item, 1, nullptr);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

// Remove the check for if the attacking Pokémon is holding an item (for wilds)
bool Dorobou_CheckEnable(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    BTL_POKEPARAM_o *pokeparam = (*args)->fields.pBattleEnv->fields.m_pokecon->GetPokeParamConst(pokeID, nullptr);
    uint16_t item = pokeparam->GetItem(nullptr);
    
    if (Common::GetCompetitor(args, nullptr) != 0) // Is a trainer
    {
        // Keep default behavior (true if attacking poke has no item)
        System_Int32_array *work = (*args)->fields.pMyFactor->fields.m_data->fields.work;
        if (work->max_length > 0)
        {
            if (work->m_Items[0] != 0)
            {
                return false;
            }
        }
        
        return item == 0;
    }
    else // Is wild
    {
        // Always set to true (attacking poke has no item)
        return true;
    }
}
