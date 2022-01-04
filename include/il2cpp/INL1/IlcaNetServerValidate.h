#pragma once

#include "il2cpp.h"

void INL1_IlcaNetServerValidate___cctor (const MethodInfo* method);
void INL1_IlcaNetServerValidate__Init (uint16_t publicKeyversion, System_Byte_array* publicKey, const MethodInfo* method);
bool INL1_IlcaNetServerValidate__PublicKeyResponseGet (INL1_IlcaNetServerValidate_PublicKeyResponse_o** pkr, const MethodInfo* method);
bool INL1_IlcaNetServerValidate__CheckResponseGet (INL1_IlcaNetServerValidate_CheckResponse_o** cr, const MethodInfo* method);
bool INL1_IlcaNetServerValidate__CheckRequestAutoAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServerValidate_CheckRequest_o* creq, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
void INL1_IlcaNetServerValidate__PublicKeySet (uint16_t ver, System_Byte_array* pk, const MethodInfo* method);
void INL1_IlcaNetServerValidate__CheckRequestAutoCallback (bool isSuccess, int32_t eve, int32_t result, int64_t responseCode, System_String_o* responseStr, const MethodInfo* method);
bool INL1_IlcaNetServerValidate__CheckRequestAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServerValidate_CheckRequest_o* cr, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
void INL1_IlcaNetServerValidate__CallbackNSAIDT (bool isSuccess, int32_t eve, int32_t result, int64_t responseCode, System_String_o* responseStr, const MethodInfo* method);
void INL1_IlcaNetServerValidate__NextAbort (bool isSuccess, const MethodInfo* method);
System_Collections_IEnumerator_o* INL1_IlcaNetServerValidate__CheckRequestAsyncCore (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServerValidate_CheckRequest_o* cr, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
bool INL1_IlcaNetServerValidate__PublicKeyRequestAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
System_Collections_IEnumerator_o* INL1_IlcaNetServerValidate__PublicKeyRequestAsyncCore (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
bool INL1_IlcaNetServerValidate__CheckVerifySignatureAdd4byte (System_Byte_array* coreDataAdd4byte, System_Byte_array* signature, const MethodInfo* method);
bool INL1_IlcaNetServerValidate__CheckVerifySignature (INL1_IlcaNetServerValidate_CheckRequest_o* creq, System_Byte_array* signature, const MethodInfo* method);
System_Byte_array** INL1_IlcaNetServerValidate__CheckDataMakeAndSet (INL1_IlcaNetServerValidate_CheckRequest_o* creq, const MethodInfo* method);
void INL1_IlcaNetServerValidate___ctor (INL1_IlcaNetServerValidate_o* __this, const MethodInfo* method);
