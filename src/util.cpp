#include "util.hpp"
#include "PlayerWork.hpp"

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