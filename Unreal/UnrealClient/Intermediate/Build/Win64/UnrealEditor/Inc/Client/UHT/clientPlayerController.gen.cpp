// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Client/clientPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeclientPlayerController() {}
// Cross Module References
	CLIENT_API UClass* Z_Construct_UClass_AClientPlayerController();
	CLIENT_API UClass* Z_Construct_UClass_AClientPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Client();
// End Cross Module References
	void AClientPlayerController::StaticRegisterNativesAClientPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClientPlayerController);
	UClass* Z_Construct_UClass_AClientPlayerController_NoRegister()
	{
		return AClientPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AClientPlayerController_Statics
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
	UObject* (*const Z_Construct_UClass_AClientPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Client,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClientPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "clientPlayerController.h" },
		{ "ModuleRelativePath", "clientPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "clientPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClientPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClientPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClientPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AClientPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClientPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClientPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClientPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClientPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClientPlayerController_Statics::ClassParams = {
		&AClientPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AClientPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AClientPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClientPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AClientPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClientPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AClientPlayerController()
	{
		if (!Z_Registration_Info_UClass_AClientPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClientPlayerController.OuterSingleton, Z_Construct_UClass_AClientPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClientPlayerController.OuterSingleton;
	}
	template<> CLIENT_API UClass* StaticClass<AClientPlayerController>()
	{
		return AClientPlayerController::StaticClass();
	}
	AClientPlayerController::AClientPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClientPlayerController);
	AClientPlayerController::~AClientPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClientPlayerController, AClientPlayerController::StaticClass, TEXT("AClientPlayerController"), &Z_Registration_Info_UClass_AClientPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClientPlayerController), 3568596477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientPlayerController_h_2782565057(TEXT("/Script/Client"),
		Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
