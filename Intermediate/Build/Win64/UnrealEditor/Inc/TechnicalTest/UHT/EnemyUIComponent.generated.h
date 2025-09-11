// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/EnemyUIComponent.h"

#ifdef TECHNICALTEST_EnemyUIComponent_generated_h
#error "EnemyUIComponent.generated.h already included, missing '#pragma once' in EnemyUIComponent.h"
#endif
#define TECHNICALTEST_EnemyUIComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnemyUIComponent ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyUIComponent(); \
	friend struct Z_Construct_UClass_UEnemyUIComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnemyUIComponent, UPawnUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UEnemyUIComponent_NoRegister) \
	DECLARE_SERIALIZER(UEnemyUIComponent)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnemyUIComponent(UEnemyUIComponent&&) = delete; \
	UEnemyUIComponent(const UEnemyUIComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyUIComponent) \
	NO_API virtual ~UEnemyUIComponent();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h_12_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnemyUIComponent;

// ********** End Class UEnemyUIComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
