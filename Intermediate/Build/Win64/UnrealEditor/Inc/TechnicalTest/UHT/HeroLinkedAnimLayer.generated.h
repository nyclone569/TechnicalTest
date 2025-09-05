// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/Hero/HeroLinkedAnimLayer.h"

#ifdef TECHNICALTEST_HeroLinkedAnimLayer_generated_h
#error "HeroLinkedAnimLayer.generated.h already included, missing '#pragma once' in HeroLinkedAnimLayer.h"
#endif
#define TECHNICALTEST_HeroLinkedAnimLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UHeroAnimInstance;

// ********** Begin Class UHeroLinkedAnimLayer *****************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroAnimInstance);


TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroLinkedAnimLayer(); \
	friend struct Z_Construct_UClass_UHeroLinkedAnimLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UHeroLinkedAnimLayer, UBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister) \
	DECLARE_SERIALIZER(UHeroLinkedAnimLayer)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeroLinkedAnimLayer(UHeroLinkedAnimLayer&&) = delete; \
	UHeroLinkedAnimLayer(const UHeroLinkedAnimLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroLinkedAnimLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroLinkedAnimLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroLinkedAnimLayer) \
	NO_API virtual ~UHeroLinkedAnimLayer();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h_13_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeroLinkedAnimLayer;

// ********** End Class UHeroLinkedAnimLayer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
