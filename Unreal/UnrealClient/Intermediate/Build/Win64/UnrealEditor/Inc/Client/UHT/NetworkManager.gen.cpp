// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Client/NetworkManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkManager() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_ANetworkManager();
	CLIENT_API UClass* Z_Construct_UClass_ANetworkManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Client();
// End Cross Module References
	void ANetworkManager::StaticRegisterNativesANetworkManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkManager);
	UClass* Z_Construct_UClass_ANetworkManager_NoRegister()
	{
		return ANetworkManager::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Client,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetworkManager.h" },
		{ "ModuleRelativePath", "NetworkManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkManager_Statics::ClassParams = {
		&ANetworkManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANetworkManager()
	{
		if (!Z_Registration_Info_UClass_ANetworkManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkManager.OuterSingleton, Z_Construct_UClass_ANetworkManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetworkManager.OuterSingleton;
	}
	template<> CLIENT_API UClass* StaticClass<ANetworkManager>()
	{
		return ANetworkManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkManager);
	ANetworkManager::~ANetworkManager() {}
	struct Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetworkManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetworkManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkManager, ANetworkManager::StaticClass, TEXT("ANetworkManager"), &Z_Registration_Info_UClass_ANetworkManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkManager), 3462902782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetworkManager_h_1747851243(TEXT("/Script/Client"),
		Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetworkManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_NetworkManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
