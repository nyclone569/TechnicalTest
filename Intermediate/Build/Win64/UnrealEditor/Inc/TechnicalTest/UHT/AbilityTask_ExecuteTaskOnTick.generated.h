// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTasks/AbilityTask_ExecuteTaskOnTick.h"

#ifdef TECHNICALTEST_AbilityTask_ExecuteTaskOnTick_generated_h
#error "AbilityTask_ExecuteTaskOnTick.generated.h already included, missing '#pragma once' in AbilityTask_ExecuteTaskOnTick.h"
#endif
#define TECHNICALTEST_AbilityTask_ExecuteTaskOnTick_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAbilityTask_ExecuteTaskOnTick;
class UGameplayAbility;

// ********** Begin Delegate FOnAbilityTaskTickDelegate ********************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_9_DELEGATE \
TECHNICALTEST_API void FOnAbilityTaskTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityTaskTickDelegate, float Deltatime);


// ********** End Delegate FOnAbilityTaskTickDelegate **********************************************

// ********** Begin Class UAbilityTask_ExecuteTaskOnTick *******************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteTaskOnTick);


TECHNICALTEST_API UClass* Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ExecuteTaskOnTick(); \
	friend struct Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_ExecuteTaskOnTick, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_ExecuteTaskOnTick)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_ExecuteTaskOnTick(UAbilityTask_ExecuteTaskOnTick&&) = delete; \
	UAbilityTask_ExecuteTaskOnTick(const UAbilityTask_ExecuteTaskOnTick&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ExecuteTaskOnTick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ExecuteTaskOnTick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityTask_ExecuteTaskOnTick) \
	NO_API virtual ~UAbilityTask_ExecuteTaskOnTick();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_13_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_ExecuteTaskOnTick;

// ********** End Class UAbilityTask_ExecuteTaskOnTick *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
