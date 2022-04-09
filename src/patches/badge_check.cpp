#include "il2cpp.hpp"
#include "PlayerWork.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"

struct Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o;
struct Dpr_Battle_Logic_MainModule_o;

bool BadgeWork_IsGet(int32_t id, MethodInfo *method)
{
    if (id >= 8)
    {
        return false;
    }

    int32_t systemFlag;
    switch (id)
    {
        case 3:
            systemFlag = 128;
            break;
        case 4:
            systemFlag = 127;
            break;
        default:
            systemFlag = id + 0x7c;
            break;
    }

    return PlayerWork::GetSytemFlag(systemFlag, (MethodInfo *) nullptr);
}

// Stops pokemon from disobeying ever.
// Included here because otherwise it doesn't work right with our shifted badge flags
uint8_t Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_checkSabotageType(Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o *__this, Dpr::Battle::Logic::BTL_POKEPARAM_o *poke, MethodInfo *method)
{
    return 0;
}

uint8_t GetMaxFollowPokeLevel(Dpr_Battle_Logic_MainModule_o *__this, MethodInfo *method)
{
    return 100;
}