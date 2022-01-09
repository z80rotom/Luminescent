#pragma once

#include "il2cpp.h"

nn_account_NetworkServiceAccountId_o nn_friends_Profile__GetAccountId (nn_friends_Profile_o __this, const MethodInfo* method_info);
nn_account_Nickname_o nn_friends_Profile__GetNickname (nn_friends_Profile_o __this, const MethodInfo* method_info);
nn_Result_o nn_friends_Profile__GetProfileImageUrl (nn_friends_Profile_o __this, System_String_o** outUrl, int32_t imageSize, const MethodInfo* method_info);
bool nn_friends_Profile__IsValid (nn_friends_Profile_o __this, const MethodInfo* method_info);
nn_account_NetworkServiceAccountId_o nn_friends_Profile__GetAccountId (nn_friends_Profile_o profile, const MethodInfo* method_info);
nn_account_Nickname_o nn_friends_Profile__GetNickname (nn_friends_Profile_o profile, const MethodInfo* method_info);
nn_Result_o nn_friends_Profile__GetProfileImageUrl (nn_friends_Profile_o profile, System_Text_StringBuilder_o* outUrl, int32_t imageSize, const MethodInfo* method_info);
bool nn_friends_Profile__IsValid (nn_friends_Profile_o profile, const MethodInfo* method_info);
