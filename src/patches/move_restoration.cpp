#include "Dpr/Battle/Logic/BTL_CLIENT.hpp"
#include "Dpr/Battle/Logic/BTLV_STRPARAM.hpp"
#include "Dpr/Battle/Logic/Common.hpp"
#include "Dpr/Battle/Logic/Calc.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"
#include "Dpr/Battle/Logic/EventID.hpp"
#include "Dpr/Battle/Logic/FieldStatus.hpp"
#include "Dpr/Battle/Logic/GWaza.hpp"
#include "Dpr/Battle/Logic/Handler.hpp"
#include "Dpr/Battle/Logic/MainModule.hpp"
#include "Dpr/Battle/Logic/Tables.hpp"
#include "Dpr/Battle/Logic/Section_CureSick.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_Message.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_RankReset.hpp"
#include "Dpr/Battle/Logic/Section_SideEffect_Add.hpp"
#include "Dpr/Battle/Logic/SICKCONT.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"
#include "Dpr/Battle/Logic/WAZADATA.hpp"
#include "Pml/Item/ItemData.hpp"

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
const uint16_t SUCCESS_FLAG = 120;
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

constexpr uint32_t NUM_NEW_MOVES = 10;
constexpr uint32_t NUM_KARAGENKI_MOVES = 2;
constexpr uint32_t NUM_YUBI_WO_FURU_MOVES = 0;
// WazaNo
constexpr int32_t JUMPKICK_WAZANO = 26;
constexpr int32_t THUNDER_WAZANO = 87;
constexpr int32_t HIJUMPKICK_WAZANO = 136;
constexpr int32_t STRUGGLE_WAZANO = 165;
constexpr int32_t RETURN_WAZANO = 216;
constexpr int32_t FRUSTRATION_WAZANO = 218;
constexpr int32_t MAGNITUDE_WAZANO = 222;
constexpr int32_t SILVERWIND_WAZANO = 318;
constexpr int32_t SKYUPPERCUT_WAZANO = 327;
constexpr int32_t OMINIOUSWIND_WAZANO = 466;
constexpr int32_t BELCH_WAZANO = 562;
constexpr int32_t GIGATON_HAMMER_WAZANO = 603;
constexpr int32_t GLITZY_GLOW_WAZANO = 736;
constexpr int32_t BADDY_BAD_WAZANO = 737;
constexpr int32_t FREEZY_FROST_WAZANO = 739;
constexpr int32_t SPARKLY_SWIRL_WAZANO = 740;
constexpr int32_t VEEVEE_VOLLEY_WAZANO = 741;
constexpr int32_t STUFF_CHEEKS_WAZANO = 747;

constexpr uint32_t NUM_NEW_BTL_STRID_SET = 6;
constexpr uint32_t NUM_NEW_BTL_STRID_STD = 6;
constexpr uint32_t NUM_BTL_STRID_STD = 547;

constexpr uint16_t NULL_ITEM = 0;

// SideEffectIDs
constexpr int32_t REFLECT_SIDE = 0;
constexpr int32_t LIGHT_SCREEN_SIDE = 1;

extern void * DAT_03a6bb14;
extern MethodInfo * Handler_Karagenki_WazaPowMethodInfo;

extern Il2CppMethodPointer ADD_GensiNoTikara;

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


bool HandlerAddSideEffect(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, int32_t effect, int32_t side, BTL_SICKCONT_o cont) {
    socket_log_fmt("HandlerAddSideEffect\n");

    system_load_typeinfo((void *)0xa8ef);
    auto *desc = (Section_SideEffect_Add_Description_o *) il2cpp_object_new(Section_SideEffect_Add_Description_TypeInfo);
    desc->ctor(nullptr);
    desc->fields.pokeID = pokeID;
    desc->fields.effect = effect;
    desc->fields.side = side;
    desc->fields.cont = cont;
    desc->fields.isReplaceSuccessMessageArgs0ByExpandSide = true;
    return Common::AddSideEffect(args, &desc, nullptr);
}

void HandlerRankResetAll(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID) {
    socket_log_fmt("HandlerRankResetAll\n");

    system_load_typeinfo((void *)0xa9b3);
    auto *desc = (Section_FromEvent_RankReset_Description_o *) il2cpp_object_new(Section_FromEvent_RankReset_Description_TypeInfo);
    desc->ctor(nullptr);
    auto *exPos = (ExPokePos_o *)il2cpp_object_new(ExPokePos_TypeInfo);
    exPos->ctor(ExPosType::FULL_ALL, Common::GetExistFrontPokePos(args, pokeID, nullptr), nullptr);
    desc->fields.pokeCount = Common::ExpandExistPokeID(args, &exPos, desc->fields.pokeID, nullptr);
    Common::RankReset(args, &desc, nullptr);

    Section_FromEvent_Message::Description_o * descMsg = (Section_FromEvent_Message::Description_o *) il2cpp_object_new(Section_FromEvent_Message::Description_TypeInfo);
    descMsg->ctor(nullptr);
    descMsg->fields.pokeID = pokeID;
    descMsg->fields.message->Setup(1, 116, nullptr);
    Common::Message(args, &descMsg, nullptr);
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

void handler_Magnitude_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Magnitude_WazaPow\n");
    if (Common::GetEventVar(args, POKEID_ATK, nullptr) != pokeID)
        return;

    uint32_t r = Calc::GetRand(20, nullptr);
    int32_t power;
    if (r < 1) power = 10;
    else if (r < 3) power = 30;
    else if (r < 7) power = 50;
    else if (r < 13) power = 70;
    else if (r < 17) power = 90;
    else if (r < 19) power = 110;
    else power = 150;
    socket_log_fmt("power: %08X\n", power);

    Common::RewriteEventVar(args, WAZA_POWER, power, nullptr);
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

    //gMagnitude = Pml::Local::Random::GetValue((MethodInfo *) nullptr) % 7;
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

// Glitzy Glow
void HandlerGlitzyGlowDamageprocEndHitReal(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method) {
    if (Common::GetEventVar(args, POKEID_ATK, nullptr) != pokeID)
        return;

    int32_t side = Common::PokeIDtoSide(args, &pokeID, nullptr);
    BTL_SICKCONT_o sickCont = SICKCONT::MakeTurn(pokeID, 5, nullptr);

    Handler::Waza_o::common_SideEffectCore(args, pokeID, side,
                                           LIGHT_SCREEN_SIDE, &sickCont,
                                           1, 145, side, true, nullptr);
}
// Baddy Bad
void HandlerBaddyBadDamageprocEndHitReal(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method) {
    if (Common::GetEventVar(args, POKEID_ATK, nullptr) != pokeID)
        return;

    int32_t side = Common::PokeIDtoSide(args, &pokeID, nullptr);
    BTL_SICKCONT_o sickCont = SICKCONT::MakeTurn(pokeID, 5, nullptr);

    Handler::Waza_o::common_SideEffectCore(args, pokeID, side,
                                           REFLECT_SIDE, &sickCont,
                                           1, 141, side, true, nullptr);
}
// Freezy Frost
void HandlerFreezyFrostDamageprocEndHitReal(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method) {
    if (Common::GetEventVar(args, POKEID_ATK, nullptr) != pokeID)
        return;

    HandlerRankResetAll(args, pokeID);
}
// Sparkly Swirl
void HandlerSparklySwirlDamageprocEndHitReal(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method) {
    if (Common::GetEventVar(args, POKEID_ATK, nullptr) != pokeID)
        return;

    BTL_POKEPARAM_o * bpp = Common::GetPokeParam(args, pokeID, (MethodInfo *) nullptr);
    uint32_t sick = bpp->GetPokeSick(nullptr);

    system_load_typeinfo((void *)0x893f);
    Section_CureSick_Description_o* desc = (Section_CureSick_Description_o*) il2cpp_object_new(Section_CureSick_Description_TypeInfo);
    desc->ctor(nullptr);
    desc->fields.targetPokeCount = '\x01';
    desc->fields.targetPokeID->m_Items[0] = pokeID;
    desc->fields.pokeID = pokeID;
    desc->fields.sick = sick;
    Common::CureSick(args, &desc, nullptr);

    Handler::Waza_o::common_CureFriendPokeSick(args, pokeID, true, true, nullptr);
}


int32_t KARAGENKI_ENTRIES[NUM_KARAGENKI_MOVES] = {
    RETURN_WAZANO,
    FRUSTRATION_WAZANO
};

/*int32_t YUBI_WO_FURU_ENTRIES[NUM_YUBI_WO_FURU_MOVES] = {
    MAGNITUDE_WAZANO
};*/

// 4c7a3b0

// static MethodInfo * sAddReturnMethodInfo = nullptr;
// static MethodInfo * sAddFrustrationMethodInfo = nullptr;
// static MethodInfo * sHandler_Return_WazaPowMethodInfo = nullptr;
// static MethodInfo * sHandler_Frustration_WazaPowMethodInfo = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sReturnEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sFrustrationEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sMagnitudeEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sHandlerTableGlitzyGlow = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sHandlerTableBaddyBad = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sHandlerTableFreezyFrost = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sHandlerTableSparklySwirl = nullptr;

const int16_t EVENT_ID_REQWAZA_MSG = 27;
const int16_t EVENT_ID_WAZA_POWER = 70;
const int16_t EVENT_ID_WAZA_DMG_PROC3 = 90;
const int16_t EVENT_ID_DAMAGEPROC_END_HIT_REAL = 162;
const int16_t EVENT_ID_CHECK_POKE_HIDE = 189;

// Dpr.Battle.Logic.Handler.Waza$$
System::Array<EventFactor_EventHandlerTable_o *> * ADD_Return(MethodInfo *method)
{
    socket_log_fmt("ADD_Return\n");
    if (sReturnEventHandlerTable == nullptr) {
        sReturnEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sReturnEventHandlerTable->m_Items[0] = CreateEventHandler(EVENT_ID_WAZA_POWER, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &handler_Return_WazaPow);
    }

    return sReturnEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_Frustration(MethodInfo *method)
{
    socket_log_fmt("ADD_Frustration\n");
    if (sFrustrationEventHandlerTable == nullptr) {
        sFrustrationEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sFrustrationEventHandlerTable->m_Items[0] = CreateEventHandler(EVENT_ID_WAZA_POWER, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &handler_Frustration_WazaPow);
    }

    return sFrustrationEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_Magnitude(MethodInfo *method)
{
    socket_log_fmt("ADD_Magnitude\n");
    if (sMagnitudeEventHandlerTable == nullptr) {
        sMagnitudeEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(3);
        sMagnitudeEventHandlerTable->m_Items[0] = CreateEventHandler(EVENT_ID_WAZA_POWER, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &handler_Magnitude_WazaPow);
        sMagnitudeEventHandlerTable->m_Items[1] = CreateEventHandler(EVENT_ID_WAZA_DMG_PROC3, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &Handler::Waza_o::handler_Jisin_damage);
        sMagnitudeEventHandlerTable->m_Items[2] = CreateEventHandler(EVENT_ID_CHECK_POKE_HIDE, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &Handler::Waza_o::handler_Jisin_checkHide);
    }

    return sMagnitudeEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_GlitzyGlow(MethodInfo *method) {
    socket_log_fmt("ADD_GlitzyGlow\n");
    if (sHandlerTableGlitzyGlow == nullptr) {
        sHandlerTableGlitzyGlow = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sHandlerTableGlitzyGlow->m_Items[0] = CreateEventHandler(EVENT_ID_DAMAGEPROC_END_HIT_REAL, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &HandlerGlitzyGlowDamageprocEndHitReal);
    }
    return sHandlerTableGlitzyGlow;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_BaddyBad(MethodInfo *method) {
    socket_log_fmt("ADD_BaddyBad\n");
    if (sHandlerTableBaddyBad == nullptr) {
        sHandlerTableBaddyBad = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sHandlerTableBaddyBad->m_Items[0] = CreateEventHandler(EVENT_ID_DAMAGEPROC_END_HIT_REAL, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &HandlerBaddyBadDamageprocEndHitReal);
    }
    return sHandlerTableBaddyBad;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_FreezyFrost(MethodInfo *method) {
    socket_log_fmt("ADD_FreezyFrost\n");
    if (sHandlerTableFreezyFrost == nullptr) {
        sHandlerTableFreezyFrost = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sHandlerTableFreezyFrost->m_Items[0] = CreateEventHandler(EVENT_ID_DAMAGEPROC_END_HIT_REAL, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &HandlerFreezyFrostDamageprocEndHitReal);
    }
    return sHandlerTableFreezyFrost;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_SparklySwirl(MethodInfo *method) {
    socket_log_fmt("ADD_SparklySwirl\n");
    if (sHandlerTableSparklySwirl == nullptr) {
        sHandlerTableSparklySwirl = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sHandlerTableSparklySwirl->m_Items[0] = CreateEventHandler(EVENT_ID_DAMAGEPROC_END_HIT_REAL, Handler_Karagenki_WazaPowMethodInfo, (Il2CppMethodPointer) &HandlerSparklySwirlDamageprocEndHitReal);
    }
    return sHandlerTableSparklySwirl;
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
    socket_log_fmt("Ominous Wind idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, OMINIOUSWIND_WAZANO, (Il2CppMethodPointer) &ADD_GensiNoTikara);
    socket_log_fmt("Silver Wind idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, SILVERWIND_WAZANO, (Il2CppMethodPointer) &ADD_GensiNoTikara);

    socket_log_fmt("Glitzy Glow idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, GLITZY_GLOW_WAZANO, (Il2CppMethodPointer) &ADD_GlitzyGlow);
    socket_log_fmt("Baddy Bad idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, BADDY_BAD_WAZANO, (Il2CppMethodPointer) &ADD_BaddyBad);
    socket_log_fmt("Freezy Frost idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, FREEZY_FROST_WAZANO, (Il2CppMethodPointer) &ADD_FreezyFrost);
    socket_log_fmt("Sparkly Swirl idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, SPARKLY_SWIRL_WAZANO, (Il2CppMethodPointer) &ADD_SparklySwirl);
    socket_log_fmt("Veevee Volley idx: %08X\n", idx);
    AddHandler(getFuncTable, &idx, VEEVEE_VOLLEY_WAZANO, (Il2CppMethodPointer) &ADD_Return);

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


// Gigaton Hammer stuff
bool SetupBTLV_STRPARAM(BTLV_STRPARAM_o *strParam, uint16_t strID, uint8_t strType, const int32_t args[], uint64_t argCnt) {
    if (strParam == nullptr)
        return true;

    strParam->fields.strType = strType;
    strParam->fields.strID = strID;
    strParam->fields.wait = 0;
    System_Int32_array *oldArgs = strParam->fields.args;

    for (uint64_t i = 0; i < oldArgs->max_length; ++i)
        oldArgs->m_Items[i] = 0;

    if (oldArgs->max_length < argCnt)
        argCnt = oldArgs->max_length;

    strParam->fields.argCnt = argCnt;

    for (uint64_t i = 0; i < argCnt; ++i)
        oldArgs->m_Items[i] = args[i];

    return true;
}

bool Dpr_Battle_Logic_BTL_CLIENT_is_unselectable_waza(BTL_CLIENT_o *bc, BTL_POKEPARAM_o *bpp, int32_t waza, BTLV_STRPARAM_o *strParam, MethodInfo *method) {
    system_load_typeinfo((void *)0x1ebc);

    if (waza == STRUGGLE_WAZANO)
        return false;

    if (!WAZADATA::IsValid(waza, nullptr)) {
        int32_t args[] = {};
        return SetupBTLV_STRPARAM(strParam, 0x1fc, 1, args, sizeof(args) / sizeof(*args));
    }

    FieldStatus_o **fldSim = &bc->fields.m_fldSim;
    uint16_t effItem = bpp->GetItemEffective(fldSim, nullptr);

    if (effItem != NULL_ITEM) {
        if (bpp->CheckSick(0x1c, nullptr) && !bpp->IsGMode(nullptr) && !GWaza::IsGWaza(waza, nullptr) && Tables::IsKodawariItem(effItem, nullptr)) {
            BTL_SICKCONT_o cont = bpp->GetSickCont(0x1c, nullptr);
            uint16_t lockMove = SICKCONT::GetParam(&cont, nullptr);

            if (lockMove != waza && bpp->WAZA_IsUsable(lockMove, nullptr)) {
                int32_t args[] = { effItem, lockMove };
                return SetupBTLV_STRPARAM(strParam, 0x71, 1, args, sizeof(args) / sizeof(*args));
            }
        }

        if (effItem == 0x280 && !WAZADATA::IsDamage(waza, nullptr)) {
            int32_t args[] = { 0x280 };
            return SetupBTLV_STRPARAM(strParam, 0x72, 1, args, sizeof(args) / sizeof(*args));
        }
    }

    if (bpp->GetValue(20, nullptr) == 0xff && bpp->CheckSick(0x1c, nullptr) && !bpp->IsGMode(nullptr) && !GWaza::IsGWaza(waza, nullptr)) {
        BTL_SICKCONT_o cont = bpp->GetSickCont(0x1c, nullptr);
        uint16_t lockMove = SICKCONT::GetParam(&cont, nullptr);

        if (lockMove != waza && bpp->WAZA_IsUsable(lockMove, nullptr)) {
            int32_t args[] = { bpp->GetID(nullptr), lockMove };
            return SetupBTLV_STRPARAM(strParam, 0x73, 1, args, sizeof(args) / sizeof(*args));
        }
    }

    if (bpp->CheckSick(0x17, nullptr)) {
        BTL_SICKCONT_o cont = bpp->GetSickCont(0x17, nullptr);
        uint16_t lockMove = SICKCONT::GetParam(&cont, nullptr);

        if (lockMove != waza && !GWaza::IsGWaza(waza, nullptr)) {
            int32_t args[] = { bpp->GetID(nullptr), lockMove };
            return SetupBTLV_STRPARAM(strParam, 0x73, 1, args, sizeof(args) / sizeof(*args));
        }
    }

    if (bpp->CheckSick(0xb, nullptr) && !WAZADATA::IsDamage(waza, nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr), waza };
        return SetupBTLV_STRPARAM(strParam, 0x302, 2, args, sizeof(args) / sizeof(*args));
    }

    if (bpp->CheckSick(0xc, nullptr) && bpp->fields.m_prevSelectWazaID == waza && !bpp->IsGMode(nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr), waza };
        return SetupBTLV_STRPARAM(strParam, 0x30e, 2, args, sizeof(args) / sizeof(*args));
    }

    if (bpp->CheckSick(0xd, nullptr) && bpp->GetSickParam(0xd, nullptr) == waza && !GWaza::IsGWaza(waza, nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr), waza };
        return SetupBTLV_STRPARAM(strParam, 0x322, 2, args, sizeof(args) / sizeof(*args));
    }

    if (bpp->CheckSick(0xf, nullptr) && WAZADATA::GetFlag(waza, 0xc, nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr), waza };
        return SetupBTLV_STRPARAM(strParam, 0x4b4, 2, args, sizeof(args) / sizeof(*args));
    }

    if ((*fldSim)->CheckEffect(3, nullptr) && !bpp->IsGMode(nullptr) && bc->fields.m_fldSim->CheckFuin(&bc->fields.m_mainModule, bc->fields.m_pBattleEnv->fields.m_pokecon, bpp, waza, nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr), waza };
        return SetupBTLV_STRPARAM(strParam, 0x31a, 2, args, sizeof(args) / sizeof(*args));
    }

    if ((*fldSim)->CheckEffect(2, nullptr) && !bpp->IsGMode(nullptr) && WAZADATA::GetFlag(waza, 9, nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr), waza };
        return SetupBTLV_STRPARAM(strParam, 0x5c0, 2, args, sizeof(args) / sizeof(*args));
    }

    if (waza == STUFF_CHEEKS_WAZANO && !Pml::Item::ItemData::IsNuts(bpp->GetItem(nullptr), nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr) };
        return SetupBTLV_STRPARAM(strParam, 0x199, 1, args, sizeof(args) / sizeof(*args));
    }

    if (waza == BELCH_WAZANO && !bpp->PERMFLAG_Get(0, nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr) };
        return SetupBTLV_STRPARAM(strParam, 0x648, 2, args, sizeof(args) / sizeof(*args));
    }

    if (bc->fields.m_mainModule->IsSkyBattle(nullptr) && WAZADATA::GetFlag(waza, 0xe, nullptr)) {
        int32_t args[] = {};
        return SetupBTLV_STRPARAM(strParam, 0x110, 1, args, sizeof(args) / sizeof(*args));
    }

    if (bpp->CheckSick(0x18, nullptr) && !bpp->IsGMode(nullptr) && WAZADATA::GetFlag(waza, 8, nullptr)) {
        int32_t args[] = { bpp->GetID(nullptr) };
        return SetupBTLV_STRPARAM(strParam, 0x744, 2, args, sizeof(args) / sizeof(*args));
    }

    if (waza == GIGATON_HAMMER_WAZANO && bpp->fields.m_prevSelectWazaID == waza) {
        int32_t args[] = { bpp->GetID(nullptr), waza };
        return SetupBTLV_STRPARAM(strParam, 1926, 2, args, sizeof(args) / sizeof(*args));
        return true;
    }

    return false;
}