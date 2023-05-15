#include "il2cpp.hpp"

#include "GameData/DataManager.hpp"
#include "PlayerWork.hpp"
#include "XLSXContent/LocalKoukanData.hpp"

#include "util.hpp"
#include "logger.hpp"

const int32_t JAPANESE_LANGID = 1;
const int32_t ENGLISH_LANGID = 2;

int32_t LocalKoukan_GetIndex(int32_t npcindex, int32_t lang, MethodInfo *method)
{
    return npcindex;
}

XLSXContent::LocalKoukanData_Sheetdata_o * LocalKoukan_GetTargetData(int32_t npcindex, int32_t lang, MethodInfo *method)
{
    system_load_typeinfo((void *)0x5e91);
    XLSXContent::LocalKoukanData_Sheetdata_o *data = GameData::DataManager_TypeInfo->static_fields->LocalKoukanData->get_Item(npcindex, nullptr);
    socket_log_fmt("%08X\n", data);
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
