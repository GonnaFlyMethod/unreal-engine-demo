// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngineDemo_init() {}
	UNREALENGINEDEMO_API UFunction* Z_Construct_UDelegateFunction_UnrealEngineDemo_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealEngineDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealEngineDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealEngineDemo.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealEngineDemo_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealEngineDemo",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE5426190,
				0x72417E78,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealEngineDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealEngineDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealEngineDemo(Z_Construct_UPackage__Script_UnrealEngineDemo, TEXT("/Script/UnrealEngineDemo"), Z_Registration_Info_UPackage__Script_UnrealEngineDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE5426190, 0x72417E78));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
