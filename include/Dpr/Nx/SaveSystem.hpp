#ifndef _GUARD_SAVE_SYSTEM_HPP_
#define _GUARD_SAVE_SYSTEM_HPP_

#include "il2cpp.hpp"

namespace Dpr
{

namespace Nx
{

class SaveSystem
{
public:
    static void SaveAsync(System_Byte_array * data, bool writeMain, bool writeBackup, MethodInfo *method);
    static bool Save(System_Byte_array * data, bool writeMain, bool writeBackup, MethodInfo *method);
    // 0239bcd0
    static System_Byte_array * GetLoadedData(MethodInfo *method);
    // 0239c270
    static bool Load(bool fromBackup,MethodInfo *method);
    // 0239c640
    static bool SaveDataExists(MethodInfo *method);
  // static void SaveSystem_SaveAsync(Byte__Array *data,bool writeMain,bool writeBackup)
  // static void SaveAsync(byte[] data, bool writeMain, bool writeBackup)
};

// 04e551b0
extern void * SaveSystem_TypeInfo;

}

}

#endif