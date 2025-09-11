// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widget/WidgetBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidgetBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UWidgetBase();
TECHNICALTEST_API UClass* Z_Construct_UClass_UWidgetBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidgetBase Function BP_OnOwningEnemyUIComponentInitialized **************
struct WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms
{
	UEnemyUIComponent* OwningEnemyUIComponent;
};
static FName NAME_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized = FName(TEXT("BP_OnOwningEnemyUIComponentInitialized"));
void UWidgetBase::BP_OnOwningEnemyUIComponentInitialized(UEnemyUIComponent* OwningEnemyUIComponent)
{
	WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms Parms;
	Parms.OwningEnemyUIComponent=OwningEnemyUIComponent;
	UFunction* Func = FindFunctionChecked(NAME_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning Enemy UI Component Initialized" },
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningEnemyUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningEnemyUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent = { "OwningEnemyUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms, OwningEnemyUIComponent), Z_Construct_UClass_UEnemyUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningEnemyUIComponent_MetaData), NewProp_OwningEnemyUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidgetBase, nullptr, "BP_OnOwningEnemyUIComponentInitialized", Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers), sizeof(WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UWidgetBase Function BP_OnOwningEnemyUIComponentInitialized ****************

// ********** Begin Class UWidgetBase Function BP_OnOwningHeroUIComponentInitialized ***************
struct WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms
{
	UHeroUIComponent* OwningHeroUIComponent;
};
static FName NAME_UWidgetBase_BP_OnOwningHeroUIComponentInitialized = FName(TEXT("BP_OnOwningHeroUIComponentInitialized"));
void UWidgetBase::BP_OnOwningHeroUIComponentInitialized(UHeroUIComponent* OwningHeroUIComponent)
{
	WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms Parms;
	Parms.OwningHeroUIComponent=OwningHeroUIComponent;
	UFunction* Func = FindFunctionChecked(NAME_UWidgetBase_BP_OnOwningHeroUIComponentInitialized);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning Hero UI Component Initialized" },
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent = { "OwningHeroUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms, OwningHeroUIComponent), Z_Construct_UClass_UHeroUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroUIComponent_MetaData), NewProp_OwningHeroUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidgetBase, nullptr, "BP_OnOwningHeroUIComponentInitialized", Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers), sizeof(WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UWidgetBase Function BP_OnOwningHeroUIComponentInitialized *****************

// ********** Begin Class UWidgetBase Function InitEnemyCreatedWidget ******************************
struct Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics
{
	struct WidgetBase_eventInitEnemyCreatedWidget_Parms
	{
		AActor* OwningEnemyActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningEnemyActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::NewProp_OwningEnemyActor = { "OwningEnemyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBase_eventInitEnemyCreatedWidget_Parms, OwningEnemyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::NewProp_OwningEnemyActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidgetBase, nullptr, "InitEnemyCreatedWidget", Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::WidgetBase_eventInitEnemyCreatedWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::WidgetBase_eventInitEnemyCreatedWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBase::execInitEnemyCreatedWidget)
{
	P_GET_OBJECT(AActor,Z_Param_OwningEnemyActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitEnemyCreatedWidget(Z_Param_OwningEnemyActor);
	P_NATIVE_END;
}
// ********** End Class UWidgetBase Function InitEnemyCreatedWidget ********************************

// ********** Begin Class UWidgetBase **************************************************************
void UWidgetBase::StaticRegisterNativesUWidgetBase()
{
	UClass* Class = UWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitEnemyCreatedWidget", &UWidgetBase::execInitEnemyCreatedWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidgetBase;
UClass* UWidgetBase::GetPrivateStaticClass()
{
	using TClass = UWidgetBase;
	if (!Z_Registration_Info_UClass_UWidgetBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WidgetBase"),
			Z_Registration_Info_UClass_UWidgetBase.InnerSingleton,
			StaticRegisterNativesUWidgetBase,
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
	return Z_Registration_Info_UClass_UWidgetBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidgetBase_NoRegister()
{
	return UWidgetBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/WidgetBase.h" },
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetBase_BP_OnOwningEnemyUIComponentInitialized, "BP_OnOwningEnemyUIComponentInitialized" }, // 3126373489
		{ &Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized, "BP_OnOwningHeroUIComponentInitialized" }, // 1543590391
		{ &Z_Construct_UFunction_UWidgetBase_InitEnemyCreatedWidget, "InitEnemyCreatedWidget" }, // 1519967093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBase_Statics::ClassParams = {
	&UWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetBase()
{
	if (!Z_Registration_Info_UClass_UWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBase.OuterSingleton, Z_Construct_UClass_UWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetBase.OuterSingleton;
}
UWidgetBase::UWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBase);
UWidgetBase::~UWidgetBase() {}
// ********** End Class UWidgetBase ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBase, UWidgetBase::StaticClass, TEXT("UWidgetBase"), &Z_Registration_Info_UClass_UWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBase), 2719070418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h__Script_TechnicalTest_2561345905(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Widget_WidgetBase_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
