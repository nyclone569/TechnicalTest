// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/CharacterAnimInstance.h"

#ifdef TECHNICALTEST_CharacterAnimInstance_generated_h
#error "CharacterAnimInstance.generated.h already included, missing '#pragma once' in CharacterAnimInstance.h"
#endif
#define TECHNICALTEST_CharacterAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCharacterAnimInstance ***************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UCharacterAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterAnimInstance, UBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UCharacterAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UCharacterAnimInstance)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterAnimInstance(UCharacterAnimInstance&&) = delete; \
	UCharacterAnimInstance(const UCharacterAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimInstance) \
	NO_API virtual ~UCharacterAnimInstance();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h_14_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterAnimInstance;

// ********** End Class UCharacterAnimInstance *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
