// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Weapons/HeroWeapon.h"

#ifdef TECHNICALTEST_HeroWeapon_generated_h
#error "HeroWeapon.generated.h already included, missing '#pragma once' in HeroWeapon.h"
#endif
#define TECHNICALTEST_HeroWeapon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAbilitySpecHandle;

// ********** Begin Class AHeroWeapon **************************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGrantedAbilitySpecHandles); \
	DECLARE_FUNCTION(execAssignGrantedAbilitySpecHandles);


TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroWeapon_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroWeapon(); \
	friend struct Z_Construct_UClass_AHeroWeapon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroWeapon_NoRegister(); \
public: \
	DECLARE_CLASS2(AHeroWeapon, AMyWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_AHeroWeapon_NoRegister) \
	DECLARE_SERIALIZER(AHeroWeapon)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroWeapon(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHeroWeapon(AHeroWeapon&&) = delete; \
	AHeroWeapon(const AHeroWeapon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroWeapon) \
	NO_API virtual ~AHeroWeapon();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h_14_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHeroWeapon;

// ********** End Class AHeroWeapon ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
