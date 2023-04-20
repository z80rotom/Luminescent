#include "il2cpp.hpp"
#include "Dpr/EvScript/EvDataManager.hpp"
#include "EvData/EvCmdID.hpp"
#include "EvData/ArgType.hpp"
#include "PlayerWork.hpp"
#include "WeatherWork.hpp"

#include "logger.hpp"

float ConvertToFloat(int32_t value)
{
    float fresult;
    std::memcpy(&fresult, &value, sizeof(value));
    return fresult;
}

bool SetWeather(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("SetWeather\n");
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

bool RunEvCmdExtended(Dpr::EvScript::EvDataManager_o *__this, EvData::EvCmdID index, MethodInfo *method)
{
    // Overriden/New Commands
    switch (index)
    {
        case EvData::EvCmdID::_SET_WEATHER:
            return SetWeather(__this);
        default:
            break;
    }

    // Call original method
    return __this->RunEvCmd(index, method);
}
