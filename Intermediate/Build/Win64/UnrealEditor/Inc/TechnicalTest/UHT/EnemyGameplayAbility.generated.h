// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/EnemyGameplayAbility.h"

#ifdef TECHNICALTEST_EnemyGameplayAbility_generated_h
#error "EnemyGameplayAbility.generated.h already included, missing '#pragma once' in EnemyGameplayAbility.h"
#endif
#define TECHNICALTEST_EnemyGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AEnemyCharacter;
class UEnemyCombatComponent;

// ********** Begin Class UEnemyGameplayAbility ****************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnemyCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetEnemyCharacterFromActorInfo);


TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyGameplayAbility(); \
	friend struct Z_Construct_UClass_UEnemyGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnemyGameplayAbility, UMyGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UEnemyGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UEnemyGameplayAbility)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnemyGameplayAbility(UEnemyGameplayAbility&&) = delete; \
	UEnemyGameplayAbility(const UEnemyGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyGameplayAbility) \
	NO_API virtual ~UEnemyGameplayAbility();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_14_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnemyGameplayAbility;

// ********** End Class UEnemyGameplayAbility ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
