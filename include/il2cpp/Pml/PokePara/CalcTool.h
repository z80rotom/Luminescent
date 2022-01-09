#pragma once

#include "il2cpp.h"

uint8_t Pml_PokePara_CalcTool__CalcLevel (int32_t monsno, uint16_t formno, uint32_t exp, const MethodInfo* method_info);
uint16_t Pml_PokePara_CalcTool__CalcMaxHp (int32_t monsno, uint8_t level, uint16_t basev, uint16_t rnd, uint16_t exp, const MethodInfo* method_info);
uint16_t Pml_PokePara_CalcTool__CalcAtk (uint8_t level, uint16_t basev, uint16_t rnd, uint16_t exp, int32_t seikaku, const MethodInfo* method_info);
uint16_t Pml_PokePara_CalcTool__CalcDef (uint8_t level, uint16_t basev, uint16_t rnd, uint16_t exp, int32_t seikaku, const MethodInfo* method_info);
uint16_t Pml_PokePara_CalcTool__CalcSpAtk (uint8_t level, uint16_t basev, uint16_t rnd, uint16_t exp, int32_t seikaku, const MethodInfo* method_info);
uint16_t Pml_PokePara_CalcTool__CalcSpDef (uint8_t level, uint16_t basev, uint16_t rnd, uint16_t exp, int32_t seikaku, const MethodInfo* method_info);
uint16_t Pml_PokePara_CalcTool__CalcAgi (uint8_t level, uint16_t basev, uint16_t rnd, uint16_t exp, int32_t seikaku, const MethodInfo* method_info);
int8_t Pml_PokePara_CalcTool__GetPowerTransformBySeikaku (uint16_t seikaku, int32_t powerId, const MethodInfo* method_info);
uint16_t Pml_PokePara_CalcTool__CalcCorrectedPowerBySeikaku (uint16_t value, uint16_t seikaku, int32_t powerId, const MethodInfo* method_info);
bool Pml_PokePara_CalcTool__IsRareColor (uint32_t id, uint32_t rnd, const MethodInfo* method_info);
uint32_t Pml_PokePara_CalcTool__CalcRareCheckValue (uint32_t id, uint32_t rnd, const MethodInfo* method_info);
uint32_t Pml_PokePara_CalcTool__CorrectColorRndForNormal (uint32_t id, uint32_t rnd, const MethodInfo* method_info);
uint32_t Pml_PokePara_CalcTool__CorrectColorRndForRare (uint32_t id, uint32_t rnd, const MethodInfo* method_info);
uint8_t Pml_PokePara_CalcTool__CalcRareColorType (uint32_t id, uint32_t rnd, uint32_t cassetVersion, bool isEventGetPoke, const MethodInfo* method_info);
uint8_t Pml_PokePara_CalcTool__CalcRareColorTypeByID (uint32_t id, uint32_t rnd, const MethodInfo* method_info);
uint32_t Pml_PokePara_CalcTool__CorrectColorRndForRareType (uint32_t id, uint32_t rnd, uint8_t type, const MethodInfo* method_info);
uint8_t Pml_PokePara_CalcTool__GetCorrectSexInPersonalData (int32_t monsno, uint16_t formno, uint8_t bothCase, const MethodInfo* method_info);
bool Pml_PokePara_CalcTool__IsSeikakuHigh (int32_t seikaku, const MethodInfo* method_info);
bool Pml_PokePara_CalcTool__IsSeikakuLow (int32_t seikaku, const MethodInfo* method_info);
Pml_PokePara_Seikaku_array* Pml_PokePara_CalcTool__GetSeikakuHigh (uint8_t* pNum, const MethodInfo* method_info);
Pml_PokePara_Seikaku_array* Pml_PokePara_CalcTool__GetSeikakuLow (uint8_t* pNum, const MethodInfo* method_info);
uint16_t Pml_PokePara_CalcTool__GetTokuseiNo (int32_t monsno, uint16_t formno, uint8_t tokuseiIndex, const MethodInfo* method_info);
uint8_t Pml_PokePara_CalcTool__CalcMezamerupawaaType (uint8_t hp, uint8_t atk, uint8_t def, uint8_t agi, uint8_t spatk, uint8_t spdef, const MethodInfo* method_info);
uint32_t Pml_PokePara_CalcTool__CalcMezamerupawaaPower (uint8_t hp, uint8_t atk, uint8_t def, uint8_t agi, uint8_t spatk, uint8_t spdef, const MethodInfo* method_info);
int32_t Pml_PokePara_CalcTool__JudgeTaste (int32_t seikaku, int32_t taste, const MethodInfo* method_info);
bool Pml_PokePara_CalcTool__CanCreateEgg (int32_t monsno1, uint8_t sex1, uint32_t eggGroup1_1, uint32_t eggGroup1_2, int32_t monsno2, uint8_t sex2, uint32_t eggGroup2_1, uint32_t eggGroup2_2, const MethodInfo* method_info);
int32_t Pml_PokePara_CalcTool__CalcLoveLevel (int32_t monsno1, uint32_t id1, int32_t monsno2, uint32_t id2, const MethodInfo* method_info);
int32_t Pml_PokePara_CalcTool__GetRotomuWazaNo (uint16_t formno, const MethodInfo* method_info);
uint8_t Pml_PokePara_CalcTool__GetAruseusuType (uint32_t itemno, const MethodInfo* method_info);
uint8_t Pml_PokePara_CalcTool__GetGuripusu2Type (uint32_t itemno, const MethodInfo* method_info);
bool Pml_PokePara_CalcTool__IsAmezaikuForCream2Evolution (uint32_t itemno, const MethodInfo* method_info);
uint8_t Pml_PokePara_CalcTool__GetCream2ViewID (uint32_t itemno, const MethodInfo* method_info);
bool Pml_PokePara_CalcTool__DecideFormNoFromHoldItem (int32_t monsno, uint32_t holdItemno, uint16_t* formno, const MethodInfo* method_info);
void Pml_PokePara_CalcTool___cctor (const MethodInfo* method_info);
