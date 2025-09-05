// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/HeroGameplayAbility.h"

#ifdef TECHNICALTEST_HeroGameplayAbility_generated_h
#error "HeroGameplayAbility.generated.h already included, missing '#pragma once' in HeroGameplayAbility.h"
#endif
#define TECHNICALTEST_HeroGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AHeroCharacter;
class AHeroController;
class UHeroCombatComponent;

// ********** Begin Class UHeroGameplayAbility *****************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetHeroControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetHeroCharacterFromActorInfo);


TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroGameplayAbility(); \
	friend struct Z_Construct_UClass_UHeroGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UHeroGameplayAbility, UMyGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UHeroGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UHeroGameplayAbility)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeroGameplayAbility(UHeroGameplayAbility&&) = delete; \
	UHeroGameplayAbility(const UHeroGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroGameplayAbility) \
	NO_API virtual ~UHeroGameplayAbility();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h_15_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeroGameplayAbility;

// ********** End Class UHeroGameplayAbility *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
