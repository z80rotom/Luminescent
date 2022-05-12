#include "Dpr/Battle/Logic/Common.hpp"
#include "Dpr/Battle/Logic/Calc.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"
#include "Dpr/Battle/Logic/Handler.hpp"
#include "Dpr/Battle/Logic/Tables.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"

#include "il2cpp-api.h"
#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"
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
const uint16_t POKEPOS = 13;
const uint16_t WAZAID = 18;
const uint16_t WAZA_POWER = 51;
const uint16_t WAZA_POWER_RATIO = 52;
const uint16_t WORK_ADRS = 68;
const uint16_t GEN_FLAG = 89;
const uint16_t DISABLE_BURN_FLAG = 90;

constexpr size_t BTL_STRID_STD_Magnitude1 = 119;
constexpr size_t BTL_STRID_STD_Magnitude2 = 120;
constexpr size_t BTL_STRID_STD_Magnitude3 = 121;
constexpr size_t BTL_STRID_STD_Magnitude4 = 122;
constexpr size_t BTL_STRID_STD_Magnitude5 = 123;
constexpr size_t BTL_STRID_STD_Magnitude6 = 124;
constexpr size_t BTL_STRID_STD_Magnitude7 = 125;
constexpr size_t BTL_STRID_STD_YubiWoFuru = 137;

constexpr uint32_t NUM_NEW_MOVES = 3;
constexpr uint32_t NUM_KARAGENKI_MOVES = 2;
constexpr uint32_t NUM_YUBI_WO_FURU_MOVES = 1;
// WazaNo
constexpr int32_t RETURN_WAZANO = 216;
constexpr int32_t FRUSTRATION_WAZANO = 218;
constexpr int32_t MAGNITUDE_WAZANO = 222;

constexpr uint32_t NUM_NEW_BTL_STRID_SET = 6;
constexpr uint32_t NUM_NEW_BTL_STRID_STD = 6;
constexpr uint32_t NUM_BTL_STRID_STD = 547;

System::Array<EventFactor_EventHandlerTable_o> * ADD_Karagenki(MethodInfo *method)
{
    socket_log_fmt("ADD_Karagenki\n");
    il2cpp_runtime_class_init((void *) Waza_TypeInfo);
    socket_log_fmt("Waza_TypeInfo->static_fields->HandlerTable_Karagenki->max_length: %08X\n", Waza_TypeInfo->static_fields->HandlerTable_Karagenki->max_length);
    return Waza_TypeInfo->static_fields->HandlerTable_Karagenki;
}

void handler_Karagenki_AtkPow_Orig(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Karagenki_AtkPow_Orig\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    Common::RewriteEventVar(args, DISABLE_BURN_FLAG, 1, (MethodInfo *) nullptr);
}

void handler_Karagenki_WazaPow_Orig(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Karagenki_WazaPow_Orig\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);
    
    if (evPokeID != pokeID)
    {
        return;
    }

    BTL_POKEPARAM_o * bpp = Common::GetPokeParam(args, pokeID, (MethodInfo *) nullptr);
    uint32_t pokeSick = bpp->GetPokeSick((MethodInfo *) nullptr);
    if ((pokeSick < 6) && ((1 << (uint64_t)(pokeSick & 0x1f) & 0x32U) != 0)) {
        Common::MulEventVar(args, WAZA_POWER_RATIO, 0x2000, (MethodInfo *) nullptr);
    }
}

void handler_Return_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Return_WazaPow\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);
    
    if (evPokeID != pokeID)
    {
        return;
    }

    BTL_POKEPARAM_o * bpp = Common::GetPokeParam(args, pokeID, (MethodInfo *) nullptr);
    uint8_t friendship = bpp->GetFriendship((MethodInfo *) nullptr);
    int32_t waza_power = friendship / 2.5;
    Common::RewriteEventVar(args, WAZA_POWER, waza_power, (MethodInfo *) nullptr);
}

void handler_Frustration_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Frustration_WazaPow\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    BTL_POKEPARAM_o * bpp = Common::GetPokeParam(args, pokeID, (MethodInfo *) nullptr);
    uint8_t friendship = bpp->GetFriendship((MethodInfo *) nullptr);
    int32_t waza_power = (255 - friendship) / 2.5;
    Common::RewriteEventVar(args, WAZA_POWER, waza_power, (MethodInfo *) nullptr);
}

void handler_Karagenki_AtkPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Karagenki_AtkPow\n");
    int32_t wazaID = Common::GetEventVar(args, WAZAID, (MethodInfo *) nullptr);
    switch (wazaID)
    {
        case RETURN_WAZANO:
            return;
        case FRUSTRATION_WAZANO:
            return;
        default:
            handler_Karagenki_AtkPow_Orig(args, pokeID, method);
            return;
    }
}

extern void ** PTR_DAT_04b7f588;

void handler_Karagenki_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Karagenki_WazaPow\n");

    system_load_typeinfo(*PTR_DAT_04b7f588);
    il2cpp_runtime_class_init(Common_TypeInfo);

    int32_t wazaID = Common::GetEventVar(args, WAZAID, (MethodInfo *) nullptr);
    switch (wazaID)
    {
        case RETURN_WAZANO:
            handler_Return_WazaPow(args, pokeID, method);
            break;
        case FRUSTRATION_WAZANO:
            handler_Frustration_WazaPow(args, pokeID, method);
            break;
        default:
            handler_Karagenki_WazaPow_Orig(args, pokeID, method);
            break;
    }
}

void handler_Magnitude(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    // TODO: Stubbed
    socket_log_fmt("handler_Magnitude\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }
}

void handler_Magnitude_Msg(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    // TODO: Stubbed
    socket_log_fmt("handler_Magnitude_Msg\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }
}

void handler_YubiWoFuru_Orig(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    // TODO: Stubbed
    socket_log_fmt("handler_YubiWoFuru_Orig\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    System::Array<uint16_t> * yubiFuruPermitTable = Tables::GetYubiFuruPermitTable((MethodInfo *) nullptr);
    uint32_t idx = Calc::GetRand(yubiFuruPermitTable->max_length, (MethodInfo *) nullptr);
    uint16_t wazaNo = yubiFuruPermitTable->m_Items[idx];
    uint8_t pokepos = Common::DecideWazaTargetAuto(args, pokeID, (uint32_t) wazaNo, (MethodInfo *) nullptr);

    Common::RewriteEventVar(args, WAZAID, wazaNo, (MethodInfo *) nullptr);
    Common::RewriteEventVar(args, POKEPOS, pokepos, (MethodInfo *) nullptr);
}

void handler_YubiWoFuru_Msg_Orig(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    // TODO: Stubbed
    socket_log_fmt("handler_YubiWoFuru_Msg_Orig\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    StrParam_o * param = (StrParam_o *) Common::GetEventVarAddress(args, WORK_ADRS, (MethodInfo *) nullptr);
    param->Setup(1, BTL_STRID_STD_YubiWoFuru, (MethodInfo *) nullptr);
    int32_t arg = Common::GetEventVar(args, WAZAID, (MethodInfo *) nullptr);
    param->AddArg(arg, (MethodInfo *) nullptr);

    Common::RewriteEventVar(args, GEN_FLAG, 1, (MethodInfo *) nullptr);
}

void handler_YubiWoFuru(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_YubiWoFuru\n");
    int32_t wazaID = Common::GetEventVar(args, WAZAID, (MethodInfo *) nullptr);
    switch (wazaID)
    {
        case MAGNITUDE_WAZANO:
            handler_Magnitude(args, pokeID, method);
            break;
        default:
            handler_YubiWoFuru_Orig(args, pokeID, method);
            break;
    }
}

void handler_YubiWoFuru_Msg(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_YubiWoFuru_Msg\n");
    int32_t wazaID = Common::GetEventVar(args, WAZAID, (MethodInfo *) nullptr);
    switch (wazaID)
    {
        case MAGNITUDE_WAZANO:
            handler_Magnitude_Msg(args, pokeID, method);
            break;
        default:
            handler_YubiWoFuru_Msg_Orig(args, pokeID, method);
            break;
    }
}

int32_t KARAGENKI_ENTRIES[NUM_KARAGENKI_MOVES] = {
    RETURN_WAZANO,
    FRUSTRATION_WAZANO
};

int32_t YUBI_WO_FURU_ENTRIES[NUM_YUBI_WO_FURU_MOVES] = {
    MAGNITUDE_WAZANO
};

static void * gArrayPtr = nullptr;
static uint32_t gArrayLen = 0;

Waza_HandlerGetFunc_o * Karagenki_ctor(Waza_HandlerGetFunc_o *_this, intptr_t m_target, MethodInfo *method)
{
    socket_log_fmt("Karagenki Method: %08X\n", method);
    _this->ctor(m_target, method);

    System::Array<Waza_GET_FUNC_TABLE_ELEM_o> * getFuncTable = (System::Array<Waza_GET_FUNC_TABLE_ELEM_o> *) gArrayPtr;
    for (uint32_t i = 0; i < NUM_KARAGENKI_MOVES; i++)
    {
        socket_log_fmt("Registering new Waza Handler #: %i\n", i);
        int32_t wazaNo = KARAGENKI_ENTRIES[i];
        socket_log_fmt("Got WazaHandlerEntry at %i\n", i);

        Waza_GET_FUNC_TABLE_ELEM_o * elem = &getFuncTable->m_Items[gArrayLen+i];
        socket_log_fmt("Got GET_FUNC_TABLE_ELEM at %i\n", gArrayLen+i);
        Waza_HandlerGetFunc_o * func = (Waza_HandlerGetFunc_o *) il2cpp_object_new(Waza_HandlerGetFunc_TypeInfo);
        socket_log_fmt("Called initializer for Waza_HandlerGetFunc_o\n");
        socket_log_fmt("entry.method: %08X\n", method);
        func->ctor(0, method); 
        socket_log_fmt("Called constructor for Waza_HandlerGetFunc_o\n");
        elem->fields.waza = wazaNo;
        elem->fields.func = func;
        // Waza_GET_FUNC_TABLE_ELEM_o::ctor(elem, entry.wazaNo, func, (MethodInfo *) nullptr);
        // socket_log_fmt("Called constructor for Waza_GET_FUNC_TABLE_ELEM_o\n");
    }

    return _this;
}

Waza_HandlerGetFunc_o * YubiWoFuru_ctor(Waza_HandlerGetFunc_o *_this, intptr_t m_target, MethodInfo *method)
{
    socket_log_fmt("YubiWoFuru Method: %08X\n", method);
    _this->ctor(m_target, method);

    System::Array<Waza_GET_FUNC_TABLE_ELEM_o> * getFuncTable = (System::Array<Waza_GET_FUNC_TABLE_ELEM_o> *) gArrayPtr;
    for (uint32_t i = 0; i < NUM_YUBI_WO_FURU_MOVES; i++)
    {
        socket_log_fmt("Registering new Waza Handler #: %i\n", i);
        int32_t wazaNo = YUBI_WO_FURU_ENTRIES[i];
        socket_log_fmt("Got WazaHandlerEntry at %i\n", i);

        Waza_GET_FUNC_TABLE_ELEM_o * elem = &getFuncTable->m_Items[gArrayLen+i];
        socket_log_fmt("Got GET_FUNC_TABLE_ELEM at %i\n", gArrayLen+i);
        Waza_HandlerGetFunc_o * func = (Waza_HandlerGetFunc_o *) il2cpp_object_new(Waza_HandlerGetFunc_TypeInfo);
        socket_log_fmt("Called initializer for Waza_HandlerGetFunc_o\n");
        socket_log_fmt("entry.method: %08X\n", method);
        func->ctor(0, method); 
        socket_log_fmt("Called constructor for Waza_HandlerGetFunc_o\n");
        elem->fields.waza = wazaNo;
        elem->fields.func = func;
        // Waza_GET_FUNC_TABLE_ELEM_o::ctor(elem, entry.wazaNo, func, (MethodInfo *) nullptr);
        // socket_log_fmt("Called constructor for Waza_GET_FUNC_TABLE_ELEM_o\n");
    }

    return _this;
}

void * Waza_system_array_new(void * typeInfo, uint32_t len)
{
    socket_log_fmt("Waza_system_array_new\n");
    gArrayLen = len;
    gArrayPtr = system_array_new(typeInfo, gArrayLen + NUM_NEW_MOVES);

    return gArrayPtr;
}

void * BTL_STRID_SET_system_array_new(void * typeInfo, uint32_t len)
{
    socket_log_fmt("BTL_STRID_SET_system_array_new\n");
    void * arrayPtr = system_array_new(typeInfo, len + NUM_NEW_BTL_STRID_SET);
    return arrayPtr;
}

void * BTL_STRID_STD_system_array_new(void * typeInfo, uint32_t len)
{
    socket_log_fmt("BTL_STRID_STD_system_array_new\n");
    void * arrayPtr = system_array_new(typeInfo, len + NUM_NEW_BTL_STRID_STD);
    System::Array<System::String> * btl_strid_std_label = (System::Array<System::String> *) arrayPtr;
    btl_strid_std_label->m_Items[BTL_STRID_STD_Magnitude1] = *System::String::CreateString("BTL_STRID_STD_Magnitude1");
    btl_strid_std_label->m_Items[BTL_STRID_STD_Magnitude2] = *System::String::CreateString("BTL_STRID_STD_Magnitude2");
    btl_strid_std_label->m_Items[BTL_STRID_STD_Magnitude3] = *System::String::CreateString("BTL_STRID_STD_Magnitude3");
    btl_strid_std_label->m_Items[BTL_STRID_STD_Magnitude4] = *System::String::CreateString("BTL_STRID_STD_Magnitude4");
    btl_strid_std_label->m_Items[BTL_STRID_STD_Magnitude5] = *System::String::CreateString("BTL_STRID_STD_Magnitude5");
    btl_strid_std_label->m_Items[BTL_STRID_STD_Magnitude6] = *System::String::CreateString("BTL_STRID_STD_Magnitude6");
    btl_strid_std_label->m_Items[BTL_STRID_STD_Magnitude7] = *System::String::CreateString("BTL_STRID_STD_Magnitude7");
    return arrayPtr;
}