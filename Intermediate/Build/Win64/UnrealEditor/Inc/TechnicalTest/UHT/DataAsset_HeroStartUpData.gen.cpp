// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDataAsset_HeroStartUpData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
TECHNICALTEST_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData();
TECHNICALTEST_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister();
TECHNICALTEST_API UScriptStruct* Z_Construct_UScriptStruct_FHeroAbilitySet();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHeroAbilitySet ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHeroAbilitySet;
class UScriptStruct* FHeroAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHeroAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHeroAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroAbilitySet, (UObject*)Z_Construct_UPackage__Script_TechnicalTest(), TEXT("HeroAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_FHeroAbilitySet.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHeroAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "HeroAbilitySet" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "HeroAbilitySet" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroAbilitySet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeroAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::NewProp_AbilityToGrant = { "AbilityToGrant", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeroAbilitySet, AbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UMyGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToGrant_MetaData), NewProp_AbilityToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::NewProp_AbilityToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
	nullptr,
	&NewStructOps,
	"HeroAbilitySet",
	Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::PropPointers),
	sizeof(FHeroAbilitySet),
	alignof(FHeroAbilitySet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHeroAbilitySet()
{
	if (!Z_Registration_Info_UScriptStruct_FHeroAbilitySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHeroAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHeroAbilitySet.InnerSingleton;
}
// ********** End ScriptStruct FHeroAbilitySet *****************************************************

// ********** Begin Class UDataAsset_HeroStartUpData ***********************************************
void UDataAsset_HeroStartUpData::StaticRegisterNativesUDataAsset_HeroStartUpData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDataAsset_HeroStartUpData;
UClass* UDataAsset_HeroStartUpData::GetPrivateStaticClass()
{
	using TClass = UDataAsset_HeroStartUpData;
	if (!Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DataAsset_HeroStartUpData"),
			Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.InnerSingleton,
			StaticRegisterNativesUDataAsset_HeroStartUpData,
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
	return Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister()
{
	return UDataAsset_HeroStartUpData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroStartUpAbilitySets_MetaData[] = {
		{ "Category", "StartUpData" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeroStartUpAbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeroStartUpAbilitySets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_HeroStartUpData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_Inner = { "HeroStartUpAbilitySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 3585789726
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets = { "HeroStartUpAbilitySets", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_HeroStartUpData, HeroStartUpAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroStartUpAbilitySets_MetaData), NewProp_HeroStartUpAbilitySets_MetaData) }; // 3585789726
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartUpDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::ClassParams = {
	&UDataAsset_HeroStartUpData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData()
{
	if (!Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton, Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton;
}
UDataAsset_HeroStartUpData::UDataAsset_HeroStartUpData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_HeroStartUpData);
UDataAsset_HeroStartUpData::~UDataAsset_HeroStartUpData() {}
// ********** End Class UDataAsset_HeroStartUpData *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h__Script_TechnicalTest_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHeroAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FHeroAbilitySet_Statics::NewStructOps, TEXT("HeroAbilitySet"), &Z_Registration_Info_UScriptStruct_FHeroAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeroAbilitySet), 3585789726U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_HeroStartUpData, UDataAsset_HeroStartUpData::StaticClass, TEXT("UDataAsset_HeroStartUpData"), &Z_Registration_Info_UClass_UDataAsset_HeroStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_HeroStartUpData), 1553025675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h__Script_TechnicalTest_2316310848(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h__Script_TechnicalTest_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h__Script_TechnicalTest_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h__Script_TechnicalTest_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
