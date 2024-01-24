// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineDemo/UnrealEngineDemoPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngineDemoPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UNREALENGINEDEMO_API UClass* Z_Construct_UClass_AUnrealEngineDemoPlayerController();
	UNREALENGINEDEMO_API UClass* Z_Construct_UClass_AUnrealEngineDemoPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineDemo();
// End Cross Module References
	void AUnrealEngineDemoPlayerController::StaticRegisterNativesAUnrealEngineDemoPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealEngineDemoPlayerController);
	UClass* Z_Construct_UClass_AUnrealEngineDemoPlayerController_NoRegister()
	{
		return AUnrealEngineDemoPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UnrealEngineDemoPlayerController.h" },
		{ "ModuleRelativePath", "UnrealEngineDemoPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "UnrealEngineDemoPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnrealEngineDemoPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealEngineDemoPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::ClassParams = {
		&AUnrealEngineDemoPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AUnrealEngineDemoPlayerController()
	{
		if (!Z_Registration_Info_UClass_AUnrealEngineDemoPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealEngineDemoPlayerController.OuterSingleton, Z_Construct_UClass_AUnrealEngineDemoPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealEngineDemoPlayerController.OuterSingleton;
	}
	template<> UNREALENGINEDEMO_API UClass* StaticClass<AUnrealEngineDemoPlayerController>()
	{
		return AUnrealEngineDemoPlayerController::StaticClass();
	}
	AUnrealEngineDemoPlayerController::AUnrealEngineDemoPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealEngineDemoPlayerController);
	AUnrealEngineDemoPlayerController::~AUnrealEngineDemoPlayerController() {}
	struct Z_CompiledInDeferFile_FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealEngineDemoPlayerController, AUnrealEngineDemoPlayerController::StaticClass, TEXT("AUnrealEngineDemoPlayerController"), &Z_Registration_Info_UClass_AUnrealEngineDemoPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealEngineDemoPlayerController), 2334084535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoPlayerController_h_1094585747(TEXT("/Script/UnrealEngineDemo"),
		Z_CompiledInDeferFile_FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_engine_demo_UnrealEngineDemo_Source_UnrealEngineDemo_UnrealEngineDemoPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
