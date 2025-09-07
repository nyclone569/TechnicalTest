// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTypes/MyEnumTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyEnumTypes() {}

// ********** Begin Cross Module References ********************************************************
TECHNICALTEST_API UEnum* Z_Construct_UEnum_TechnicalTest_EMyConfirmType();
TECHNICALTEST_API UEnum* Z_Construct_UEnum_TechnicalTest_EMySuccessType();
TECHNICALTEST_API UEnum* Z_Construct_UEnum_TechnicalTest_EMyValidType();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMyConfirmType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMyConfirmType;
static UEnum* EMyConfirmType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMyConfirmType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMyConfirmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TechnicalTest_EMyConfirmType, (UObject*)Z_Construct_UPackage__Script_TechnicalTest(), TEXT("EMyConfirmType"));
	}
	return Z_Registration_Info_UEnum_EMyConfirmType.OuterSingleton;
}
template<> TECHNICALTEST_API UEnum* StaticEnum<EMyConfirmType>()
{
	return EMyConfirmType_StaticEnum();
}
struct Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyTypes/MyEnumTypes.h" },
		{ "No.Name", "EMyConfirmType::No" },
		{ "Yes.Name", "EMyConfirmType::Yes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMyConfirmType::Yes", (int64)EMyConfirmType::Yes },
		{ "EMyConfirmType::No", (int64)EMyConfirmType::No },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TechnicalTest,
	nullptr,
	"EMyConfirmType",
	"EMyConfirmType",
	Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TechnicalTest_EMyConfirmType()
{
	if (!Z_Registration_Info_UEnum_EMyConfirmType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMyConfirmType.InnerSingleton, Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMyConfirmType.InnerSingleton;
}
// ********** End Enum EMyConfirmType **************************************************************

// ********** Begin Enum EMyValidType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMyValidType;
static UEnum* EMyValidType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMyValidType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMyValidType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TechnicalTest_EMyValidType, (UObject*)Z_Construct_UPackage__Script_TechnicalTest(), TEXT("EMyValidType"));
	}
	return Z_Registration_Info_UEnum_EMyValidType.OuterSingleton;
}
template<> TECHNICALTEST_API UEnum* StaticEnum<EMyValidType>()
{
	return EMyValidType_StaticEnum();
}
struct Z_Construct_UEnum_TechnicalTest_EMyValidType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EMyValidType::Invalid" },
		{ "ModuleRelativePath", "Public/MyTypes/MyEnumTypes.h" },
		{ "Valid.Name", "EMyValidType::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMyValidType::Valid", (int64)EMyValidType::Valid },
		{ "EMyValidType::Invalid", (int64)EMyValidType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TechnicalTest_EMyValidType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TechnicalTest,
	nullptr,
	"EMyValidType",
	"EMyValidType",
	Z_Construct_UEnum_TechnicalTest_EMyValidType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMyValidType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMyValidType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TechnicalTest_EMyValidType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TechnicalTest_EMyValidType()
{
	if (!Z_Registration_Info_UEnum_EMyValidType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMyValidType.InnerSingleton, Z_Construct_UEnum_TechnicalTest_EMyValidType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMyValidType.InnerSingleton;
}
// ********** End Enum EMyValidType ****************************************************************

// ********** Begin Enum EMySuccessType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMySuccessType;
static UEnum* EMySuccessType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMySuccessType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMySuccessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TechnicalTest_EMySuccessType, (UObject*)Z_Construct_UPackage__Script_TechnicalTest(), TEXT("EMySuccessType"));
	}
	return Z_Registration_Info_UEnum_EMySuccessType.OuterSingleton;
}
template<> TECHNICALTEST_API UEnum* StaticEnum<EMySuccessType>()
{
	return EMySuccessType_StaticEnum();
}
struct Z_Construct_UEnum_TechnicalTest_EMySuccessType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Failed.Name", "EMySuccessType::Failed" },
		{ "ModuleRelativePath", "Public/MyTypes/MyEnumTypes.h" },
		{ "Successful.Name", "EMySuccessType::Successful" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMySuccessType::Successful", (int64)EMySuccessType::Successful },
		{ "EMySuccessType::Failed", (int64)EMySuccessType::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TechnicalTest_EMySuccessType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TechnicalTest,
	nullptr,
	"EMySuccessType",
	"EMySuccessType",
	Z_Construct_UEnum_TechnicalTest_EMySuccessType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMySuccessType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMySuccessType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TechnicalTest_EMySuccessType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TechnicalTest_EMySuccessType()
{
	if (!Z_Registration_Info_UEnum_EMySuccessType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMySuccessType.InnerSingleton, Z_Construct_UEnum_TechnicalTest_EMySuccessType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMySuccessType.InnerSingleton;
}
// ********** End Enum EMySuccessType **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyEnumTypes_h__Script_TechnicalTest_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMyConfirmType_StaticEnum, TEXT("EMyConfirmType"), &Z_Registration_Info_UEnum_EMyConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3611171800U) },
		{ EMyValidType_StaticEnum, TEXT("EMyValidType"), &Z_Registration_Info_UEnum_EMyValidType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2629272181U) },
		{ EMySuccessType_StaticEnum, TEXT("EMySuccessType"), &Z_Registration_Info_UEnum_EMySuccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2869745258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyEnumTypes_h__Script_TechnicalTest_425697587(TEXT("/Script/TechnicalTest"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyEnumTypes_h__Script_TechnicalTest_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyEnumTypes_h__Script_TechnicalTest_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
