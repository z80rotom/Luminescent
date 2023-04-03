#include "il2cpp.hpp"
#include "PlayerWork.hpp"

bool CheckSurfFlags(int32_t flagNo, MethodInfo *method)
{
    int32_t WAKE_BADGE_SYS_FLAG = 127;
    int32_t SURF_HM_OBTAINED_FLAG = 110;

    bool result = true;
    result &= PlayerWork::GetSytemFlag(WAKE_BADGE_SYS_FLAG, nullptr);
    result &= PlayerWork::GetBool(SURF_HM_OBTAINED_FLAG, nullptr);
    return result;
}
