#pragma once

#include "il2cpp.h"

Pml_Item_UgItemManager_o* Pml_Item_UgItemManager__get_Instance (const MethodInfo* method);
int32_t Pml_Item_UgItemManager__get_UgItemTotal (Pml_Item_UgItemManager_o* __this, const MethodInfo* method);
void Pml_Item_UgItemManager__Initialize (Pml_Item_UgItemManager_o* __this, XLSXContent_UgItemTable_o* ugItemTable, XLSXContent_TamaTable_o* tamaTable, XLSXContent_PedestalTable_o* pedestalTable, XLSXContent_StoneStatuEeffect_o* stoneStatuEeffect, const MethodInfo* method);
bool Pml_Item_UgItemManager__IsExclusiveUseUG (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
int32_t Pml_Item_UgItemManager__GetItemId (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
XLSXContent_UgItemTable_Sheettable_o* Pml_Item_UgItemManager__GetUgItemData (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
XLSXContent_TamaTable_Sheettable_o* Pml_Item_UgItemManager__GetTamaData (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
XLSXContent_PedestalTable_SheetInfo_o* Pml_Item_UgItemManager__GetPedestalData (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
XLSXContent_StoneStatuEeffect_Sheettable_o* Pml_Item_UgItemManager__GetStoneStatuEeffectData (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
XLSXContent_UgItemTable_Sheettable_o* Pml_Item_UgItemManager__GetUgItemDataFromPedestalId (Pml_Item_UgItemManager_o* __this, int32_t pedestalId, const MethodInfo* method);
XLSXContent_UgItemTable_Sheettable_o* Pml_Item_UgItemManager__GetUgItemDataFromTamaId (Pml_Item_UgItemManager_o* __this, int32_t tamaId, const MethodInfo* method);
XLSXContent_UgItemTable_Sheettable_o* Pml_Item_UgItemManager__GetUgItemDataStatueId (Pml_Item_UgItemManager_o* __this, int32_t statueId, const MethodInfo* method);
XLSXContent_UgItemTable_Sheettable_o* Pml_Item_UgItemManager__GetUgItemDataRaw (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
int32_t Pml_Item_UgItemManager__GetNumStatueKInd (Pml_Item_UgItemManager_o* __this, const MethodInfo* method);
bool Pml_Item_UgItemManager__IsTama (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
bool Pml_Item_UgItemManager__IsPedestal (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
bool Pml_Item_UgItemManager__IsStatue (Pml_Item_UgItemManager_o* __this, int32_t ugItemId, const MethodInfo* method);
void Pml_Item_UgItemManager___ctor (Pml_Item_UgItemManager_o* __this, const MethodInfo* method);
void Pml_Item_UgItemManager___cctor (const MethodInfo* method);
