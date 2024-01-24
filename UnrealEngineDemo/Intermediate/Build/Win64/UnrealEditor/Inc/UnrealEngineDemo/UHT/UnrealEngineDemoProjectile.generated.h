// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealEngineDemoProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UNREALENGINEDEMO_UnrealEngineDemoProjectile_generated_h
#error "UnrealEngineDemoProjectile.generated.h already included, missing '#pragma once' in UnrealEngineDemoProjectile.h"
#endif
#define UNREALENGINEDEMO_UnrealEngineDemoProjectile_generated_h

#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_SPARSE_DATA
#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_ACCESSORS
#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealEngineDemoProjectile(); \
	friend struct Z_Construct_UClass_AUnrealEngineDemoProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealEngineDemoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEngineDemo"), NO_API) \
	DECLARE_SERIALIZER(AUnrealEngineDemoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealEngineDemoProjectile(AUnrealEngineDemoProjectile&&); \
	NO_API AUnrealEngineDemoProjectile(const AUnrealEngineDemoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealEngineDemoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealEngineDemoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealEngineDemoProjectile) \
	NO_API virtual ~AUnrealEngineDemoProjectile();


#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_12_PROLOG
#define FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_SPARSE_DATA \
	FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_ACCESSORS \
	FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALENGINEDEMO_API UClass* StaticClass<class AUnrealEngineDemoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
