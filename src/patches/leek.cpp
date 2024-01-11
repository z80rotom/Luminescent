#include "Dpr/Battle/Logic/Common.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"

#include "il2cpp-api.h"
#include "util.hpp"
#include "logger.hpp"

using namespace Dpr::Battle::Logic;

void Dpr_Battle_Logic_Handler_Item_handler_Leek(EventFactor_EventHandlerArgs_o** args, uint8_t pokeID) {
    system_load_typeinfo((void *)0x58a2);
    system_load_typeinfo((void *)0x5910);

    uint32_t attackingMon = Common::GetEventVar(args, 3, nullptr);
    if (attackingMon != pokeID)
        return;

    BTL_POKEPARAM_o* __this = Common::GetPokeParam(args, pokeID, nullptr);
    uint16_t monsNo = __this->GetMonsNo(nullptr);

    if (monsNo == 83 || monsNo == 865) {
        int32_t critStage = Common::GetEventVar(args, 47, nullptr);
        Common::RewriteEventVar(args, 47, critStage + 2, nullptr);
    }
}