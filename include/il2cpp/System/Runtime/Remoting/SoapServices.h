#pragma once

#include "il2cpp.h"

System_String_o* System_Runtime_Remoting_SoapServices__get_XmlNsForClrTypeWithAssembly (const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_SoapServices__get_XmlNsForClrTypeWithNs (const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_SoapServices__get_XmlNsForClrTypeWithNsAndAssembly (const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_SoapServices__CodeXmlNamespaceForClrTypeNamespace (System_String_o* typeNamespace, System_String_o* assemblyName, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_SoapServices__GetNameKey (System_String_o* name, System_String_o* namspace, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_SoapServices__GetAssemblyName (System_Reflection_MethodBase_o* mb, const MethodInfo* method_info);
bool System_Runtime_Remoting_SoapServices__GetXmlElementForInteropType (System_Type_o* type, System_String_o** xmlElement, System_String_o** xmlNamespace, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_SoapServices__GetXmlNamespaceForMethodCall (System_Reflection_MethodBase_o* mb, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_SoapServices__GetXmlNamespaceForMethodResponse (System_Reflection_MethodBase_o* mb, const MethodInfo* method_info);
bool System_Runtime_Remoting_SoapServices__GetXmlTypeForInteropType (System_Type_o* type, System_String_o** xmlType, System_String_o** xmlTypeNamespace, const MethodInfo* method_info);
void System_Runtime_Remoting_SoapServices__PreLoad (System_Reflection_Assembly_o* assembly, const MethodInfo* method_info);
void System_Runtime_Remoting_SoapServices__PreLoad (System_Type_o* type, const MethodInfo* method_info);
void System_Runtime_Remoting_SoapServices__RegisterInteropXmlElement (System_String_o* xmlElement, System_String_o* xmlNamespace, System_Type_o* type, const MethodInfo* method_info);
void System_Runtime_Remoting_SoapServices__RegisterInteropXmlType (System_String_o* xmlType, System_String_o* xmlTypeNamespace, System_Type_o* type, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_SoapServices__EncodeNs (System_String_o* ns, const MethodInfo* method_info);
void System_Runtime_Remoting_SoapServices___cctor (const MethodInfo* method_info);
