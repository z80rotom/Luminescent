#pragma once

#include "il2cpp.h"

void System_Text_Encoding_DefaultEncoder___ctor (System_Text_Encoding_DefaultEncoder_o* __this, System_Text_Encoding_o* encoding, const MethodInfo* method);
void System_Text_Encoding_DefaultEncoder___ctor (System_Text_Encoding_DefaultEncoder_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
Il2CppObject* System_Text_Encoding_DefaultEncoder__GetRealObject (System_Text_Encoding_DefaultEncoder_o* __this, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Text_Encoding_DefaultEncoder__System_Runtime_Serialization_ISerializable_GetObjectData (System_Text_Encoding_DefaultEncoder_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
int32_t System_Text_Encoding_DefaultEncoder__GetByteCount (System_Text_Encoding_DefaultEncoder_o* __this, System_Char_array* chars, int32_t index, int32_t count, bool flush, const MethodInfo* method);
int32_t System_Text_Encoding_DefaultEncoder__GetByteCount (System_Text_Encoding_DefaultEncoder_o* __this, uint16_t* chars, int32_t count, bool flush, const MethodInfo* method);
int32_t System_Text_Encoding_DefaultEncoder__GetBytes (System_Text_Encoding_DefaultEncoder_o* __this, System_Char_array* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, bool flush, const MethodInfo* method);
int32_t System_Text_Encoding_DefaultEncoder__GetBytes (System_Text_Encoding_DefaultEncoder_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush, const MethodInfo* method);
