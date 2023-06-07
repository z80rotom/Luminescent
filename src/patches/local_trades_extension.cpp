#include "il2cpp.hpp"
#include "il2cpp-api.h"

#include "Dpr/Message/MessageManager.hpp"
#include "GameData/DataManager.hpp"
#include "PlayerWork.hpp"
#include "Pml/PokePara/InitialSpec.hpp"
#include "Pml/PokePara/OwnerInfo.hpp"
#include "Pml/PokePara/PokemonParam.h"
#include "poketool/poke_memo/poketool_poke_memo.hpp"
#include "SmartPoint/AssetAssistant/SingletonMonoBehavior.hpp"
#include "XLSXContent/LocalKoukanData.hpp"

#include "util.hpp"
#include "logger.hpp"

const int32_t JAPANESE_LANGID = 1;
const int32_t ENGLISH_LANGID = 2;

const uint32_t POKEBALL_BALLID = 4;

const int32_t CHATOT_MONSNO = 441;

const int32_t HP_POWERID = 0;
const int32_t ATK_POWERID = 1;
const int32_t DEF_POWERID = 2;
const int32_t SPATK_POWERID = 3;
const int32_t SPDEF_POWERID = 4;
const int32_t SPEED_POWERID = 5;

int32_t LocalKoukan_GetIndex(int32_t npcindex, int32_t lang, MethodInfo *method)
{
    return npcindex;
}

XLSXContent::LocalKoukanData_Sheetdata_o * LocalKoukan_GetTargetData(int32_t npcindex, int32_t lang, MethodInfo *method)
{
    system_load_typeinfo((void *)0x5e91);
    XLSXContent::LocalKoukanData_Sheetdata_o *data = GameData::DataManager_TypeInfo->static_fields->LocalKoukanData->get_Item(npcindex, nullptr);
    return data;
}

int32_t LocalKoukan_Language(int32_t langId, MethodInfo *method)
{
    int32_t playerLangId = PlayerWork::get_msgLangID(nullptr);

    if (langId == 0)
    {
        // No set language, so set to same language as player.
        return playerLangId;
    }
    else if (langId != playerLangId)
    {
        // Set language that doesn't match player, so set to that language.
        return langId;
    }
    else if (langId != ENGLISH_LANGID)
    {
        // Set language that matches player, so set to english.
        return ENGLISH_LANGID;
    }
    else
    {
        // Set language that matches player, but it's english, so set to japanese.
        return JAPANESE_LANGID;
    }
}

Pml::PokePara::PokemonParam_o * LocalKoukan_CreateTradePokeParam(XLSXContent::LocalKoukanData_Sheetdata_o *data, MethodInfo *method)
{
    system_load_typeinfo((void *)0x5e90);

    Pml::PokePara::InitialSpec_o * initialSpec = (Pml::PokePara::InitialSpec_o *) il2cpp_object_new(Pml::PokePara::InitialSpec_TypeInfo);
    initialSpec->ctor(nullptr);

    int32_t formNo = (data->fields.monsno & 0xFFFF0000) >> 16; // Top 16 bits
    int32_t monsNo = data->fields.monsno & 0x0000FFFF; // Bottom 16 bits

    int32_t speedIV = (data->fields.tokusei & 0xF8000000) >> 27; // Bits 27-31
    int32_t spDefIV = (data->fields.tokusei & 0x07C00000) >> 22; // Bits 22-26
    int32_t spAtkIV = (data->fields.tokusei & 0x003E0000) >> 17; // Bits 17-21
    int32_t defIV =   (data->fields.tokusei & 0x0001F000) >> 12; // Bits 12-16
    int32_t atkIV =   (data->fields.tokusei & 0x00000F80) >> 7;  // Bits 7-11
    int32_t hpIV =    (data->fields.tokusei & 0x0000007C) >> 2;  // Bits 2-6
    int32_t tokusei =  data->fields.tokusei & 0x00000003;        // Bits 0-1

    initialSpec->fields.monsno = monsNo;
    initialSpec->fields.formno = formNo;
    initialSpec->fields.level = (uint16_t)data->fields.level;
    initialSpec->fields.rareRnd = 0x1ffffffff;
    initialSpec->fields.id = (long)data->fields.trainerid;
    initialSpec->fields.sex = (ushort)data->fields.sex;
    initialSpec->fields.seikaku = (uint16_t)data->fields.seikaku;
    initialSpec->fields.tokuseiIndex = (uint8_t)tokusei;
    initialSpec->fields.personalRnd = (long)data->fields.rand;
    initialSpec->fields.randomSeed = (long)data->fields.rand;
    initialSpec->fields.isRandomSeedEnable = true;

    Pml::PokePara::PokemonParam_o * pokeParam = (Pml::PokePara::PokemonParam_o *) il2cpp_object_new(Pml::PokePara::PokemonParam_TypeInfo);
    pokeParam->ctor(initialSpec, nullptr);
    Pml::PokePara::CoreParam * coreParam = (Pml::PokePara::CoreParam *)pokeParam;

    Dpr::Message::MessageManager_o * messageManager = (Dpr::Message::MessageManager_o *)
                    SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance
                        (*SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_MessageManager_get_Instance);
    System::String* nickname = messageManager->GetNameMessage(System::String::CreateString("dp_scenario3"), data->fields.nickname_label, nullptr);
    coreParam->SetNickName(nickname, nullptr);

    coreParam->SetItem(data->fields.itemno, nullptr);

    System::String* trainerName = messageManager->GetNameMessage(System::String::CreateString("dp_scenario3"), data->fields.name_label, nullptr);
    coreParam->SetParentName(trainerName, nullptr);

    uint32_t language = LocalKoukan_Language(data->fields.language, nullptr);
    coreParam->SetLangId(language, nullptr);

    coreParam->SetGetBall(POKEBALL_BALLID, nullptr);

    coreParam->ChangeTalentPower(HP_POWERID, hpIV, nullptr);
    coreParam->ChangeTalentPower(ATK_POWERID, atkIV, nullptr);
    coreParam->ChangeTalentPower(DEF_POWERID, defIV, nullptr);
    coreParam->ChangeTalentPower(SPATK_POWERID, spAtkIV, nullptr);
    coreParam->ChangeTalentPower(SPDEF_POWERID, spDefIV, nullptr);
    coreParam->ChangeTalentPower(SPEED_POWERID, speedIV, nullptr);

    if (monsNo == CHATOT_MONSNO)
    {
        coreParam->SetCondition(0, 20, nullptr);
        coreParam->SetCondition(1, 20, nullptr);
        coreParam->SetCondition(2, 20, nullptr);
        coreParam->SetCondition(3, 20, nullptr);
        coreParam->SetCondition(4, 20, nullptr);
    }

    for (int32_t i=0; i<data->fields.waza->max_length && i<4; i++)
    {
        coreParam->SetWaza(i, data->fields.waza->m_Items[i], nullptr);
    }

    Pml::PokePara::OwnerInfo_o * ownerInfo = (Pml::PokePara::OwnerInfo_o *) il2cpp_object_new(Pml::PokePara::OwnerInfo_TypeInfo);
    ownerInfo->ctor(PlayerWork::get_playerStatus(nullptr), nullptr);

    coreParam->UpdateOwnerInfo(ownerInfo, nullptr);
    poketool::poke_memo::poketool_poke_memo_o::ClearPlaceTime(coreParam, 0, nullptr);
    poketool::poke_memo::poketool_poke_memo_o::SetPlaceTime(coreParam, 0x7531, 1, nullptr);
    poketool::poke_memo::poketool_poke_memo_o::SetGetLevel(coreParam, nullptr);
    poketool::poke_memo::poketool_poke_memo_o::SetVersion(coreParam, nullptr);

    bool isValid = coreParam->StartFastMode(nullptr);
    coreParam->EndFastMode(isValid, nullptr);

    return pokeParam;
}
