// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/MyGameplayAbility.h"

#ifdef TECHNICALTEST_MyGameplayAbility_generated_h
#error "MyGameplayAbility.generated.h already included, missing '#pragma once' in MyGameplayAbility.h"
#endif
#define TECHNICALTEST_MyGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyGameplayAbility *******************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameplayAbility(); \
	friend struct Z_Construct_UClass_UMyGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UMyGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UMyGameplayAbility)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyGameplayAbility(UMyGameplayAbility&&) = delete; \
	UMyGameplayAbility(const UMyGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameplayAbility) \
	NO_API virtual ~UMyGameplayAbility();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h_18_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h_21_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyGameplayAbility;

// ********** End Class UMyGameplayAbility *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h

// ********** Begin Enum EMyAbilityActivaitonPolicy ************************************************
#define FOREACH_ENUM_EMYABILITYACTIVAITONPOLICY(op) \
	op(EMyAbilityActivaitonPolicy::OnTriggered) \
	op(EMyAbilityActivaitonPolicy::OnGiven) 

enum class EMyAbilityActivaitonPolicy : uint8;
template<> struct TIsUEnumClass<EMyAbilityActivaitonPolicy> { enum { Value = true }; };
template<> TECHNICALTEST_API UEnum* StaticEnum<EMyAbilityActivaitonPolicy>();
// ********** End Enum EMyAbilityActivaitonPolicy **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
