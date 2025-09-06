// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "GameplayAbilitySpecHandle.h"
#include "MyTypes/MyStuctTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyAbilitySystemComponent();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister();
TECHNICALTEST_API UScriptStruct* Z_Construct_UScriptStruct_FHeroAbilitySet();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyAbilitySystemComponent Function GrantHeroWeaponAbilities **************
struct Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics
{
	struct MyAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms
	{
		TArray<FHeroAbilitySet> InDefaultWeaponAbilities;
		int32 ApplyLevel;
		TArray<FGameplayAbilitySpecHandle> OutGrantedAbilitySpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ApplyLevel", "1" },
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultWeaponAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InDefaultWeaponAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ApplyLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGrantedAbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutGrantedAbilitySpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 2867398873
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, InDefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDefaultWeaponAbilities_MetaData), NewProp_InDefaultWeaponAbilities_MetaData) }; // 2867398873
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_ApplyLevel = { "ApplyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, ApplyLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, OutGrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_ApplyLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyAbilitySystemComponent, nullptr, "GrantHeroWeaponAbilities", Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::MyAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::MyAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyAbilitySystemComponent::execGrantHeroWeaponAbilities)
{
	P_GET_TARRAY_REF(FHeroAbilitySet,Z_Param_Out_InDefaultWeaponAbilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_ApplyLevel);
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantHeroWeaponAbilities(Z_Param_Out_InDefaultWeaponAbilities,Z_Param_ApplyLevel,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_NATIVE_END;
}
// ********** End Class UMyAbilitySystemComponent Function GrantHeroWeaponAbilities ****************

// ********** Begin Class UMyAbilitySystemComponent Function RemovedGrantHeroWeaponAbilities *******
struct Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics
{
	struct MyAbilitySystemComponent_eventRemovedGrantHeroWeaponAbilities_Parms
	{
		TArray<FGameplayAbilitySpecHandle> InSpecHandlesToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandlesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecHandlesToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove_Inner = { "InSpecHandlesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove = { "InSpecHandlesToRemove", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyAbilitySystemComponent_eventRemovedGrantHeroWeaponAbilities_Parms, InSpecHandlesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyAbilitySystemComponent, nullptr, "RemovedGrantHeroWeaponAbilities", Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::MyAbilitySystemComponent_eventRemovedGrantHeroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::MyAbilitySystemComponent_eventRemovedGrantHeroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyAbilitySystemComponent::execRemovedGrantHeroWeaponAbilities)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InSpecHandlesToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovedGrantHeroWeaponAbilities(Z_Param_Out_InSpecHandlesToRemove);
	P_NATIVE_END;
}
// ********** End Class UMyAbilitySystemComponent Function RemovedGrantHeroWeaponAbilities *********

// ********** Begin Class UMyAbilitySystemComponent ************************************************
void UMyAbilitySystemComponent::StaticRegisterNativesUMyAbilitySystemComponent()
{
	UClass* Class = UMyAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantHeroWeaponAbilities", &UMyAbilitySystemComponent::execGrantHeroWeaponAbilities },
		{ "RemovedGrantHeroWeaponAbilities", &UMyAbilitySystemComponent::execRemovedGrantHeroWeaponAbilities },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyAbilitySystemComponent;
UClass* UMyAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UMyAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UMyAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyAbilitySystemComponent"),
			Z_Registration_Info_UClass_UMyAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUMyAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UMyAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister()
{
	return UMyAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/MyAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAbilitySystemComponent_GrantHeroWeaponAbilities, "GrantHeroWeaponAbilities" }, // 1184558415
		{ &Z_Construct_UFunction_UMyAbilitySystemComponent_RemovedGrantHeroWeaponAbilities, "RemovedGrantHeroWeaponAbilities" }, // 1961926661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAbilitySystemComponent_Statics::ClassParams = {
	&UMyAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UMyAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton;
}
UMyAbilitySystemComponent::UMyAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAbilitySystemComponent);
UMyAbilitySystemComponent::~UMyAbilitySystemComponent() {}
// ********** End Class UMyAbilitySystemComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAbilitySystemComponent_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAbilitySystemComponent, UMyAbilitySystemComponent::StaticClass, TEXT("UMyAbilitySystemComponent"), &Z_Registration_Info_UClass_UMyAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAbilitySystemComponent), 1842896747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAbilitySystemComponent_h__Script_TechnicalTest_3515928290(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAbilitySystemComponent_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAbilitySystemComponent_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
