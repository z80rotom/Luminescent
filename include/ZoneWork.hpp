#pragma once

#include "MonsLv.hpp"
#include "System/Array.hpp"

struct ZoneWork
{
    // Get array of swarm pokemon
    static System::Array<MonsLv_o> * TairyouHassei_MonsLv(int32_t zoneId, MethodInfo * method);
    // 017da6f0
    static int32_t TairyouHassei_ZoneID(MethodInfo *method);
    // 017da610
    static bool IsHillBackZone(int32_t zone_id, MethodInfo *method);
    // 017da660
    static int32_t SafariZonePosID(int32_t zone_id, MethodInfo *method);
    // 017da600
    static bool IsSpFishingZone(int32_t zone_id, MethodInfo *method);
};
