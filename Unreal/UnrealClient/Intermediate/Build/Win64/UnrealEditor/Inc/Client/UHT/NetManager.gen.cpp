// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Client/NetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetManager() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_ANetManager();
	CLIENT_API UClass* Z_Construct_UClass_ANetManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Client();
// End Cross Module References
	void ANetManager::StaticRegisterNativesANetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetManager);
	UClass* Z_Construct_UClass_ANetManager_NoRegister()
	{
		return ANetManager::StaticClass();
	}
	struct Z_Construct_UClass_ANetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Client,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetManager.h" },
		{ "ModuleRelativePath", "NetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetManager_Statics::ClassParams = {
		&ANetManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANetManager()
	{
		if (!Z_Registration_Info_UClass_ANetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetManager.OuterSingleton, Z_Construct_UClass_ANetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetManager.OuterSingleton;
	}
	template<> CLIENT_API UClass* StaticClass<ANetManager>()
	{
		return ANetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetManager);
	ANetManager::~ANetManager() {}
	struct Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetManager, ANetManager::StaticClass, TEXT("ANetManager"), &Z_Registration_Info_UClass_ANetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetManager), 3611322791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetManager_h_713096623(TEXT("/Script/Client"),
		Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
