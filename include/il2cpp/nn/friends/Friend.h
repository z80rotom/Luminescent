#pragma once

#include "il2cpp.h"

nn_account_NetworkServiceAccountId_o nn_friends_Friend__GetAccountId (nn_friends_Friend_o __this, const MethodInfo* method);
nn_account_Nickname_o nn_friends_Friend__GetNickname (nn_friends_Friend_o __this, const MethodInfo* method);
nn_friends_FriendPresence_o nn_friends_Friend__GetPresence (nn_friends_Friend_o __this, const MethodInfo* method);
nn_Result_o nn_friends_Friend__GetProfileImage (nn_friends_Friend_o __this, int64_t* outSize, System_Byte_array* buffer, const MethodInfo* method);
bool nn_friends_Friend__IsFavorite (nn_friends_Friend_o __this, const MethodInfo* method);
bool nn_friends_Friend__IsNewly (nn_friends_Friend_o __this, const MethodInfo* method);
bool nn_friends_Friend__IsValid (nn_friends_Friend_o __this, const MethodInfo* method);
nn_Result_o nn_friends_Friend__Update (nn_friends_Friend_o __this, const MethodInfo* method);
nn_account_NetworkServiceAccountId_o nn_friends_Friend__GetAccountId (nn_friends_Friend_o _friend, const MethodInfo* method);
nn_account_Nickname_o nn_friends_Friend__GetNickname (nn_friends_Friend_o _friend, const MethodInfo* method);
void nn_friends_Friend__GetPresence (nn_friends_Friend_o _friend, nn_friends_FriendPresence_o* outPresence, const MethodInfo* method);
nn_Result_o nn_friends_Friend__GetProfileImage (nn_friends_Friend_o _friend, int64_t* outSize, System_Byte_array* outBuffer, int64_t size, const MethodInfo* method);
bool nn_friends_Friend__IsFavorite (nn_friends_Friend_o _friend, const MethodInfo* method);
bool nn_friends_Friend__IsNewly (nn_friends_Friend_o _friend, const MethodInfo* method);
bool nn_friends_Friend__IsValid (nn_friends_Friend_o _friend, const MethodInfo* method);
nn_Result_o nn_friends_Friend__Update (nn_friends_Friend_o* pFriend, const MethodInfo* method);
