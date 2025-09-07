// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyFunctionLibrary.h"

#ifdef TECHNICALTEST_MyFunctionLibrary_generated_h
#error "MyFunctionLibrary.generated.h already included, missing '#pragma once' in MyFunctionLibrary.h"
#endif
#define TECHNICALTEST_MyFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPawnCombatComponent;
enum class EMyConfirmType : uint8;
enum class EMyValidType : uint8;
struct FGameplayTag;

// ********** Begin Class UMyFunctionLibrary *******************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetPawnCombatComponentFromActor); \
	DECLARE_FUNCTION(execBP_DoesActorHaveTag); \
	DECLARE_FUNCTION(execRemoveGameplayFromActorIfFound); \
	DECLARE_FUNCTION(execAddGameplayTagToActorIfNone);


TECHNICALTEST_API UClass* Z_Construct_UClass_UMyFunctionLibrary_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UMyFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UMyFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMyFunctionLibrary)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyFunctionLibrary(UMyFunctionLibrary&&) = delete; \
	UMyFunctionLibrary(const UMyFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyFunctionLibrary) \
	NO_API virtual ~UMyFunctionLibrary();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h_17_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyFunctionLibrary;

// ********** End Class UMyFunctionLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
