#include "il2cpp.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "GameData/DataManager.hpp"
#include "util.hpp"
#include "logger.hpp"

uint8_t CoreParam_GetRareType(Pml::PokePara::CoreParam *__this)
{
    uint8_t isRare =  __this->GetRareType(nullptr);
    socket_log_fmt("[CoreParam_GetRareType] __this: %08X\n", __this);
    socket_log_fmt("[CoreParam_GetRareType] isRare: %08X\n", isRare);
    return isRare;
}

XLSXContent::PokemonInfo::SheetCatalog_o * DataManager_GetPokemonCatalog(int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare)
{
    formNo &= 0xFFFF;
    XLSXContent::PokemonInfo::SheetCatalog_o * catalog;
    catalog = GameData::DataManager::GetPokemonCatalog(monsNo, formNo, sex, isRare, false, nullptr);
    socket_log_fmt("[DataManager_GetPokemonCatalog] monsNo: %08X\n", monsNo);
    socket_log_fmt("[DataManager_GetPokemonCatalog] formNo: %08X\n", formNo);
    socket_log_fmt("[DataManager_GetPokemonCatalog] sex: %08X\n", sex);
    socket_log_fmt("[DataManager_GetPokemonCatalog] isRare: %08X\n", isRare);
    socket_log_fmt("[DataManager_GetPokemonCatalog] catalog: %08X\n", catalog);
    return catalog;
}