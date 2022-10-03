#pragma once
#include "il2cpp.hpp"
#include "XLSXContent/PokemonInfo.hpp"

namespace GameData
{

    struct DataManager
    {
        // 2cccf00
        // static int32_t GetUniqueID(int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare, bool isEgg, MethodInfo *method);
        // 2cc76a0
        static XLSXContent::PokemonInfo::SheetCatalog_o * GetPokemonCatalog(int32_t monsNo,int32_t formNo,uint8_t sex,bool isRare,bool isEgg,MethodInfo *method);

    };
}