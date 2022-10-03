
struct UgMainProc_StaticFields {
	struct Dpr_Field_Walking_UgWalkingAIManager_o* walkingManager;
	bool isEntering;
	struct UgMainProc_CheckFormParam_array* _checkFormParams;
};

struct UgMainProc_SimbolMons_Fields {
	struct Pml_PokePara_PokemonParam_o* pokeParam;
	struct XLSXContent_PokemonInfo_SheetCatalog_o* catalog;
	struct UnityEngine_Vector3_o defaultPos;
	bool Active;
	bool isLoaded;
	int32_t moveType;
	struct UnityEngine_GameObject_o* gameObject;
	struct UnityEngine_Transform_o* transform;
	struct FieldPokemonEntity_o* entity;
};

struct UgMainProc_SimbolMons_o {
	UgMainProc_SimbolMons_c *klass;
	void *monitor;
	UgMainProc_SimbolMons_Fields fields;
};