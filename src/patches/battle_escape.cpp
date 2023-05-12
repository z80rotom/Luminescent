#include "il2cpp.hpp"

#include "Dpr/Battle/Logic/MainModule.hpp"
#include "PlayerWork.hpp"

#include "util.hpp"
#include "logger.hpp"

const int32_t CANT_ESCAPE_FLAG = 2591;

const int32_t BTL_ESCAPE_MODE_WILD = 0;
const int32_t BTL_ESCAPE_MODE_NG = 1;
const int32_t BTL_ESCAPE_MODE_CONFIRM = 2;

bool MainModule_IsEscapeEnableBattle(Dpr::Battle::Logic::MainModule_o *__this, MethodInfo *method)
{
    // Disallow escaping if can't escape flag is on
    if (PlayerWork::GetBool(CANT_ESCAPE_FLAG, nullptr))
    {
        return false;
    }

    if (__this->fields.m_rule != 2)
    {
        uint competitor = __this->fields.m_setupParam->fields.competitor;
        switch (competitor)
        {
            case 0:
                return true;
            case 1:
                return false;
            case 2:
                return true;
            case 3:
                return true;
            default:
                return false;
        }
    }

    return false;
}

int32_t MainModule_GetEscapeMode(Dpr::Battle::Logic::MainModule_o *__this, MethodInfo *method)
{
    // Disallow escaping if can't escape flag is on
    if (PlayerWork::GetBool(CANT_ESCAPE_FLAG, nullptr))
    {
        return BTL_ESCAPE_MODE_NG;
    }

    if (__this->fields.m_rule != 2)
    {
        uint competitor = __this->fields.m_setupParam->fields.competitor;
        switch (competitor)
        {
            case 0:
                return BTL_ESCAPE_MODE_WILD;
            case 1:
                return BTL_ESCAPE_MODE_NG;
            case 2:
                return BTL_ESCAPE_MODE_CONFIRM;
            case 3:
                return BTL_ESCAPE_MODE_CONFIRM;
            default:
                return BTL_ESCAPE_MODE_NG;
        }
    }

    return BTL_ESCAPE_MODE_NG;
}
