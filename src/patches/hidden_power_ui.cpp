#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/WazaData.hpp"
#include "logger.hpp"

const int32_t HIDDEN_POWER_ID = 237;
static Pml::PokePara::CoreParam * gPokemonParam;

namespace Dpr
{
    namespace UI
    {
        struct WazaManageSubWazaPanel_o
        {
            void Setup(int32_t wazaNo,MethodInfo *method);
        };
    }
}

uint8_t WazaDataSystem_GetType(int32_t id, Pml::PokePara::CoreParam * pokemonParam)
{
    socket_log_fmt("WazaDataSystem_GetType\n");
    if (pokemonParam == nullptr || id != HIDDEN_POWER_ID)
    {
        socket_log_fmt("Invalid hidden power\n");
        return Pml::WazaData::WazaDataSystem::GetType(id, (MethodInfo *) nullptr);
    }
    
    socket_log_fmt("GetMezapaType\n");
    return pokemonParam->GetMezapaType((MethodInfo *) nullptr);
}

uint8_t WAZADATA_GetType(int32_t id, Dpr::Battle::Logic::BTL_POKEPARAM_o * bpp)
{
    socket_log_fmt("WAZADATA_GetType\n");
    Pml::PokePara::CoreParam * pokemonParam = bpp->GetSrcDataConst((MethodInfo *) nullptr);

    return WazaDataSystem_GetType(id, pokemonParam);
}

uint8_t WazaManageSubWazaPanel_GetType(int32_t id, MethodInfo * method)
{
    socket_log_fmt("WazaManageSubWazaPanel_GetType\n");
    uint8_t type = WazaDataSystem_GetType(id, gPokemonParam);
    return type;
}

int32_t WazaManagePokemonStausPanel_GetWazaNo(Pml::PokePara::CoreParam * __this, uint8_t index, MethodInfo * method)
{
    socket_log_fmt("pokemonParam: %08X\n", __this);
    gPokemonParam = __this;
    return __this->fields.m_accessor->GetWazaNo(index, nullptr);
}