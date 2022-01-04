#pragma once

#include "il2cpp.h"

bool INL1_IlcaNetServerSerial__CheckSerialResponseGet (INL1_IlcaNetServerSerial_SerialResponseAuth_o** RetSra, const MethodInfo* method);
bool INL1_IlcaNetServerSerial__UpdateSerialResponseGet (INL1_IlcaNetServerSerial_SerialResponseUpdate_o** RetSru, const MethodInfo* method);
bool INL1_IlcaNetServerSerial__CheckSerialRequestAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServerSerial_CheckSerialRequest_o* csr, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, System_String_o* nsaidtOver, uint64_t nexid, const MethodInfo* method);
bool INL1_IlcaNetServerSerial__UpdateSerialRequestAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
void INL1_IlcaNetServerSerial__CallbackNSAIDT (bool isSuccess, int32_t eve, int32_t result, int64_t responseCode, System_String_o* responseStr, const MethodInfo* method);
void INL1_IlcaNetServerSerial__NextAbort (bool isSuccess, const MethodInfo* method);
System_Collections_IEnumerator_o* INL1_IlcaNetServerSerial__CheckSerialRequestAsyncCore (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServerSerial_CheckSerialRequest_o* csr, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, bool auth, const MethodInfo* method);
void INL1_IlcaNetServerSerial___ctor (INL1_IlcaNetServerSerial_o* __this, const MethodInfo* method);
void INL1_IlcaNetServerSerial___cctor (const MethodInfo* method);
