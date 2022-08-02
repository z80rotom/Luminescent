#include "il2cpp.hpp"
#include "System/Array.hpp"

struct ZukanWork
{
    static System::Array<bool> * GetFormFlags(uint32_t monsno,uint8_t sex,bool color,MethodInfo *method);
};

System::Array<bool> * ZukanWork_GetFormFlags(uint32_t monsno,uint8_t sex,bool color,MethodInfo *method)
{
    const uint32_t VULPIX = 37;
    if (monsno == VULPIX)
    {
        // socket_log_fmt("ZukanWork_GetFormFlags\n");
        return nullptr;
    } else {
        return ZukanWork::GetFormFlags(monsno, sex, color, method);
    }
}
