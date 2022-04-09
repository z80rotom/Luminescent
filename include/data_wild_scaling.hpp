#pragma once
#include "il2cpp.hpp"

// Header

struct EncounterScaleInfo
{
    int32_t zoneID;
    int32_t level;
};

size_t getArrivedZones();
int32_t getScaledLevel();