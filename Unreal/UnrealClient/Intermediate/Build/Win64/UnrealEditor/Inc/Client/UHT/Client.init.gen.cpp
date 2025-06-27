// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClient_init() {}
	CLIENT_API UFunction* Z_Construct_UDelegateFunction_Client_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Client;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Client()
	{
		if (!Z_Registration_Info_UPackage__Script_Client.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Client_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Client",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x116A824F,
				0x65786294,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Client.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Client.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Client(Z_Construct_UPackage__Script_Client, TEXT("/Script/Client"), Z_Registration_Info_UPackage__Script_Client, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x116A824F, 0x65786294));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
