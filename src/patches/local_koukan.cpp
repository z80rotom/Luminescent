// #include "il2cpp.hpp"
// #include "Pml/PokePara/CoreParam.h"

// namespace XLSXContent
// {
//     struct LocalKoukanData_Sheetdata_o;
// }

// namespace Pml
// {
//     namespace PokePara
//     {
//         // struct Pml_PokePara_PokemonParam_StaticFields {
//         //     struct System_Byte_array* sParamSerializeBuffer;
//         // };
//         struct PokemonParam_Fields {
//             CoreParam_Fields super;
//         };
//         struct PokemonParam_VTable {
//             VirtualInvokeData _0_Equals;
//             VirtualInvokeData _1_Finalize;
//             VirtualInvokeData _2_GetHashCode;
//             VirtualInvokeData _3_ToString;
//             VirtualInvokeData _4_Serialize_Core;
//             VirtualInvokeData _5_Serialize_Core;
//             VirtualInvokeData _6_Deserialize_Core;
//             VirtualInvokeData _7_Deserialize_Core;
//         };
//         struct PokemonParam_c {
//             Il2CppClass_1 _1;
//             struct PokemonParam_StaticFields* static_fields;
//             Il2CppRGCTXData* rgctx_data;
//             Il2CppClass_2 _2;
//             PokemonParam_VTable vtable;
//         };
//         struct PokemonParam_o {
//             PokemonParam_c *klass;
//             void *monitor;
//             PokemonParam_Fields fields;
//         };
//     }
// }

// using namespace Pml::PokePara;
// using namespace XLSXContent;

// struct LocalKoukan
// {
//     static LocalKoukanData_Sheetdata_o * GetTargetData(int32_t npcindex, int32_t lang, MethodInfo *method);
//     static PokemonParam_o * CreateTradePokeParam(LocalKoukanData_Sheetdata_o *data, MethodInfo *method);
// };

// static int32_t s_npcindex = -1;
// static int32_t s_lang = -1;

// LocalKoukanData_Sheetdata_o * LocalKoukan_GetTargetData(int32_t npcindex, int32_t lang, MethodInfo *method)
// {
//     s_npcindex = npcindex;
//     s_lang = lang;
//     return LocalKoukan::GetTargetData(npcindex, lang, method);
// }

// PokemonParam_o * LocalKoukan_CreateTradePokeParam(LocalKoukanData_Sheetdata_o *data, MethodInfo *method)
// {
//     PokemonParam_o * pokeParam = LocalKoukan::CreateTradePokeParam(data, method);

//     if (s_npcindex != -1)
//     {
//         Accessor * accessor = pokeParam->fields.super.m_accessor;
//         accessor->SetTalentAgi(31, (MethodInfo *) nullptr);
//         accessor->SetTalentAtk(31, (MethodInfo *) nullptr);
//         accessor->SetTalentDef(31, (MethodInfo *) nullptr);
//         accessor->SetTalentHp(31, (MethodInfo *) nullptr);
//         accessor->SetTalentSpAtk(31, (MethodInfo *) nullptr);
//         accessor->SetTalentSpDef(31, (MethodInfo *) nullptr);
//     }

//     return pokeParam;
// }