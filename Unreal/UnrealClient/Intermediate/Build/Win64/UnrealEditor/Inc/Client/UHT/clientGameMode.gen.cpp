// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Client/clientGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeclientGameMode() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_AClientGameMode();
	CLIENT_API UClass* Z_Construct_UClass_AClientGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Client();
// End Cross Module References
	void AClientGameMode::StaticRegisterNativesAClientGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClientGameMode);
	UClass* Z_Construct_UClass_AClientGameMode_NoRegister()
	{
		return AClientGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AClientGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClientGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Client,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClientGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "clientGameMode.h" },
		{ "ModuleRelativePath", "clientGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClientGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClientGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClientGameMode_Statics::ClassParams = {
		&AClientGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClientGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AClientGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AClientGameMode()
	{
		if (!Z_Registration_Info_UClass_AClientGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClientGameMode.OuterSingleton, Z_Construct_UClass_AClientGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClientGameMode.OuterSingleton;
	}
	template<> CLIENT_API UClass* StaticClass<AClientGameMode>()
	{
		return AClientGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClientGameMode);
	AClientGameMode::~AClientGameMode() {}
	struct Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClientGameMode, AClientGameMode::StaticClass, TEXT("AClientGameMode"), &Z_Registration_Info_UClass_AClientGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClientGameMode), 1925226751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientGameMode_h_3550023353(TEXT("/Script/Client"),
		Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
