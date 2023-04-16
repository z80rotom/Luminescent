#include "il2cpp.hpp"

#include "Pml/PokePara/Accessor.h"
#include "Pml/PokePara/PokemonParam.h"
#include "Pml/PokePara/CoreParam.h"

#include "logger.hpp"

struct System_Collections_Generic_List_PokemonParam__o;
namespace Pml {
    namespace PokePara {
        struct CoreDataHeader_Fields {
            uint32_t personalRnd;
            uint16_t _bitsA;
            uint16_t checksum;
        };

        struct CoreDataHeader {
            CoreDataHeader_Fields fields;
        };
    }
}

bool GetDprIllegalFlag(Pml::PokePara::Accessor *__this, MethodInfo *method)
{
    // Always return valid
    socket_log_fmt("Call to GetDprIllegalFlag");
    return false;
}

bool IsDuplicatedPokemonParam(Pml::PokePara::PokemonParam_o *pp0, System_Collections_Generic_List_PokemonParam__o *checkedParams, MethodInfo *method)
{
    // Always return valid
    socket_log_fmt("Call to IsDuplicatedPokemonParam");
    return false;
}

void SetDprIllegalFlag(Pml::PokePara::Accessor *__this, bool flag, MethodInfo *method)
{
    // Do Nothing
    socket_log_fmt("Call to SetDprIllegalFlag");
}

void set_fuseiTamagoFlag(Pml::PokePara::CoreDataHeader __this, bool value, MethodInfo *method)
{
    // Do Nothing
    socket_log_fmt("Call to set_fuseiTamagoFlag");
}
