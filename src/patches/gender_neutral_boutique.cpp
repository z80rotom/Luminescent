#include "il2cpp.hpp"
#include "il2cpp-api.h"

#include "logger.hpp"
#include "util.hpp"

namespace XLSXContent
{
    namespace ShopTable
    {
        struct SheetBoutiqueShop_o;
    }

    struct CharacterDressData_SheetData_o;
}

using namespace XLSXContent;
using namespace XLSXContent::ShopTable;

namespace Dpr
{
    namespace UI
    {
        struct ShopBoutiqueItemItem_Param_Fields {
            SheetBoutiqueShop_o* data;
            CharacterDressData_SheetData_o* dressData;
        };
        
        struct ShopBoutiqueItemItem_Param_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };
        
        struct ShopBoutiqueItemItem_Param_c {
            Il2CppClass_1 _1;
            void* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            ShopBoutiqueItemItem_Param_VTable vtable;
        };
        
        struct ShopBoutiqueItemItem_Param_o {
            ShopBoutiqueItemItem_Param_c *klass;
            void *monitor;
            ShopBoutiqueItemItem_Param_Fields fields;
        };

        extern void ** PTR_ShopBoutiqueItemItem_Param_TypeInfo;
    }
}

using namespace Dpr::UI;

namespace System
{
    namespace Collections
    {
        namespace Generic
        {
            struct ListXMenuTopItem_o;
            struct XMenuTopItem_o;
            struct List_ShopBoutiqueItemItem_Param_o;

            void ListXMenuTopItem_Add(List_ShopBoutiqueItemItem_Param_o * itemParams, ShopBoutiqueItemItem_Param_o * item, MethodInfo * method);

            extern MethodInfo ** List_ShopBoutiqueItemItem_Param_Add_MethodInfo;
        }
    }
}


namespace GameData
{
    struct DataManager
    {
        static SheetBoutiqueShop_o* GetBoutiqueShopData(int32_t dressId, MethodInfo * method);       

        static CharacterDressData_SheetData_o * GetCharacterDressData(int32_t dressId, MethodInfo * method);
    };
}

using namespace System::Collections::Generic;
using namespace GameData;

void AddList_ShopBoutiqueItemItem_Param(List_ShopBoutiqueItemItem_Param_o *itemParams, int32_t dressId)
{
    ShopBoutiqueItemItem_Param_o * item = 
        (ShopBoutiqueItemItem_Param_o *) il2cpp_object_new(*PTR_ShopBoutiqueItemItem_Param_TypeInfo);
    
    item->fields.data = DataManager::GetBoutiqueShopData(dressId, (MethodInfo *) nullptr);
    item->fields.dressData = DataManager::GetCharacterDressData(dressId, (MethodInfo *) nullptr);
    ListXMenuTopItem_Add(itemParams, item,
        *List_ShopBoutiqueItemItem_Param_Add_MethodInfo);
}

extern void ** PTR_DATA_04bba8a8;

int32_t Dpr_UI_ShopBoutiqueChange_SetupBoutiqueItemParams(
    List_ShopBoutiqueItemItem_Param_o *itemParams,
    MethodInfo *method)
{
    system_load_typeinfo(*PTR_DATA_04bba8a8);

    for (int32_t dressId = 0; dressId < 13; dressId++)
    {
        if (dressId == 1)
        {
            continue;
        }
        AddList_ShopBoutiqueItemItem_Param(itemParams, dressId); // Male Outfits
        AddList_ShopBoutiqueItemItem_Param(itemParams, dressId+100); // Female Outfits
    }

  return 0; // Returning zero never hurt anyone right?
}