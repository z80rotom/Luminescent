#pragma once

#include "il2cpp.h"

void Dpr_Contest_ContestMatchingNetwork__Initialize (Dpr_Contest_ContestMatchingNetwork_o* __this, System_Action_byte__PacketReader__o* onRecievePacket, System_Action_SessionEventData__o* onSessionEvent, System_Action_o* onFinishedSession, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__Reset (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__OnFinalize (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__ReleaseReceivePacket (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__ReleaseSessionEvent (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__ReleaseNetworkCallback (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestMatchingNetwork__get_ConnectType (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestMatchingNetwork__get_MatchingType (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestMatchingNetwork__get_PlayerSkill (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__IsHost (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__IsConnect (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__CanPlayNetworkContest (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestMatchingNetwork__get_MyStationIndex (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestMatchingNetwork__get_JoinMemberNum (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__IsJoinedOtherPlayer (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__IsGamerActive (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t stationIndex, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__OnJoinMine (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__UpdateJoinMemberNum (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SetEntryPlayerInfo (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t playerIndex, int32_t playerType, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SetStepID (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t stepID, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__GetMyMainFlag (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SetMainFlag (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t stationIndex, bool flag, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SetAllMainFlag (Dpr_Contest_ContestMatchingNetwork_o* __this, bool flag, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__IsAllMainFlagTrue (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t memberNum, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__GetSubFlagByStationIndex (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t stationIndex, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__GetMySubFlag (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SetSubFlag (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t stationIndex, bool flag, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SetAllSubFlag (Dpr_Contest_ContestMatchingNetwork_o* __this, bool flag, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__IsAllSubFlagTrue (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t memberNum, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__CheckPlayerIndex (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t index, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__RepeatSendNotice (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t noticeID, float deltaTime, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__IsFinishWait (Dpr_Contest_ContestMatchingNetwork_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__ResetTimer (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__OnRecievePacket (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__OnSessionEvent (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_SessionEventData_o result, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__OnFinishedSession (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SetSessionParam (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t connectType, int32_t matchingType, int32_t playerSkill, System_String_o* password, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__StartSession (Dpr_Contest_ContestMatchingNetwork_o* __this, System_Action_bool__o* onFinish, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SetupSessionParam (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__RestartRequestAsync (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
int32_t Dpr_Contest_ContestMatchingNetwork__GetNetworkType (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SettingSessionAttribute (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__CloseSession (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__LeaveSession (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
bool Dpr_Contest_ContestMatchingNetwork__FinishSession (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__OnResumeGame (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendPlayerModelData (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t stationIndex, const MethodInfo* method);
Dpr_Contest_NetPlayerInfo_o* Dpr_Contest_ContestMatchingNetwork__ReceiveCharaModelData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendCountDownData (Dpr_Contest_ContestMatchingNetwork_o* __this, uint16_t timeCount, const MethodInfo* method);
Dpr_Contest_CountDownNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveCountDownData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendNoticeData (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t noticeID, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendNoticeData (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t stationIndex, int32_t noticeID, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendNoticeDataToAll (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t noticeID, const MethodInfo* method);
Dpr_Contest_NoticeNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveNoticeData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendChoiceData (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t targetStationIndex, const MethodInfo* method);
Dpr_Contest_ChoiceNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveChoiceNetData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendSkillPointDataToHost (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
Dpr_Contest_SkillPointNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveSkillPointData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendCategoryAndRankDataToAll (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t categoryID, int32_t rankID, int32_t cassetVersion, const MethodInfo* method);
Dpr_Contest_CategoryAndRankNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveCategoryAndRankData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendEntryNPCDataToAll (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
Dpr_Contest_ContestEntryNPCNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveEntryNPCData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendEntryPlayerDataToAll (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t userEntryNumber, float wazaSeqMaxTime, Dpr_BallDeco_AffixSealData_array* sealDataArray, const MethodInfo* method);
Dpr_Contest_ContestEntryPlayerNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveEntryPlayerData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendContestDataToAll (Dpr_Contest_ContestMatchingNetwork_o* __this, uint8_t stageRank, const MethodInfo* method);
Dpr_Contest_ContestInfoNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveContestData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendScoreDataToAll (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t playerIndex, int32_t danceScore, int32_t tension, const MethodInfo* method);
Dpr_Contest_ScoreNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveScoreData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendLaunchSkillDataToAll (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t playerIndex, float elapsedTime, float duration, const MethodInfo* method);
Dpr_Contest_LaunchSkillNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveLaunchSkillData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendResultScoreToAll (Dpr_Contest_ContestMatchingNetwork_o* __this, int32_t playerIndex, int32_t visualScore, int32_t danceScore, int32_t wazaScore, const MethodInfo* method);
Dpr_Contest_ResultScoreNetData_o* Dpr_Contest_ContestMatchingNetwork__ReceiveResultScoreData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
float Dpr_Contest_ContestMatchingNetwork__SendWaitFrameData (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
float Dpr_Contest_ContestMatchingNetwork__ReceiveWaitFrameData (Dpr_Contest_ContestMatchingNetwork_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToStation_NetPlayerData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, int32_t index, const MethodInfo_1EC1CD0* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToStation_ReadyData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, int32_t index, const MethodInfo_1EC1D40* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToStation_SkillPointData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, int32_t index, const MethodInfo_1EC1DB0* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_CategoryAndRankData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC19B0* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_ChoiceData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1A00* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_ContestEntryNPCData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1A50* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_ContestEntryPlayerData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1AA0* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_ContestInfoData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1AF0* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_CountDownData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1B40* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_LaunchSkillData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1B90* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_ReadyData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1BE0* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_ResultScore_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1C30* method);
void Dpr_Contest_ContestMatchingNetwork__SendDataToAll_ScoreData_ (Dpr_Contest_ContestMatchingNetwork_o* __this, Dpr_NetworkUtils_ANetData_T__o* data, const MethodInfo_1EC1C80* method);
void Dpr_Contest_ContestMatchingNetwork___ctor (Dpr_Contest_ContestMatchingNetwork_o* __this, const MethodInfo* method);
