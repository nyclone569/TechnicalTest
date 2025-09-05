// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/HeroGameplayAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroController_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHeroGameplayAbility Function GetHeroCharacterFromActorInfo **************
struct Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics
{
	struct HeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms
	{
		AHeroCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility, nullptr, "GetHeroCharacterFromActorInfo", Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::HeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::HeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility::execGetHeroCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHeroCharacter**)Z_Param__Result=P_THIS->GetHeroCharacterFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UHeroGameplayAbility Function GetHeroCharacterFromActorInfo ****************

// ********** Begin Class UHeroGameplayAbility Function GetHeroCombatComponentFromActorInfo ********
struct Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics
{
	struct HeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms
	{
		UHeroCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UHeroCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility, nullptr, "GetHeroCombatComponentFromActorInfo", Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::HeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::HeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility::execGetHeroCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHeroCombatComponent**)Z_Param__Result=P_THIS->GetHeroCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UHeroGameplayAbility Function GetHeroCombatComponentFromActorInfo **********

// ********** Begin Class UHeroGameplayAbility Function GetHeroControllerFromActorInfo *************
struct Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics
{
	struct HeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms
	{
		AHeroController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AHeroController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility, nullptr, "GetHeroControllerFromActorInfo", Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::HeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::HeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility::execGetHeroControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHeroController**)Z_Param__Result=P_THIS->GetHeroControllerFromActorInfo();
	P_NATIVE_END;
}
// ********** End Class UHeroGameplayAbility Function GetHeroControllerFromActorInfo ***************

// ********** Begin Class UHeroGameplayAbility *****************************************************
void UHeroGameplayAbility::StaticRegisterNativesUHeroGameplayAbility()
{
	UClass* Class = UHeroGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroCharacterFromActorInfo", &UHeroGameplayAbility::execGetHeroCharacterFromActorInfo },
		{ "GetHeroCombatComponentFromActorInfo", &UHeroGameplayAbility::execGetHeroCombatComponentFromActorInfo },
		{ "GetHeroControllerFromActorInfo", &UHeroGameplayAbility::execGetHeroControllerFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroGameplayAbility;
UClass* UHeroGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UHeroGameplayAbility;
	if (!Z_Registration_Info_UClass_UHeroGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroGameplayAbility"),
			Z_Registration_Info_UClass_UHeroGameplayAbility.InnerSingleton,
			StaticRegisterNativesUHeroGameplayAbility,
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
	return Z_Registration_Info_UClass_UHeroGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister()
{
	return UHeroGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/HeroGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromActorInfo, "GetHeroCharacterFromActorInfo" }, // 618499183
		{ &Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCombatComponentFromActorInfo, "GetHeroCombatComponentFromActorInfo" }, // 3920077292
		{ &Z_Construct_UFunction_UHeroGameplayAbility_GetHeroControllerFromActorInfo, "GetHeroControllerFromActorInfo" }, // 3897840180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMyGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_Statics::ClassParams = {
	&UHeroGameplayAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UHeroGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroGameplayAbility.OuterSingleton, Z_Construct_UClass_UHeroGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroGameplayAbility.OuterSingleton;
}
UHeroGameplayAbility::UHeroGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility);
UHeroGameplayAbility::~UHeroGameplayAbility() {}
// ********** End Class UHeroGameplayAbility *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroGameplayAbility, UHeroGameplayAbility::StaticClass, TEXT("UHeroGameplayAbility"), &Z_Registration_Info_UClass_UHeroGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroGameplayAbility), 982924376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h__Script_TechnicalTest_3126395081(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_Abilities_HeroGameplayAbility_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
