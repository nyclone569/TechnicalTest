// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTechnicalTest_init() {}
	TECHNICALTEST_API UFunction* Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature();
	TECHNICALTEST_API UFunction* Z_Construct_UDelegateFunction_TechnicalTest_OnPercentChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TechnicalTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TechnicalTest()
	{
		if (!Z_Registration_Info_UPackage__Script_TechnicalTest.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TechnicalTest_OnPercentChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TechnicalTest",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDEDBF65B,
				0x25B2F8E4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TechnicalTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TechnicalTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TechnicalTest(Z_Construct_UPackage__Script_TechnicalTest, TEXT("/Script/TechnicalTest"), Z_Registration_Info_UPackage__Script_TechnicalTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDEDBF65B, 0x25B2F8E4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
