#include "il2cpp.hpp"
#include "Dpr/EvScript/EvDataManager.hpp"
#include "EvData/EvCmdID.hpp"
#include "EvData/ArgType.hpp"
#include "Pml/PokeParty.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "PlayerWork.hpp"
#include "WeatherWork.hpp"

#include "util.hpp"
#include "logger.hpp"

float ConvertToFloat(int32_t value)
{
    float fresult;
    std::memcpy(&fresult, &value, sizeof(value));
    return fresult;
}

bool SetWeather(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_SET_WEATHER\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t argType = args->m_Items[1].fields.argType;
        int32_t data = args->m_Items[1].fields.data;
        int32_t weather = 0;

        switch (argType)
        {
            case EvData::ArgType::Work:
                weather = PlayerWork::GetInt(data, nullptr);
                break;
            case EvData::ArgType::Float:
                weather = (int32_t)ConvertToFloat(data);
                break;
            default:
                break;
        }

        socket_log_fmt("Calling set_WeatherID with weatherId: %d\n", weather);
        WeatherWork::set_WeatherID(weather, nullptr);
    }

    return true;
}

bool PartyFormsNo(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_TEMOTI_FORMNO\n");
    system_load_typeinfo((void *)0x44f9);
    
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t argType = args->m_Items[1].fields.argType;
        int32_t data = args->m_Items[1].fields.data;
        int32_t index = 0;

        switch (argType)
        {
            case EvData::ArgType::Work:
                index = PlayerWork::GetInt(data, nullptr);
                break;
            case EvData::ArgType::Float:
                index = (int32_t)ConvertToFloat(data);
                break;
            default:
                break;
        }

        Pml::PokeParty_o * party = PlayerWork::get_playerParty(nullptr);
        Pml::PokePara::PokemonParam_o * param = party->GetMemberPointer(index, nullptr);
        Pml::PokePara::CoreParam * coreParam = (Pml::PokePara::CoreParam *)param;

        int32_t result;
        if (coreParam == nullptr || coreParam->IsNull(nullptr) || coreParam->IsEgg(2, nullptr))
        {
            result = -1;
        }
        else
        {
            socket_log_fmt("Calling GetPokemonFormNo with party index: %d\n", index);
            result = manager->GetPokemonFormNo(param, nullptr);
        }

        if (args->max_length >= 3)
        {
            argType = args->m_Items[2].fields.argType;
            data = args->m_Items[2].fields.data;

            if (argType == EvData::ArgType::Work)
            {
                socket_log_fmt("Setting work %d to result: %d\n", data, result);
                PlayerWork::SetInt(data, result, nullptr);
            }
        }
    }

    return true;
}

bool PartyBoxFormsNo(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_TEMOTI_BOX_FORMNO\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t argType = args->m_Items[1].fields.argType;
        int32_t data = args->m_Items[1].fields.data;
        int32_t index = 0;

        switch (argType)
        {
            case EvData::ArgType::Work:
                index = PlayerWork::GetInt(data, nullptr);
                break;
            case EvData::ArgType::Float:
                index = (int32_t)ConvertToFloat(data);
                break;
            default:
                break;
        }

        if (args->max_length >= 3)
        {
            argType = args->m_Items[2].fields.argType;
            data = args->m_Items[2].fields.data;
            int32_t trayIndex = 0;

            switch (argType)
            {
                case EvData::ArgType::Work:
                    trayIndex = PlayerWork::GetInt(data, nullptr);
                    break;
                case EvData::ArgType::Float:
                    trayIndex = (int32_t)ConvertToFloat(data);
                    break;
                default:
                    break;
            }

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);
            Pml::PokePara::CoreParam * coreParam = (Pml::PokePara::CoreParam *)param;

            int32_t result;
            if (coreParam == nullptr || coreParam->IsNull(nullptr) || coreParam->IsEgg(2, nullptr))
            {
                result = -1;
            }
            else
            {
                socket_log_fmt("Calling GetPokemonFormNo with tray index %d and index %d\n", trayIndex, index);
                result = manager->GetPokemonFormNo(param, nullptr);
            }

            if (args->max_length >= 4)
            {
                argType = args->m_Items[3].fields.argType;
                data = args->m_Items[3].fields.data;

                if (argType == EvData::ArgType::Work)
                {
                    socket_log_fmt("Setting work %d to result: %d\n", data, result);
                    PlayerWork::SetInt(data, result, nullptr);
                }
            }
        }
    }

    return true;
}

bool PartyBoxAbility(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_GET_BOX_POKE_SEIKAKU\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t argType = args->m_Items[1].fields.argType;
        int32_t data = args->m_Items[1].fields.data;
        int32_t index = 0;

        switch (argType)
        {
            case EvData::ArgType::Work:
                index = PlayerWork::GetInt(data, nullptr);
                break;
            case EvData::ArgType::Float:
                index = (int32_t)ConvertToFloat(data);
                break;
            default:
                break;
        }

        if (args->max_length >= 3)
        {
            argType = args->m_Items[2].fields.argType;
            data = args->m_Items[2].fields.data;
            int32_t trayIndex = 0;

            switch (argType)
            {
                case EvData::ArgType::Work:
                    trayIndex = PlayerWork::GetInt(data, nullptr);
                    break;
                case EvData::ArgType::Float:
                    trayIndex = (int32_t)ConvertToFloat(data);
                    break;
                default:
                    break;
            }

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);
            Pml::PokePara::CoreParam * coreParam = (Pml::PokePara::CoreParam *)param;

            int32_t result;
            if (coreParam == nullptr || coreParam->IsNull(nullptr) || coreParam->IsEgg(2, nullptr))
            {
                result = -1;
            }
            else
            {
                socket_log_fmt("Calling GetSeikaku with tray index %d and index %d\n", trayIndex, index);
                result = coreParam->GetSeikaku(nullptr);
            }

            if (args->max_length >= 4)
            {
                argType = args->m_Items[3].fields.argType;
                data = args->m_Items[3].fields.data;

                if (argType == EvData::ArgType::Work)
                {
                    socket_log_fmt("Setting work %d to result: %d\n", data, result);
                    PlayerWork::SetInt(data, result, nullptr);
                }
            }
        }
    }

    return true;
}

bool RunEvCmdExtended(Dpr::EvScript::EvDataManager_o *__this, EvData::EvCmdID index, MethodInfo *method)
{
    // Overriden/New Commands
    switch (index)
    {
        case EvData::EvCmdID::_SET_WEATHER:
            return SetWeather(__this);
        case EvData::EvCmdID::_TEMOTI_FORMNO:
            return PartyFormsNo(__this);
        case EvData::EvCmdID::_TEMOTI_BOX_FORMNO:
            return PartyBoxFormsNo(__this);
        case EvData::EvCmdID::_GET_BOX_POKE_SEIKAKU:
            return PartyBoxAbility(__this);
        default:
            break;
    }

    // Call original method
    return __this->RunEvCmd(index, method);
}
