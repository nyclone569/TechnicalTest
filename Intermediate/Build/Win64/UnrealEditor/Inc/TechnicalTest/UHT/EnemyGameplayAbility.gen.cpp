// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/EnemyGameplayAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyGameplayAbility();
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemyGameplayAbility Function GetEnemyCharacterFromActorInfo ************
struct Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics
{
	struct EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms
	{
		AEnemyCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/EnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemyGameplayAbility, nullptr, "GetEnemyCharacterFromActorInfo", Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyGameplayAbility::execGetEnemyCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AEnemyCharacter**)Z_Param__Result=P_THIS->GetEnemyCharacterFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UEnemyGameplayAbility Function GetEnemyCharacterFromActorInfo **************

// ********** Begin Class UEnemyGameplayAbility Function GetEnemyCombatComponentFromActorInfo ******
struct Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics
{
	struct EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms
	{
		UEnemyCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/EnemyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemyGameplayAbility, nullptr, "GetEnemyCombatComponentFromActorInfo", Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnemyCombatComponent**)Z_Param__Result=P_THIS->GetEnemyCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UEnemyGameplayAbility Function GetEnemyCombatComponentFromActorInfo ********

// ********** Begin Class UEnemyGameplayAbility ****************************************************
void UEnemyGameplayAbility::StaticRegisterNativesUEnemyGameplayAbility()
{
	UClass* Class = UEnemyGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnemyCharacterFromActorInfo", &UEnemyGameplayAbility::execGetEnemyCharacterFromActorInfo },
		{ "GetEnemyCombatComponentFromActorInfo", &UEnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemyGameplayAbility;
UClass* UEnemyGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UEnemyGameplayAbility;
	if (!Z_Registration_Info_UClass_UEnemyGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyGameplayAbility"),
			Z_Registration_Info_UClass_UEnemyGameplayAbility.InnerSingleton,
			StaticRegisterNativesUEnemyGameplayAbility,
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
	return Z_Registration_Info_UClass_UEnemyGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister()
{
	return UEnemyGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemyGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/EnemyGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/EnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo, "GetEnemyCharacterFromActorInfo" }, // 1678947025
		{ &Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo, "GetEnemyCombatComponentFromActorInfo" }, // 2516950554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMyGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyGameplayAbility_Statics::ClassParams = {
	&UEnemyGameplayAbility::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton, Z_Construct_UClass_UEnemyGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton;
}
UEnemyGameplayAbility::UEnemyGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyGameplayAbility);
UEnemyGameplayAbility::~UEnemyGameplayAbility() {}
// ********** End Class UEnemyGameplayAbility ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyGameplayAbility, UEnemyGameplayAbility::StaticClass, TEXT("UEnemyGameplayAbility"), &Z_Registration_Info_UClass_UEnemyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyGameplayAbility), 2245924786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h__Script_TechnicalTest_2658663920(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
