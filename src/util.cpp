#include "util.hpp"
#include "il2cpp-api.h"
#include "PlayerWork.hpp"

extern MethodInfo * Handler_Karagenki_WazaPowMethodInfo;

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

Dpr::Battle::Logic::EventFactor_EventHandlerTable_o * createEventHandlerTable(uint16_t eventID, Il2CppMethodPointer methodPointer)
{
    MethodInfo * method = copyMethodInfo(Handler_Karagenki_WazaPowMethodInfo, methodPointer);
    Dpr::Battle::Logic::EventFactor_EventHandlerTable_o * evtHandlerTable = (Dpr::Battle::Logic::EventFactor_EventHandlerTable_o *) il2cpp_object_new(Dpr::Battle::Logic::EventFactor_EventHandlerTable_TypeInfo);
    Dpr::Battle::Logic::EventFactor_EventHandler_o * evtHandler = (Dpr::Battle::Logic::EventFactor_EventHandler_o *) il2cpp_object_new(Dpr::Battle::Logic::EventFactor_EventHandler_TypeInfo);
    evtHandler->ctor(0, method);
    evtHandlerTable->fields.eventID = eventID;
    evtHandlerTable->fields.eventHandler = evtHandler;

    return evtHandlerTable;
}