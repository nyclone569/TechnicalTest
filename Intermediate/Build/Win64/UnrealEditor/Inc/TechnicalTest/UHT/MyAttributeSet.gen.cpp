// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MyAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyAttributeSet();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyAttributeSet Function ResetCounterStackTimerExpired *******************
struct Z_Construct_UFunction_UMyAttributeSet_ResetCounterStackTimerExpired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAttributeSet_ResetCounterStackTimerExpired_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyAttributeSet, nullptr, "ResetCounterStackTimerExpired", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAttributeSet_ResetCounterStackTimerExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAttributeSet_ResetCounterStackTimerExpired_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMyAttributeSet_ResetCounterStackTimerExpired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAttributeSet_ResetCounterStackTimerExpired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyAttributeSet::execResetCounterStackTimerExpired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCounterStackTimerExpired();
	P_NATIVE_END;
}
// ********** End Class UMyAttributeSet Function ResetCounterStackTimerExpired *********************

// ********** Begin Class UMyAttributeSet **********************************************************
void UMyAttributeSet::StaticRegisterNativesUMyAttributeSet()
{
	UClass* Class = UMyAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetCounterStackTimerExpired", &UMyAttributeSet::execResetCounterStackTimerExpired },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyAttributeSet;
UClass* UMyAttributeSet::GetPrivateStaticClass()
{
	using TClass = UMyAttributeSet;
	if (!Z_Registration_Info_UClass_UMyAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyAttributeSet"),
			Z_Registration_Info_UClass_UMyAttributeSet.InnerSingleton,
			StaticRegisterNativesUMyAttributeSet,
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
	return Z_Registration_Info_UClass_UMyAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister()
{
	return UMyAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MyAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRage_MetaData[] = {
		{ "Category", "Rage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRage_MetaData[] = {
		{ "Category", "Rage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPoise_MetaData[] = {
		{ "Category", "Poise" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPoise_MetaData[] = {
		{ "Category", "Poise" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefensePower_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTaken_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterStack_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPoise;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPoise;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefensePower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTaken;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CounterStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAttributeSet_ResetCounterStackTimerExpired, "ResetCounterStackTimerExpired" }, // 3259919710
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_CurrentRage = { "CurrentRage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, CurrentRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRage_MetaData), NewProp_CurrentRage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_MaxRage = { "MaxRage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, MaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRage_MetaData), NewProp_MaxRage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_CurrentPoise = { "CurrentPoise", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, CurrentPoise), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPoise_MetaData), NewProp_CurrentPoise_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_MaxPoise = { "MaxPoise", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, MaxPoise), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPoise_MetaData), NewProp_MaxPoise_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_DefensePower = { "DefensePower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, DefensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefensePower_MetaData), NewProp_DefensePower_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, DamageTaken), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTaken_MetaData), NewProp_DamageTaken_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_CounterStack = { "CounterStack", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAttributeSet, CounterStack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterStack_MetaData), NewProp_CounterStack_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_CurrentRage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_MaxRage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_CurrentPoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_MaxPoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_DefensePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_DamageTaken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttributeSet_Statics::NewProp_CounterStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAttributeSet_Statics::ClassParams = {
	&UMyAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAttributeSet()
{
	if (!Z_Registration_Info_UClass_UMyAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAttributeSet.OuterSingleton, Z_Construct_UClass_UMyAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAttributeSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAttributeSet);
UMyAttributeSet::~UMyAttributeSet() {}
// ********** End Class UMyAttributeSet ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAttributeSet_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAttributeSet, UMyAttributeSet::StaticClass, TEXT("UMyAttributeSet"), &Z_Registration_Info_UClass_UMyAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAttributeSet), 608103141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAttributeSet_h__Script_TechnicalTest_1768207160(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAttributeSet_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAttributeSet_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
