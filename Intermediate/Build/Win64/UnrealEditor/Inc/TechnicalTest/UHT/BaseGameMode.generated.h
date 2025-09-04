// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/BaseGameMode.h"

#ifdef TECHNICALTEST_BaseGameMode_generated_h
#error "BaseGameMode.generated.h already included, missing '#pragma once' in BaseGameMode.h"
#endif
#define TECHNICALTEST_BaseGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseGameMode ************************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_ABaseGameMode_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_GameModes_BaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGameMode(); \
	friend struct Z_Construct_UClass_ABaseGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_ABaseGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_ABaseGameMode_NoRegister) \
	DECLARE_SERIALIZER(ABaseGameMode)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_GameModes_BaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseGameMode(ABaseGameMode&&) = delete; \
	ABaseGameMode(const ABaseGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGameMode) \
	NO_API virtual ~ABaseGameMode();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_GameModes_BaseGameMode_h_12_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_GameModes_BaseGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_GameModes_BaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_GameModes_BaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseGameMode;

// ********** End Class ABaseGameMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_GameModes_BaseGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
