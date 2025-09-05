// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTypes/MyStuctTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyStuctTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister();
TECHNICALTEST_API UScriptStruct* Z_Construct_UScriptStruct_FHeroWeaponData();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHeroWeaponData ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHeroWeaponData;
class UScriptStruct* FHeroWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHeroWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHeroWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroWeaponData, (UObject*)Z_Construct_UPackage__Script_TechnicalTest(), TEXT("HeroWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_FHeroWeaponData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHeroWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyTypes/MyStuctTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayerToLink_MetaData[] = {
		{ "Category", "HeroWeaponData" },
		{ "ModuleRelativePath", "Public/MyTypes/MyStuctTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayerToLink;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink = { "WeaponAnimLayerToLink", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeroWeaponData, WeaponAnimLayerToLink), Z_Construct_UClass_UClass, Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimLayerToLink_MetaData), NewProp_WeaponAnimLayerToLink_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeroWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
	nullptr,
	&NewStructOps,
	"HeroWeaponData",
	Z_Construct_UScriptStruct_FHeroWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroWeaponData_Statics::PropPointers),
	sizeof(FHeroWeaponData),
	alignof(FHeroWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHeroWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHeroWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_FHeroWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHeroWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FHeroWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHeroWeaponData.InnerSingleton;
}
// ********** End ScriptStruct FHeroWeaponData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyStuctTypes_h__Script_TechnicalTest_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHeroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewStructOps, TEXT("HeroWeaponData"), &Z_Registration_Info_UScriptStruct_FHeroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeroWeaponData), 3984947018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyStuctTypes_h__Script_TechnicalTest_415602827(TEXT("/Script/TechnicalTest"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyStuctTypes_h__Script_TechnicalTest_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyStuctTypes_h__Script_TechnicalTest_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
