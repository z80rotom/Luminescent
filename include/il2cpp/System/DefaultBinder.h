#pragma once

#include "il2cpp.h"

System_Reflection_MethodBase_o* System_DefaultBinder__BindToMethod (System_DefaultBinder_o* __this, int32_t bindingAttr, System_Reflection_MethodBase_array* match, System_Object_array** args, System_Reflection_ParameterModifier_array* modifiers, System_Globalization_CultureInfo_o* cultureInfo, System_String_array* names, Il2CppObject** state, const MethodInfo* method_info);
System_Reflection_FieldInfo_o* System_DefaultBinder__BindToField (System_DefaultBinder_o* __this, int32_t bindingAttr, System_Reflection_FieldInfo_array* match, Il2CppObject* value, System_Globalization_CultureInfo_o* cultureInfo, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_DefaultBinder__SelectMethod (System_DefaultBinder_o* __this, int32_t bindingAttr, System_Reflection_MethodBase_array* match, System_Type_array* types, System_Reflection_ParameterModifier_array* modifiers, const MethodInfo* method_info);
System_Reflection_PropertyInfo_o* System_DefaultBinder__SelectProperty (System_DefaultBinder_o* __this, int32_t bindingAttr, System_Reflection_PropertyInfo_array* match, System_Type_o* returnType, System_Type_array* indexes, System_Reflection_ParameterModifier_array* modifiers, const MethodInfo* method_info);
Il2CppObject* System_DefaultBinder__ChangeType (System_DefaultBinder_o* __this, Il2CppObject* value, System_Type_o* type, System_Globalization_CultureInfo_o* cultureInfo, const MethodInfo* method_info);
void System_DefaultBinder__ReorderArgumentArray (System_DefaultBinder_o* __this, System_Object_array** args, Il2CppObject* state, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_DefaultBinder__ExactBinding (System_Reflection_MethodBase_array* match, System_Type_array* types, System_Reflection_ParameterModifier_array* modifiers, const MethodInfo* method_info);
System_Reflection_PropertyInfo_o* System_DefaultBinder__ExactPropertyBinding (System_Reflection_PropertyInfo_array* match, System_Type_o* returnType, System_Type_array* types, System_Reflection_ParameterModifier_array* modifiers, const MethodInfo* method_info);
int32_t System_DefaultBinder__FindMostSpecific (System_Reflection_ParameterInfo_array* p1, System_Int32_array* paramOrder1, System_Type_o* paramArrayType1, System_Reflection_ParameterInfo_array* p2, System_Int32_array* paramOrder2, System_Type_o* paramArrayType2, System_Type_array* types, System_Object_array* args, const MethodInfo* method_info);
int32_t System_DefaultBinder__FindMostSpecificType (System_Type_o* c1, System_Type_o* c2, System_Type_o* t, const MethodInfo* method_info);
int32_t System_DefaultBinder__FindMostSpecificMethod (System_Reflection_MethodBase_o* m1, System_Int32_array* paramOrder1, System_Type_o* paramArrayType1, System_Reflection_MethodBase_o* m2, System_Int32_array* paramOrder2, System_Type_o* paramArrayType2, System_Type_array* types, System_Object_array* args, const MethodInfo* method_info);
int32_t System_DefaultBinder__FindMostSpecificField (System_Reflection_FieldInfo_o* cur1, System_Reflection_FieldInfo_o* cur2, const MethodInfo* method_info);
int32_t System_DefaultBinder__FindMostSpecificProperty (System_Reflection_PropertyInfo_o* cur1, System_Reflection_PropertyInfo_o* cur2, const MethodInfo* method_info);
bool System_DefaultBinder__CompareMethodSigAndName (System_Reflection_MethodBase_o* m1, System_Reflection_MethodBase_o* m2, const MethodInfo* method_info);
int32_t System_DefaultBinder__GetHierarchyDepth (System_Type_o* t, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_DefaultBinder__FindMostDerivedNewSlotMeth (System_Reflection_MethodBase_array* match, int32_t cMatches, const MethodInfo* method_info);
void System_DefaultBinder__ReorderParams (System_Int32_array* paramOrder, System_Object_array* vars, const MethodInfo* method_info);
bool System_DefaultBinder__CreateParamOrder (System_Int32_array* paramOrder, System_Reflection_ParameterInfo_array* pars, System_String_array* names, const MethodInfo* method_info);
bool System_DefaultBinder__CanConvertPrimitive (System_RuntimeType_o* source, System_RuntimeType_o* target, const MethodInfo* method_info);
bool System_DefaultBinder__CanConvertPrimitiveObjectToType (Il2CppObject* source, System_RuntimeType_o* type, const MethodInfo* method_info);
void System_DefaultBinder___ctor (System_DefaultBinder_o* __this, const MethodInfo* method_info);
