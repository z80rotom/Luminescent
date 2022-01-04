#pragma once

#include "il2cpp.h"

void nn_friends_Friends__Initialize (const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetFriendList (int32_t* outCount, nn_account_NetworkServiceAccountId_array* outAccountIds, nn_account_Uid_o uid, int32_t offset, nn_friends_FriendFilter_o filter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetFriendList (int32_t* outCount, nn_account_NetworkServiceAccountId_array* outAccountIds, nn_account_Uid_o uid, int32_t offset, int32_t count, nn_friends_FriendFilter_o filter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetFriendList (int32_t* outCount, nn_account_NetworkServiceAccountId_array* outAccountIds, int32_t offset, nn_friends_FriendFilter_o filter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetFriendList (int32_t* outCount, nn_account_NetworkServiceAccountId_array* outAccountIds, int32_t offset, int32_t count, nn_friends_FriendFilter_o filter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetFriendList (int32_t* outCount, nn_friends_Friend_array* outFriends, nn_account_Uid_o uid, int32_t offset, nn_friends_FriendFilter_o filter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetFriendList (int32_t* outCount, nn_friends_Friend_array* outFriends, nn_account_Uid_o uid, int32_t offset, int32_t count, nn_friends_FriendFilter_o filter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetFriendList (int32_t* outCount, nn_friends_Friend_array* outFriends, int32_t offset, nn_friends_FriendFilter_o filter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetFriendList (int32_t* outCount, nn_friends_Friend_array* outFriends, int32_t offset, int32_t count, nn_friends_FriendFilter_o filter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__UpdateFriendInfo (nn_friends_Friend_array* outFriends, nn_account_Uid_o uid, nn_account_NetworkServiceAccountId_array* accountIds, const MethodInfo* method);
nn_Result_o nn_friends_Friends__UpdateFriendInfo (nn_friends_Friend_array* outFriends, nn_account_Uid_o uid, nn_account_NetworkServiceAccountId_array* accountIds, int32_t count, const MethodInfo* method);
nn_Result_o nn_friends_Friends__UpdateFriendInfo (nn_friends_Friend_array* outFriends, nn_account_NetworkServiceAccountId_array* accountIds, const MethodInfo* method);
nn_Result_o nn_friends_Friends__UpdateFriendInfo (nn_friends_Friend_array* outFriends, nn_account_NetworkServiceAccountId_array* accountIds, int32_t count, const MethodInfo* method);
nn_Result_o nn_friends_Friends__EnsureFriendListAvailable (nn_friends_AsyncContext_o* outAsync, nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__CheckFriendListAvailability (bool* outIsAvailable, nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__CheckFriendListAvailability (bool* outIsAvailable, const MethodInfo* method);
nn_Result_o nn_friends_Friends__EnsureFriendListAvailable (intptr_t outAsync, nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__EnsureFriendListAvailable (nn_friends_AsyncContext_o* outAsync, const MethodInfo* method);
nn_Result_o nn_friends_Friends__EnsureFriendListAvailable (intptr_t outAsync, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetBlockedUserList (int32_t* outCount, nn_account_NetworkServiceAccountId_array* outAccountIds, nn_account_Uid_o uid, int32_t offset, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetBlockedUserList (int32_t* outCount, nn_account_NetworkServiceAccountId_array* outAccountIds, nn_account_Uid_o uid, int32_t offset, int32_t count, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetBlockedUserList (int32_t* outCount, nn_account_NetworkServiceAccountId_array* outAccountIds, int32_t offset, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetBlockedUserList (int32_t* outCount, nn_account_NetworkServiceAccountId_array* outAccountIds, int32_t offset, int32_t count, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetProfileList (nn_friends_AsyncContext_o* outAsync, nn_friends_Profile_array* outProfiles, nn_account_Uid_o uid, nn_account_NetworkServiceAccountId_array* accountIds, const MethodInfo* method);
nn_Result_o nn_friends_Friends__CheckBlockedUserListAvailability (bool* outIsAvailable, nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__CheckBlockedUserListAvailability (bool* outIsAvailable, const MethodInfo* method);
nn_Result_o nn_friends_Friends__EnsureBlockedUserListAvailable (nn_friends_AsyncContext_o* outAsync, nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__EnsureBlockedUserListAvailable (intptr_t outAsync, nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__EnsureBlockedUserListAvailable (nn_friends_AsyncContext_o* outAsync, const MethodInfo* method);
nn_Result_o nn_friends_Friends__EnsureBlockedUserListAvailable (intptr_t outAsync, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetProfileList (intptr_t outAsync, nn_friends_Profile_array* outProfiles, nn_account_Uid_o uid, nn_account_NetworkServiceAccountId_array* accountIds, int32_t count, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetProfileList (nn_friends_AsyncContext_o* outAsync, nn_friends_Profile_array* outProfiles, nn_account_NetworkServiceAccountId_array* accountIds, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetProfileList (intptr_t outAsync, nn_friends_Profile_array* outProfiles, nn_account_NetworkServiceAccountId_array* accountIds, int32_t count, const MethodInfo* method);
nn_Result_o nn_friends_Friends__DeclareOpenOnlinePlaySession (nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__DeclareOpenOnlinePlaySession (const MethodInfo* method);
nn_Result_o nn_friends_Friends__DeclareCloseOnlinePlaySession (nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__DeclareCloseOnlinePlaySession (const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetPlayHistoryRegistrationKey (nn_friends_PlayHistoryRegistrationKey_o* outKey, nn_account_Uid_o uid, bool isLocalPlay, const MethodInfo* method);
nn_Result_o nn_friends_Friends__GetPlayHistoryRegistrationKey (nn_friends_PlayHistoryRegistrationKey_o* outKey, bool isLocalPlay, const MethodInfo* method);
nn_Result_o nn_friends_Friends__AddPlayHistory (nn_account_Uid_o uid, nn_friends_PlayHistoryRegistrationKey_o key, nn_friends_InAppScreenName_o inAppScreenName, nn_friends_InAppScreenName_o myInAppScreenName, const MethodInfo* method);
nn_Result_o nn_friends_Friends__AddPlayHistory (nn_friends_PlayHistoryRegistrationKey_o key, nn_friends_InAppScreenName_o inAppScreenName, nn_friends_InAppScreenName_o myInAppScreenName, const MethodInfo* method);
bool nn_friends_Friends__TryPopFriendInvitationNotificationInfo (nn_account_Uid_o* pOutUid, int64_t* pOutSize, System_Byte_array* pOutBuffer, const MethodInfo* method);
bool nn_friends_Friends__TryPopFriendInvitationNotificationInfo (nn_account_Uid_o* pOutUid, int64_t* pOutSize, System_Byte_array* pOutBuffer, int64_t bufferSize, const MethodInfo* method);
nn_Result_o nn_friends_Friends__ShowFriendList (nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__ShowUserDetailInfo (nn_account_Uid_o uid, nn_account_NetworkServiceAccountId_o accountId, nn_friends_InAppScreenName_o myInAppScreenName, nn_friends_InAppScreenName_o inAppScreenName, const MethodInfo* method);
nn_Result_o nn_friends_Friends__StartSendingFriendRequest (nn_account_Uid_o uid, nn_account_NetworkServiceAccountId_o accountId, nn_friends_InAppScreenName_o myInAppScreenName, nn_friends_InAppScreenName_o inAppScreenName, const MethodInfo* method);
nn_Result_o nn_friends_Friends__ShowMethodsOfSendingFriendRequest (nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__StartFacedFriendRequest (nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__ShowReceivedFriendRequestList (nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__ShowBlockedUserList (nn_account_Uid_o uid, const MethodInfo* method);
nn_Result_o nn_friends_Friends__StartFriendInvitation (nn_account_Uid_o uid, int32_t maxInviteeCount, nn_friends_FriendInvitationGameModeDescription_o description, System_Byte_array* pAppParameter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__StartFriendInvitation (nn_account_Uid_o uid, int32_t maxInviteeCount, nn_friends_FriendInvitationGameModeDescription_o description, System_Byte_array* pAppParameter, int64_t appParameterSize, const MethodInfo* method);
nn_Result_o nn_friends_Friends__StartSendingFriendInvitation (nn_account_Uid_o uid, nn_account_NetworkServiceAccountId_array* pInvitees, nn_friends_FriendInvitationGameModeDescription_o description, System_Byte_array* pAppParameter, const MethodInfo* method);
nn_Result_o nn_friends_Friends__StartSendingFriendInvitation (nn_account_Uid_o uid, nn_account_NetworkServiceAccountId_array* pInvitees, int32_t inviteeCount, nn_friends_FriendInvitationGameModeDescription_o description, System_Byte_array* pAppParameter, int64_t appParameterSize, const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultNotInitialized (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultInvalidArgument (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultUserNotOpened (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultNetworkServiceAccountNotLinked (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultOwnNetworkServiceAccountSpecified (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultInternetRequestNotAccepted (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultNotCalled (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultCallInProgress (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultCanceled (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultProfileImageCacheNotFound (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultOutOfMemory (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultOutOfResource (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultReservedKey (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultDuplicatedKey (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultNotificationNotFound (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultPlayHistoryRegistrationKeyBroken (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultOwnPlayHistoryRegistrationKey (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultAppletCanceled (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultApplicationInfoNotRegistered (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultNotPermitted (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultInvalidOperation (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultNotImplemented (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultResponseFormatError (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultHttpError (const MethodInfo* method);
nn_ErrorRange_o nn_friends_Friends__get_ResultServerError (const MethodInfo* method);
