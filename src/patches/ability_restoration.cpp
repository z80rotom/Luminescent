#include "Dpr/Battle/Logic/Common.hpp"
#include "Dpr/Battle/Logic/Calc.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"
#include "Dpr/Battle/Logic/EventID.hpp"
#include "Dpr/Battle/Logic/EventVar.hpp"
#include "Dpr/Battle/Logic/BtlSideEffect.hpp"
#include "Dpr/Battle/Logic/SICKCONT.hpp"
#include "Dpr/Battle/Logic/BTL_SICKCONT.hpp"
#include "Dpr/Battle/Logic/Handler.hpp"
#include "Dpr/Battle/Logic/Tables.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_Message.hpp"
#include "Dpr/Battle/Logic/WAZADATA.hpp"
#include "Dpr/Battle/Logic/EffectType.hpp"

#include "il2cpp-api.h"
#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"
#include "util.hpp"
#include "logger.hpp"

using namespace Dpr::Battle::Logic;
using namespace Dpr::Battle::Logic::Handler;

// #define TYPE_NORMAL   0x00
// #define TYPE_FIGHTING 0x01
// #define TYPE_FLYING   0x02
// #define TYPE_POISON   0x03
// #define TYPE_GROUND   0x04
// #define TYPE_ROCK     0x05
// #define TYPE_BUG      0x06
// #define TYPE_GHOST    0x07
// #define TYPE_STEEL    0x08
// #define TYPE_MYSTERY  0x09
// #define TYPE_FIRE     0x0a
// #define TYPE_WATER    0x0b
// #define TYPE_GRASS    0x0c
// #define TYPE_ELECTRIC 0x0d
// #define TYPE_PSYCHIC  0x0e
// #define TYPE_ICE      0x0f
// #define TYPE_DRAGON   0x10
// #define TYPE_DARK     0x11

// 4c79da0
extern MethodInfo * Method_handler_TetunoKobusi;

const uint32_t NUM_NEW_ABILITIES = 1;
const uint32_t BLADEMASTER_ID = 268;
// Rad Red
static System::Array<EventFactor_EventHandlerTable_o *> * sBlademasterEventHandlerTable = nullptr;
// Luminescent
static System::Array<EventFactor_EventHandlerTable_o *> * sVikavoltPriorityEventHandlerTable = nullptr;
// Scarlet/Violet
static System::Array<EventFactor_EventHandlerTable_o *> * sToxicDebrisEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sPurifyingSaltEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sZeroToHeroEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sOpportunistEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sMyceliumMightEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sTrickySurgeEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sWonderSurgeEventHandlerTable = nullptr;
static System::Array<EventFactor_EventHandlerTable_o *> * sMagicSurgeEventHandlerTable = nullptr;


const uint32_t NUM_BLADEMASTER_MOVES = 12;
const int32_t BLADEMASTER_MOVES[NUM_BLADEMASTER_MOVES] = {
    533, // Sacred Sword
    427, // Psycho Cut
    15, // Cut
    163, // Slash
    348, // Leaf Blade
    400, // Night Slash
    206, // False Swipe
    404, // X-Scissor
    669, // Solar Blade
    210, // Fury Cutter
    534, // Razor Shell
    421, // Shadow claw
};

bool isBlademasterMove(int32_t wazaID)
{
    for (uint32_t i = 0; i < NUM_BLADEMASTER_MOVES; i++)
    {
        if (BLADEMASTER_MOVES[i] == wazaID)
        {
            return true;
        }
    }

    return false;
}

void handler_Blademaster_WazaPow(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Blademaster_WazaPow\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    int32_t wazaID = Common::GetEventVar(args, EventVar::WAZAID, (MethodInfo *) nullptr);

    if (isBlademasterMove(wazaID))
    {
        socket_log_fmt("Blademaster boost: WazaPow!\n");
        // 1.2 * pow(2, 12) = 0x1333
        // So we're boosting by 1.2 here
        Common::MulEventVar(args, EventVar::POWER, 0x1333, (MethodInfo *) nullptr);
        
    }
}


void handler_Blademaster_CritCheck(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_Blademaster_CritCheck\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    int32_t wazaID = Common::GetEventVar(args, EventVar::WAZAID, (MethodInfo *) nullptr);

    if (isBlademasterMove(wazaID))
    {
        socket_log_fmt("Blademaster boost: CritCheck!\n");
        int32_t critRank = Common::GetEventVar(args, EventVar::CRITICAL_RANK, (MethodInfo *) nullptr);
        Common::RewriteEventVar(args, EventVar::CRITICAL_RANK, (critRank + 1) & 0xff, (MethodInfo *) nullptr);
    }
}

void handler_ToxicDebris(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_ToxicDebris\n");
    int32_t atkPokeID = Common::GetEventVar(args, EventVar::POKEID_ATK, (MethodInfo *) nullptr);
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_DEF, (MethodInfo *) nullptr);

    socket_log_fmt("pokeID: %08X\n", pokeID);
    socket_log_fmt("atkPokeID: %08X\n", atkPokeID);
    socket_log_fmt("evPokeID: %08X\n", evPokeID);
    if (evPokeID != pokeID)
    {
        return;
    }
    socket_log_fmt("Triggered ToxicDebris\n");
    socket_log_fmt("SICKCONT::MakePermanent: %08X\n", &SICKCONT::MakePermanent);
    socket_log_fmt("Common::PokeIDtoOpponentSide: %08X\n", &Common::PokeIDtoOpponentSide);
    socket_log_fmt("Handler::Waza_o::common_SideEffectCore: %08X\n", &Handler::Waza_o::common_SideEffectCore);

    BTL_SICKCONT_o sickCont = SICKCONT::MakePermanent(evPokeID, (MethodInfo *) nullptr);
    int32_t side = Common::PokeIDtoOpponentSide(args, (uint8_t *) &evPokeID, (MethodInfo *) nullptr);

    int32_t effect = BTL_SIDEEFF_TOXIC_SPIKES;
    int32_t strType = 1;
    uint32_t strID = 0xad;
    // common_SideEffectCore doesn't like when you pass in something other than the attack poke ID
    bool retVal = Handler::Waza_o::common_SideEffectCore(args, atkPokeID, side, effect, &sickCont, strType, strID, side, true, nullptr);
    // 
    // Would set success flag, but not sure how useful it would be
    if (retVal)
    {
        Common::RewriteEventVar(args, EventVar::SUCCESS_FLAG, 1, (MethodInfo *) nullptr);
        // SUCCESS_FLAG
    }
}

void handler_PurifyingSalt_AttackerPower(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    const uint32_t GHOST_TYPE = 7;
    socket_log_fmt("handler_PurifyingSalt_AttackerPower\n");
    int32_t atkPokeID = Common::GetEventVar(args, EventVar::POKEID_ATK, (MethodInfo *) nullptr);
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_DEF, (MethodInfo *) nullptr);
    

    if (evPokeID != pokeID)
    {
        return;
    }

    uint32_t wazaType = Common::GetEventVar(args, EventVar::WAZA_TYPE, (MethodInfo *) nullptr);
    if (wazaType == GHOST_TYPE)
    {
        /// Half the damage coming in
        Common::MulEventVar(args, EventVar::RATIO, 0x800, (MethodInfo *) nullptr);
    }
}

void handler_PurifyingSalt_AddSick_Checkfail(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_PurifyingSalt_AddSick_Checkfail\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_DEF, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    int32_t sickID = Common::GetEventVar(args, EventVar::SICKID, (MethodInfo *) nullptr);
    if (Calc::IsBasicSickID(sickID, (MethodInfo *) nullptr))
    {
        // Might need to check if it is a basic
        bool retVal = Common::RewriteEventVar(args, EventVar::FAIL_FLAG, 1, (MethodInfo *) nullptr);
        Common::SetWorkValue(args, 0, (int32_t) retVal, (MethodInfo *) nullptr);
    }
}

void handler_PurifyingSalt_InemuriCheck(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_PurifyingSalt_InemuriCheck\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    Common::RewriteEventVar(args, EventVar::FAIL_FLAG, 1, (MethodInfo *) nullptr);
}

void handler_VikavoltPriority_GetPriority(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    const uint32_t BUG_TYPE = 0x6;
    const uint32_t ELECTRIC_TYPE = 0xD;
    const uint8_t ELECTRIC_TERRAIN = 0x3;

    socket_log_fmt("handler_VikavoltPriority_GetPriority\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    uint8_t ground = Common::GetGround(args, (MethodInfo *) nullptr);
    // Check if electric terrain is active
    if (ground != ELECTRIC_TERRAIN)
    {
        return;
    }

    uint32_t wazaType = Common::GetEventVar(args, EventVar::WAZA_TYPE, (MethodInfo *) nullptr);
    if (wazaType == BUG_TYPE || wazaType == ELECTRIC_TYPE)
    {
        uint32_t priority = Common::GetEventVar(args, EventVar::WAZA_PRI, (MethodInfo *) nullptr);
        Common::RewriteEventVar(args, EventVar::WAZA_PRI, priority + 1, (MethodInfo *) nullptr);
    }
}


void handler_ZeroToHero_MemberOutFixed(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_ZeroToHero_MemberOutFixed\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    Section_FromEvent_FormChange::Description_o * desc = (Section_FromEvent_FormChange::Description_o *) il2cpp_object_new(Section_FromEvent_FormChange::Description_TypeInfo);
    desc->ctor((MethodInfo *) nullptr);
    desc->fields.pokeID = pokeID;
    desc->fields.formNo = 1; // Hero form
    desc->fields.isDisplayTokuseiWindow = 0; // Don't want to show when we're swapping out
    desc->fields.isDontResetFormByOut = 1; // Want to persist between swaps
    desc->fields.isDisplayChangeEffect = 0; // Don't want to show when we're swapping out
    desc->fields.isEnableInCaseOfDead = 0; // Not sure but setting to false for now

    // Copy common_TenkiFormChange just in case
    // will try to supress actually displaying anything later
    desc->fields.successMessage->Setup(2, 0x130, (MethodInfo *) nullptr);
    desc->fields.successMessage->AddArg(pokeID, (MethodInfo *) nullptr);

    Common::FormChange(args, &desc, (MethodInfo *) nullptr);
}

void handler_MyceliumMight_GetPriority(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_MyceliumMight_GetPriority\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    int32_t wazaID = Common::GetEventVar(args, EventVar::WAZAID, (MethodInfo *) nullptr);
    int32_t damageType = WAZADATA::GetDamageType(wazaID, nullptr);

    if (damageType == 0) // Status Move
    {
        return;
    }

    Common::RewriteEventVar(args, EventVar::WAZA_PRI, -6, (MethodInfo *) nullptr);
}

void handler_MyceliumMight_Start(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_MyceliumMight_Start\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    int32_t wazaID = Common::GetEventVar(args, EventVar::WAZAID, (MethodInfo *) nullptr);
    int32_t damageType = WAZADATA::GetDamageType(wazaID, nullptr);

    if (damageType != 0) // Status Move
    {
        return;
    }

    // Not sure what this does, but it is from Mold Breaker
    int32_t work = Common::GetWorkValue(args, 0, (MethodInfo *) nullptr);
    if (work != 0)
    {
        return;
    }

    EventFactor_SkipCheckHandler_o * skipCheckHandler = (EventFactor_SkipCheckHandler_o *) il2cpp_object_new(EventFactor_SkipCheckHandler_TypeInfo);
    skipCheckHandler->ctor(0, Method_Common_Katayaburi_SkipCheck);

    Common::AttachSkipCheckHandler(args, &skipCheckHandler, (MethodInfo *) nullptr);
    Common::SetWorkValue(args, 0, 1, (MethodInfo *) nullptr);
}


void handler_MyceliumMight_End(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    socket_log_fmt("handler_MyceliumMight_End\n");
    int32_t evPokeID = Common::GetEventVar(args, EventVar::POKEID_ATK, (MethodInfo *) nullptr);

    if (evPokeID != pokeID)
    {
        return;
    }

    int32_t wazaID = Common::GetEventVar(args, EventVar::WAZAID, (MethodInfo *) nullptr);
    int32_t damageType = WAZADATA::GetDamageType(wazaID, nullptr);

    if (damageType != 0) // Status Move
    {
        return;
    }

    // Not sure what this does, but it is from Mold Breaker
    int32_t work = Common::GetWorkValue(args, 0, (MethodInfo *) nullptr);
    if (work == 0)
    {
        return;
    }

    Common::DetachSkipCheckHandler(args, (MethodInfo *) nullptr);
    Common::SetWorkValue(args, 0, 0, (MethodInfo *) nullptr);
}

void handle_EffectSurge(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, int32_t effType, MethodInfo *method)
{
    system_load_typeinfo((void *)0xaa75);
    uint8_t arg = Common::GetEventVar(args, EventVar::POKEID, nullptr);

    if (arg != pokeID)
    {
        return;
    }

    bool result = Common::CheckFieldEffect(args, &effType, nullptr);

    if (result)
    {
        Section_FromEvent_FieldEffect_Remove_Description_o * desc = (Section_FromEvent_FieldEffect_Remove_Description_o *) il2cpp_object_new(Section_FromEvent_FieldEffect_Remove_Description_TypeInfo);
        desc->ctor(nullptr);
        desc->fields.effect = effType;
        result = Common::RemoveFieldEffect(args, &desc, nullptr);
    } else {
        Section_FieldEffect_Add_Description_o * desc = (Section_FieldEffect_Add_Description_o *) il2cpp_object_new(Section_FieldEffect_Add_Description_TypeInfo);
        desc->ctor(nullptr);
        desc->fields.pokeID = pokeID;
        desc->fields.effect = effType;
        desc->fields.cont = SICKCONT::MakeTurn(pokeID, 5, nullptr);
        desc->fields.successMessage->Setup(2, 0x488, nullptr);
        desc->fields.successMessage->AddArg(arg, nullptr);
        result = Common::AddFieldEffect(args, &desc, nullptr);
    }

    if (result)
    {
        Common::RewriteEventVar(args, EventVar::SUCCESS_FLAG, 1, nullptr);
    }
}

void handler_TrickySurge(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    handle_EffectSurge(args, pokeID, EffectType::EFF_TRICKROOM, method);
}

void handler_MagicSurge(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    handle_EffectSurge(args, pokeID, EffectType::EFF_MAGICROOM, method);
}

void handler_WonderSurge(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method)
{
    handle_EffectSurge(args, pokeID, EffectType::EFF_WONDERROOM, method);
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_Blademaster(MethodInfo *method)
{
    socket_log_fmt("ADD_Blademaster\n");
    if (sBlademasterEventHandlerTable == nullptr) {
        socket_log_fmt("ADD_Blademaster init\n");
        sBlademasterEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(2);
        sBlademasterEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::WAZA_POWER, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_Blademaster_WazaPow);
        sBlademasterEventHandlerTable->m_Items[1] = CreateEventHandler(EventID::CRITICAL_CHECK, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_Blademaster_CritCheck);
    }

    return sBlademasterEventHandlerTable;
}


System::Array<EventFactor_EventHandlerTable_o *> * ADD_ToxicDebris(MethodInfo *method)
{
    socket_log_fmt("ADD_ToxicDebris\n");
    if (sToxicDebrisEventHandlerTable == nullptr) {
        socket_log_fmt("ADD_ToxicDebris init\n");
        sToxicDebrisEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sToxicDebrisEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::WAZA_DMG_REACTION, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_ToxicDebris);
    }

    return sToxicDebrisEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_PurifyingSalt(MethodInfo *method)
{
    socket_log_fmt("ADD_PurifyingSalt\n");
    if (sPurifyingSaltEventHandlerTable == nullptr) {
        socket_log_fmt("ADD_PurifyingSalt init\n");
        sPurifyingSaltEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(3);
        sPurifyingSaltEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::WAZA_DMG_REACTION, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_PurifyingSalt_AttackerPower);
        sPurifyingSaltEventHandlerTable->m_Items[1] = CreateEventHandler(EventID::ADDSICK_CHECKFAIL, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_PurifyingSalt_AddSick_Checkfail);
        sPurifyingSaltEventHandlerTable->m_Items[2] = CreateEventHandler(EventID::CHECK_INEMURI, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_PurifyingSalt_InemuriCheck);
    }

    return sPurifyingSaltEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_VikavoltPriority(MethodInfo *method)
{
    socket_log_fmt("ADD_VikavoltPriority\n");
    if (sVikavoltPriorityEventHandlerTable == nullptr) {
        socket_log_fmt("ADD_VikavoltPriority init\n");
        sVikavoltPriorityEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sVikavoltPriorityEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::GET_WAZA_PRI, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_VikavoltPriority_GetPriority);
    }

    return sVikavoltPriorityEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_ZeroToHero(MethodInfo *method)
{
    socket_log_fmt("ADD_ZeroToHero\n");
    if (sZeroToHeroEventHandlerTable == nullptr) {
        socket_log_fmt("ADD_ZeroToHero init\n");
        sZeroToHeroEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
        sZeroToHeroEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::MEMBER_OUT_FIXED, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_ZeroToHero_MemberOutFixed);
    }

    return sZeroToHeroEventHandlerTable;
}

// System::Array<EventFactor_EventHandlerTable_o *> * ADD_Opportunist(MethodInfo *method)
// {
//     socket_log_fmt("ADD_Opportunist\n");
//     if (sOpportunistEventHandlerTable == nullptr) {
//         socket_log_fmt("ADD_Opportunist init\n");
//         sOpportunistEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(1);
//         sOpportunistEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::RANKEFF_FIXED, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handlerOpportunist_Rankeff_Fixed);
//     }

//     return sOpportunistEventHandlerTable;
// }


System::Array<EventFactor_EventHandlerTable_o *> * ADD_MyceliumMight(MethodInfo *method)
{
    socket_log_fmt("ADD_MyceliumMight\n");
    if (sMyceliumMightEventHandlerTable == nullptr) {
        socket_log_fmt("ADD_MyceliumMight init\n");
        sMyceliumMightEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(4);
        sMyceliumMightEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::GET_WAZA_PRI, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_MyceliumMight_GetPriority);
        sMyceliumMightEventHandlerTable->m_Items[1] = CreateEventHandler(EventID::WAZASEQ_START, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_MyceliumMight_Start);
        sMyceliumMightEventHandlerTable->m_Items[2] = CreateEventHandler(EventID::WAZASEQ_END, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_MyceliumMight_End);
        sMyceliumMightEventHandlerTable->m_Items[3] = CreateEventHandler(EventID::TOKUSEI_DISABLE, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_MyceliumMight_End);
    }

    return sMyceliumMightEventHandlerTable;
}

System::Array<EventFactor_EventHandlerTable_o *> * ADD_TrickySurge(MethodInfo * method)
{
    if (sTrickySurgeEventHandlerTable == nullptr) {
        sTrickySurgeEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(2);
        sTrickySurgeEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::MEMBER_IN, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_TrickySurge);
        sTrickySurgeEventHandlerTable->m_Items[1] = CreateEventHandler(EventID::CHANGE_TOKUSEI_AFTER, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_TrickySurge);
    }

    return sTrickySurgeEventHandlerTable;
}


System::Array<EventFactor_EventHandlerTable_o *> * ADD_WonderSurge(MethodInfo * method)
{
    if (sWonderSurgeEventHandlerTable == nullptr) {
        sWonderSurgeEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(2);
        sWonderSurgeEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::MEMBER_IN, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_WonderSurge);
        sWonderSurgeEventHandlerTable->m_Items[1] = CreateEventHandler(EventID::CHANGE_TOKUSEI_AFTER, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_WonderSurge);
    }

    return sWonderSurgeEventHandlerTable;
}


System::Array<EventFactor_EventHandlerTable_o *> * ADD_MagicSurge(MethodInfo * method)
{
    if (sMagicSurgeEventHandlerTable == nullptr) {
        sMagicSurgeEventHandlerTable = (System::Array<EventFactor_EventHandlerTable_o *> *) CreateEventHandlerTable(2);
        sMagicSurgeEventHandlerTable->m_Items[0] = CreateEventHandler(EventID::MEMBER_IN, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_MagicSurge);
        sMagicSurgeEventHandlerTable->m_Items[1] = CreateEventHandler(EventID::CHANGE_TOKUSEI_AFTER, Method_handler_TetunoKobusi, (Il2CppMethodPointer) &handler_MagicSurge);
    }

    return sMagicSurgeEventHandlerTable;
}

void AddHandler(System::Array<Tokusei_GET_FUNC_TABLE_ELEM_o> * getFuncTable, uint32_t * idx, int32_t tokusei, Il2CppMethodPointer methodPointer)
{
    socket_log_fmt("Method_ADD_Karagenki: %08X\n", Method_ADD_Karagenki);
    socket_log_fmt("Method_ADD_TetunoKobusi: %08X\n", Method_ADD_TetunoKobusi);
    MethodInfo * method = copyMethodInfo(Method_ADD_TetunoKobusi, methodPointer);
    Tokusei_GET_FUNC_TABLE_ELEM_o * elem = &getFuncTable->m_Items[*idx];
    socket_log_fmt("Got GET_FUNC_TABLE_ELEM at %i\n", *idx);
    Tokusei_HandlerGetFunc_o * func = (Tokusei_HandlerGetFunc_o *) il2cpp_object_new(Tokusei_HandlerGetFunc_TypeInfo);
    socket_log_fmt("entry.method: %08X\n", methodPointer);
    func->ctor((intptr_t) methodPointer, method);
    elem->fields.tokusei = tokusei;
    elem->fields.func = func;
    *idx += 1;
}

void * Tokusei_system_array_new(void * typeInfo, uint32_t len)
{
    socket_log_fmt("Tokusei_system_array_new\n");
    System::Array<Tokusei_GET_FUNC_TABLE_ELEM_o> * getFuncTable = (System::Array<Tokusei_GET_FUNC_TABLE_ELEM_o> *) system_array_new(typeInfo, len + NUM_NEW_ABILITIES);
    uint32_t idx = len;

    socket_log_fmt("Return idx: %08X\n", idx);
    // AddHandler(getFuncTable, &idx, BLADEMASTER_ID, (Il2CppMethodPointer) &ADD_Blademaster);
    // AddHandler(getFuncTable, &idx, BLADEMASTER_ID, (Il2CppMethodPointer) &ADD_ToxicDebris);
    // AddHandler(getFuncTable, &idx, BLADEMASTER_ID, (Il2CppMethodPointer) &ADD_PurifyingSalt);
    AddHandler(getFuncTable, &idx, BLADEMASTER_ID, (Il2CppMethodPointer) &ADD_ZeroToHero);

    return getFuncTable;
}
 