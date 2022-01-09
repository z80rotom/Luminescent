#pragma once

#include "il2cpp.h"

void nn_friends_AsyncContext___ctor (nn_friends_AsyncContext_o* __this, const MethodInfo* method_info);
void nn_friends_AsyncContext__Finalize (nn_friends_AsyncContext_o* __this, const MethodInfo* method_info);
void nn_friends_AsyncContext__Dispose (nn_friends_AsyncContext_o* __this, const MethodInfo* method_info);
void nn_friends_AsyncContext__Dispose (nn_friends_AsyncContext_o* __this, bool disposing, const MethodInfo* method_info);
nn_Result_o nn_friends_AsyncContext__Cancel (nn_friends_AsyncContext_o* __this, const MethodInfo* method_info);
nn_Result_o nn_friends_AsyncContext__HasDone (nn_friends_AsyncContext_o* __this, bool* outDone, const MethodInfo* method_info);
nn_Result_o nn_friends_AsyncContext__GetResult (nn_friends_AsyncContext_o* __this, const MethodInfo* method_info);
intptr_t nn_friends_AsyncContext__Create (const MethodInfo* method_info);
void nn_friends_AsyncContext__Destroy (intptr_t context, const MethodInfo* method_info);
nn_Result_o nn_friends_AsyncContext__Cancel (intptr_t context, const MethodInfo* method_info);
nn_Result_o nn_friends_AsyncContext__HasDone (intptr_t context, bool* outDone, const MethodInfo* method_info);
nn_Result_o nn_friends_AsyncContext__GetResult (intptr_t context, const MethodInfo* method_info);
