// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/MyGameplayAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyGameplayAbility();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
TECHNICALTEST_API UEnum* Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMyAbilityActivaitonPolicy ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMyAbilityActivaitonPolicy;
static UEnum* EMyAbilityActivaitonPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMyAbilityActivaitonPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMyAbilityActivaitonPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy, (UObject*)Z_Construct_UPackage__Script_TechnicalTest(), TEXT("EMyAbilityActivaitonPolicy"));
	}
	return Z_Registration_Info_UEnum_EMyAbilityActivaitonPolicy.OuterSingleton;
}
template<> TECHNICALTEST_API UEnum* StaticEnum<EMyAbilityActivaitonPolicy>()
{
	return EMyAbilityActivaitonPolicy_StaticEnum();
}
struct Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyGameplayAbility.h" },
		{ "OnGiven.Name", "EMyAbilityActivaitonPolicy::OnGiven" },
		{ "OnTriggered.Name", "EMyAbilityActivaitonPolicy::OnTriggered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMyAbilityActivaitonPolicy::OnTriggered", (int64)EMyAbilityActivaitonPolicy::OnTriggered },
		{ "EMyAbilityActivaitonPolicy::OnGiven", (int64)EMyAbilityActivaitonPolicy::OnGiven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TechnicalTest,
	nullptr,
	"EMyAbilityActivaitonPolicy",
	"EMyAbilityActivaitonPolicy",
	Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy()
{
	if (!Z_Registration_Info_UEnum_EMyAbilityActivaitonPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMyAbilityActivaitonPolicy.InnerSingleton, Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMyAbilityActivaitonPolicy.InnerSingleton;
}
// ********** End Enum EMyAbilityActivaitonPolicy **************************************************

// ********** Begin Class UMyGameplayAbility Function GetMyAbilitySystemComponentFromActorInfo *****
struct Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics
{
	struct MyGameplayAbility_eventGetMyAbilitySystemComponentFromActorInfo_Parms
	{
		UMyAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameplayAbility_eventGetMyAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameplayAbility, nullptr, "GetMyAbilitySystemComponentFromActorInfo", Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::MyGameplayAbility_eventGetMyAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::MyGameplayAbility_eventGetMyAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameplayAbility::execGetMyAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMyAbilitySystemComponent**)Z_Param__Result=P_THIS->GetMyAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UMyGameplayAbility Function GetMyAbilitySystemComponentFromActorInfo *******

// ********** Begin Class UMyGameplayAbility Function GetPawnCombatComponentFromActorInfo **********
struct Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics
{
	struct MyGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms
	{
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameplayAbility, nullptr, "GetPawnCombatComponentFromActorInfo", Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::MyGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::MyGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameplayAbility::execGetPawnCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=P_THIS->GetPawnCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UMyGameplayAbility Function GetPawnCombatComponentFromActorInfo ************

// ********** Begin Class UMyGameplayAbility *******************************************************
void UMyGameplayAbility::StaticRegisterNativesUMyGameplayAbility()
{
	UClass* Class = UMyGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMyAbilitySystemComponentFromActorInfo", &UMyGameplayAbility::execGetMyAbilitySystemComponentFromActorInfo },
		{ "GetPawnCombatComponentFromActorInfo", &UMyGameplayAbility::execGetPawnCombatComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyGameplayAbility;
UClass* UMyGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UMyGameplayAbility;
	if (!Z_Registration_Info_UClass_UMyGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyGameplayAbility"),
			Z_Registration_Info_UClass_UMyGameplayAbility.InnerSingleton,
			StaticRegisterNativesUMyGameplayAbility,
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
	return Z_Registration_Info_UClass_UMyGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister()
{
	return UMyGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/MyGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationPolicy_MetaData[] = {
		{ "Category", "MyAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UGameplayAbility Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameplayAbility_GetMyAbilitySystemComponentFromActorInfo, "GetMyAbilitySystemComponentFromActorInfo" }, // 1693899477
		{ &Z_Construct_UFunction_UMyGameplayAbility_GetPawnCombatComponentFromActorInfo, "GetPawnCombatComponentFromActorInfo" }, // 697519271
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_AbilityActivationPolicy = { "AbilityActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameplayAbility, AbilityActivationPolicy), Z_Construct_UEnum_TechnicalTest_EMyAbilityActivaitonPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityActivationPolicy_MetaData), NewProp_AbilityActivationPolicy_MetaData) }; // 4091003752
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_AbilityActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameplayAbility_Statics::ClassParams = {
	&UMyGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton, Z_Construct_UClass_UMyGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton;
}
UMyGameplayAbility::UMyGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameplayAbility);
UMyGameplayAbility::~UMyGameplayAbility() {}
// ********** End Class UMyGameplayAbility *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h__Script_TechnicalTest_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMyAbilityActivaitonPolicy_StaticEnum, TEXT("EMyAbilityActivaitonPolicy"), &Z_Registration_Info_UEnum_EMyAbilityActivaitonPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4091003752U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameplayAbility, UMyGameplayAbility::StaticClass, TEXT("UMyGameplayAbility"), &Z_Registration_Info_UClass_UMyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameplayAbility), 2145493510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h__Script_TechnicalTest_4270512045(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h__Script_TechnicalTest_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_MyGameplayAbility_h__Script_TechnicalTest_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
