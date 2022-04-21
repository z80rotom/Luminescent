#ifndef _GUARD_IL2CPP_HPP_
#define _GUARD_IL2CPP_HPP_

// #include <switch.h>

#include <cstdint>
#include <cstring>

typedef void(*Il2CppMethodPointer)();

struct MethodInfo;

struct VirtualInvokeData
{
    Il2CppMethodPointer methodPtr;
    const MethodInfo* method;
};

struct Il2CppType
{
    void* data;
    unsigned int bits;
};

struct Il2CppClass;

struct Il2CppClass_1
{
    void* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    void *generic_class;
    void* typeDefinition;
    void* interopData;
    Il2CppClass* klass;
    void* fields;
    void* events;
    void* properties;
    void* methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
    void* interfaceOffsets;
};

struct Il2CppClass_2
{
    Il2CppClass** typeHierarchy;
    void *unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished;
    size_t cctor_thread;
    int32_t genericContainerIndex;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t bitflags1;
    uint8_t bitflags2;
};

union Il2CppRGCTXData
{
    void* rgctxDataDummy;
    const MethodInfo* method;
    const Il2CppType* type;
    Il2CppClass* klass;
};

struct Il2CppClass
{
    Il2CppClass_1 _1;
    void* static_fields;
    Il2CppRGCTXData* rgctx_data;
    Il2CppClass_2 _2;
    VirtualInvokeData vtable[255];
};

struct Il2CppObject
{
    Il2CppClass *klass;
    void *monitor;
};

typedef uintptr_t il2cpp_array_size_t;
typedef int32_t il2cpp_array_lower_bound_t;
struct Il2CppArrayBounds
{
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
};

struct System_Boolean_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	bool m_Items[65535];
};

struct System_Byte_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	uint8_t m_Items[65535];
};

struct System_UInt16_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	uint16_t m_Items[65535];
};

struct System_UInt32_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	uint32_t m_Items[65535];
};

struct System_Int32_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	int32_t m_Items[65535];
};

struct System_UInt64_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	uint64_t m_Items[65535];
};

struct UnityEngine_Vector2Int_Fields {
	int32_t m_X;
	int32_t m_Y;
};

struct UnityEngine_Vector3_Fields {
	float x;
	float y;
	float z;
};

struct UnityEngine_Vector2_Fields {
	float x;
	float y;
};

struct UnityEngine_Vector2Int_o {
	UnityEngine_Vector2Int_Fields fields;
};

struct UnityEngine_Vector2_o {
	UnityEngine_Vector2_Fields fields;
};

struct UnityEngine_Vector3_o {
	UnityEngine_Vector3_Fields fields;
};

struct UnityEngine_Quaternion_Fields {
	float x;
	float y;
	float z;
	float w;
};

struct UnityEngine_Quaternion_o {
	UnityEngine_Quaternion_Fields fields;
};

struct UnityEngine_Vector3_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	UnityEngine_Vector3_o m_Items[65535];
};

struct UnityEngine_Object_Fields {
	intptr_t m_CachedPtr;
};

struct UnityEngine_ScriptableObject_Fields {
    UnityEngine_Object_Fields super;
};

struct UnityEngine_Component_Fields {
 UnityEngine_Object_Fields super;
};

struct UnityEngine_Behaviour_Fields {
 UnityEngine_Component_Fields super;
};

struct UnityEngine_MonoBehaviour_Fields {
 UnityEngine_Behaviour_Fields super;
};

struct System_Delegate_Fields {
	intptr_t method_ptr;
	intptr_t invoke_impl;
	Il2CppObject* m_target;
	intptr_t method;
	intptr_t delegate_trampoline;
	intptr_t extra_arg;
	intptr_t method_code;
	struct System_Reflection_MethodInfo_o* method_info;
	struct System_Reflection_MethodInfo_o* original_method_info;
	struct System_DelegateData_o* data;
	bool method_is_virtual;
};

struct System_MulticastDelegate_Fields {
	System_Delegate_Fields super;
	struct System_Delegate_array* delegates;
};

#endif