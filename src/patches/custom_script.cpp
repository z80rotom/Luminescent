#include "il2cpp.hpp"
#include "Dpr/Box/BoxPokemonWork.hpp"
#include "Dpr/EvScript/EvDataManager.hpp"
#include "EvData/EvCmdID.hpp"
#include "EvData/ArgType.hpp"
#include "Pml/PokeParty.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "PlayerWork.hpp"
#include "WeatherWork.hpp"

#include "util.hpp"
#include "logger.hpp"

// UTILITY METHODS

// Converts the IEEE-754 formatted int32 into its proper float value.
float ConvertToFloat(int32_t value)
{
    float fresult;
    std::memcpy(&fresult, &value, sizeof(value));
    return fresult;
}

// Returns either the value at the given work variable or the direct int value depending on the given argument's type.
// Returns 0 for any other argument type.
int32_t GetWorkOrNumberValue(EvData::Aregment_o arg)
{
    int32_t argType = arg.fields.argType;
    int32_t data = arg.fields.data;
    int32_t result = 0;

    switch (argType)
    {
        case EvData::ArgType::Work:
            result = PlayerWork::GetInt(data, nullptr);
            break;
        case EvData::ArgType::Float:
            result = (int32_t)ConvertToFloat(data);
            break;
        default:
            break;
    }

    return result;
}

// If the given argument is a work variable, set it to the given value.
// Does nothing otherwise.
void SetWorkToValue(EvData::Aregment_o arg, int32_t value)
{
    int32_t argType = arg.fields.argType;
    int32_t data = arg.fields.data;

    if (argType == EvData::ArgType::Work)
    {
        socket_log_fmt("Setting work %d to value %d\n", data, value);
        PlayerWork::SetInt(data, value, nullptr);
    }
}

// Checks if the given PokemonParam is null or an egg.
bool IsNullOrEgg(Pml::PokePara::PokemonParam_o * param)
{
    Pml::PokePara::CoreParam * coreParam = (Pml::PokePara::CoreParam *)param;
    return coreParam == nullptr || coreParam->IsNull(nullptr) || coreParam->IsEgg(2, nullptr);
}


// SCRIPT COMMAND METHODS

// Sets the weather.
// Arguments:
//   [Work, Number] weather: The ID of the weather to change to.
bool SetWeather(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_SET_WEATHER\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t weather = GetWorkOrNumberValue(args->m_Items[1]);
        socket_log_fmt("Calling set_WeatherID with weatherId: %d\n", weather);
        WeatherWork::set_WeatherID(weather, nullptr);
    }

    return true;
}

// Returns the form id of the Pokémon at the given index in the party.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work] result: The work in which to put the result in. -1 if the chosen Pokémon is null or an egg.
bool PartyFormsNo(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_TEMOTI_FORMNO\n");
    system_load_typeinfo((void *)0x44f9);
    
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrNumberValue(args->m_Items[1]);

        Pml::PokeParty_o * party = PlayerWork::get_playerParty(nullptr);
        Pml::PokePara::PokemonParam_o * param = party->GetMemberPointer(index, nullptr);
        int32_t result = -1;

        if (!IsNullOrEgg(param))
        {
            socket_log_fmt("Calling GetPokemonFormNo with party index: %d\n", index);
            result = manager->GetPokemonFormNo(param, nullptr);
        }

        if (args->max_length >= 3)
        {
            SetWorkToValue(args->m_Items[2], result);
        }
    }

    return true;
}

// Returns the form id of the Pokémon at the given index and tray index.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work, Number] trayIndex: The tray index in which to look for the given Pokémon.
//   [Work] result: The work in which to put the result in. -1 if the chosen Pokémon is null or an egg.
bool PartyBoxFormsNo(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_TEMOTI_BOX_FORMNO\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrNumberValue(args->m_Items[1]);

        if (args->max_length >= 3)
        {
            int32_t trayIndex = GetWorkOrNumberValue(args->m_Items[2]);

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);
            int32_t result = -1;

            if (!IsNullOrEgg(param))
            {
                socket_log_fmt("Calling GetPokemonFormNo with tray index %d and index %d\n", trayIndex, index);
                result = manager->GetPokemonFormNo(param, nullptr);
            }

            if (args->max_length >= 4)
            {
                SetWorkToValue(args->m_Items[3], result);
            }
        }
    }

    return true;
}

// Returns the nature id of the Pokémon at the given index and tray index.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work, Number] trayIndex: The tray index in which to look for the given Pokémon.
//   [Work] result: The work in which to put the result in. -1 if the chosen Pokémon is null or an egg.
bool PartyBoxNature(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_GET_BOX_POKE_SEIKAKU\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrNumberValue(args->m_Items[1]);

        if (args->max_length >= 3)
        {
            int32_t trayIndex = GetWorkOrNumberValue(args->m_Items[2]);

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);
            int32_t result = -1;

            if (!IsNullOrEgg(param))
            {
                socket_log_fmt("Calling GetSeikaku with tray index %d and index %d\n", trayIndex, index);
                result = ((Pml::PokePara::CoreParam *)param)->GetSeikaku(nullptr);
            }

            if (args->max_length >= 4)
            {
                SetWorkToValue(args->m_Items[3], result);
            }
        }
    }

    return true;
}

// Releases the Pokémon at the given index and tray index.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work, Number] trayIndex: The tray index in which to look for the given Pokémon.
bool PartyBoxRelease(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_RELEASE_BOX_POKE\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrNumberValue(args->m_Items[1]);

        if (args->max_length >= 3)
        {
            int32_t trayIndex = GetWorkOrNumberValue(args->m_Items[2]);

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);

            if (!IsNullOrEgg(param))
            {
                socket_log_fmt("Calling ClearPokemon with tray index %d and index %d\n", trayIndex, index);
                Dpr::Box::BoxPokemonWork::ClearPokemon(trayIndex, index, nullptr);

            }
        }
    }

    return true;
}

// Handles overriden and new script commands, then calls the original method to handle the rest normally.
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
            return PartyBoxNature(__this);
        case EvData::EvCmdID::_RELEASE_BOX_POKE:
            return PartyBoxRelease(__this);
        default:
            break;
    }

    // Call original method
    return __this->RunEvCmd(index, method);
}
