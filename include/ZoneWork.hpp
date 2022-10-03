#pragma once

#include "MonsLv.hpp"
#include "System/Array.hpp"

struct ZoneWork
{
    // Get array of swarm pokemon
    static System::Array<MonsLv_o> * TairyouHassei_MonsLv(int32_t zoneId, MethodInfo * method);
};