// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Input/MyInputComponent.h"

#ifdef TECHNICALTEST_MyInputComponent_generated_h
#error "MyInputComponent.generated.h already included, missing '#pragma once' in MyInputComponent.h"
#endif
#define TECHNICALTEST_MyInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyInputComponent ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyInputComponent_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Input_MyInputComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyInputComponent(); \
	friend struct Z_Construct_UClass_UMyInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UMyInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyInputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UMyInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UMyInputComponent)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Input_MyInputComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyInputComponent(UMyInputComponent&&) = delete; \
	UMyInputComponent(const UMyInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInputComponent) \
	NO_API virtual ~UMyInputComponent();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Input_MyInputComponent_h_13_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Input_MyInputComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Input_MyInputComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Input_MyInputComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyInputComponent;

// ********** End Class UMyInputComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Input_MyInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
