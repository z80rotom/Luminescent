#pragma once

#include "il2cpp.h"

intptr_t UnmanagedMemoryManager__Alloc (int32_t size, const MethodInfo* method);
intptr_t UnmanagedMemoryManager__Alloc_object_ (const MethodInfo_232CD70* method);
bool UnmanagedMemoryManager__Free (intptr_t p, const MethodInfo* method);
void UnmanagedMemoryManager__DestroyStructure_object_ (intptr_t p, const MethodInfo_20EDEE0* method);
intptr_t UnmanagedMemoryManager__WriteObject_object_ (Il2CppObject* obj, int32_t* bufferSize, int32_t allocSize, const MethodInfo_232DD40* method);
bool UnmanagedMemoryManager__ReadObject_object_ (intptr_t p, Il2CppObject** obj, const MethodInfo_22F2540* method);
intptr_t UnmanagedMemoryManager__WriteArray_byte_ (System_Byte_array* array, int32_t* bufferSize, const MethodInfo_232CE40* method);
intptr_t UnmanagedMemoryManager__WriteArray_object_ (System_Object_array* array, int32_t* bufferSize, const MethodInfo_232D030* method);
intptr_t UnmanagedMemoryManager__WriteArray_uint_ (System_UInt32_array* array, int32_t* bufferSize, const MethodInfo_232D220* method);
bool UnmanagedMemoryManager__ReadArray_PiaPlugin_PlayerInfoNative_ (intptr_t p, int32_t arrayLength, PiaPlugin_PlayerInfoNative_array** array, const MethodInfo_22F1540* method);
bool UnmanagedMemoryManager__ReadArray_PiaPlugin_WatermarkNative_ (intptr_t p, int32_t arrayLength, PiaPlugin_WatermarkNative_array** array, const MethodInfo_22F1BE0* method);
bool UnmanagedMemoryManager__ReadArray_PiaPluginSession_StationInfoNative_ (intptr_t p, int32_t arrayLength, PiaPluginSession_StationInfoNative_array** array, const MethodInfo_22F1890* method);
bool UnmanagedMemoryManager__ReadArray_object_ (intptr_t p, int32_t arrayLength, System_Object_array** array, const MethodInfo_22F1BE0* method);
bool UnmanagedMemoryManager__ReadArray_ulong_ (intptr_t p, int32_t arrayLength, System_UInt64_array** array, const MethodInfo_22F1F10* method);
intptr_t UnmanagedMemoryManager__WriteList_PiaPluginSession_CreateSessionSetting_Attribute_ (System_Collections_Generic_List_T__o* list, int32_t* bufferSize, const MethodInfo_232D410* method);
intptr_t UnmanagedMemoryManager__WriteList_PiaPluginSession_SessionSearchCriteria_AttributeRange_ (System_Collections_Generic_List_T__o* list, int32_t* bufferSize, const MethodInfo_232D410* method);
intptr_t UnmanagedMemoryManager__WriteList_PiaPluginSession_SessionSearchCriteriaNative_AttributeNative_ (System_Collections_Generic_List_T__o* list, int32_t* bufferSize, const MethodInfo_232D410* method);
intptr_t UnmanagedMemoryManager__WriteList_PiaPluginSession_StationInfo_ (System_Collections_Generic_List_T__o* list, int32_t* bufferSize, const MethodInfo_232D410* method);
intptr_t UnmanagedMemoryManager__WriteList_PiaPluginSession_UpdateSessionSetting_Attribute_ (System_Collections_Generic_List_T__o* list, int32_t* bufferSize, const MethodInfo_232D410* method);
intptr_t UnmanagedMemoryManager__WriteList_object_ (System_Collections_Generic_List_T__o* list, int32_t* bufferSize, const MethodInfo_232D410* method);
intptr_t UnmanagedMemoryManager__WriteList_uint_ (System_Collections_Generic_List_T__o* list, int32_t* bufferSize, const MethodInfo_232D720* method);
intptr_t UnmanagedMemoryManager__WriteList_ulong_ (System_Collections_Generic_List_T__o* list, int32_t* bufferSize, const MethodInfo_232DA30* method);
bool UnmanagedMemoryManager__ReadList_PiaPluginSession_SessionEvent_ (intptr_t p, int32_t listCount, System_Collections_Generic_List_T__o** list, const MethodInfo_22F2220* method);
bool UnmanagedMemoryManager__ReadList_PiaPluginSession_SessionSearchCriteriaNative_AttributeNative_ (intptr_t p, int32_t listCount, System_Collections_Generic_List_T__o** list, const MethodInfo_22F2220* method);
bool UnmanagedMemoryManager__ReadList_object_ (intptr_t p, int32_t listCount, System_Collections_Generic_List_T__o** list, const MethodInfo_22F2220* method);
intptr_t UnmanagedMemoryManager__WriteUtf8 (System_String_o* str, int32_t* bufferSize, const MethodInfo* method);
System_String_o* UnmanagedMemoryManager__ReadUtf8 (intptr_t pStr, int32_t stringSize, const MethodInfo* method);
intptr_t UnmanagedMemoryManager__WriteUtf16 (System_String_o* str, int32_t* bufferSize, const MethodInfo* method);
System_String_o* UnmanagedMemoryManager__ReadUtf16 (intptr_t pStr, int32_t stringSize, const MethodInfo* method);
void UnmanagedMemoryManager__ValidateAllocInfo (const MethodInfo* method);
void UnmanagedMemoryManager___ctor (UnmanagedMemoryManager_o* __this, const MethodInfo* method);
void UnmanagedMemoryManager___cctor (const MethodInfo* method);
