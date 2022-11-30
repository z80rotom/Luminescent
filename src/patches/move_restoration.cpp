#include "Dpr/Battle/Logic/Common.hpp"
#include "Dpr/Battle/Logic/Calc.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"
#include "Dpr/Battle/Logic/EventID.hpp"
#include "Dpr/Battle/Logic/Handler.hpp"
#include "Dpr/Battle/Logic/Tables.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_Message.hpp"

#include "il2cpp-api.h"
#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"
#include "util.hpp"
#include "logger.hpp"
#include "Pml/Local/Random.h"

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
const uint16_t CHECK_HIDE = 24; // Used Fly/Dig before
const uint16_t WAZA_POWER = 51;
const uint16_t WAZA_POWER_RATIO = 52;
const uint16_t WORK_ADRS = 68;
const uint16_t AVOID_FLAG = 73;
const uint16_t GEN_FLAG = 89;
const uint16_t DISABLE_BURN_FLAG = 90;
// Refer to EventVar.Label = CHECK_HIDE
const uint16_t HIDE_FLY = 3;
const uint16_t HIDE_DIG = 5;
// ContFlag
const uint16_t IS_DIG = 5;

constexpr size_t BTL_STRID_STD_Magnitude1 = 119;
constexpr size_t BTL_STRID_STD_Magnitude2 = 120;
constexpr size_t BTL_STRID_STD_Magnitude3 = 121;
constexpr size_t BTL_STRID_STD_Magnitude4 = 122;
constexpr size_t BTL_STRID_STD_Magnitude5 = 123;
constexpr size_t BTL_STRID_STD_Magnitude6 = 124;
constexpr size_t BTL_STRID_STD_Magnitude7 = 125;
constexpr size_t BTL_STRID_STD_YubiWoFuru = 137;

constexpr uint32_t NUM_NEW_MOVES = 7;
constexpr uint32_t NUM_KARAGENKI_MOVES = 2;
constexpr uint32_t NUM_YUBI_WO_FURU_MOVES = 1;
// WazaNo
constexpr int32_t JUMPKICK_WAZANO = 26;
constexpr int32_t THUNDER_WAZANO = 87;
constexpr int32_t HIJUMPKICK_WAZANO = 136;
constexpr int32_t RETURN_WAZANO = 216;
constexpr int32_t FRUSTRATION_WAZANO = 218;
constexpr int32_t MAGNITUDE_WAZANO = 222;
constexpr int32_t SILVERWIND_WAZANO = 318;
constexpr int32_t SKYUPPERCUT_WAZANO = 327;
constexpr int32_t OMINIOUSWIND_WAZANO = 466;

constexpr uint32_t NUM_NEW_BTL_STRID_SET = 6;
constexpr uint32_t NUM_NEW_BTL_STRID_STD = 6;
constexpr uint32_t NUM_BTL_STRID_STD = 547;

extern void * DAT_03a6bb14;
extern MethodInfo * Handler_Karagenki_WazaPowMethodInfo;

static uint32_t gMagnitude = 6;
int32_t MAGNITUDE_POWER_TABLE[7] = {
    10,
    30,
    50,
    70,
    90,
    110,
    150,
};

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

void handler_Magnitude_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    // TODO: Stubbed
    socket_log_fmt("handler_Magnitude_WazaPow\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    // gMagnitude = Pml::Local::Random::GetValue((MethodInfo *) nullptr) % 7;
    socket_log_fmt("Magnitude: %08X\n", gMagnitude);
    int32_t waza_power = MAGNITUDE_POWER_TABLE[gMagnitude];
    socket_log_fmt("waza_power: %08X\n", waza_power);
    Common::RewriteEventVar(args, WAZA_POWER, waza_power, (MethodInfo *) nullptr);
}

void handler_Magnitude_Msg(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    system_load_typeinfo(DAT_03a6bb14);
    system_load_typeinfo((void *)0xa9bf);
    il2cpp_runtime_class_init(Common_TypeInfo);

    // TODO: Stubbed
    socket_log_fmt("handler_Magnitude_Msg\n");
    int32_t evPokeID = Common::GetEventVar(args, POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    socket_log_fmt("DAT_03a6bb14 %08X\n", DAT_03a6bb14);
    socket_log_fmt("Common_TypeInfo: %08X\n", Common_TypeInfo);
    socket_log_fmt("Section_FromEvent_Message::Description_TypeInfo: %08X\n", Section_FromEvent_Message::Description_TypeInfo);
    socket_log_fmt("Common::Message: %08X\n", &Common::Message);
    socket_log_fmt("Section_FromEvent_Message::Description_o::ctor: %08X\n", &Section_FromEvent_Message::Description_o::ctor);
    socket_log_fmt("StrParam_o::Setup: %08X\n", &StrParam_o::Setup);

    gMagnitude = Pml::Local::Random::GetValue((MethodInfo *) nullptr) % 7;
    Section_FromEvent_Message::Description_o * desc = (Section_FromEvent_Message::Description_o *) il2cpp_object_new(Section_FromEvent_Message::Description_TypeInfo);
    desc->ctor((MethodInfo *) nullptr);
    desc->fields.pokeID = pokeID;
    desc->fields.message->Setup(1, BTL_STRID_STD_Magnitude1 + gMagnitude, (MethodInfo *) nullptr);
    Common::Message(args, &desc, (MethodInfo *) nullptr);

    // StrParam_o * param = (StrParam_o *) Common::GetEventVarAddress(args, WORK_ADRS, (MethodInfo *) nullptr);
    // socket_log_fmt("StrParam: %08X\n", param);
    // param->Setup(1, BTL_STRID_STD_Magnitude1 + gMagnitude, (MethodInfo *) nullptr);
    // int32_t arg = Common::GetEventVar(args, WAZAID, (MethodInfo *) nullptr);
    // param->AddArg(arg, (MethodInfo *) nullptr);
    // Common::RewriteEventVar(args, GEN_FLAG, 1, (MethodInfo *) nullptr);
}


int32_t KARAGENKI_ENTRIES[NUM_KARAGENKI_MOVES] = {
    RETURN_WAZANO,
    FRUSTRATION_WAZANO
};

int32_t YUBI_WO_FURU_ENTRIES[NUM_YUBI_WO_FURU_MOVES] = {
    MAGNITUDE_WAZANO
};

// 4c7a3b0

// static MethodInfo * sAddReturnMethodInfo = nullptr;
// static MethodInfo * sAddFrustrationMethodInfo = nullptr;
// static MethodInfo * sHandler_Return_WazaPowMethodInfo = nullptr;
// static MethodInfo * sHandler_Frustration_WazaPowMethodInfo = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sReturnEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sFrustrationEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sMagnitudeEventHandlerTable = nullptr;

const int16_t EVENT_ID_REQWAZA_MSG = 27;
const int16_t EVENT_ID_WAZA_POWER = 70;

// Dpr.Battle.Logic.Handler.Waza$$
System::Array<EventFactor_EventHandlerTable_o *> * ADD_Return(MethodInfo *method)
{
    socket_log_fmt("ADD_Return\n");
    if (sReturnEventHandlerTable == nullptr) {
        // socket_log_fmt("ADD_Return init\n");
        sReturnEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) system_array_new(EventFactor_EventHandlerTable_Array_TypeInfo, 1);
        sReturnEventHandlerTable->m_Items[0] = createEventHandlerTable(EVENT_ID_WAZA_POWER, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &handler_Return_WazaPow);
    }

    return sReturnEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_Frustration(MethodInfo *method)
{
    socket_log_fmt("ADD_Frustration\n");
    if (sFrustrationEventHandlerTable == nullptr) {
        // socket_log_fmt("ADD_Frustration init\n");
        sFrustrationEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) system_array_new(EventFactor_EventHandlerTable_Array_TypeInfo, 1);
        sFrustrationEventHandlerTable->m_Items[0] = createEventHandlerTable(EVENT_ID_WAZA_POWER, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &handler_Frustration_WazaPow);
    }

    return sFrustrationEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_Magnitude(MethodInfo *method)
{
    socket_log_fmt("ADD_Magnitude\n");
    if (sMagnitudeEventHandlerTable == nullptr) {
        // socket_log_fmt("ADD_Magnitude init\n");
        sMagnitudeEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) system_array_new(EventFactor_EventHandlerTable_Array_TypeInfo, 2);
        sMagnitudeEventHandlerTable->m_Items[0] = createEventHandlerTable(EVENT_ID_WAZA_POWER, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &handler_Magnitude_WazaPow);
        sMagnitudeEventHandlerTable->m_Items[1] = createEventHandlerTable(EVENT_ID_REQWAZA_MSG, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &handler_Magnitude_Msg);
    }

    return sMagnitudeEventHandlerTable;
}



void AddHandler(System::Array<Waza_GET_FUNC_TABLE_ELEM_o> * getFuncTable, uint32_t * idx, int32_t wazaNo, Il2CppMethodPointer methodPointer)
{

    MethodInfo * method = copyMethodInfo(Method_ADD_Karagenki, methodPointer);
    Waza_GET_FUNC_TABLE_ELEM_o * elem = &getFuncTable->m_Items[*idx];
    socket_log_fmt("Got GET_FUNC_TABLE_ELEM at %i\n", *idx);
    Waza_HandlerGetFunc_o * func = (Waza_HandlerGetFunc_o *) il2cpp_object_new(Waza_HandlerGetFunc_TypeInfo);
    socket_log_fmt("entry.method: %08X\n", methodPointer);
    func->ctor(0, method);
    elem->fields.waza = wazaNo;
    elem->fields.func = func;
    *idx += 1;
}

void * Waza_system_array_new(void * typeInfo, uint32_t len)
{
    socket_log_fmt("Waza_system_array_new\n");
    System::Array<Waza_GET_FUNC_TABLE_ELEM_o> * getFuncTable = (System::Array<Waza_GET_FUNC_TABLE_ELEM_o> *) system_array_new(typeInfo, len + NUM_NEW_MOVES);
    uint32_t idx = len;

    socket_log_fmt("Return idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, RETURN_WAZANO, (Il2CppMethodPointer) &ADD_Return);
    socket_log_fmt("Frustration idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, FRUSTRATION_WAZANO, (Il2CppMethodPointer) &ADD_Frustration);
    socket_log_fmt("Magnitude idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, MAGNITUDE_WAZANO, (Il2CppMethodPointer) &ADD_Magnitude);

    return getFuncTable;
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