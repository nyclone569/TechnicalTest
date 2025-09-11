// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/MyAIController.h"

#ifdef TECHNICALTEST_MyAIController_generated_h
#error "MyAIController.generated.h already included, missing '#pragma once' in MyAIController.h"
#endif
#define TECHNICALTEST_MyAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FAIStimulus;

// ********** Begin Class AMyAIController **********************************************************
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEnemyPerceptionUpdated);


TECHNICALTEST_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyAIController(); \
	friend struct Z_Construct_UClass_AMyAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_AMyAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_AMyAIController_NoRegister) \
	DECLARE_SERIALIZER(AMyAIController)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyAIController(AMyAIController&&) = delete; \
	AMyAIController(const AMyAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyAIController) \
	NO_API virtual ~AMyAIController();


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h_14_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyAIController;

// ********** End Class AMyAIController ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
