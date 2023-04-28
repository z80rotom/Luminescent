#include "il2cpp.hpp"
#include "il2cpp-api.h"
#include "Dpr/Battle/Logic/Common.hpp"
#include "Dpr/Battle/Logic/Calc.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"
#include "Dpr/Battle/Logic/EventID.hpp"
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
void HandlerDorobou(Dpr::Battle::Logic::EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("HandlerDorobou\n");

    system_load_typeinfo((void *)0xa92f);
    system_load_typeinfo((void *)0x43b9);
    system_load_typeinfo((void *)0x43ba);
    il2cpp_runtime_class_init(Common_TypeInfo);

    uint attackingPoke = Common::GetEventVar(args, POKEID_ATK, nullptr);
    if (attackingPoke == pokeID)
    {
        bool thiefEnabled = Common::Dorobou_CheckEnable(args, pokeID, nullptr);
        if (thiefEnabled)
        {
            uint targetPoke = Common::GetEventVar(args, POKEID_TARGET1, nullptr);
            if ((targetPoke & 0xff) != 0x1f)
            {
                BTL_POKEPARAM_o* targetPokeParam = Common::GetPokeParam(args, (uint8_t)targetPoke, nullptr);
                uint16_t item = targetPokeParam->GetItem(nullptr);
                if (item != 0)
                {
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
