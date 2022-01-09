#pragma once

#include "il2cpp.h"

void Dpr_Contest_DanceNPC___ctor (Dpr_Contest_DanceNPC_o* __this, Dpr_Contest_ContestPlayerEntity_o* entity, Dpr_Contest_CollectNotesDataModel_o* collectNotesData, System_Collections_Generic_List_NotesDataModel__o* notesDataList, System_Action_ADancePlayer__o* onLockSkill, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__Dispose (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
Dpr_Contest_DanceTapData_o* Dpr_Contest_DanceNPC__get_TapData (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__Reset (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__ChangeTutorialSetting (Dpr_Contest_DanceNPC_o* __this, bool flag, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__Activate (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__SetNextNoteDataPtr (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__DeActivate (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__SkipCurrentNotesIndexByTime (Dpr_Contest_DanceNPC_o* __this, float elapsedTime, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__UpdateAction (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__UpdateSkill (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__UpdateNPCAction (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__UpdateNPCTapAction (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__StartHold (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__FinishHold (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__FailedTap (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_DanceNPC__CheckUseSkill (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_DanceNPC__CheckLaunchSkill (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__NoticeLaunchSkill (Dpr_Contest_DanceNPC_o* __this, Dpr_Contest_ADancePlayer_o* player, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__SetSkillComboTiming (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
bool Dpr_Contest_DanceNPC__CheckLaunchSkillToOtherCombo (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__OnForceLaunchSkill (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__LaunchSkill (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__ActivateSkillEffect (Dpr_Contest_DanceNPC_o* __this, double elapsedTime, System_Action_o* onFinishSkillEffect, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__UpdateSkillEffect (Dpr_Contest_DanceNPC_o* __this, const MethodInfo* method_info);
void Dpr_Contest_DanceNPC__OnChangeMultiMode (Dpr_Contest_DanceNPC_o* __this, bool isHost, const MethodInfo* method_info);
