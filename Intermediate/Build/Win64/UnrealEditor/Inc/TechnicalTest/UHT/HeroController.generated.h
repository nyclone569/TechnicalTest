// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/HeroController.h"

#ifdef TECHNICALTEST_HeroController_generated_h
#error "HeroController.generated.h already included, missing '#pragma once' in HeroController.h"
#endif
#define TECHNICALTEST_HeroController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHeroController **********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroController_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_HeroController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroController(); \
	friend struct Z_Construct_UClass_AHeroController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroController_NoRegister(); \
public: \
	DECLARE_CLASS2(AHeroController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_AHeroController_NoRegister) \
	DECLARE_SERIALIZER(AHeroController) \
	virtual UObject* _getUObject() const override { return const_cast<AHeroController*>(this); }


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_HeroController_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHeroController(AHeroController&&) = delete; \
	AHeroController(const AHeroController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroController) \
	NO_API virtual ~AHeroController();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_HeroController_h_13_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_HeroController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_HeroController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_HeroController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHeroController;

// ********** End Class AHeroController ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_HeroController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
