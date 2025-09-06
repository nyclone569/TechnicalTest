// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Combat/EnemyCombatComponent.h"

#ifdef TECHNICALTEST_EnemyCombatComponent_generated_h
#error "EnemyCombatComponent.generated.h already included, missing '#pragma once' in EnemyCombatComponent.h"
#endif
#define TECHNICALTEST_EnemyCombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnemyCombatComponent ****************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyCombatComponent(); \
	friend struct Z_Construct_UClass_UEnemyCombatComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnemyCombatComponent, UPawnCombatComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UEnemyCombatComponent_NoRegister) \
	DECLARE_SERIALIZER(UEnemyCombatComponent)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnemyCombatComponent(UEnemyCombatComponent&&) = delete; \
	UEnemyCombatComponent(const UEnemyCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyCombatComponent) \
	NO_API virtual ~UEnemyCombatComponent();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h_12_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnemyCombatComponent;

// ********** End Class UEnemyCombatComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
