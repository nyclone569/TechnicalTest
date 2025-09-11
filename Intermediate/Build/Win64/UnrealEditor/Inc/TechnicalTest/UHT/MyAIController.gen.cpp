// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controllers/MyAIController.h"
#include "Perception/AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_AMyAIController();
TECHNICALTEST_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyAIController Function OnEnemyPerceptionUpdated ************************
struct Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics
{
	struct MyAIController_eventOnEnemyPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/MyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyAIController_eventOnEnemyPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyAIController_eventOnEnemyPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1267494880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyAIController, nullptr, "OnEnemyPerceptionUpdated", Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::MyAIController_eventOnEnemyPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::MyAIController_eventOnEnemyPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyAIController::execOnEnemyPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// ********** End Class AMyAIController Function OnEnemyPerceptionUpdated **************************

// ********** Begin Class AMyAIController **********************************************************
void AMyAIController::StaticRegisterNativesAMyAIController()
{
	UClass* Class = AMyAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnemyPerceptionUpdated", &AMyAIController::execOnEnemyPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyAIController;
UClass* AMyAIController::GetPrivateStaticClass()
{
	using TClass = AMyAIController;
	if (!Z_Registration_Info_UClass_AMyAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyAIController"),
			Z_Registration_Info_UClass_AMyAIController.InnerSingleton,
			StaticRegisterNativesAMyAIController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMyAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyAIController_NoRegister()
{
	return AMyAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/MyAIController.h" },
		{ "ModuleRelativePath", "Public/Controllers/MyAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyPerceptionComponent_MetaData[] = {
		{ "Category", "MyAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controllers/MyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISenseConfig_Sight_MetaData[] = {
		{ "Category", "MyAIController" },
		{ "ModuleRelativePath", "Public/Controllers/MyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISenseConfig_Sight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyAIController_OnEnemyPerceptionUpdated, "OnEnemyPerceptionUpdated" }, // 1919725664
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_EnemyPerceptionComponent = { "EnemyPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, EnemyPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyPerceptionComponent_MetaData), NewProp_EnemyPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_AISenseConfig_Sight = { "AISenseConfig_Sight", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, AISenseConfig_Sight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISenseConfig_Sight_MetaData), NewProp_AISenseConfig_Sight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_EnemyPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_AISenseConfig_Sight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyAIController_Statics::ClassParams = {
	&AMyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyAIController()
{
	if (!Z_Registration_Info_UClass_AMyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyAIController.OuterSingleton, Z_Construct_UClass_AMyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIController);
AMyAIController::~AMyAIController() {}
// ********** End Class AMyAIController ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyAIController, AMyAIController::StaticClass, TEXT("AMyAIController"), &Z_Registration_Info_UClass_AMyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyAIController), 2319744346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h__Script_TechnicalTest_655503186(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Controllers_MyAIController_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
