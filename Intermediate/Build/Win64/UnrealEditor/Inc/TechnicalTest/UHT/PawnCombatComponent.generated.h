// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Combat/PawnCombatComponent.h"

#ifdef TECHNICALTEST_PawnCombatComponent_generated_h
#error "PawnCombatComponent.generated.h already included, missing '#pragma once' in PawnCombatComponent.h"
#endif
#define TECHNICALTEST_PawnCombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMyWeaponBase;
enum class EToggleDamageType : uint8;
struct FGameplayTag;

// ********** Begin Class UPawnCombatComponent *****************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleWeaponCollision); \
	DECLARE_FUNCTION(execGetCharacterCurrentEquippedWeapon); \
	DECLARE_FUNCTION(execGetCharacterCarriedWeaponByTag); \
	DECLARE_FUNCTION(execRegisterSpawnedWeapon);


TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnCombatComponent(); \
	friend struct Z_Construct_UClass_UPawnCombatComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPawnCombatComponent, UPawnExtentionComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UPawnCombatComponent_NoRegister) \
	DECLARE_SERIALIZER(UPawnCombatComponent)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPawnCombatComponent(UPawnCombatComponent&&) = delete; \
	UPawnCombatComponent(const UPawnCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnCombatComponent) \
	NO_API virtual ~UPawnCombatComponent();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h_22_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPawnCombatComponent;

// ********** End Class UPawnCombatComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_PawnCombatComponent_h

// ********** Begin Enum EToggleDamageType *********************************************************
#define FOREACH_ENUM_ETOGGLEDAMAGETYPE(op) \
	op(EToggleDamageType::CurrentEquippedWeapon) \
	op(EToggleDamageType::LeftHand) \
	op(EToggleDamageType::RightHand) 

enum class EToggleDamageType : uint8;
template<> struct TIsUEnumClass<EToggleDamageType> { enum { Value = true }; };
template<> TECHNICALTEST_API UEnum* StaticEnum<EToggleDamageType>();
// ********** End Enum EToggleDamageType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
