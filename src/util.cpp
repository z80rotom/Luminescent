#include "util.hpp"
#include "il2cpp-api.h"
#include "PlayerWork.hpp"
#include "logger.hpp"


void system_load_typeinfo(void * typeInfo)
{
  _system_load_typeinfo(typeInfo);
}

void * system_array_new(void * typeInfo, uint32_t len)
{
  void * array = _system_array_new(typeInfo, len);
  _system_array_init(array);
  return array;
}


MethodInfo * copyMethodInfo(MethodInfo * src, Il2CppMethodPointer methodPointer)
{
  MethodInfo * dst = (MethodInfo *) malloc(sizeof(MethodInfo));
  memcpy(dst, src, sizeof(MethodInfo));

  if (methodPointer != nullptr)
  {
    dst->methodPointer = methodPointer;
  }

  return dst;
}


uint32_t GetBadgeCount()
{
  bool bVar1 = PlayerWork::GetSytemFlag(0x81, (MethodInfo *)nullptr);
  bool bVar2 = PlayerWork::GetSytemFlag(0x7c, (MethodInfo *)nullptr);
  bool bVar3 = PlayerWork::GetSytemFlag(0x7d, (MethodInfo *)nullptr);
  bool bVar4 = PlayerWork::GetSytemFlag(0x80, (MethodInfo *)nullptr);
  bool bVar5 = PlayerWork::GetSytemFlag(0x7f, (MethodInfo *)nullptr);
  bool bVar6 = PlayerWork::GetSytemFlag(0x7e, (MethodInfo *)nullptr);
  bool bVar7 = PlayerWork::GetSytemFlag(0x83, (MethodInfo *)nullptr);
  bool bVar8 = PlayerWork::GetSytemFlag(0x82, (MethodInfo *)nullptr);
  return (bVar2 & 1) + (bVar1 & 1) + (bVar3 & 1) + (bVar4 & 1) + (bVar5 & 1) + (bVar6 & 1) +
         (bVar7 & 1) + (bVar8 & 1);
}

uint32_t getLevelCapIndex()
{
    constexpr size_t NUM_FLAGS = 1;
    constexpr size_t NUM_SYS_FLAGS = 1;
    uint32_t numEvents = GetBadgeCount();

    uint32_t flags[NUM_FLAGS] = {
        2770 // Beating Cyrus at spear pillar
    };

    uint32_t sysflags[NUM_SYS_FLAGS] = {
        5 // Game clear
    };

    for (size_t i = 0; i < NUM_FLAGS; i++)
    {
        if (PlayerWork::GetBool(flags[i], nullptr))
        {
            numEvents += 1;
        }
    }

    for (size_t i = 0; i < NUM_SYS_FLAGS; i++)
    {
        if (PlayerWork::GetSytemFlag(sysflags[i], nullptr))
        {
            numEvents += 1;
        }
    }

    return numEvents;
}

uint32_t getMaxLevelOfCapIndex(uint32_t index)
{
    switch (index)
    {
        case 0: // Roark
            return 16;
        case 1: // Gardenia
            return 26;
        case 2: // Fantina
            return 33;
        case 3: // Maylene
            return 39;
        case 4: // Crasher Wake
            return 44;
        case 5: // Byron
            return 53;
        case 6: // Candice
            return 56;
        case 7: // Spear Pillar
            return 60;
        case 8: // Volkner
            return 62;
        case 9: // Cynthia
            return 78;
        case 10: // Stark Mountain
            return 85;
        default: // Max
            return 100;
    }
}

uint32_t getMaxLevel()
{
    uint32_t index = getLevelCapIndex();
    return getMaxLevelOfCapIndex(index);
}

uint32_t getLevelCapIndexOfLevel(uint32_t level)
{
    uint32_t i = 0;
    uint32_t levelOfCap = 0;
    do
    {
        levelOfCap = getMaxLevelOfCapIndex(i);
        socket_log_fmt("checking cap %d\n", levelOfCap);
        if (level <= levelOfCap)
        {
            return i;
        }
        i++;
    }
    while (levelOfCap < 100);

    return 0;
}

Dpr::Battle::Logic::EventFactor_EventHandlerTable_o * createEventHandlerTable(uint16_t eventID, MethodInfo * src, Il2CppMethodPointer methodPointer)
{
    MethodInfo * method = copyMethodInfo(src, methodPointer);
    Dpr::Battle::Logic::EventFactor_EventHandlerTable_o * evtHandlerTable = (Dpr::Battle::Logic::EventFactor_EventHandlerTable_o *) il2cpp_object_new(Dpr::Battle::Logic::EventFactor_EventHandlerTable_TypeInfo);
    Dpr::Battle::Logic::EventFactor_EventHandler_o * evtHandler = (Dpr::Battle::Logic::EventFactor_EventHandler_o *) il2cpp_object_new(Dpr::Battle::Logic::EventFactor_EventHandler_TypeInfo);
    evtHandler->ctor((intptr_t) methodPointer, method);
    evtHandlerTable->fields.eventID = eventID;
    evtHandlerTable->fields.eventHandler = evtHandler;

    return evtHandlerTable;
}
