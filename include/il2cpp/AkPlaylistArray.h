#pragma once

#include "il2cpp.h"

void AkPlaylistArray___ctor (AkPlaylistArray_o* __this, intptr_t cPtr, bool cMemoryOwn, const MethodInfo* method_info);
intptr_t AkPlaylistArray__getCPtr (AkPlaylistArray_o* obj, const MethodInfo* method_info);
void AkPlaylistArray__setCPtr (AkPlaylistArray_o* __this, intptr_t cPtr, const MethodInfo* method_info);
void AkPlaylistArray__Finalize (AkPlaylistArray_o* __this, const MethodInfo* method_info);
void AkPlaylistArray__Dispose (AkPlaylistArray_o* __this, const MethodInfo* method_info);
void AkPlaylistArray___ctor (AkPlaylistArray_o* __this, const MethodInfo* method_info);
AkIterator_o* AkPlaylistArray__Begin (AkPlaylistArray_o* __this, const MethodInfo* method_info);
AkIterator_o* AkPlaylistArray__End (AkPlaylistArray_o* __this, const MethodInfo* method_info);
AkIterator_o* AkPlaylistArray__FindEx (AkPlaylistArray_o* __this, AkPlaylistItem_o* in_Item, const MethodInfo* method_info);
AkIterator_o* AkPlaylistArray__Erase (AkPlaylistArray_o* __this, AkIterator_o* in_rIter, const MethodInfo* method_info);
void AkPlaylistArray__Erase (AkPlaylistArray_o* __this, uint32_t in_uIndex, const MethodInfo* method_info);
AkIterator_o* AkPlaylistArray__EraseSwap (AkPlaylistArray_o* __this, AkIterator_o* in_rIter, const MethodInfo* method_info);
bool AkPlaylistArray__IsGrowingAllowed (AkPlaylistArray_o* __this, const MethodInfo* method_info);
int32_t AkPlaylistArray__Reserve (AkPlaylistArray_o* __this, uint32_t in_ulReserve, const MethodInfo* method_info);
uint32_t AkPlaylistArray__Reserved (AkPlaylistArray_o* __this, const MethodInfo* method_info);
void AkPlaylistArray__Term (AkPlaylistArray_o* __this, const MethodInfo* method_info);
uint32_t AkPlaylistArray__Length (AkPlaylistArray_o* __this, const MethodInfo* method_info);
AkPlaylistItem_o* AkPlaylistArray__Data (AkPlaylistArray_o* __this, const MethodInfo* method_info);
bool AkPlaylistArray__IsEmpty (AkPlaylistArray_o* __this, const MethodInfo* method_info);
AkPlaylistItem_o* AkPlaylistArray__Exists (AkPlaylistArray_o* __this, AkPlaylistItem_o* in_Item, const MethodInfo* method_info);
AkPlaylistItem_o* AkPlaylistArray__AddLast (AkPlaylistArray_o* __this, const MethodInfo* method_info);
AkPlaylistItem_o* AkPlaylistArray__AddLast (AkPlaylistArray_o* __this, AkPlaylistItem_o* in_rItem, const MethodInfo* method_info);
AkPlaylistItem_o* AkPlaylistArray__Last (AkPlaylistArray_o* __this, const MethodInfo* method_info);
void AkPlaylistArray__RemoveLast (AkPlaylistArray_o* __this, const MethodInfo* method_info);
int32_t AkPlaylistArray__Remove (AkPlaylistArray_o* __this, AkPlaylistItem_o* in_rItem, const MethodInfo* method_info);
int32_t AkPlaylistArray__RemoveSwap (AkPlaylistArray_o* __this, AkPlaylistItem_o* in_rItem, const MethodInfo* method_info);
void AkPlaylistArray__RemoveAll (AkPlaylistArray_o* __this, const MethodInfo* method_info);
AkPlaylistItem_o* AkPlaylistArray__ItemAtIndex (AkPlaylistArray_o* __this, uint32_t uiIndex, const MethodInfo* method_info);
AkPlaylistItem_o* AkPlaylistArray__Insert (AkPlaylistArray_o* __this, uint32_t in_uIndex, const MethodInfo* method_info);
bool AkPlaylistArray__GrowArray (AkPlaylistArray_o* __this, const MethodInfo* method_info);
bool AkPlaylistArray__GrowArray (AkPlaylistArray_o* __this, uint32_t in_uGrowBy, const MethodInfo* method_info);
bool AkPlaylistArray__Resize (AkPlaylistArray_o* __this, uint32_t in_uiSize, const MethodInfo* method_info);
void AkPlaylistArray__Transfer (AkPlaylistArray_o* __this, AkPlaylistArray_o* in_rSource, const MethodInfo* method_info);
int32_t AkPlaylistArray__Copy (AkPlaylistArray_o* __this, AkPlaylistArray_o* in_rSource, const MethodInfo* method_info);
