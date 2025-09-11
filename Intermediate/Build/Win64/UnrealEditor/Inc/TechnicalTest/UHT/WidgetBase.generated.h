// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/WidgetBase.h"

#ifdef TECHNICALTEST_WidgetBase_generated_h
#error "WidgetBase.generated.h already included, missing '#pragma once' in WidgetBase.h"
#endif
#define TECHNICALTEST_WidgetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UEnemyUIComponent;
class UHeroUIComponent;

// ********** Begin Class UWidgetBase **************************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitEnemyCreatedWidget);


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_CALLBACK_WRAPPERS
TECHNICALTEST_API UClass* Z_Construct_UClass_UWidgetBase_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBase(); \
	friend struct Z_Construct_UClass_UWidgetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UWidgetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UWidgetBase_NoRegister) \
	DECLARE_SERIALIZER(UWidgetBase)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetBase(UWidgetBase&&) = delete; \
	UWidgetBase(const UWidgetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBase) \
	NO_API virtual ~UWidgetBase();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_14_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_CALLBACK_WRAPPERS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetBase;

// ********** End Class UWidgetBase ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
