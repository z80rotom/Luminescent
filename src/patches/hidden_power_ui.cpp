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
    if (pokemonParam == nullptr)
    {
        socket_log_fmt("null pokemonParam\n");
        return Pml::WazaData::WazaDataSystem::GetType(id, (MethodInfo *) nullptr);
    }

    if (id != HIDDEN_POWER_ID)
    {
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
    gPokemonParam = nullptr;
    return type;
}

void WazaManageSubWazaPanel_Setup(Dpr::UI::WazaManageSubWazaPanel_o *__this, int32_t wazaNo, Pml::PokePara::CoreParam * pokemonParam)
{
    socket_log_fmt("WazaManageSubWazaPanel_Setup\n");
    gPokemonParam = pokemonParam;
    __this->Setup(wazaNo, (MethodInfo *) nullptr);
}