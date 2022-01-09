#pragma once

#include "il2cpp.h"

DPData_MysteryGiftSaveData_o MysteryGiftWork__get_m_mysteryGiftData (const MethodInfo* method_info);
void MysteryGiftWork__set_m_mysteryGiftData (DPData_MysteryGiftSaveData_o value, const MethodInfo* method_info);
void MysteryGiftWork__AddRecvData (DPData_MysteryGift_RecvData_o recvData, const MethodInfo* method_info);
bool MysteryGiftWork__IsReceived (uint16_t deliveryId, const MethodInfo* method_info);
bool MysteryGiftWork__IsExistRecvData (const MethodInfo* method_info);
void MysteryGiftWork__SetReceiveFlag (DPData_MysteryGiftData_o giftData, const MethodInfo* method_info);
DPData_MysteryGift_RecvData_array* MysteryGiftWork__GetRecvDatas (const MethodInfo* method_info);
void MysteryGiftWork__ReceiveItemGift (uint16_t itemId, const MethodInfo* method_info);
void MysteryGiftWork__ReceiveDressUpItemGift (uint32_t dressId, const MethodInfo* method_info);
int32_t MysteryGiftWork__CanReceive (DPData_MysteryGiftCommonData_o commonData, const MethodInfo* method_info);
void MysteryGiftWork__ResetNgCount (const MethodInfo* method_info);
bool MysteryGiftWork__IsNgFlagOn (const MethodInfo* method_info);
bool MysteryGiftWork__IncNgCount (const MethodInfo* method_info);
DPData_MysteryGift_RecvData_o MysteryGiftWork__CreateRecvData (DPData_MysteryGiftData_o data, const MethodInfo* method_info);
int32_t MysteryGiftWork__ConvertMysteryGiftData (System_Byte_array* dataBytes, DPData_MysteryGiftData_o* mysteryGiftData, const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* MysteryGiftWork__CreatePokemonParam (DPData_MysteryGiftPokemonData_o pokemonData, const MethodInfo* method_info);
void MysteryGiftWork__DebugOneDayHistory (int32_t addDay, const MethodInfo* method_info);
void MysteryGiftWork__ResetReceivedFlag (const MethodInfo* method_info);
void MysteryGiftWork__ResetOneDayReceivedDatas (const MethodInfo* method_info);
void MysteryGiftWork__SetOnceReceiveFlag (uint16_t deliveryId, const MethodInfo* method_info);
void MysteryGiftWork__SetOneDayReceiveFlag (uint16_t deliveryId, int64_t timestamp, const MethodInfo* method_info);
bool MysteryGiftWork__IsNgTime (int64_t oldTime, int64_t newTime, const MethodInfo* method_info);
bool MysteryGiftWork__GetGameServerTime (int64_t* timestamp, const MethodInfo* method_info);
DPData_MysteryGiftCommonData_o MysteryGiftWork__ConvertData_MysteryGiftCommonData_ (System_Byte_array* dataBytes, int32_t start, const MethodInfo* method_info);
DPData_MysteryGiftDressUpData_o MysteryGiftWork__ConvertData_MysteryGiftDressUpData_ (System_Byte_array* dataBytes, int32_t start, const MethodInfo* method_info);
DPData_MysteryGiftItemData_o MysteryGiftWork__ConvertData_MysteryGiftItemData_ (System_Byte_array* dataBytes, int32_t start, const MethodInfo* method_info);
DPData_MysteryGiftPokemonData_o MysteryGiftWork__ConvertData_MysteryGiftPokemonData_ (System_Byte_array* dataBytes, int32_t start, const MethodInfo* method_info);
DPData_MysteryGiftUnderGroundItemData_o MysteryGiftWork__ConvertData_MysteryGiftUnderGroundItemData_ (System_Byte_array* dataBytes, int32_t start, const MethodInfo* method_info);
Il2CppObject* MysteryGiftWork__ConvertData_object_ (System_Byte_array* dataBytes, int32_t start, const MethodInfo* method_info);
uint16_t MysteryGiftWork__ConvertData_ushort_ (System_Byte_array* dataBytes, int32_t start, const MethodInfo* method_info);
uint32_t MysteryGiftWork__ConvertData_uint_ (System_Byte_array* dataBytes, int32_t start, const MethodInfo* method_info);
void MysteryGiftWork__GetPokemonNameAndLanguage (DPData_MysteryGiftPokemonData_o pokemonData, Dpr_Battle_Logic_MyStatus_o* myStatus, System_String_o** nickName, System_String_o** parentName, uint8_t* nickNameLang, const MethodInfo* method_info);
void MysteryGiftWork__ConvertRecvPokemonData (DPData_MysteryGiftPokemonData_o pokemonData, DPData_MysteryGift_MonsData_o* monsData, const MethodInfo* method_info);
bool MysteryGiftWork__CheckCrc (System_Byte_array* data, uint16_t crc, const MethodInfo* method_info);
int32_t MysteryGiftWork__CalcCrcValue (System_Byte_array* dataBytes, const MethodInfo* method_info);
