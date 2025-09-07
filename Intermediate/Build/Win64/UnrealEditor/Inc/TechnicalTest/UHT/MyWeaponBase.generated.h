// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Weapons/MyWeaponBase.h"

#ifdef TECHNICALTEST_MyWeaponBase_generated_h
#error "MyWeaponBase.generated.h already included, missing '#pragma once' in MyWeaponBase.h"
#endif
#define TECHNICALTEST_MyWeaponBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AMyWeaponBase ************************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCollisionBoxEndOverlap); \
	DECLARE_FUNCTION(execOnCollisionBoxBeginOverlap);


TECHNICALTEST_API UClass* Z_Construct_UClass_AMyWeaponBase_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyWeaponBase(); \
	friend struct Z_Construct_UClass_AMyWeaponBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_AMyWeaponBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_AMyWeaponBase_NoRegister) \
	DECLARE_SERIALIZER(AMyWeaponBase)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyWeaponBase(AMyWeaponBase&&) = delete; \
	AMyWeaponBase(const AMyWeaponBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyWeaponBase) \
	NO_API virtual ~AMyWeaponBase();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h_13_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyWeaponBase;

// ********** End Class AMyWeaponBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_MyWeaponBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
