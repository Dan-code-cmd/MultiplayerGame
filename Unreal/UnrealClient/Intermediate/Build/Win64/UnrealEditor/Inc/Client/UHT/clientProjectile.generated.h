// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "clientProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CLIENT_clientProjectile_generated_h
#error "clientProjectile.generated.h already included, missing '#pragma once' in clientProjectile.h"
#endif
#define CLIENT_clientProjectile_generated_h

#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_SPARSE_DATA
#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_ACCESSORS
#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientProjectile(); \
	friend struct Z_Construct_UClass_AClientProjectile_Statics; \
public: \
	DECLARE_CLASS(AClientProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Client"), NO_API) \
	DECLARE_SERIALIZER(AClientProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientProjectile(AClientProjectile&&); \
	NO_API AClientProjectile(const AClientProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClientProjectile) \
	NO_API virtual ~AClientProjectile();


#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_12_PROLOG
#define FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_SPARSE_DATA \
	FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_ACCESSORS \
	FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENT_API UClass* StaticClass<class AClientProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Year_3_Sem_2_Commercial_Game_Dev_Unreal_Client_Unreal_Client_Client_Source_Client_clientProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
