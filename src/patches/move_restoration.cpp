#include "Dpr/Battle/Logic/Common.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"
#include "Dpr/Battle/Logic/Handler.hpp"

#include "il2cpp-api.h"
#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "util.hpp"
#include "logger.hpp"

using namespace Dpr::Battle::Logic;
using namespace Dpr::Battle::Logic::Handler;

// static System::Array<EventFactor_EventHandlerTable> * gReturnEventHandlerTable = nullptr;
// static System::Array<EventFactor_EventHandlerTable> * gFrustrationEventHandlerTable = nullptr;
// static System::Array<EventFactor_EventHandlerTable> * gFacadeEventHandlerTable = nullptr;

// EventVar.Label
const uint16_t POKEID = 2;
const uint16_t POKEID_ATK = 3;
const uint16_t WAZAID = 18;
const uint16_t WAZA_POWER = 51;
const uint16_t WAZA_POWER_RATIO = 52;
const uint16_t DISABLE_BURN_FLAG = 90;


constexpr uint32_t NUM_NEW_MOVES = 2;
// WazaNo
constexpr int32_t RETURN_WAZANO = 216;
constexpr int32_t FRUSTRATION_WAZANO = 218;
constexpr int32_t MAGNITUDE_WAZANO = 222;

// System::Array<EventFactor_EventHandlerTable> * ADD_Karagenki(MethodInfo *method)
// {
//     if (gFacadeEventHandlerTable == nullptr)
//     {

//     }
// }

void handler_Karagenki_AtkPow_Orig(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID == pokeID)
    {
        Common::RewriteEventVar(args, DISABLE_BURN_FLAG, 1, (MethodInfo *) nullptr);
    }
}

void handler_Karagenki_WazaPow_Orig(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID == pokeID)
    {
        BTL_POKEPARAM_o * bpp = Common::GetPokeParam(args, pokeID, (MethodInfo *) nullptr);
        uint32_t pokeSick = bpp->GetPokeSick((MethodInfo *) nullptr);
        if ((pokeSick < 6) && ((1 << (uint64_t)(pokeSick & 0x1f) & 0x32U) != 0)) {
            Common::MulEventVar(args, WAZA_POWER_RATIO, 0x2000, (MethodInfo *) nullptr);
        }
    }
}

void handler_Return_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID == pokeID)
    {
        BTL_POKEPARAM_o * bpp = Common::GetPokeParam(args, pokeID, (MethodInfo *) nullptr);
        uint8_t friendship = bpp->GetFriendship((MethodInfo *) nullptr);
        int32_t waza_power = friendship / 2.5;
        Common::RewriteEventVar(args, WAZA_POWER, waza_power, (MethodInfo *) nullptr);
    }
}

void handler_Frustration_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID == pokeID)
    {
        BTL_POKEPARAM_o * bpp = Common::GetPokeParam(args, pokeID, (MethodInfo *) nullptr);
        uint8_t friendship = bpp->GetFriendship((MethodInfo *) nullptr);
        int32_t waza_power = (255 - friendship) / 2.5;
        Common::RewriteEventVar(args, WAZA_POWER, waza_power, (MethodInfo *) nullptr);
    }
}

void handler_Karagenki_AtkPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    int32_t wazaID = Common::GetEventVar(args, WAZAID, (MethodInfo *) nullptr);
    switch (wazaID)
    {
        default:
            handler_Karagenki_AtkPow_Orig(args, pokeID, method);
            break;
    }
}

void handler_Karagenki_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    int32_t wazaID = Common::GetEventVar(args, WAZAID, (MethodInfo *) nullptr);
    switch (wazaID)
    {
        RETURN_WAZANO:
            handler_Return_WazaPow(args, pokeID, method);
            break;
        FRUSTRATION_WAZANO:
            handler_Frustration_WazaPow(args, pokeID, method);
            break;
        default:
            handler_Karagenki_WazaPow_Orig(args, pokeID, method);
            break;
    }
}

struct WazaHandlerEntry
{
    int32_t wazaNo;
    MethodInfo * method;
};


WazaHandlerEntry WAZA_HANDLER_ENTRIES[NUM_NEW_MOVES] = {
    {
        .wazaNo = RETURN_WAZANO,
        .method = Method_ADD_Karagenki
    },
    {
        .wazaNo = FRUSTRATION_WAZANO,
        .method = Method_ADD_Karagenki
    },
};

void * Waza_system_array_new(void * typeInfo, uint32_t len)
{
    socket_log_fmt("Waza_system_array_new\n");
    void * array_ptr = system_array_new(typeInfo, len + NUM_NEW_MOVES);
    System::Array<Waza_GET_FUNC_TABLE_ELEM_o> * getFuncTable = (System::Array<Waza_GET_FUNC_TABLE_ELEM_o> *) array_ptr;

    for (uint32_t i = 0; i < NUM_NEW_MOVES; i++)
    {
        socket_log_fmt("Registering new Waza Handler #: %i\n", i);
        WazaHandlerEntry entry = WAZA_HANDLER_ENTRIES[i];
        socket_log_fmt("Got WazaHandlerEntry at %i\n", i);

        Waza_GET_FUNC_TABLE_ELEM_o * elem = &getFuncTable->m_Items[len+i];
        socket_log_fmt("Got GET_FUNC_TABLE_ELEM at %i\n", len+i);
        Waza_HandlerGetFunc_o * func = (Waza_HandlerGetFunc_o *) il2cpp_object_new(Waza_HandlerGetFunc_TypeInfo);
        socket_log_fmt("Called initializer for Waza_HandlerGetFunc_o\n");
        func->ctor(0, entry.method); 
        socket_log_fmt("Called constructor for Waza_HandlerGetFunc_o\n");
        elem->fields.waza = entry.wazaNo;
        elem->fields.func = func;
        // Waza_GET_FUNC_TABLE_ELEM_o::ctor(elem, entry.wazaNo, func, (MethodInfo *) nullptr);
        // socket_log_fmt("Called constructor for Waza_GET_FUNC_TABLE_ELEM_o\n");
    }

    return array_ptr;
}