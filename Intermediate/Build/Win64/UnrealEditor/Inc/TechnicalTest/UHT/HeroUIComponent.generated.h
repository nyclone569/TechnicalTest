// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/HeroUIComponent.h"

#ifdef TECHNICALTEST_HeroUIComponent_generated_h
#error "HeroUIComponent.generated.h already included, missing '#pragma once' in HeroUIComponent.h"
#endif
#define TECHNICALTEST_HeroUIComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTexture2D;

// ********** Begin Delegate FOnEquippedWeaponChangedDelegate **************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h_9_DELEGATE \
TECHNICALTEST_API void FOnEquippedWeaponChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChangedDelegate, const TSoftObjectPtr<UTexture2D>& SoftWeaponIcon);


// ********** End Delegate FOnEquippedWeaponChangedDelegate ****************************************

// ********** Begin Class UHeroUIComponent *********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroUIComponent(); \
	friend struct Z_Construct_UClass_UHeroUIComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHeroUIComponent, UPawnUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UHeroUIComponent_NoRegister) \
	DECLARE_SERIALIZER(UHeroUIComponent)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeroUIComponent(UHeroUIComponent&&) = delete; \
	UHeroUIComponent(const UHeroUIComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroUIComponent) \
	NO_API virtual ~UHeroUIComponent();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h_14_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeroUIComponent;

// ********** End Class UHeroUIComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
