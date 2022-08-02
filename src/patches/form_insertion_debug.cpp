#include "il2cpp.hpp"
#include "logger.hpp"

struct XLSXContent_PokemonInfo_SheetCatalog_array;

namespace Dpr
{
    namespace UI
    {
        struct ZukanInfo_o
        {
            XLSXContent_PokemonInfo_SheetCatalog_array * GetCatalogs(int32_t monsNo,int32_t formMax,bool isUnknownSex, MethodInfo *method);
        };
    }
}

XLSXContent_PokemonInfo_SheetCatalog_array * GetCatalogs(Dpr::UI::ZukanInfo_o *__this,int32_t monsNo,int32_t formMax,bool isUnknownSex, MethodInfo *method)
{
    socket_log_fmt("monsNo: %08X", monsNo);
    socket_log_fmt("formMax: %08X", formMax);
    return __this->GetCatalogs(monsNo, formMax, isUnknownSex, method);
}