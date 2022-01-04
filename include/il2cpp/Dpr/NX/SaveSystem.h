#pragma once

#include "il2cpp.h"

void Dpr_NX_SaveSystem___ctor (Dpr_NX_SaveSystem_o* __this, const MethodInfo* method);
bool Dpr_NX_SaveSystem__IsBusy (const MethodInfo* method);
System_Byte_array* Dpr_NX_SaveSystem__GetLoadedData (const MethodInfo* method);
bool Dpr_NX_SaveSystem__Save (System_Byte_array* data, bool writeMain, bool writeBackup, const MethodInfo* method);
void Dpr_NX_SaveSystem__SaveAsync (System_Byte_array* data, bool writeMain, bool writeBackup, const MethodInfo* method);
bool Dpr_NX_SaveSystem__Load (bool fromBackup, const MethodInfo* method);
bool Dpr_NX_SaveSystem__LoadCore (System_String_o* path, const MethodInfo* method);
void Dpr_NX_SaveSystem__LoadAsync (bool fromBackup, System_Action_bool__o* onComplete, const MethodInfo* method);
bool Dpr_NX_SaveSystem__SaveDataExists (const MethodInfo* method);
bool Dpr_NX_SaveSystem__BackupExists (const MethodInfo* method);
void Dpr_NX_SaveSystem__MountSaveData (Dpr_NX_SaveSystem_o* __this, const MethodInfo* method);
void Dpr_NX_SaveSystem__StartThread (Dpr_NX_SaveSystem_o* __this, const MethodInfo* method);
void Dpr_NX_SaveSystem__ThreadLoop (Dpr_NX_SaveSystem_o* __this, const MethodInfo* method);
void Dpr_NX_SaveSystem__OnPostSave (Il2CppObject* state, const MethodInfo* method);
void Dpr_NX_SaveSystem__OnPostLoad (Il2CppObject* state, const MethodInfo* method);
void Dpr_NX_SaveSystem___cctor (const MethodInfo* method);
