#pragma once

#include "il2cpp.h"

void nn_ec_Shop__ShowApplicationInformation (uint64_t applicationId, const MethodInfo* method);
void nn_ec_Shop__ShowApplicationInformation (uint64_t applicationId, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowAddOnContentList (uint64_t applicationId, const MethodInfo* method);
void nn_ec_Shop__ShowAddOnContentList (uint64_t applicationId, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowSubscriptionList (uint64_t applicationId, const MethodInfo* method);
void nn_ec_Shop__ShowSubscriptionList (uint64_t applicationId, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowSubscriptionList (uint64_t applicationId, nn_ec_CourseId_o courseId, const MethodInfo* method);
void nn_ec_Shop__ShowSubscriptionList (uint64_t applicationId, nn_ec_CourseId_o courseId, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowConsumableItemList (uint64_t applicationId, const MethodInfo* method);
void nn_ec_Shop__ShowConsumableItemList (uint64_t applicationId, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowConsumableItemDetail (uint64_t applicationId, nn_ec_ConsumableId_o consumableId, nn_ec_NsUid_o nsUid, const MethodInfo* method);
void nn_ec_Shop__ShowConsumableItemDetail (uint64_t applicationId, nn_ec_ConsumableId_o consumableId, nn_ec_NsUid_o nsUid, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowEnterCodeScene (const MethodInfo* method);
void nn_ec_Shop__ShowEnterCodeScene (nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowShopProductDetails (nn_ec_NsUid_o nsuid, const MethodInfo* method);
void nn_ec_Shop__ShowShopProductDetails (nn_ec_NsUid_o nsuid, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowShopProductList (nn_ec_NsUid_array* nsuidList, System_String_o* listName, const MethodInfo* method);
void nn_ec_Shop__ShowShopProductList (nn_ec_NsUid_array* nsuidList, int32_t nsuidCount, System_String_o* listName, const MethodInfo* method);
void nn_ec_Shop__ShowShopProductList (nn_ec_NsUid_array* nsuidList, System_String_o* listName, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
void nn_ec_Shop__ShowShopProductList (nn_ec_NsUid_array* nsuidList, int32_t nsuidCount, System_String_o* listName, nn_account_UserHandle_o selectedUser, const MethodInfo* method);
nn_ec_NsUid_o nn_ec_Shop__MakeNsUid (System_String_o* str, const MethodInfo* method);
