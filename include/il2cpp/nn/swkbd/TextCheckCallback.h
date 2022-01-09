#pragma once

#include "il2cpp.h"

void nn_swkbd_TextCheckCallback___ctor (nn_swkbd_TextCheckCallback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method_info);
int32_t nn_swkbd_TextCheckCallback__Invoke (nn_swkbd_TextCheckCallback_o* __this, intptr_t pOutDialogTextBuf, int64_t* pOutDialogTextLengthSize, nn_swkbd_String_o* pStr, const MethodInfo* method_info);
System_IAsyncResult_o* nn_swkbd_TextCheckCallback__BeginInvoke (nn_swkbd_TextCheckCallback_o* __this, intptr_t pOutDialogTextBuf, int64_t* pOutDialogTextLengthSize, nn_swkbd_String_o* pStr, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method_info);
int32_t nn_swkbd_TextCheckCallback__EndInvoke (nn_swkbd_TextCheckCallback_o* __this, int64_t* pOutDialogTextLengthSize, nn_swkbd_String_o* pStr, System_IAsyncResult_o* result, const MethodInfo* method_info);
